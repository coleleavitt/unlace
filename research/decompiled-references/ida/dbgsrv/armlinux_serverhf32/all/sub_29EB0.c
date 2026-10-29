/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_29EB0
// Address: 0x00029EB0

//----- (00029EB0) --------------------------------------------------------
_BYTE *__fastcall sub_29EB0(int a1, _BYTE *a2, int a3, int a4, int *a5)
{
  int v7; // r6
  int v9; // r1
  _BYTE *v10; // r0
  char *v11; // r2
  int v12; // r7
  int v13; // r0

  switch ( a4 )
  {
    case 1:
      return (_BYTE *)sub_7EA4C(a2, a3, "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)", *a5, 1, 2);
    case 2:
      a4 = *a5;
      v9 = a3;
      v10 = a2;
      v11 = "The ELF header entry size is invalid (%d, expected %d)";
      return (_BYTE *)sub_7EA4C(v10, v9, v11, a4);
    case 3:
      a4 = *a5;
      if ( (unsigned int)(*a5 - 1) <= 1 )
      {
        v9 = a3;
        v10 = a2;
        v11 = "Bad ELF byte sex %d for the indicated machine";
        return (_BYTE *)sub_7EA4C(v10, v9, v11, a4);
      }
      else
      {
        return (_BYTE *)sub_7EA4C(a2, a3, "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)", a4, 1, 2);
      }
    case 4:
      a4 = *a5;
      v9 = a3;
      v10 = a2;
      v11 = "PHT entry size is invalid: %d. Falling back to %d";
      return (_BYTE *)sub_7EA4C(v10, v9, v11, a4);
    case 5:
      return (_BYTE *)(sub_79588(a2, "The PHT table size or offset is invalid", a3) - a2);
    case 6:
      return (_BYTE *)(sub_79588(a2, "The SHT entry size is invalid", a3) - a2);
    case 7:
      return (_BYTE *)(sub_79588(a2, "SHT table size or offset is invalid", a3) - a2);
    case 15:
      a4 = *a5;
      v9 = a3;
      v10 = a2;
      v11 = "Bad DT_PLTREL value (%d)";
      return (_BYTE *)sub_7EA4C(v10, v9, v11, a4);
    case 17:
      v12 = a5[1];
      v13 = sub_7EA4C(a2, a3, "Section header string table index %u is out of bounds", *a5);
      v7 = v13;
      if ( v12 )
        return (_BYTE *)(v13 + sub_7EA4C(&a2[v13], a3 - v13, " (max %u)", v12 - 1));
      return (_BYTE *)v7;
    case 18:
      return (_BYTE *)(sub_79588(a2, "ELF file with PHT cannot be ET_REL", a3) - a2);
    case 19:
      return (_BYTE *)sub_7EA4C(
                        a2,
                        a3,
                        "Bad file structure or read error (offset %llu)",
                        *(_QWORD *)(((unsigned int)a5 + 15) & 0xFFFFFFF8));
    default:
      if ( a4 > 19 )
        sub_22E08();
      if ( a4 == 19 )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78AFC(20034);
      }
      v9 = a3;
      v10 = a2;
      v11 = "Unknown ELF warning %d";
      return (_BYTE *)sub_7EA4C(v10, v9, v11, a4);
  }
}
// D5C00: using guessed type char under_debugger;
