	.text
* sum ten words at *AR0 with a block repeat, then a single-instruction repeat
	LDI	0, R0
	LDI	9, RC
	RPTB	0x104
	ADDI	*AR0++(1), R0
	NOP
	STI	R0, *AR1
	LDI	4, RC
	RPTS	RC
	ADDI	1, R1
	RETSU
