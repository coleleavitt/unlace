/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80DA0
// Address: 0x0000000000080DA0

//----- (0000000000080DA0) ----------------------------------------------------
__int64 __fastcall sub_80DA0(__int64 ***a1, __int64 a2, double a3, __m128 a4)
{
  __int64 **v4; // r14
  const char *v6; // r12
  __int64 ***v7; // rbp
  __int64 ***v8; // rbx
  const char *v9; // rdi
  int v10; // eax
  const char *v11; // rsi
  __int64 **v13; // rcx
  __int64 *v14; // rdi
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 **v19; // rdi
  __int64 **v20; // [rsp+0h] [rbp-38h]

  v4 = a1[1];
  if ( !v4 )
    return 0;
  v6 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v6 = *(const char **)a2;
  v7 = a1 + 1;
  v8 = a1 + 1;
  v20 = a1[1];
  do
  {
    v9 = s1;
    if ( v4[5] )
      v9 = (const char *)v4[4];
    v10 = strcmp(v9, v6);
    if ( v10 >= 0 )
      v8 = (__int64 ***)v4;
    v4 = (__int64 **)v4[v10 < 0];
  }
  while ( v4 );
  if ( v8 == v7 )
    return 0;
  v11 = v8[5] ? (const char *)v8[4] : s1;
  if ( strcmp(v6, v11) < 0 )
    return 0;
  v13 = v8[1];
  if ( v13 )
  {
    v14 = (__int64 *)v20;
    do
    {
      v15 = v13;
      v13 = (__int64 **)*v13;
    }
    while ( v13 );
  }
  else
  {
    v15 = v8[2];
    v14 = (__int64 *)v20;
    if ( *v15 != (__int64 *)v8 )
    {
      v16 = (__int64 *)(v8 + 2);
      do
      {
        v17 = *v16;
        v15 = *(__int64 ***)(v17 + 16);
        v18 = *v15 == (__int64 *)v17;
        v16 = (__int64 *)(v17 + 16);
      }
      while ( !v18 );
    }
  }
  if ( *a1 == (__int64 **)v8 )
    *a1 = v15;
  a1[2] = (__int64 **)((char *)a1[2] - 1);
  sub_4C430(v14, (__int64 *)v8);
  free_idcv((char *)v8 + 56, a3, a4);
  v19 = v8[4];
  if ( v19 )
  {
    v8[5] = nullptr;
    qfree(v19);
  }
  operator delete(v8);
  return 1;
}
