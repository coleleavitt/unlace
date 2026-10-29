/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AE0
// Address: 0x0000000000080AE0

//----- (0000000000080AE0) ----------------------------------------------------
__int64 **__fastcall sub_80AE0(__int64 a1, __int64 *a2, double a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rax
  bool v8; // zf
  void *v9; // rdi

  v4 = (__int64 *)a2[1];
  if ( v4 )
  {
    do
    {
      v5 = (__int64 **)v4;
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
  }
  else
  {
    v5 = (__int64 **)a2[2];
    if ( *v5 != a2 )
    {
      v6 = a2 + 2;
      do
      {
        v7 = *v6;
        v5 = *(__int64 ***)(v7 + 16);
        v8 = *v5 == (__int64 *)v7;
        v6 = (__int64 *)(v7 + 16);
      }
      while ( !v8 );
    }
  }
  if ( *(__int64 **)a1 == a2 )
    *(_QWORD *)a1 = v5;
  --*(_QWORD *)(a1 + 16);
  sub_4C430(*(__int64 **)(a1 + 8), a2);
  free_idcv((char *)a2 + 56, a3, a4);
  v9 = (void *)a2[4];
  if ( v9 )
  {
    a2[5] = 0;
    qfree(v9);
  }
  operator delete(a2);
  return v5;
}
