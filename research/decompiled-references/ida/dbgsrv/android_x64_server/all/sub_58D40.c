/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58D40
// Address: 0x0000000000058D40

//----- (0000000000058D40) ----------------------------------------------------
char __fastcall sub_58D40(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rbp
  const char *v5; // rdi
  char result; // al
  __int64 v7; // rax
  int v8; // r12d
  unsigned __int64 v9; // rdx
  __int64 i; // r14
  unsigned __int8 *v11; // rax

  if ( !*(_BYTE *)(a1 + 32) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20082);
    BUG();
  }
  v2 = 56LL * *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  while ( 1 )
  {
    v5 = s1;
    if ( *(_QWORD *)(v3 + v4 + 8) )
      v5 = *(const char **)(v3 + v4);
    if ( !strcmp(v5, "GNU") && *(_DWORD *)(v3 + v4 + 48) == 3 )
      break;
    v4 += 56;
    if ( v2 == v4 )
      return 0;
  }
  v7 = *(_QWORD *)(v3 + v4 + 32);
  v8 = v7 - 1;
  if ( !v7 )
    v8 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v9 = 2 * v8;
  if ( *(_QWORD *)(a2 + 16) < v9 )
    *(_QWORD *)a2 = qvector_reserve(a2, *(char **)a2, v9, 1u);
  result = 1;
  if ( v8 > 0 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v11 = (unsigned __int8 *)&dword_101BA4;
      if ( i | *(_QWORD *)(v3 + v4 + 32) )
        v11 = (unsigned __int8 *)(i + *(_QWORD *)(v3 + v4 + 24));
      sub_4E030(a2, "%02x", *v11);
    }
    return 1;
  }
  return result;
}
// 101BA4: using guessed type int dword_101BA4;
// 158B40: using guessed type __int64 under_debugger;
