// Fixture for the int3 arm of the no-return evidence tally (unlace#837).
//
// MSVC, and clang and rustc targeting Windows, plant an `int3` after a call
// that does not return: a static-CRT `_Xlen` is `call __CxxThrowException@8 ;
// int3`. `thrower` stands in for `_CxxThrowException`: its body calls through a
// writable pointer and returns, so nothing but its callers says it never comes
// back. `t1`/`t2`/`t3` each follow their `call thrower` with an `int3` (three
// votes, the threshold), `xlen` does the same once and is concluded no-return
// by promotion, and `usesxlen`'s tail after `call xlen` is then dead.
//
// Nothing is byte-patched after the link, so the fixture rebuilds reproducibly:
//
//   gcc -no-pie -nostdlib -e _start -o noreturn_int3_x86_64 noreturn_int3_x86_64.s
	.text

	.globl	raiser
	.type	raiser, @function
raiser:
	ret
	.size	raiser, .-raiser

	.globl	thrower
	.type	thrower, @function
thrower:
	movq	handler(%rip), %rax
	call	*%rax
	ret
	.size	thrower, .-thrower

	.globl	t1
	.type	t1, @function
t1:
	call	thrower
	int3
	.size	t1, .-t1

	.globl	t2
	.type	t2, @function
t2:
	call	thrower
	int3
	.size	t2, .-t2

	.globl	t3
	.type	t3, @function
t3:
	call	thrower
	int3
	.size	t3, .-t3

	.globl	xlen
	.type	xlen, @function
xlen:
	pushq	%rbx
	call	thrower
	int3
	.size	xlen, .-xlen

	.globl	usesxlen
	.type	usesxlen, @function
usesxlen:
	testl	%edi, %edi
	jne	1f
	call	xlen
1:
	movl	$1, %eax
	ret
	.size	usesxlen, .-usesxlen

	.globl	_start
	.type	_start, @function
_start:
	call	t1
	call	t2
	call	t3
	call	usesxlen
	movl	%eax, %edi
	movl	$60, %eax
	syscall
	ret
	.size	_start, .-_start

	.data
	.globl	handler
handler:
	.quad	raiser
