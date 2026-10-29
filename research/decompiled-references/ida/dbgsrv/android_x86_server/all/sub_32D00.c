/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32D00
// Address: 0x00032D00

//----- (00032D00) --------------------------------------------------------
_BYTE *__cdecl sub_32D00(int a1, unsigned int a2, int a3, int a4, int *a5)
{
  char *v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // [esp-4h] [ebp-20h]
  int v12; // [esp+8h] [ebp-14h]

  switch ( a4 )
  {
    case 1:
      v5 = "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)";
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, v5, *a5);
    case 2:
      v5 = "The ELF header entry size is invalid (%d, expected %d)";
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, v5, *a5);
    case 3:
      if ( (unsigned int)(*a5 - 1) >= 2 )
        return (_BYTE *)qsnprintf((_BYTE *)a2, a3, "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)", *a5);
      v8 = "Bad ELF byte sex %d for the indicated machine";
      v11 = *a5;
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, v8, v11);
    case 4:
      v5 = "PHT entry size is invalid: %d. Falling back to %d";
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, v5, *a5);
    case 5:
      v7 = "The PHT table size or offset is invalid";
      return &qstpncpy(a2, v7, a3)[-a2];
    case 6:
      v7 = "The SHT entry size is invalid";
      return &qstpncpy(a2, v7, a3)[-a2];
    case 7:
      v7 = "SHT table size or offset is invalid";
      return &qstpncpy(a2, v7, a3)[-a2];
    case 15:
      v8 = "Bad DT_PLTREL value (%d)";
      v11 = *a5;
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, v8, v11);
    case 17:
      v12 = a5[1];
      v10 = qsnprintf((_BYTE *)a2, a3, "Section header string table index %u is out of bounds", *a5);
      v9 = v10;
      if ( v12 )
        return (_BYTE *)(qsnprintf((_BYTE *)(v10 + a2), a3 - v10, " (max %u)", v12 - 1) + v10);
      return (_BYTE *)v9;
    case 18:
      v7 = "ELF file with PHT cannot be ET_REL";
      return &qstpncpy(a2, v7, a3)[-a2];
    case 19:
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, "Bad file structure or read error (offset %llu)", a5[2]);
    default:
      if ( a4 >= 20 )
      {
        if ( !(_BYTE)under_debugger )
          interr(20035);
LABEL_28:
        BUG();
      }
      if ( a4 == 19 )
      {
        if ( !(_BYTE)under_debugger )
          interr(20034);
        goto LABEL_28;
      }
      return (_BYTE *)qsnprintf((_BYTE *)a2, a3, "Unknown ELF warning %d", a4);
  }
}
// 13E34C: using guessed type int under_debugger;
