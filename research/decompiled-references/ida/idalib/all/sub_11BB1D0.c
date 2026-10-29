unsigned __int64 __fastcall sub_11BB1D0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __m128 *v3; // rbx
  __m128 *v4; // rbp
  unsigned __int64 v5; // r14
  __m128 *p_i; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  __m128 *v10; // rbx
  unsigned __int64 v11; // r14
  __m128 *v12; // r15
  __int64 v13; // rsi
  __m128 *v15; // [rsp+8h] [rbp-60h] BYREF
  __m128 i; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+28h] [rbp-40h]

  i.m128_u64[0] = 0x21700000218LL;
  i.m128_i32[2] = 1292;
  v1 = sub_21B6DA0(a1, &i, 3);
  v2 = *(_QWORD *)(a1 + 8);
  v17 = 0x21700000218LL;
  v18 = 1292;
  v3 = (__m128 *)(v2 + 8LL * (unsigned int)v1);
  v4 = (__m128 *)(v2 + 8 * HIDWORD(v1));
  v15 = v4;
  for ( i = _mm_loadh_ps((const double *)&v15); v4 != v3; i.m128_u64[0] = (unsigned __int64)v3 )
  {
    v5 = v3->m128_u64[0];
    p_i = &i;
    if ( v3->m128_u64[0] )
    {
      do
      {
        v7 = p_i[1].m128_u32[0];
        if ( !(_DWORD)v7 )
          break;
        if ( (unsigned __int8)sub_21B9810(v5, v7) )
        {
          v15 = v4;
          v17 = 0x21700000218LL;
          v18 = 1292;
          i = _mm_loadh_ps((const double *)&v15);
          if ( v4 == v3 )
            return 0;
          v15 = (__m128 *)&i.m128_u32[3];
LABEL_10:
          v8 = v3->m128_u64[0];
          v9 = *(_QWORD *)(v3->m128_u64[0] + 16);
          if ( !v9 )
            v9 = v3->m128_u64[0];
          v10 = (__m128 *)&v3->m128_u16[4];
          *(_BYTE *)(v9 + 44) |= 1u;
          for ( i.m128_u64[0] = (unsigned __int64)v10; v4 != v10; i.m128_u64[0] = (unsigned __int64)v10 )
          {
            v11 = v10->m128_u64[0];
            v12 = &i;
            if ( v10->m128_u64[0] )
            {
              do
              {
                v13 = v12[1].m128_u32[0];
                if ( !(_DWORD)v13 )
                  break;
                if ( (unsigned __int8)sub_21B9810(v11, v13) )
                {
                  v3 = (__m128 *)i.m128_u64[0];
                  if ( v4 != (__m128 *)i.m128_u64[0] )
                    goto LABEL_10;
                  goto LABEL_18;
                }
                v12 = (__m128 *)((char *)v12 + 4);
              }
              while ( v12 != v15 );
            }
            v10 = (__m128 *)((char *)v10 + 8);
          }
LABEL_18:
          if ( (unsigned __int8)sub_21B9810(v8, 1292) )
            return 0;
          return v8;
        }
        p_i = (__m128 *)((char *)p_i + 4);
      }
      while ( &i.m128_u32[3] != (unsigned __int32 *)p_i );
    }
    v3 = (__m128 *)((char *)v3 + 8);
  }
  return 0;
}
