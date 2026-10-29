/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindfirst
// Address: 0x0000000100072EB8

//----- (0000000100072EB8) ----------------------------------------------------
__int64 __fastcall qfindfirst(__int64 a1, __int64 a2, int a3)
{
  char *v6; // x0
  char *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8

  qustrncpy(a2 + 2104, a1, 1024);
  v6 = strrchr((char *)(a2 + 2104), 47);
  if ( v6 )
  {
    *v6 = 0;
    v7 = v6 + 1;
  }
  else
  {
    qustrncpy(a2 + 2104, (__int64)".", 1024);
    v7 = nullptr;
  }
  *(_QWORD *)(a2 + 2088) = 0;
  *(_DWORD *)(a2 + 2096) = 0;
  if ( v7 )
    v8 = (__int64)v7;
  else
    v8 = a1;
  qustrncpy(a2 + 3128, v8, 1024);
  *(_DWORD *)(a2 + 4152) = a3;
  *(_DWORD *)(a2 + 2100) = scandir(
                             (const char *)(a2 + 2104),
                             (dirent ***)(a2 + 2088),
                             nullptr,
                             (int (__cdecl *)(const dirent **, const dirent **))&alphasort);
  while ( 1 )
  {
    v9 = *(int *)(a2 + 2096);
    if ( (int)v9 >= *(_DWORD *)(a2 + 2100) )
      break;
    *(_DWORD *)(a2 + 2096) = v9 + 1;
    if ( !(unsigned int)sub_100072D98(a2 + 1048, nullptr, (char *)(*(_QWORD *)(*(_QWORD *)(a2 + 2088) + 8 * v9) + 21LL)) )
    {
      *(_DWORD *)a2 = *(_DWORD *)(a2 + 1048);
      qustrncpy(a2 + 4, a2 + 1052, 1024);
      *(_DWORD *)(a2 + 1040) = *(_DWORD *)(a2 + 2080);
      *(_QWORD *)(a2 + 1032) = *(unsigned int *)(a2 + 2076);
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}
