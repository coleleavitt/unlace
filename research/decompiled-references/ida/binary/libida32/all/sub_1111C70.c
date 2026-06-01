void __fastcall sub_1111C70(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __m128i *v5; // rbp
  size_t v6; // r12
  const void *v7; // r11
  __int64 m128i_i64; // r15
  size_t v9; // r14
  size_t v10; // rdx
  signed __int64 v11; // rax
  size_t v12; // r14
  const void *v13; // r12
  __m128i *i; // r15
  size_t v15; // r8
  size_t v16; // rdx
  signed __int64 v17; // rax
  __m128i *v18; // r8
  size_t v19; // r10
  size_t v20; // rdx
  signed __int64 v21; // rax
  __int64 v22; // rbp
  const __m128i *j; // r15
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i *v26; // rdx
  __m128i v27; // xmm2
  size_t v28; // r10
  const void *v29; // rcx
  size_t v30; // rdx
  int v31; // eax
  size_t v32; // rdx
  int v33; // eax
  const __m128i *v34; // rbp
  __int64 v35; // rax
  __int64 v36; // r12
  void *s1; // [rsp+0h] [rbp-A0h]
  __m128i *s1a; // [rsp+0h] [rbp-A0h]
  __int64 s1b; // [rsp+0h] [rbp-A0h]
  const void *v40; // [rsp+8h] [rbp-98h]
  __int64 v41; // [rsp+8h] [rbp-98h]
  __m128i *v42; // [rsp+8h] [rbp-98h]
  const void *v43; // [rsp+8h] [rbp-98h]
  size_t v44; // [rsp+8h] [rbp-98h]
  __int64 v45; // [rsp+10h] [rbp-90h]
  size_t v46; // [rsp+10h] [rbp-90h]
  __m128i *v47; // [rsp+18h] [rbp-88h]
  __m128i *v48; // [rsp+20h] [rbp-80h]
  __m128i *v49; // [rsp+28h] [rbp-78h]
  __int64 v50; // [rsp+30h] [rbp-70h]
  __m128i v51; // [rsp+38h] [rbp-68h] BYREF
  void *v52; // [rsp+48h] [rbp-58h] BYREF
  __int64 v53; // [rsp+50h] [rbp-50h]
  _OWORD v54[4]; // [rsp+58h] [rbp-48h] BYREF

  v3 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 512 )
    return;
  v4 = a3;
  if ( !a3 )
  {
    v48 = a2;
    goto LABEL_35;
  }
  v5 = a2;
  v47 = a1 + 2;
  do
  {
    v6 = a1[2].m128i_u64[1];
    --v4;
    v7 = (const void *)a1[2].m128i_i64[0];
    m128i_i64 = (__int64)a1[2
                          * ((__int64)((((char *)v5 - (char *)a1) >> 5)
                                     + ((unsigned __int64)((char *)v5 - (char *)a1) >> 63)) >> 1)].m128i_i64;
    v9 = *(_QWORD *)(m128i_i64 + 8);
    v10 = v9;
    s1 = *(void **)m128i_i64;
    if ( v6 <= v9 )
      v10 = a1[2].m128i_u64[1];
    if ( !v10
      || (v40 = (const void *)a1[2].m128i_i64[0],
          LODWORD(v11) = memcmp(v7, *(const void **)m128i_i64, v10),
          v7 = v40,
          !(_DWORD)v11) )
    {
      v11 = v6 - v9;
      if ( (__int64)(v6 - v9) > 0x7FFFFFFF )
        goto LABEL_45;
      if ( v11 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_11;
    }
    if ( (int)v11 < 0 )
    {
LABEL_11:
      if ( sub_9A0E10(m128i_i64, (__int64)v5[-2].m128i_i64) < 0 )
        goto LABEL_62;
      if ( sub_9A0E10((__int64)v47, (__int64)v5[-2].m128i_i64) < 0 )
        goto LABEL_61;
      goto LABEL_13;
    }
LABEL_45:
    v28 = v5[-2].m128i_u64[1];
    v29 = (const void *)v5[-2].m128i_i64[0];
    v30 = v28;
    if ( v6 <= v28 )
      v30 = v6;
    if ( v30 )
    {
      v46 = v5[-2].m128i_u64[1];
      v43 = (const void *)v5[-2].m128i_i64[0];
      v31 = memcmp(v7, v43, v30);
      v29 = v43;
      v28 = v46;
      if ( v31 )
        goto LABEL_52;
    }
    if ( (__int64)(v6 - v28) > 0x7FFFFFFF )
      goto LABEL_53;
    if ( (__int64)(v6 - v28) >= (__int64)0xFFFFFFFF80000000LL )
    {
      v31 = v6 - v28;
LABEL_52:
      if ( v31 < 0 )
        goto LABEL_13;
LABEL_53:
      v32 = v28;
      if ( v9 <= v28 )
        v32 = v9;
      if ( v32 && (v44 = v28, v33 = memcmp(s1, v29, v32), v28 = v44, v33) )
      {
LABEL_60:
        if ( v33 >= 0 )
        {
LABEL_62:
          sub_A96780(a1, (__m128i *)m128i_i64);
          goto LABEL_14;
        }
      }
      else
      {
        if ( (__int64)(v9 - v28) > 0x7FFFFFFF )
          goto LABEL_62;
        if ( (__int64)(v9 - v28) >= (__int64)0xFFFFFFFF80000000LL )
        {
          v33 = v9 - v28;
          goto LABEL_60;
        }
      }
LABEL_61:
      sub_A96780(a1, v5 - 2);
      goto LABEL_14;
    }
LABEL_13:
    sub_A96780(a1, v47);
LABEL_14:
    v12 = a1->m128i_u64[1];
    v13 = (const void *)a1->m128i_i64[0];
    s1a = v5;
    for ( i = a1 + 2; ; i += 2 )
    {
      v15 = i->m128i_u64[1];
      v16 = v12;
      v48 = i;
      if ( v15 <= v12 )
        v16 = i->m128i_u64[1];
      if ( !v16
        || (v41 = i->m128i_i64[1],
            LODWORD(v17) = memcmp((const void *)i->m128i_i64[0], v13, v16),
            v15 = v41,
            !(_DWORD)v17) )
      {
        v17 = v15 - v12;
        if ( (__int64)(v15 - v12) > 0x7FFFFFFF )
          goto LABEL_23;
        if ( v17 < (__int64)0xFFFFFFFF80000000LL )
          continue;
      }
      if ( (int)v17 < 0 )
        continue;
LABEL_23:
      v18 = s1a;
      do
      {
        do
        {
          v18 -= 2;
          v19 = v18->m128i_u64[1];
          v20 = v12;
          s1a = v18;
          if ( v19 <= v12 )
            v20 = v18->m128i_u64[1];
          if ( v20 )
          {
            v45 = v18->m128i_i64[1];
            v42 = v18;
            LODWORD(v21) = memcmp(v13, (const void *)v18->m128i_i64[0], v20);
            v18 = v42;
            v19 = v45;
            if ( (_DWORD)v21 )
              break;
          }
          v21 = v12 - v19;
          if ( (__int64)(v12 - v19) > 0x7FFFFFFF )
            goto LABEL_31;
        }
        while ( v21 < (__int64)0xFFFFFFFF80000000LL );
      }
      while ( (int)v21 < 0 );
LABEL_31:
      if ( i >= v18 )
        break;
      sub_A96780(i, v18);
      v12 = a1->m128i_u64[1];
      v13 = (const void *)a1->m128i_i64[0];
    }
    sub_1111C70(i, v5, v4);
    v3 = (char *)i - (char *)a1;
    if ( (char *)i - (char *)a1 <= 512 )
      return;
    v5 = i;
  }
  while ( v4 );
LABEL_35:
  s1b = v3 >> 5;
  v22 = ((v3 >> 5) - 2) >> 1;
  for ( j = &a1[2 * v22 + 1]; ; j -= 2 )
  {
    v26 = (__m128i *)j[-1].m128i_i64[0];
    if ( v26 == j )
    {
      v27 = _mm_loadu_si128(j);
      v25 = j[-1].m128i_i64[1];
      j->m128i_i8[0] = 0;
      j[-1].m128i_i64[1] = 0;
      v52 = v54;
      v51 = v27;
    }
    else
    {
      v24 = j->m128i_i64[0];
      v25 = j[-1].m128i_i64[1];
      j[-1].m128i_i64[0] = (__int64)j;
      v51.m128i_i64[0] = v24;
      j[-1].m128i_i64[1] = 0;
      j->m128i_i8[0] = 0;
      v52 = v54;
      if ( v26 != &v51 )
      {
        v52 = v26;
        *(_QWORD *)&v54[0] = v24;
        goto LABEL_38;
      }
    }
    v54[0] = _mm_load_si128(&v51);
LABEL_38:
    v53 = v25;
    v51.m128i_i8[0] = 0;
    sub_110B190((__int64)a1, v22, s1b, (__int64)&v52);
    if ( v52 != v54 )
      operator delete(v52);
    if ( !v22 )
      break;
    --v22;
  }
  v34 = v48 - 1;
  do
  {
    v49 = &v51;
    if ( (const __m128i *)v34[-1].m128i_i64[0] == v34 )
    {
      v51 = _mm_loadu_si128(v34);
    }
    else
    {
      v49 = (__m128i *)v34[-1].m128i_i64[0];
      v51.m128i_i64[0] = v34->m128i_i64[0];
    }
    v35 = v34[-1].m128i_i64[1];
    v34[-1].m128i_i64[0] = (__int64)v34;
    v34[-1].m128i_i64[1] = 0;
    v34->m128i_i8[0] = 0;
    v50 = v35;
    sub_9E6D90((__int64)v34[-1].m128i_i64, a1);
    v52 = v54;
    if ( v49 == &v51 )
    {
      v54[0] = _mm_load_si128(&v51);
    }
    else
    {
      v52 = v49;
      *(_QWORD *)&v54[0] = v51.m128i_i64[0];
    }
    v36 = (char *)&v34[-1] - (char *)a1;
    v53 = v50;
    v51.m128i_i8[0] = 0;
    sub_110B190((__int64)a1, 0, v36 >> 5, (__int64)&v52);
    if ( v52 != v54 )
      operator delete(v52);
    v34 -= 2;
  }
  while ( v36 > 32 );
}

