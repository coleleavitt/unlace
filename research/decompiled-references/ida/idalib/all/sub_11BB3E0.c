__int64 __fastcall sub_11BB3E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __m128 *v5; // rbx
  __m128 *v6; // r15
  unsigned __int64 v7; // r12
  __m128 *v8; // r14
  __int64 v9; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  __m128 *v13; // rbx
  unsigned __int64 v14; // r14
  __m128 *v15; // rcx
  __int64 v16; // rsi
  char v17; // dl
  const char **v18; // rax
  size_t v19; // rsi
  const char *v20; // rbx
  __int32 v21; // ebx
  unsigned int v22; // edx
  __m128 *v23; // [rsp+8h] [rbp-C0h] BYREF
  char *v24; // [rsp+10h] [rbp-B8h]
  __int64 v25; // [rsp+18h] [rbp-B0h]
  void *v26[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-98h] BYREF
  __m128 v28; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+50h] [rbp-78h]
  int v30; // [rsp+58h] [rbp-70h]

  v25 = a1;
  v28.m128_u64[0] = 0x19000000191LL;
  v28.m128_i32[2] = 1005;
  v3 = sub_21B6DA0(a2, &v28, 3);
  v4 = *(_QWORD *)(a2 + 8);
  v29 = 0x19000000191LL;
  v30 = 1005;
  v5 = (__m128 *)(v4 + 8LL * (unsigned int)v3);
  v6 = (__m128 *)(v4 + 8 * HIDWORD(v3));
  v23 = v6;
  v28 = _mm_loadh_ps((const double *)&v23);
  if ( v5 != v6 )
  {
    v23 = (__m128 *)&v28.m128_u32[3];
    do
    {
      v7 = v5->m128_u64[0];
      v8 = &v28;
      if ( v5->m128_u64[0] )
      {
        do
        {
          v9 = v8[1].m128_u32[0];
          if ( !(_DWORD)v9 )
            break;
          if ( (unsigned __int8)sub_21B9810(v7, v9) )
          {
            v23 = v6;
            v29 = 0x19000000191LL;
            v30 = 1005;
            v28 = _mm_loadh_ps((const double *)&v23);
            if ( v6 == v5 )
              return 0;
            v24 = &v28.m128_i8[12];
LABEL_12:
            v11 = v5->m128_u64[0];
            v12 = *(_QWORD *)(v5->m128_u64[0] + 16);
            if ( !v12 )
              v12 = v5->m128_u64[0];
            v13 = (__m128 *)&v5->m128_u16[4];
            *(_BYTE *)(v12 + 44) |= 1u;
            for ( v28.m128_u64[0] = (unsigned __int64)v13; v6 != v13; v28.m128_u64[0] = (unsigned __int64)v13 )
            {
              v14 = v13->m128_u64[0];
              v15 = &v28;
              if ( v13->m128_u64[0] )
              {
                do
                {
                  v16 = v15[1].m128_u32[0];
                  v23 = v15;
                  if ( !(_DWORD)v16 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v14, v16) )
                  {
                    v5 = (__m128 *)v28.m128_u64[0];
                    if ( v6 != (__m128 *)v28.m128_u64[0] )
                      goto LABEL_12;
                    goto LABEL_20;
                  }
                  v15 = (__m128 *)&v23->m128_i16[2];
                }
                while ( v24 != (char *)&v23->m128_i16[2] );
              }
              v13 = (__m128 *)((char *)v13 + 8);
            }
LABEL_20:
            if ( (unsigned __int8)sub_21B9810(v11, 1005) )
              return 0;
            v17 = sub_21B9810(v11, 401);
            result = 0;
            if ( v17 )
              return result;
            v18 = *(const char ***)(v11 + 48);
            v19 = 0;
            v20 = *v18;
            if ( *v18 )
              v19 = j__strlen(*v18);
            if ( (unsigned __int8)sub_2247970(v20, v19, 10, &v28) || v28.m128_u32[0] != v28.m128_u64[0] )
            {
              v21 = 0;
            }
            else
            {
              v21 = v28.m128_i32[0];
              if ( v28.m128_u32[0] <= (unsigned __int64)&stru_10000 )
              {
                if ( !v28.m128_i32[0] )
                  return 0;
                result = (unsigned int)(v28.m128_i32[0] - 1);
                if ( v28.m128_i32[0] != 1 )
                {
                  _BitScanReverse(&v22, result);
                  return 32 - (v22 ^ 0x1F);
                }
                return result;
              }
            }
            sub_FC70B0((__int64)&v28, **(_QWORD **)(v25 + 8), 0, 382);
            sub_21B5FF0(v26, v11, a2);
            sub_AEC220((unsigned __int8 **)&v28, (_BYTE *)v26[0], (signed __int64)v26[1]);
            sub_AE9DF0((unsigned __int8 **)&v28, **(_QWORD **)(v11 + 48), 1u);
            if ( v26[0] != &v27 )
              operator delete(v26[0]);
            sub_AEA040((__int64)&v28);
            if ( v21 )
              return 16;
            return 0;
          }
          v8 = (__m128 *)((char *)v8 + 4);
        }
        while ( v8 != v23 );
      }
      v5 = (__m128 *)((char *)v5 + 8);
      v28.m128_u64[0] = (unsigned __int64)v5;
    }
    while ( v6 != v5 );
  }
  return 0;
}
