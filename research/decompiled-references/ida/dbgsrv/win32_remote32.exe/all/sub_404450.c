/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404450
// Address: 0x00404450

//----- (00404450) --------------------------------------------------------
int __usercall sub_404450@<eax>(__m128i a1@<xmm0>, int a2, int a3, int a4, LPOLESTR lpsz)
{
  char v5; // bl
  const IID *v6; // esi
  int v7; // edx
  int v8; // eax
  void *v10; // eax
  unsigned int v11; // ecx
  signed int v12; // eax
  signed int v13; // esi
  void *v14; // [esp+10h] [ebp-24h] BYREF
  unsigned int v15; // [esp+14h] [ebp-20h]
  unsigned int v16; // [esp+18h] [ebp-1Ch]
  int v17; // [esp+1Ch] [ebp-18h]
  int v18; // [esp+20h] [ebp-14h]
  int v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+30h] [ebp-4h]

  v17 = 0;
  v5 = (char)lpsz;
  if ( !(_BYTE)lpsz )
  {
    v6 = nullptr;
    v7 = *(_DWORD *)(a4 + 16);
    v19 = *(_DWORD *)(a4 + 20);
    v8 = 0;
    v18 = v7;
    while ( !*(_DWORD *)(a4 + 4 * v8) )
    {
      if ( (unsigned int)++v8 >= 4 )
        goto LABEL_7;
    }
    v6 = (const IID *)a4;
LABEL_7:
    if ( !v7 && !v19 && !v6 )
      return -2147467259;
    v10 = nullptr;
    v20 = 0;
    v11 = 0;
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    v17 = 1;
    if ( v6 )
    {
      lpsz = nullptr;
      StringFromCLSID(v6, &lpsz);
      if ( lpsz )
      {
        sub_45A700((int)&v14, lpsz, -1);
        CoTaskMemFree(lpsz);
      }
      if ( v15 > 1 )
      {
LABEL_19:
        if ( (dword_4B70EC & 0x10000) != 0 )
          sub_402760("PDB: Trying to load PDB \"%S\" (guid %s, sig 0x%08X, age 0x%08X)\n");
        v12 = (*(int (__stdcall **)(int, int, const IID *, int, int))(*(_DWORD *)a2 + 20))(a2, a3, v6, v18, v19);
        v13 = v12;
        if ( (dword_4B70EC & 0x10000) != 0 )
        {
          if ( v12 != -2147418113
            && v12 != -2147024809
            && (v12 < -2140340223 || (unsigned int)(v12 + 2140340223) >= 0x19) )
          {
            sub_453860(a1, v12);
          }
          sub_402760("PDB: loadAndValidateDataFromPdb(\"%S\"): %s\n");
        }
        if ( v13 == -2140340218 || v13 == -2140340217 )
          v5 = sub_404420(0) == 1;
        v20 = 1;
        if ( v14 )
        {
          v15 = 0;
          sub_453A20(v14);
          v14 = nullptr;
          v16 = 0;
        }
        v20 = -1;
        if ( !v5 )
          return v13;
        goto LABEL_34;
      }
      v11 = v16;
      v10 = v14;
    }
    if ( v11 < 0x27 )
    {
      v10 = sub_453B00((int)&v14, v10, 0x27u, 1u);
      v14 = v10;
    }
    v15 = 39;
    sub_464310((unsigned int)v10, (unsigned int)"{00000000-0000-0000-0000-000000000000}", 0x26u);
    *((_BYTE *)v14 + 38) = 0;
    goto LABEL_19;
  }
LABEL_34:
  v13 = (*(int (__stdcall **)(int, int))(*(_DWORD *)a2 + 16))(a2, a3);
  if ( (dword_4B70EC & 0x10000) != 0 )
  {
    if ( v13 != -2147418113 && v13 != -2147024809 && (v13 < -2140340223 || (unsigned int)(v13 + 2140340223) >= 0x19) )
      sub_453860(a1, v13);
    sub_402760("PDB: loadDataFromPdb(\"%S\"): %s\n");
  }
  return v13;
}
// 4B70EC: using guessed type int dword_4B70EC;
