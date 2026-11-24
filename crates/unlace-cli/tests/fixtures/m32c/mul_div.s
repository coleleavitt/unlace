	.text
	.global _start
_start:
	enter #0
	mov.l:g 8[fb],r2r0
	mov.l:g #1000,r3r1
	mul.l r3r1,r2r0
	shanc.l #-2,r2r0
	exitd
	.balign 16
f1:
	enter #0
	mov.l:g 8[fb],r2r0
	divu.l 12[fb]
	exitd
