/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindfirst
// Address: 0x00000000000C0A00

//----- (00000000000C0A00) ----------------------------------------------------
__int64 __fastcall qfindfirst(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  const char *v5; // r14
  _BYTE *v6; // rax
  _BYTE *v7; // rcx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // r14d
  __int64 v11; // rax

  v4 = a1;
  v5 = (const char *)(a2 + 8248);
  qustrncpy(a2 + 8248, a1, 4096);
  v6 = (_BYTE *)__strrchr_chk(a2 + 8248, 47, 4096);
  if ( v6 )
  {
    v7 = v6 + 1;
    *v6 = 0;
  }
  else
  {
    qustrncpy((unsigned __int64)v5, (__int64)".", 4096);
    v7 = nullptr;
  }
  *(_QWORD *)(a2 + 8232) = 0;
  *(_DWORD *)(a2 + 8240) = 0;
  if ( v7 )
    v4 = (__int64)v7;
  qustrncpy(a2 + 12344, v4, 4096);
  *(_DWORD *)(a2 + 16440) = a3;
  v8 = scandir(
         v5,
         (struct dirent ***)(a2 + 8232),
         nullptr,
         (int (*)(const struct dirent **, const struct dirent **))&alphasort);
  *(_DWORD *)(a2 + 8244) = v8;
  v9 = *(_DWORD *)(a2 + 8240);
  v10 = -1;
  if ( v9 < v8 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a2 + 8240) = v9 + 1;
      if ( !sub_C0820(a2 + 4120, nullptr, (const char *)(*(_QWORD *)(*(_QWORD *)(a2 + 8232) + 8LL * v9) + 19LL)) )
        break;
      v9 = *(_DWORD *)(a2 + 8240);
      if ( v9 >= *(_DWORD *)(a2 + 8244) )
        return v10;
    }
    *(_DWORD *)a2 = *(_DWORD *)(a2 + 4120);
    qustrncpy(a2 + 4, a2 + 4124, 4096);
    v11 = *(unsigned int *)(a2 + 8220);
    *(_DWORD *)(a2 + 4112) = *(_DWORD *)(a2 + 8224);
    *(_QWORD *)(a2 + 4104) = v11;
    return 0;
  }
  return v10;
}
// 33F20: using guessed type __int64 __fastcall __strrchr_chk(_QWORD, _QWORD, _QWORD);
