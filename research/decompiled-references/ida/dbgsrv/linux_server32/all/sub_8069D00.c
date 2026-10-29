/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069D00
// Address: 0x08069D00

//----- (08069D00) --------------------------------------------------------
int __cdecl sub_8069D00(int a1, _BYTE *a2, int a3, int a4, int *a5)
{
  int v5; // eax
  int v6; // ebp
  int result; // eax
  _BYTE *v8; // eax
  int v9; // edi

  switch ( a4 )
  {
    case 1:
      return sub_80D3B60(a2, a3, "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)", *a5);
    case 2:
      return sub_80D3B60(a2, a3, "The ELF header entry size is invalid (%d, expected %d)", *a5);
    case 3:
      if ( (unsigned int)(*a5 - 1) <= 1 )
      {
        v5 = sub_80D3B60(a2, a3, "Bad ELF byte sex %d for the indicated machine", *a5);
        goto LABEL_4;
      }
      return sub_80D3B60(a2, a3, "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)", *a5);
    case 4:
      return sub_80D3B60(a2, a3, "PHT entry size is invalid: %d. Falling back to %d", *a5);
    case 5:
      v8 = sub_80D0800((unsigned int)a2, "The PHT table size or offset is invalid", a3);
      goto LABEL_13;
    case 6:
      v8 = sub_80D0800((unsigned int)a2, "The SHT entry size is invalid", a3);
      goto LABEL_13;
    case 7:
      v8 = sub_80D0800((unsigned int)a2, "SHT table size or offset is invalid", a3);
      goto LABEL_13;
    case 15:
      v5 = sub_80D3B60(a2, a3, "Bad DT_PLTREL value (%d)", *a5);
      goto LABEL_4;
    case 17:
      v9 = a5[1];
      v6 = sub_80D3B60(a2, a3, "Section header string table index %u is out of bounds", *a5);
      if ( v9 )
        v6 += sub_80D3B60(&a2[v6], a3 - v6, " (max %u)", v9 - 1);
      goto LABEL_5;
    case 18:
      v8 = sub_80D0800((unsigned int)a2, "ELF file with PHT cannot be ET_REL", a3);
LABEL_13:
      result = v8 - a2;
      break;
    case 19:
      result = sub_80D3B60(a2, a3, "Bad file structure or read error (offset %llu)", a5[2]);
      break;
    default:
      if ( a4 > 19 )
        sub_8068F10();
      v5 = sub_80D3B60(a2, a3, "Unknown ELF warning %d", a4);
LABEL_4:
      v6 = v5;
LABEL_5:
      result = v6;
      break;
  }
  return result;
}
