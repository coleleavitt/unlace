/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F050
// Address: 0x000000014005F050

//----- (000000014005F050) ----------------------------------------------------
char *__fastcall sub_14005F050(int a1)
{
  int v1; // ebp
  unsigned int v2; // r9d
  char *v4; // rdx
  unsigned int i; // eax
  int v6; // ecx
  int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  char *v11; // rsi
  char *v12; // rbx
  __int64 v13; // rax

  v1 = dword_1400CBA30;
  v2 = 0;
  v4 = byte_1400CB8B0;
  ++dword_1400CBA30;
  for ( i = 0; i < 6; ++i )
  {
    if ( *(_DWORD *)v4 == a1 )
    {
      v13 = (__int64)(int)i << 6;
      *(_DWORD *)&byte_1400CB8B0[v13 + 4] = v1;
      return &byte_1400CB8B0[v13 + 8];
    }
    v4 += 64;
  }
  v6 = dword_1400C9EF8;
  if ( dword_1400C9EF8 < 0 )
  {
    v6 = 0;
    if ( dword_1400C8760[0] != 37 )
    {
      v7 = dword_1400C8760;
      do
      {
        ++v6;
        v7 += 4;
      }
      while ( *v7 != 37 );
    }
    dword_1400C9EF8 = v6;
  }
  v8 = v6;
  v9 = 4LL * v6;
  if ( !*(_QWORD *)&dword_1400C8760[v9 + 2] )
    return nullptr;
  while ( dword_1400C8760[v9] != a1 )
  {
    ++v8;
    ++v6;
    v9 = 4 * v8;
    if ( !*(_QWORD *)&dword_1400C8760[4 * v8 + 2] )
      return nullptr;
  }
  if ( dword_1400CB8F4 < (unsigned int)dword_1400CB8B4 )
    v2 = 1;
  if ( (unsigned int)dword_1400CB934 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v2 + 4] )
    v2 = 2;
  if ( (unsigned int)dword_1400CB974 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v2 + 4] )
    v2 = 3;
  if ( (unsigned int)dword_1400CB9B4 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v2 + 4] )
    v2 = 4;
  if ( (unsigned int)dword_1400CB9F4 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v2 + 4] )
    v2 = 5;
  v11 = &byte_1400CB8B0[64 * (unsigned __int64)v2];
  v12 = *(char **)&dword_1400C8760[4 * v6 + 2];
  *(_DWORD *)v11 = a1;
  sub_1400621E0(v11 + 8, v12, 28);
  sub_1400621E0(v11 + 36, v12, 28);
  *((_DWORD *)v11 + 1) = v1;
  return v11 + 8;
}
// 1400C8760: using guessed type int dword_1400C8760[];
// 1400C9EF8: using guessed type int dword_1400C9EF8;
// 1400CB8B4: using guessed type int dword_1400CB8B4;
// 1400CB8F4: using guessed type int dword_1400CB8F4;
// 1400CB934: using guessed type int dword_1400CB934;
// 1400CB974: using guessed type int dword_1400CB974;
// 1400CB9B4: using guessed type int dword_1400CB9B4;
// 1400CB9F4: using guessed type int dword_1400CB9F4;
// 1400CBA30: using guessed type int dword_1400CBA30;
