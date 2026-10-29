unsigned __int64 __fastcall sub_1244F90(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // r14
  __m128 *p_i; // r13
  __int64 v11; // rsi
  size_t v12; // rsi
  char *v13; // rbx
  __int64 v15; // r13
  __int64 v16; // rax
  const char **v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // r15
  __m128 *v21; // r14
  __int64 v22; // rsi
  __int64 *v23; // [rsp+8h] [rbp-60h] BYREF
  __m128 i; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+28h] [rbp-40h]

  i.m128_i32[0] = 2096;
  v1 = sub_21B6DA0(a1, &i, 1);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(v2 + 8LL * (unsigned int)v1);
  v4 = (_QWORD *)(v2 + 8 * HIDWORD(v1));
  if ( v3 == v4 )
    goto LABEL_5;
  while ( !*v3 || !(unsigned __int8)sub_21B9810(*v3, 2096) )
  {
    if ( v4 == ++v3 )
      goto LABEL_5;
  }
  if ( v4 == v3 )
  {
LABEL_5:
    i.m128_u64[0] = 0x64800000CC0LL;
    i.m128_i32[2] = 1607;
    v5 = sub_21B6DA0(a1, &i, 3);
    v6 = *(_QWORD *)(a1 + 8);
    v25 = 0x64800000CC0LL;
    v26 = 1607;
    v7 = (__int64 *)(v6 + 8LL * (unsigned int)v5);
    v8 = (__int64 *)(v6 + 8 * HIDWORD(v5));
    v23 = v8;
    for ( i = _mm_loadh_ps((const double *)&v23); v8 != v7; i.m128_u64[0] = (unsigned __int64)v7 )
    {
      v9 = *v7;
      p_i = &i;
      if ( *v7 )
      {
        do
        {
          v11 = p_i[1].m128_u32[0];
          if ( !(_DWORD)v11 )
            break;
          if ( (unsigned __int8)sub_21B9810(v9, v11) )
          {
            v23 = v8;
            v25 = 0x64800000CC0LL;
            v26 = 1607;
            i = _mm_loadh_ps((const double *)&v23);
            if ( v8 == v7 )
              goto LABEL_11;
LABEL_28:
            v18 = *(_QWORD *)(*v7 + 16);
            if ( !v18 )
              v18 = *v7;
            v19 = v7 + 1;
            *(_BYTE *)(v18 + 44) |= 1u;
            for ( i.m128_u64[0] = (unsigned __int64)v19; v8 != v19; i.m128_u64[0] = (unsigned __int64)v19 )
            {
              v20 = *v19;
              v21 = &i;
              if ( *v19 )
              {
                do
                {
                  v22 = v21[1].m128_u32[0];
                  if ( !(_DWORD)v22 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v20, v22) )
                  {
                    v7 = (__int64 *)i.m128_u64[0];
                    if ( (__int64 *)i.m128_u64[0] != v8 )
                      goto LABEL_28;
                    goto LABEL_36;
                  }
                  v21 = (__m128 *)((char *)v21 + 4);
                }
                while ( v21 != (__m128 *)&i.m128_u32[3] );
              }
              ++v19;
            }
LABEL_36:
            v12 = 1;
            v13 = "0";
            goto LABEL_12;
          }
          p_i = (__m128 *)((char *)p_i + 4);
        }
        while ( p_i != (__m128 *)&i.m128_u32[3] );
      }
      ++v7;
    }
LABEL_11:
    v12 = 0;
    v13 = (char *)&byte_22F0C30;
  }
  else
  {
    do
    {
      v15 = *v3;
      v16 = *(_QWORD *)(*v3 + 16LL);
      if ( !v16 )
        v16 = *v3;
      ++v3;
      *(_BYTE *)(v16 + 44) |= 1u;
      if ( v3 == v4 )
        break;
      while ( !*v3 || !(unsigned __int8)sub_21B9810(*v3, 2096) )
      {
        if ( v4 == ++v3 )
          goto LABEL_22;
      }
    }
    while ( v4 != v3 );
LABEL_22:
    v17 = *(const char ***)(v15 + 48);
    v12 = 0;
    v13 = (char *)*v17;
    if ( *v17 )
      v12 = strlen(*v17);
  }
LABEL_12:
  if ( !(unsigned __int8)sub_2247970(v13, v12, 10, &i) && i.m128_u64[0] == i.m128_u32[0] )
    return i.m128_u64[0] & 0xFFFFFF00FFFFFFFFLL | 0x100000000LL;
  else
    return 0;
}
