# TMS9900 raw image

`sum_store.bin`, loaded at 0x0100: `LI R1,5; LI R2,>1000; CLR R3; loop: A R1,R3;
DEC R1; JNE loop; MOV R3,*R2; MOV @>2000,@>3000; B *R11` (0201 0005 0202 1000
04c3 a0c1 0601 16fd c483 c820 2000 3000 045b), hand-assembled from the TMS9900
data manual's instruction formats. It sums 5..1, stores the sum through R2 and
copies a word between two symbolic addresses (source and destination
extension words).
