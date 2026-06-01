/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindfirst
// Address: 0x000AE010

//----- (000AE010) --------------------------------------------------------
int __cdecl qfindfirst(int a1, int a2, int a3)
{
  _BYTE *v3; // eax
  _BYTE *v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  const char *v11; // [esp+8h] [ebp-14h]

  qustrncpy(a2 + 8232, a1, 4096);
  v11 = (const char *)(a2 + 8232);
  v3 = (_BYTE *)__strrchr_chk(a2 + 8232, 47, 4096);
  if ( v3 )
  {
    v4 = v3 + 1;
    *v3 = 0;
  }
  else
  {
    qustrncpy((unsigned int)v11, (int)".", 4096);
    v4 = nullptr;
  }
  *(_DWORD *)(a2 + 8220) = 0;
  *(_DWORD *)(a2 + 8224) = 0;
  v5 = a1;
  if ( v4 )
    v5 = (int)v4;
  qustrncpy(a2 + 12328, v5, 4096);
  *(_DWORD *)(a2 + 16424) = a3;
  v6 = scandir(v11, (struct dirent ***)(a2 + 8220), nullptr, (int (*)(const void *, const void *))&alphasort);
  *(_DWORD *)(a2 + 8228) = v6;
  v7 = *(_DWORD *)(a2 + 8224);
  v8 = -1;
  if ( v7 < v6 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a2 + 8224) = v7 + 1;
      if ( !sub_ADE00(a2 + 4112, nullptr, (char *)(*(_DWORD *)(*(_DWORD *)(a2 + 8220) + 4 * v7) + 19)) )
        break;
      v7 = *(_DWORD *)(a2 + 8224);
      if ( v7 >= *(_DWORD *)(a2 + 8228) )
        return -1;
    }
    *(_DWORD *)a2 = *(_DWORD *)(a2 + 4112);
    qustrncpy(a2 + 4, a2 + 4116, 4096);
    v9 = *(_DWORD *)(a2 + 8212);
    *(_DWORD *)(a2 + 4108) = *(_DWORD *)(a2 + 8216);
    *(_DWORD *)(a2 + 4100) = v9;
    *(_DWORD *)(a2 + 4104) = 0;
    return 0;
  }
  return v8;
}
// 17F90: using guessed type int __cdecl __strrchr_chk(_DWORD, _DWORD, _DWORD);
