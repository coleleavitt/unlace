	.text
	.global sum
sum:
	movi	r4, 0
.L1:
	ld.w	r5, (r2, 0)
	addu	r4, r5
	addi	r2, 4
	decne	r3
	bt	.L1
	lrw	r5, 0x20000000
	st.w	r4, (r5, 0)
	mov	r2, r4
	jmp	r15
	.global sub2
sub2:
	subu	r2, r3
	jmp	r15
	.global caller
caller:
	subi	r0, 8
	st.w	r15, (r0, 0)
	movi	r2, 7
	movi	r3, 5
	bsr	sub2
	lsli	r2, 2
	ld.w	r15, (r0, 0)
	addi	r0, 8
	jmp	r15
	.global maxi
maxi:
	cmplt	r2, r3
	movt	r2, r3
	jmp	r15
	.literals
