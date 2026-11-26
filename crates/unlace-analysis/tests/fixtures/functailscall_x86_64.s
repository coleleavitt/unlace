# Fixture for `functails` with a call-stub cold part (crates/unlace-console/tests/verify_functails.rs).
# gcc -nostdlib -static -o functailscall_x86_64 functailscall_x86_64.s && strip functailscall_x86_64
#
# The shape of /bin/ls's assert tails: work's unlikely path is a 5-byte call
# (`call die`) in .text.unlikely with an FDE of its own, laid before work and
# off the 16-byte alignment; only work jumps to it. die is a ud2 function.
	.section .text.unlikely,"ax",@progbits
	.byte 0x90
	.type work.cold,@function
work.cold:
	.cfi_startproc
	call die
	.cfi_endproc
	.size work.cold, .-work.cold

	.text
	.p2align 4
	.globl work
	.type work,@function
work:
	.cfi_startproc
	testl %edi, %edi
	js work.cold
	leal 1(%rdi,%rdi,2), %eax
	ret
	.cfi_endproc
	.size work, .-work

	.p2align 4
	.type die,@function
die:
	.cfi_startproc
	ud2
	.cfi_endproc
	.size die, .-die

	.p2align 4
	.globl _start
	.type _start,@function
_start:
	.cfi_startproc
	movl $5, %edi
	call work
	movl %eax, %edi
	movl $60, %eax
	syscall
	.cfi_endproc
	.size _start, .-_start
