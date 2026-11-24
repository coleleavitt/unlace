// Fixture for the Mach-O MH_OBJECT relocation layout (reloc_object.rs):
// the x86-64 relocation forms a compiler emits into a .o.
//   clang -target x86_64-apple-macos12 -c macho_reloc_x86_64.s -o macho_reloc_x86_64.o
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_f
_f:
	pushq	%rbp
	movq	%rsp, %rbp
	leaq	L_.str(%rip), %rdi
	callq	_puts
	movq	_g@GOTPCREL(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, _counter(%rip)
	movb	$1, _flag(%rip)
	popq	%rbp
	jmp	_tail

	.section	__TEXT,__cstring,cstring_literals
L_.str:
	.asciz	"hi"

	.section	__DATA,__data
	.globl	_counter
_counter:
	.long	0
	.globl	_flag
_flag:
	.byte	0
	.p2align	3
	.globl	_table
_table:
	.quad	_f
	.quad	_counter - _f
	.quad	L_.str
