# Fixture for `functails` and `nullsubs` (crates/unlace-console/tests/verify_functails.rs).
# gcc -nostdlib -static -o functails_x86_64 functails_x86_64.s && strip functails_x86_64
#
# work's unlikely path is a ud2 in .text.unlikely with an FDE of its own, laid
# before work and off the 16-byte alignment, as gcc -O2 emits work.cold; only
# work jumps to it. nothing is an empty function main calls.
	.section .text.unlikely,"ax",@progbits
	.byte 0x90
	.type work.cold,@function
work.cold:
	.cfi_startproc
	ud2
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
	.type nothing,@function
nothing:
	.cfi_startproc
	ret
	.cfi_endproc
	.size nothing, .-nothing

	.p2align 4
	.globl _start
	.type _start,@function
_start:
	.cfi_startproc
	call nothing
	movl $5, %edi
	call work
	movl %eax, %edi
	movl $60, %eax
	syscall
	.cfi_endproc
	.size _start, .-_start
