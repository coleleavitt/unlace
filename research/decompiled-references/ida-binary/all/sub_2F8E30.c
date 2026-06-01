__int64 __fastcall sub_2F8E30(__m128i *a1, int a2, _QWORD *a3)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  __int64 v9; // r12
  __int64 v10; // rax

  if ( a3 )
    *a3 = 0;
  v4 = getinf(5);
  v7 = 2;
  if ( a2 < 0 )
    return v7;
  if ( a2 >= a1[1].m128i_i64[0] )
  {
    v7 = v4;
    if ( v4 == 2 || v4 == 17 || a2 )
      return 2;
    return v7;
  }
  v9 = 96LL * a2;
  if ( a3 )
  {
    if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      sub_2F8810(a1, 0, 0, 0, v5, v6);
    *a3 = v9 + a1->m128i_i64[1];
  }
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
    sub_2F8810(a1, 0, 0, 0, v5, v6);
  v10 = a1->m128i_i64[1];
  v7 = 17;
  if ( *(_DWORD *)(v10 + v9 + 80) == 1 )
    return v7;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
  {
    sub_2F8810(a1, 0, 0, 0, v5, v6);
    v10 = a1->m128i_i64[1];
  }
  return *(unsigned int *)(v10 + v9 + 80);
}
