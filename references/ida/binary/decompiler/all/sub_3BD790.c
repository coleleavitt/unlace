__int64 __fastcall sub_3BD790(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  char v5; // al
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v11; // rdx
  __m128i v12; // xmm1
  __int64 v13; // r13
  __int64 i; // rbx
  __int64 v15; // rax
  __m128i v16; // xmm2
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v2 = a1[32];
  v20 = __readfsqword(0x28u);
  v4 = a1[31];
  v18 = 0;
  v19 = 0;
  v5 = sub_3BD430(&v18, v4, v2);
  v6 = v18;
  v7 = v19;
  if ( v5 )
  {
    v11 = a1[28];
    v12 = (__m128i)_mm_loadh_ps((const double *)&v19 + 1);
    v17 = v12;
    if ( v11 )
    {
      v13 = a1[29];
      if ( v13 )
      {
        for ( i = 0; i != v13; ++i )
        {
          v15 = v11 + 40 * i;
          if ( *(_QWORD *)(v15 + 16) )
          {
            *(_QWORD *)(v15 + 24) = 0;
            qfree();
            v11 = a1[28];
          }
        }
      }
      a1[29] = 0;
      qfree();
      v16 = _mm_load_si128(&v17);
      a1[28] = v6;
      *(__m128i *)(a1 + 29) = v16;
    }
    else
    {
      a1[28] = v18;
      *(__m128i *)(a1 + 29) = v12;
    }
  }
  else
  {
    a2 = -1;
    if ( v18 )
    {
      v8 = v18;
      v9 = 0;
      if ( (_QWORD)v19 )
      {
        do
        {
          if ( *(_QWORD *)(v8 + 16) )
          {
            *(_QWORD *)(v8 + 24) = 0;
            qfree();
          }
          ++v9;
          v8 += 40;
        }
        while ( v7 != v9 );
      }
      qfree();
    }
  }
  return a2;
}
