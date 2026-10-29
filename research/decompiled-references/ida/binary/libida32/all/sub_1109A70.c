bool __fastcall sub_1109A70(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __m128 *v5; // rbx
  __m128 *v6; // rbp
  unsigned __int64 v7; // r14
  __m128 *p_i; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  __m128 *v12; // rbx
  unsigned __int64 v13; // r13
  __m128 *v14; // r14
  __int64 v15; // rsi
  __m128 *v16; // [rsp+0h] [rbp-60h] BYREF
  __m128 i; // [rsp+8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-48h]
  int v19; // [rsp+20h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != 1 )
    return 0;
  i.m128_u64[0] = 0xBDD00000BF0LL;
  i.m128_i32[2] = 3054;
  v3 = sub_2193060(a2, &i, 3);
  v4 = *(_QWORD *)(a2 + 8);
  v18 = 0xBDD00000BF0LL;
  v19 = 3054;
  v5 = (__m128 *)(v4 + 8LL * (unsigned int)v3);
  v6 = (__m128 *)(v4 + 8 * HIDWORD(v3));
  v16 = v6;
  for ( i = _mm_loadh_ps((const double *)&v16); v6 != v5; i.m128_u64[0] = (unsigned __int64)v5 )
  {
    v7 = v5->m128_u64[0];
    p_i = &i;
    if ( v5->m128_u64[0] )
    {
      do
      {
        v9 = p_i[1].m128_u32[0];
        if ( !(_DWORD)v9 )
          break;
        if ( (unsigned __int8)sub_2195AD0(v7, v9) )
        {
          v16 = v6;
          v18 = 0xBDD00000BF0LL;
          v19 = 3054;
          i = _mm_loadh_ps((const double *)&v16);
          if ( v6 == v5 )
            goto LABEL_9;
          v16 = (__m128 *)&i.m128_u32[3];
LABEL_13:
          v10 = v5->m128_u64[0];
          v11 = *(_QWORD *)(v5->m128_u64[0] + 16);
          if ( !v11 )
            v11 = v5->m128_u64[0];
          v12 = (__m128 *)&v5->m128_u16[4];
          *(_BYTE *)(v11 + 44) |= 1u;
          for ( i.m128_u64[0] = (unsigned __int64)v12; v6 != v12; i.m128_u64[0] = (unsigned __int64)v12 )
          {
            v13 = v12->m128_u64[0];
            v14 = &i;
            if ( v12->m128_u64[0] )
            {
              do
              {
                v15 = v14[1].m128_u32[0];
                if ( !(_DWORD)v15 )
                  break;
                if ( (unsigned __int8)sub_2195AD0(v13, v15) )
                {
                  v5 = (__m128 *)i.m128_u64[0];
                  if ( v6 != (__m128 *)i.m128_u64[0] )
                    goto LABEL_13;
                  return v10 == 0;
                }
                v14 = (__m128 *)((char *)v14 + 4);
              }
              while ( v14 != v16 );
            }
            v12 = (__m128 *)((char *)v12 + 8);
          }
          return v10 == 0;
        }
        p_i = (__m128 *)((char *)p_i + 4);
      }
      while ( &i.m128_u32[3] != (unsigned __int32 *)p_i );
    }
    v5 = (__m128 *)((char *)v5 + 8);
  }
LABEL_9:
  v10 = 0;
  return v10 == 0;
}

