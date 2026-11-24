	.mmregs
	.text
	.global	f
f:
	ld	#0, a
	stm	#9, brc
	rptb	end-1
	add	*ar2+, a
	nop
end:
	stl	a, *ar3
	ret
