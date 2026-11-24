	cpu	TLCS-870/C
	org	0e000h
f1:	add	a,5
	cmp	a,10h
	jr	nz,f1s
	ld	(80h),a
	ret
f1s:	ld	a,0
	ret
	org	0e020h
f2:	ld	wa,(80h)
	add	wa,bc
	ld	(82h),wa
	ret
	org	0e040h
f3:	ld	a,7
	call	f1
	inc	a
	ret
	org	0e060h
f4:	cmp	a,c
	jr	sge,f4s
	ld	a,c
f4s:	ret
	org	0e080h
f5:	ld	hl,(90h)
	ld	(92h),hl
	ret
