// Fixture for the Mach-O MH_OBJECT relocation layout (reloc_object.rs):
// every ARM64 relocation form a compiler emits into a .o.
//   clang -target arm64-apple-macos12 -c macho_reloc_arm64.s -o macho_reloc_arm64.o
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_f
	.p2align	2
_f:
	stp	x29, x30, [sp, #-16]!
	mov	x29, sp
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_puts
	adrp	x8, _g@GOTPAGE
	ldr	x8, [x8, _g@GOTPAGEOFF]
	ldr	w0, [x8]
	adrp	x9, _counter@PAGE
	str	w0, [x9, _counter@PAGEOFF]
	adrp	x10, _table@PAGE+16
	ldr	x11, [x10, _table@PAGEOFF+16]
	ldp	x29, x30, [sp], #16
	b	_tail

	.section	__TEXT,__cstring,cstring_literals
l_.str:
	.asciz	"hi"

	.section	__DATA,__data
	.globl	_counter
	.p2align	2
_counter:
	.long	0
	.long	0
	.globl	_table
	.p2align	3
_table:
	.quad	_f
	.quad	_counter - _f
	.quad	_f + 8
