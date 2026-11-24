	.text
	.global f
	.align 4
f:
	movi	a3, 0
	loop	a2, .Lend
	l32i	a4, a5, 0
	add	a3, a3, a4
	addi	a5, a5, 4
.Lend:
	mov	a2, a3
	ret
