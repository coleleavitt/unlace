/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B784
// Address: 0x0002B784

//----- (0002B784) --------------------------------------------------------
_BYTE *__fastcall sub_2B784(int a1, _BYTE *a2, int a3, int a4, _DWORD *a5)
{
  const char *v7; // r2
  char *v9; // r1
  unsigned int v10; // r6
  int v11; // r7
  unsigned int v12; // r0

  switch ( a4 )
  {
    case 1:
      v7 = "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)";
      return (_BYTE *)qsnprintf(a2, a3, v7);
    case 2:
      v7 = "The ELF header entry size is invalid (%d, expected %d)";
      return (_BYTE *)qsnprintf(a2, a3, v7);
    case 3:
      if ( (unsigned int)(*a5 - 1) < 2 )
        v7 = "Bad ELF byte sex %d for the indicated machine";
      else
        v7 = "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)";
      return (_BYTE *)qsnprintf(a2, a3, v7);
    case 4:
      v7 = "PHT entry size is invalid: %d. Falling back to %d";
      return (_BYTE *)qsnprintf(a2, a3, v7);
    case 5:
      v9 = "The PHT table size or offset is invalid";
      return (_BYTE *)(qstpncpy(a2, (unsigned __int8 *)v9, a3) - a2);
    case 6:
      v9 = "The SHT entry size is invalid";
      return (_BYTE *)(qstpncpy(a2, (unsigned __int8 *)v9, a3) - a2);
    case 7:
      v9 = "SHT table size or offset is invalid";
      return (_BYTE *)(qstpncpy(a2, (unsigned __int8 *)v9, a3) - a2);
    case 15:
      v7 = "Bad DT_PLTREL value (%d)";
      return (_BYTE *)qsnprintf(a2, a3, v7);
    case 17:
      v11 = a5[1];
      v12 = qsnprintf(a2, a3, "Section header string table index %u is out of bounds");
      v10 = v12;
      if ( v11 )
        return (_BYTE *)(qsnprintf(&a2[v12], a3 - v12, " (max %u)") + v12);
      return (_BYTE *)v10;
    case 18:
      v9 = "ELF file with PHT cannot be ET_REL";
      return (_BYTE *)(qstpncpy(a2, (unsigned __int8 *)v9, a3) - a2);
    case 19:
      return (_BYTE *)qsnprintf(a2, a3, "Bad file structure or read error (offset %llu)");
    default:
      if ( a4 >= 20 )
      {
        if ( !under_debugger )
          interr(20035);
LABEL_27:
        __debugbreak();
      }
      if ( a4 == 19 )
      {
        if ( !under_debugger )
          interr(20034);
        goto LABEL_27;
      }
      v7 = "Unknown ELF warning %d";
      return (_BYTE *)qsnprintf(a2, a3, v7);
  }
}
// E0550: using guessed type char under_debugger;
