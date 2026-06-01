void __fastcall sub_120BEB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __m128 *v6; // rbx
  __m128 *v7; // rbp
  unsigned __int64 v8; // r14
  __m128 *v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __m128 *v12; // rbx
  unsigned __int64 v13; // r15
  __m128 *v14; // r14
  __int64 v15; // rsi
  __m128 *v16; // [rsp+8h] [rbp-70h] BYREF
  __int64 v17; // [rsp+10h] [rbp-68h]
  __int64 v18; // [rsp+18h] [rbp-60h]
  __m128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+38h] [rbp-40h]

  v17 = a1;
  v18 = a3;
  v19.m128_u64[0] = 0xBEF00000BEDLL;
  v19.m128_i32[2] = 3052;
  v4 = sub_21B6DA0(a2, &v19, 3);
  v5 = *(_QWORD *)(a2 + 8);
  v20 = 0xBEF00000BEDLL;
  v21 = 3052;
  v6 = (__m128 *)(v5 + 8LL * (unsigned int)v4);
  v7 = (__m128 *)(v5 + 8 * HIDWORD(v4));
  v16 = v7;
  v19 = _mm_loadh_ps((const double *)&v16);
  if ( v6 != v7 )
  {
    v16 = (__m128 *)&v19.m128_u32[3];
    do
    {
      v8 = v6->m128_u64[0];
      v9 = &v19;
      if ( v6->m128_u64[0] )
      {
        do
        {
          v10 = v9[1].m128_u32[0];
          if ( !(_DWORD)v10 )
            break;
          if ( (unsigned __int8)sub_21B9810(v8, v10) )
          {
            v16 = v7;
            v20 = 0xBEF00000BEDLL;
            v21 = 3052;
            v19 = _mm_loadh_ps((const double *)&v16);
            if ( v7 == v6 )
              goto LABEL_8;
LABEL_11:
            v11 = v6->m128_u64[0];
            if ( *(_QWORD *)(v6->m128_u64[0] + 16) )
              v11 = *(_QWORD *)(v6->m128_u64[0] + 16);
            v12 = (__m128 *)&v6->m128_u16[4];
            *(_BYTE *)(v11 + 44) |= 1u;
            for ( v19.m128_u64[0] = (unsigned __int64)v12; v7 != v12; v19.m128_u64[0] = (unsigned __int64)v12 )
            {
              v13 = v12->m128_u64[0];
              v14 = &v19;
              if ( v12->m128_u64[0] )
              {
                do
                {
                  v15 = v14[1].m128_u32[0];
                  if ( !(_DWORD)v15 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v13, v15) )
                  {
                    v6 = (__m128 *)v19.m128_u64[0];
                    if ( v7 != (__m128 *)v19.m128_u64[0] )
                      goto LABEL_11;
                    return;
                  }
                  v14 = (__m128 *)((char *)v14 + 4);
                }
                while ( v14 != (__m128 *)&v19.m128_u32[3] );
              }
              v12 = (__m128 *)((char *)v12 + 8);
            }
            return;
          }
          v9 = (__m128 *)((char *)v9 + 4);
        }
        while ( v16 != v9 );
      }
      v6 = (__m128 *)((char *)v6 + 8);
      v19.m128_u64[0] = (unsigned __int64)v6;
    }
    while ( v7 != v6 );
  }
LABEL_8:
  sub_120B760(v17, a2, v18);
}
