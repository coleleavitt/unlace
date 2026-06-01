/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4205E0
// Address: 0x00000000004205E0

//----- (00000000004205E0) ----------------------------------------------------
__int64 __fastcall sub_4205E0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // w1
  unsigned int *v7; // x0
  __int64 v8; // x5
  int v10; // w19
  __int64 result; // x0
  __int64 v12; // x3
  __int64 v14; // x3
  __int64 v15; // x3
  unsigned int v16; // w3
  unsigned int v17; // w22
  int v18; // w0

  v6 = *(_DWORD *)(a5 + 24);
  v7 = *(unsigned int **)a5;
  v8 = *(_QWORD *)(a5 + 8);
  if ( (_DWORD)a4 == 6 )
    return (int)((unsigned int)sub_4933E8(a2, "The SHT entry size is invalid", a3) - (_DWORD)a2);
  if ( (unsigned int)a4 > 6 )
  {
    if ( (_DWORD)a4 == 17 )
    {
      if ( v6 < 0 && v6 + 8 <= 0 )
      {
        v16 = *(_DWORD *)(v8 + v6);
        if ( v6 != -8 && v6 + 16 <= 0 )
          v7 = (unsigned int *)(v8 + v6 + 8);
      }
      else
      {
        v16 = *v7;
        v7 = (unsigned int *)(((unsigned __int64)v7 + 11) & 0xFFFFFFFFFFFFFFF8LL);
      }
      v17 = *v7;
      v18 = sub_49B748(a2, a3, "Section header string table index %u is out of bounds", v16);
      v10 = v18;
      if ( v17 )
        return (int)(v18 + sub_49B748(&a2[v18], a3 - v18, " (max %u)", v17 - 1));
      return v10;
    }
    if ( (unsigned int)a4 <= 0x11 )
    {
      if ( (_DWORD)a4 == 7 )
        return (int)((unsigned int)sub_4933E8(a2, "SHT table size or offset is invalid", a3) - (_DWORD)a2);
      if ( (_DWORD)a4 == 15 )
      {
        if ( v6 < 0 && v6 + 8 <= 0 )
          v7 = (unsigned int *)(v8 + v6);
        return (int)sub_49B748(a2, a3, "Bad DT_PLTREL value (%d)", *v7);
      }
      goto LABEL_29;
    }
    if ( (_DWORD)a4 == 18 )
      return (int)((unsigned int)sub_4933E8(a2, "ELF file with PHT cannot be ET_REL", a3) - (_DWORD)a2);
    if ( (_DWORD)a4 != 19 )
    {
LABEL_29:
      if ( (int)a4 > 19 )
        sub_41A110();
      return (int)sub_49B748(a2, a3, "Unknown ELF warning %d", a4, a5, v8);
    }
    if ( v6 < 0 && v6 + 8 <= 0 )
    {
      if ( v6 != -8 && v6 + 16 <= 0 )
      {
        if ( v6 != -16 && v6 + 24 <= 0 )
          v7 = (unsigned int *)(v8 + v6 + 16);
        return (int)sub_49B748(a2, a3, "Bad file structure or read error (offset %llu)", *(_QWORD *)v7);
      }
    }
    else
    {
      v7 = (unsigned int *)(((unsigned __int64)v7 + 15) & 0xFFFFFFFFFFFFFFF8LL);
    }
    v7 = (unsigned int *)(((unsigned __int64)v7 + 15) & 0xFFFFFFFFFFFFFFF8LL);
    return (int)sub_49B748(a2, a3, "Bad file structure or read error (offset %llu)", *(_QWORD *)v7);
  }
  if ( (_DWORD)a4 == 3 )
  {
    if ( v6 < 0 && v6 + 8 <= 0 )
      v7 = (unsigned int *)(v8 + v6);
    v14 = *v7;
    if ( (unsigned int)(v14 - 1) <= 1 )
      return (int)sub_49B748(a2, a3, "Bad ELF byte sex %d for the indicated machine", v14, a5, v8);
    LODWORD(result) = sub_49B748(a2, a3, "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)");
    return (int)result;
  }
  if ( (unsigned int)a4 > 3 )
  {
    if ( (_DWORD)a4 != 4 )
      return (int)((unsigned int)sub_4933E8(a2, "The PHT table size or offset is invalid", a3) - (_DWORD)a2);
    if ( v6 < 0 && v6 + 8 <= 0 )
    {
      v15 = *(unsigned int *)(v8 + v6);
      if ( v6 != -8 && v6 + 16 <= 0 )
        v7 = (unsigned int *)(v8 + v6 + 8);
    }
    else
    {
      v15 = *v7;
      v7 = (unsigned int *)(((unsigned __int64)v7 + 11) & 0xFFFFFFFFFFFFFFF8LL);
    }
    LODWORD(result) = sub_49B748(a2, a3, "PHT entry size is invalid: %d. Falling back to %d", v15, *v7, v8);
    return (int)result;
  }
  if ( (_DWORD)a4 == 1 )
  {
    LODWORD(result) = sub_49B748(a2, a3, "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)");
    return (int)result;
  }
  if ( (_DWORD)a4 != 2 )
    goto LABEL_29;
  if ( v6 < 0 && v6 + 8 <= 0 )
  {
    v12 = *(unsigned int *)(v8 + v6);
    if ( v6 != -8 && v6 + 16 <= 0 )
      v7 = (unsigned int *)(v8 + v6 + 8);
  }
  else
  {
    v12 = *v7;
    v7 = (unsigned int *)(((unsigned __int64)v7 + 11) & 0xFFFFFFFFFFFFFFF8LL);
  }
  LODWORD(result) = sub_49B748(a2, a3, "The ELF header entry size is invalid (%d, expected %d)", v12, *v7, v8);
  return (int)result;
}
// 420620: conditional instruction was optimized away because w3.4==5
// 420740: conditional instruction was optimized away because w3.4 is in (==0|8..E|==10|<0)
// 52451C: using guessed type char under_debugger;
