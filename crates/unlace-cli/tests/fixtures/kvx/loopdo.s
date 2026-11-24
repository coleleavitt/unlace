	.text
	.global f
f:
	make $r2 = 0
	;;
	loopdo $r1, .Lend
	;;
	ld $r3 = 0[$r0]
	;;
	addd $r2 = $r2, $r3
	addd $r0 = $r0, 8
	;;
.Lend:
	copyd $r0 = $r2
	ret
	;;
