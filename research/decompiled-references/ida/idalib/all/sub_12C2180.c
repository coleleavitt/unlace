void __fastcall sub_12C2180(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __m128 *v6; // rbx
  __m128 *v7; // r15
  unsigned __int64 v8; // r14
  __m128 *v9; // r13
  __int64 v10; // rsi
  int v11; // eax
  unsigned __int64 v12; // rax
  __m128 *v13; // rbx
  unsigned __int64 v14; // r14
  __m128 *v15; // r13
  __int64 v16; // rsi
  __m128 *v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  __m128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+38h] [rbp-40h]

  v18 = a1;
  v19 = a3;
  v20.m128_u64[0] = 0xBED00000BEFLL;
  v20.m128_i32[2] = 3052;
  v4 = sub_21B6DA0(a2, &v20, 3);
  v5 = *(_QWORD *)(a2 + 8);
  v21 = 0xBED00000BEFLL;
  v22 = 3052;
  v6 = (__m128 *)(v5 + 8LL * (unsigned int)v4);
  v7 = (__m128 *)(v5 + 8 * HIDWORD(v4));
  v17 = v7;
  v20 = _mm_loadh_ps((const double *)&v17);
  if ( v6 != v7 )
  {
    v17 = (__m128 *)&v20.m128_u32[3];
    do
    {
      v8 = v6->m128_u64[0];
      v9 = &v20;
      if ( v6->m128_u64[0] )
      {
        do
        {
          v10 = v9[1].m128_u32[0];
          if ( !(_DWORD)v10 )
            break;
          if ( (unsigned __int8)sub_21B9810(v8, v10) )
          {
            v17 = v7;
            v21 = 0xBED00000BEFLL;
            v22 = 3052;
            v20 = _mm_loadh_ps((const double *)&v17);
            if ( v7 == v6 )
              goto LABEL_8;
LABEL_12:
            v12 = v6->m128_u64[0];
            if ( *(_QWORD *)(v6->m128_u64[0] + 16) )
              v12 = *(_QWORD *)(v6->m128_u64[0] + 16);
            v13 = (__m128 *)&v6->m128_u16[4];
            *(_BYTE *)(v12 + 44) |= 1u;
            for ( v20.m128_u64[0] = (unsigned __int64)v13; v7 != v13; v20.m128_u64[0] = (unsigned __int64)v13 )
            {
              v14 = v13->m128_u64[0];
              v15 = &v20;
              if ( v13->m128_u64[0] )
              {
                do
                {
                  v16 = v15[1].m128_u32[0];
                  if ( !(_DWORD)v16 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v14, v16) )
                  {
                    v6 = (__m128 *)v20.m128_u64[0];
                    if ( v7 != (__m128 *)v20.m128_u64[0] )
                      goto LABEL_12;
                    return;
                  }
                  v15 = (__m128 *)((char *)v15 + 4);
                }
                while ( v15 != (__m128 *)&v20.m128_u32[3] );
              }
              v13 = (__m128 *)((char *)v13 + 8);
            }
            return;
          }
          v9 = (__m128 *)((char *)v9 + 4);
        }
        while ( v9 != v17 );
      }
      v6 = (__m128 *)((char *)v6 + 8);
      v20.m128_u64[0] = (unsigned __int64)v6;
    }
    while ( v7 != v6 );
  }
LABEL_8:
  v11 = sub_12B9180(v18, a2);
  if ( v11 )
  {
    if ( v11 == 1 )
      sub_12C0D70(v18, a2, v19);
  }
  else
  {
    sub_12BF8C0(v18, a2, v19);
  }
}
