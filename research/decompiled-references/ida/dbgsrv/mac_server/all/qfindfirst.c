/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindfirst
// Address: 0x000000010007B810

//----- (000000010007B810) ----------------------------------------------------
__int64 __fastcall qfindfirst(char *a1, __int64 a2, int a3)
{
  char *v3; // r12
  const char *v4; // r14
  char *v5; // rax
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = a1;
  v4 = (const char *)(a2 + 2104);
  qustrncpy(a2 + 2104, a1, 1024);
  v5 = strrchr((char *)(a2 + 2104), 47);
  if ( v5 )
  {
    v6 = v5 + 1;
    *v5 = 0;
  }
  else
  {
    qustrncpy((unsigned __int64)v4, ".", 1024);
    v6 = nullptr;
  }
  *(_QWORD *)(a2 + 2088) = 0;
  *(_DWORD *)(a2 + 2096) = 0;
  if ( v6 )
    v3 = v6;
  qustrncpy(a2 + 3128, v3, 1024);
  *(_DWORD *)(a2 + 4152) = a3;
  *(_DWORD *)(a2 + 2100) = scandir_INODE64(
                             v4,
                             (dirent ***)(a2 + 2088),
                             nullptr,
                             (int (__cdecl *)(const dirent **, const dirent **))&alphasort_INODE64);
  while ( 1 )
  {
    v7 = *(int *)(a2 + 2096);
    if ( (int)v7 >= *(_DWORD *)(a2 + 2100) )
      break;
    *(_DWORD *)(a2 + 2096) = v7 + 1;
    if ( !sub_10007B6B0(a2 + 1048, nullptr, (char *)(*(_QWORD *)(*(_QWORD *)(a2 + 2088) + 8 * v7) + 21LL)) )
    {
      *(_DWORD *)a2 = *(_DWORD *)(a2 + 1048);
      qustrncpy(a2 + 4, (char *)(a2 + 1052), 1024);
      v8 = *(unsigned int *)(a2 + 2076);
      *(_DWORD *)(a2 + 1040) = *(_DWORD *)(a2 + 2080);
      *(_QWORD *)(a2 + 1032) = v8;
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}
