unsigned __int64 __fastcall sub_1270940(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __m128 *v4; // rbx
  __m128 *v5; // rbp
  unsigned __int64 v6; // r14
  __m128 *p_i; // r13
  __int64 v8; // rsi
  unsigned int v9; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  __m128 *v13; // rbx
  unsigned __int64 v14; // r14
  __m128 *v15; // r15
  __int64 v16; // rsi
  __m128 *v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h]
  __m128 i; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+28h] [rbp-40h]

  v18 = a1;
  i.m128_u64[0] = 0x6FE00000710LL;
  i.m128_i32[2] = 641;
  v2 = sub_21B6DA0(a2, &i, 3);
  v3 = *(_QWORD *)(a2 + 8);
  v20 = 0x6FE00000710LL;
  v21 = 641;
  v4 = (__m128 *)(v3 + 8LL * (unsigned int)v2);
  v5 = (__m128 *)(v3 + 8 * HIDWORD(v2));
  v17 = v5;
  for ( i = _mm_loadh_ps((const double *)&v17); v5 != v4; i.m128_u64[0] = (unsigned __int64)v4 )
  {
    v6 = v4->m128_u64[0];
    p_i = &i;
    if ( v4->m128_u64[0] )
    {
      do
      {
        v8 = p_i[1].m128_u32[0];
        if ( !(_DWORD)v8 )
          break;
        if ( (unsigned __int8)sub_21B9810(v6, v8) )
        {
          v17 = v5;
          v20 = 0x6FE00000710LL;
          v21 = 641;
          i = _mm_loadh_ps((const double *)&v17);
          if ( v5 != v4 )
          {
            v17 = (__m128 *)&i.m128_u32[3];
LABEL_12:
            v11 = v4->m128_u64[0];
            v12 = *(_QWORD *)(v4->m128_u64[0] + 16);
            if ( !v12 )
              v12 = v4->m128_u64[0];
            v13 = (__m128 *)&v4->m128_u16[4];
            *(_BYTE *)(v12 + 44) |= 1u;
            for ( i.m128_u64[0] = (unsigned __int64)v13; v5 != v13; i.m128_u64[0] = (unsigned __int64)v13 )
            {
              v14 = v13->m128_u64[0];
              v15 = &i;
              if ( v13->m128_u64[0] )
              {
                do
                {
                  v16 = v15[1].m128_u32[0];
                  if ( !(_DWORD)v16 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v14, v16) )
                  {
                    v4 = (__m128 *)i.m128_u64[0];
                    if ( v5 != (__m128 *)i.m128_u64[0] )
                      goto LABEL_12;
                    goto LABEL_20;
                  }
                  v15 = (__m128 *)((char *)v15 + 4);
                }
                while ( v15 != v17 );
              }
              v13 = (__m128 *)((char *)v13 + 8);
            }
LABEL_20:
            if ( (unsigned __int8)sub_21B9810(v11, 1790) )
              return 2;
          }
          goto LABEL_7;
        }
        p_i = (__m128 *)((char *)p_i + 4);
      }
      while ( &i.m128_u32[3] != (unsigned __int32 *)p_i );
    }
    v4 = (__m128 *)((char *)v4 + 8);
  }
LABEL_7:
  v9 = *(_DWORD *)(v18 + 48);
  result = 0;
  if ( v9 <= 0x26 )
    return 2 * ((0x480000000AuLL >> v9) & 1);
  return result;
}
