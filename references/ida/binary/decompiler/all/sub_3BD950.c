__int64 __fastcall sub_3BD950(__m128 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  char v5; // al
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 i; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v2 = a1[2].m128_i64[1];
  v18 = __readfsqword(0x28u);
  v4 = a1[2].m128_i64[0];
  v17 = 0;
  v16 = 0;
  v5 = sub_3BD430(&v16, v4, v2);
  v6 = v16;
  v7 = v17;
  if ( v5 )
  {
    v11 = a1->m128_u64[1];
    v15 = *((_QWORD *)&v17 + 1);
    if ( v11 )
    {
      v12 = a1[1].m128_u64[0];
      if ( v12 )
      {
        for ( i = 0; i != v12; ++i )
        {
          v14 = v11 + 40 * i;
          if ( *(_QWORD *)(v14 + 16) )
          {
            *(_QWORD *)(v14 + 24) = 0;
            qfree();
            v11 = a1->m128_u64[1];
          }
        }
      }
      a1[1].m128_u64[0] = 0;
      qfree();
    }
    a1->m128_u64[1] = v6;
    a1[1] = _mm_loadh_ps((const double *)&v15);
  }
  else
  {
    if ( v16 )
    {
      v8 = v16;
      v9 = 0;
      if ( (_QWORD)v17 )
      {
        do
        {
          if ( *(_QWORD *)(v8 + 16) )
          {
            *(_QWORD *)(v8 + 24) = 0;
            qfree();
          }
          ++v9;
          v8 += 40LL;
        }
        while ( v7 != v9 );
      }
      qfree();
    }
    return -1;
  }
  return a2;
}
