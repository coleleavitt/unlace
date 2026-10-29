__int64 __fastcall sub_113FA70(__int64 a1, unsigned int a2, unsigned int a3, __int32 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  char *v9; // rbx
  __int64 v10; // r13
  __m128 *p_i; // r15
  __int64 v12; // rsi
  __int64 v13; // r13
  char *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r15
  __m128 *v18; // r14
  __int64 v19; // rsi
  __m128 *v20; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v21; // [rsp+14h] [rbp-64h]
  unsigned int v22; // [rsp+18h] [rbp-60h]
  __int32 v23; // [rsp+1Ch] [rbp-5Ch]
  __m128 i; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-48h]
  unsigned int v26; // [rsp+34h] [rbp-44h]
  __int32 v27; // [rsp+38h] [rbp-40h]

  v21 = a2;
  v22 = a3;
  i.m128_u64[0] = __PAIR64__(a3, a2);
  v23 = a4;
  i.m128_i32[2] = a4;
  v6 = sub_21B6DA0(a1, &i, 3);
  v7 = *(_QWORD *)(a1 + 8);
  v25 = a2;
  v26 = a3;
  v8 = v7 + 8LL * (unsigned int)v6;
  v9 = (char *)(v7 + 8 * HIDWORD(v6));
  v27 = a4;
  v20 = (__m128 *)v9;
  for ( i = _mm_loadh_ps((const double *)&v20); v9 != (char *)v8; i.m128_u64[0] = v8 )
  {
    v10 = *(_QWORD *)v8;
    p_i = &i;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        v12 = p_i[1].m128_u32[0];
        if ( !(_DWORD)v12 )
          break;
        if ( (unsigned __int8)sub_21B9810(v10, v12) )
        {
          v20 = (__m128 *)v9;
          v25 = v21;
          v26 = v22;
          i = _mm_loadh_ps((const double *)&v20);
          v27 = v23;
          if ( v9 == (char *)v8 )
            return 0;
          v20 = (__m128 *)&i.m128_u32[3];
LABEL_11:
          v13 = *(_QWORD *)v8;
          v15 = (char *)(v8 + 8);
          v16 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
          if ( !v16 )
            v16 = *(_QWORD *)v8;
          *(_BYTE *)(v16 + 44) |= 1u;
          for ( i.m128_u64[0] = v8 + 8; v9 != v15; i.m128_u64[0] = (unsigned __int64)v15 )
          {
            v17 = *(_QWORD *)v15;
            v18 = &i;
            if ( *(_QWORD *)v15 )
            {
              do
              {
                v19 = v18[1].m128_u32[0];
                if ( !(_DWORD)v19 )
                  break;
                if ( (unsigned __int8)sub_21B9810(v17, v19) )
                {
                  v8 = i.m128_u64[0];
                  if ( v9 != (char *)i.m128_u64[0] )
                    goto LABEL_11;
                  return v13;
                }
                v18 = (__m128 *)((char *)v18 + 4);
              }
              while ( v18 != v20 );
            }
            v15 += 8;
          }
          return v13;
        }
        p_i = (__m128 *)((char *)p_i + 4);
      }
      while ( &i.m128_u32[3] != (unsigned __int32 *)p_i );
    }
    v8 += 8LL;
  }
  return 0;
}
