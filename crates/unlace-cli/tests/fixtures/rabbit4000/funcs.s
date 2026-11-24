; Raw-image routines for the rabbit4000 / rabbit6000 rows of processors.toml,
; hand-assembled from the byte tables of the Rabbit instruction reference
; (encodings as z88dk's r4k/r6k tables give them); base 0x1000.
; 0x1000  94 00 80        ld jkhl,(0x8000)
;         93 04 80        ld bcde,(0x8004)
;         ED C6           add jkhl,bcde
;         84 08 80        ld (0x8008),jkhl
;         C9              ret
; 0x1010  ED 1D 00 80     ldl px,0x8000
;         9D 02           ld a,(px+2)
;         7F 6F           ld l,a
;         26 00           ld h,0
;         C9              ret
; 0x1020  7F 7D           ld a,l
;         7F 87           add a,a
;         7F 6F           ld l,a
;         26 00           ld h,0
;         C9              ret
; 0x1030  48 05           cp hl,5
;         A0 03           jr gt,+3
;         21 05 00        ld hl,5
;         C9              ret
; 0x1050  (Rabbit 6000) ED 1D 00 80   ldl px,0x8000
;         7F 7D           ld a,l
;         49 05 02        add a,(px+2)
;         7F 6F           ld l,a
;         26 00           ld h,0
;         C9              ret
