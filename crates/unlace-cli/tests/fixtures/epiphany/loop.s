	.text
	.global f
	.balign 8
f:
	mov r1, %low(.Ls0)
	movt r1, %high(.Ls0)
	movts ls, r1
	mov r1, %low(.Le0)
	movt r1, %high(.Le0)
	movts le, r1
	movts lc, r2
	mov r3, #0
	gid
	.balignw 8,0x01a2
.Ls0:
	ldr.l r16, [r0], #1
	add.l r3, r3, r16
	add.l r17, r17, r16
	add.l r18, r18, r16
	add.l r19, r19, r16
	add.l r20, r20, r16
	.balignw 8,0x01a2
	add.l r21, r21, r16
.Le0:
	add.l r22, r22, r16
	gie
	mov r0, r3
	rts

	.global g
	.balign 8
g:
	mov r20, %low(.Ls1)
	movt r20, %high(.Ls1)
	movts ls, r20
	mov r21, %low(.Le1)
	movt r21, %high(.Le1)
	movts le, r21
	mov r22, #16
	movts lc, r22
	mov r3, #0
	gid
	.balignw 8,0x01a2
.Ls1:
	ldr.l r16, [r0], #1
	eor.l r3, r3, r16
	add.l r17, r17, r16
	add.l r18, r18, r16
	add.l r19, r19, r16
	add.l r23, r23, r16
	.balignw 8,0x01a2
	add.l r24, r24, r16
.Le1:
	add.l r25, r25, r16
	gie
	mov r0, r3
	rts

	.global h
	.balign 8
h:
	ldr r1, [r0]
	movts ls, r1
	ldr r1, [r0, #1]
	movts le, r1
	movts lc, r2
	add r0, r0, r2
	rts
