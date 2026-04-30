double __fastcall sub_464890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // r12
  void *v9; // rbp
  double result; // xmm0_8

  v6 = (__int64 *)a2;
  v7 = *(__int64 **)a2;
  v8 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v8 )
  {
    do
    {
      v9 = (void *)*v7;
      if ( *v7 )
      {
        sub_2775D0(*v7, (const char *)a2, a3, a4, a5, a6);
        a2 = 24;
        operator delete(v9, 0x18u);
      }
      ++v7;
    }
    while ( (__int64 *)v8 != v7 );
    v8 = *v6;
  }
  if ( v8 )
  {
    v6[1] = 0;
    return qfree(v8, (const char *)a2);
  }
  return result;
}
