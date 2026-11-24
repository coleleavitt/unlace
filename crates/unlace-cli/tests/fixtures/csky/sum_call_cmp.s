	.text
	.global sum
sum:
	movi	r2, 0
.L1:
	ld.w	r3, (r0, 0)
	addu	r2, r3
	addi	r0, r0, 4
	subi	r1, r1, 1
	bnez	r1, .L1
	movih	r3, 0x2000
	st.w	r2, (r3, 0)
	mov	r0, r2
	rts
	.global sub2
sub2:
	subu	r0, r0, r1
	rts
	.global caller
caller:
	push	r4, r15
	movi	r0, 7
	movi	r1, 5
	bsr	sub2
	lsli	r0, r0, 2
	pop	r4, r15
	.global maxi
maxi:
	cmplt	r0, r1
	movt	r0, r1
	rts
	.global clamp
clamp:
	cmphsi	r0, 100
	bf	.L2
	movi	r0, 99
.L2:
	rts
