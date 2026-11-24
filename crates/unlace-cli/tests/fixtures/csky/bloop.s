	.text
	.global bsum
bsum:
	movi	r2, 0
.Ls:
	ldbi.w	r3, (r0)
	addu	r2, r3
	bloop	r1, .Ls
	mov	r0, r2
	rts
	.global bsum3
bsum3:
	movi	r2, 0
.Ls3:
	ldbi.w	r3, (r0)
.Le3:
	addu	r2, r3
	bloop	r1, .Ls3, .Le3
	mov	r0, r2
	rts
