; Z380 raw image, base 0x0100, entry 0x0100 (hand-assembled from the Z380 UM Appendix C)
0100  3A 00 80   LD A,(8000H)
0103  C6 05      ADD A,05H
0105  FE 10      CP 10H
0107  38 04      JR C,010DH
0109  32 01 80   LD (8001H),A
010C  C9         RET
010D  AF         XOR A
010E  C9         RET
