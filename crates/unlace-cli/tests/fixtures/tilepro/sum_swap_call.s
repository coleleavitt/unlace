	.text
	.globl sum
sum:
	{ move r2, zero ; movei r3, 0 }
.Lloop:
	{ lw r4, r0 }
	{ add r2, r2, r4 ; addi r0, r0, 4 }
	{ addi r1, r1, -1 }
	{ bnz r1, .Lloop }
	{ moveli r5, 0x1000 }
	{ sw r5, r2 }
	{ move r0, r2 ; jrp lr }
	.globl swap
swap:
	{ move r0, r1 ; move r1, r0 }
	{ sub r0, r0, r1 ; jrp lr }
	.globl caller
caller:
	{ move r30, lr ; movei r0, 7 }
	{ movei r1, 5 }
	{ jal swap }
	{ shli r0, r0, 2 }
	{ move lr, r30 }
	{ jrp lr }
