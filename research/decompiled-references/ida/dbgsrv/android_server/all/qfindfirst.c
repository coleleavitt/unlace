/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindfirst
// Address: 0x00000000000BBD58

//----- (00000000000BBD58) ----------------------------------------------------
__int64 __fastcall qfindfirst(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // x21
  _BYTE *v7; // x0
  _BYTE *v8; // x0
  __int64 v9; // x1
  int v10; // w0
  int v11; // w8
  __int64 v12; // x9
  __int64 v14; // x9

  v4 = (const char *)(a2 + 8248);
  qustrncpy(a2 + 8248, a1, 4096);
  v7 = (_BYTE *)__strrchr_chk(v4, 47, 4096);
  if ( v7 )
  {
    *v7 = 0;
    v8 = v7 + 1;
  }
  else
  {
    qustrncpy((unsigned __int64)v4, (__int64)".", 4096);
    v8 = nullptr;
  }
  if ( v8 )
    v9 = (__int64)v8;
  else
    v9 = a1;
  *(_QWORD *)(a2 + 8232) = 0;
  *(_DWORD *)(a2 + 8240) = 0;
  qustrncpy(a2 + 12344, v9, 4096);
  *(_DWORD *)(a2 + 16440) = a3;
  v10 = scandir(
          v4,
          (struct dirent ***)(a2 + 8232),
          nullptr,
          (int (*)(const struct dirent **, const struct dirent **))&alphasort);
  v11 = *(_DWORD *)(a2 + 8240);
  *(_DWORD *)(a2 + 8244) = v10;
  if ( v11 >= v10 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a2 + 8232);
    *(_DWORD *)(a2 + 8240) = v11 + 1;
    if ( !(unsigned int)sub_BBBA4(a2 + 4120, nullptr, (char *)(*(_QWORD *)(v12 + 8LL * v11) + 19LL)) )
      break;
    v11 = *(_DWORD *)(a2 + 8240);
    if ( v11 >= *(_DWORD *)(a2 + 8244) )
      return 0xFFFFFFFFLL;
  }
  *(_DWORD *)a2 = *(_DWORD *)(a2 + 4120);
  qustrncpy(a2 + 4, a2 + 4124, 4096);
  v14 = *(unsigned int *)(a2 + 8220);
  *(_DWORD *)(a2 + 4112) = *(_DWORD *)(a2 + 8224);
  *(_QWORD *)(a2 + 4104) = v14;
  return 0;
}
// 36DF0: using guessed type __int64 __fastcall __strrchr_chk(_QWORD, _QWORD, _QWORD);
