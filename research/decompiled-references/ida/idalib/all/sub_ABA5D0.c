void __fastcall sub_ABA5D0(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rcx
  __m128i *v4; // r12
  size_t v5; // rbp
  const void *v6; // r11
  __int64 m128i_i64; // r13
  size_t v8; // r15
  size_t v9; // rdx
  signed __int64 v10; // rax
  size_t v11; // r13
  const void *v12; // r15
  unsigned __int64 v13; // rbp
  __m128i *i; // r14
  signed __int64 v15; // r10
  size_t v16; // rdx
  signed __int64 v17; // rax
  size_t v18; // r10
  size_t v19; // rdx
  signed __int64 v20; // rax
  __int64 v21; // r14
  const __m128i *j; // r12
  __int64 v23; // rcx
  __int64 v24; // rsi
  __m128i *v25; // rdx
  __m128i v26; // xmm2
  size_t v27; // r14
  const void *v28; // rcx
  size_t v29; // rdx
  int v30; // eax
  size_t v31; // rdx
  int v32; // eax
  __m128i *v33; // r14
  __m128i *v34; // rbp
  __int64 v35; // rax
  __m128i *v36; // rax
  __int64 v37; // r15
  size_t v38; // rdx
  __int64 v39; // rax
  __int64 v40; // [rsp+0h] [rbp-98h]
  void *s1; // [rsp+8h] [rbp-90h]
  void *s1b; // [rsp+8h] [rbp-90h]
  void *s1c; // [rsp+8h] [rbp-90h]
  __int64 s1a; // [rsp+8h] [rbp-90h]
  const void *v45; // [rsp+10h] [rbp-88h]
  __m128i *v46; // [rsp+10h] [rbp-88h]
  const void *v47; // [rsp+10h] [rbp-88h]
  __m128i *v48; // [rsp+18h] [rbp-80h]
  __m128i *v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+28h] [rbp-70h]
  __m128i v51; // [rsp+30h] [rbp-68h] BYREF
  void *v52; // [rsp+40h] [rbp-58h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h]
  _OWORD v54[4]; // [rsp+50h] [rbp-48h] BYREF

  v3 = (char *)a2 - (char *)a1;
  v40 = a3;
  if ( (char *)a2 - (char *)a1 <= 512 )
    return;
  v4 = a2;
  if ( !a3 )
  {
    v46 = a2;
    goto LABEL_34;
  }
  v48 = a1 + 2;
  do
  {
    v5 = a1[2].m128i_u64[1];
    --v40;
    v6 = (const void *)a1[2].m128i_i64[0];
    m128i_i64 = (__int64)a1[2 * (v3 >> 6)].m128i_i64;
    v8 = *(_QWORD *)(m128i_i64 + 8);
    v9 = v8;
    s1 = *(void **)m128i_i64;
    if ( v5 <= v8 )
      v9 = a1[2].m128i_u64[1];
    if ( !v9
      || (v45 = (const void *)a1[2].m128i_i64[0],
          LODWORD(v10) = memcmp(v6, *(const void **)m128i_i64, v9),
          v6 = v45,
          !(_DWORD)v10) )
    {
      v10 = v5 - v8;
      if ( (__int64)(v5 - v8) > 0x7FFFFFFF )
        goto LABEL_44;
      if ( v10 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_11;
    }
    if ( (int)v10 < 0 )
    {
LABEL_11:
      if ( sub_9C4B50(m128i_i64, (__int64)v4[-2].m128i_i64) < 0 )
        goto LABEL_61;
      if ( sub_9C4B50((__int64)v48, (__int64)v4[-2].m128i_i64) < 0 )
        goto LABEL_60;
      goto LABEL_13;
    }
LABEL_44:
    v27 = v4[-2].m128i_u64[1];
    v28 = (const void *)v4[-2].m128i_i64[0];
    v29 = v27;
    if ( v5 <= v27 )
      v29 = v5;
    if ( v29 )
    {
      v47 = (const void *)v4[-2].m128i_i64[0];
      v30 = memcmp(v6, v47, v29);
      v28 = v47;
      if ( v30 )
        goto LABEL_51;
    }
    if ( (__int64)(v5 - v27) > 0x7FFFFFFF )
      goto LABEL_52;
    if ( (__int64)(v5 - v27) >= (__int64)0xFFFFFFFF80000000LL )
    {
      v30 = v5 - v27;
LABEL_51:
      if ( v30 < 0 )
        goto LABEL_13;
LABEL_52:
      v31 = v27;
      if ( v8 <= v27 )
        v31 = v8;
      if ( v31 && (v32 = memcmp(s1, v28, v31)) != 0 )
      {
LABEL_59:
        if ( v32 >= 0 )
        {
LABEL_61:
          sub_ABA4C0(a1, (__m128i *)m128i_i64);
          goto LABEL_14;
        }
      }
      else
      {
        if ( (__int64)(v8 - v27) > 0x7FFFFFFF )
          goto LABEL_61;
        if ( (__int64)(v8 - v27) >= (__int64)0xFFFFFFFF80000000LL )
        {
          v32 = v8 - v27;
          goto LABEL_59;
        }
      }
LABEL_60:
      sub_ABA4C0(a1, v4 - 2);
      goto LABEL_14;
    }
LABEL_13:
    sub_ABA4C0(a1, v48);
LABEL_14:
    v11 = a1->m128i_u64[1];
    v12 = (const void *)a1->m128i_i64[0];
    v13 = (unsigned __int64)v4;
    for ( i = a1 + 2; ; i += 2 )
    {
      v15 = i->m128i_i64[1];
      v46 = i;
      v16 = v15;
      if ( v11 <= v15 )
        v16 = v11;
      if ( v16 )
      {
        s1b = (void *)i->m128i_i64[1];
        LODWORD(v17) = memcmp((const void *)i->m128i_i64[0], v12, v16);
        v15 = (signed __int64)s1b;
        if ( (_DWORD)v17 )
          goto LABEL_22;
      }
      v17 = v15 - v11;
      if ( (__int64)(v15 - v11) > 0x7FFFFFFF )
        goto LABEL_23;
      if ( v17 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_22:
        if ( (int)v17 >= 0 )
          break;
      }
LABEL_15:
      ;
    }
    do
    {
      do
      {
LABEL_23:
        v13 -= 32LL;
        v18 = *(_QWORD *)(v13 + 8);
        v19 = v18;
        if ( v11 <= v18 )
          v19 = v11;
        if ( v19 )
        {
          s1c = *(void **)(v13 + 8);
          LODWORD(v20) = memcmp(v12, *(const void **)v13, v19);
          v18 = (size_t)s1c;
          if ( (_DWORD)v20 )
            break;
        }
        v20 = v11 - v18;
        if ( (__int64)(v11 - v18) > 0x7FFFFFFF )
          goto LABEL_30;
      }
      while ( v20 < (__int64)0xFFFFFFFF80000000LL );
    }
    while ( (int)v20 < 0 );
LABEL_30:
    if ( (unsigned __int64)i < v13 )
    {
      sub_ABA4C0(i, (__m128i *)v13);
      v11 = a1->m128i_u64[1];
      v12 = (const void *)a1->m128i_i64[0];
      goto LABEL_15;
    }
    sub_ABA5D0(i, v4, v40);
    v3 = (char *)i - (char *)a1;
    if ( (char *)i - (char *)a1 <= 512 )
      return;
    v4 = i;
  }
  while ( v40 );
LABEL_34:
  s1a = v3 >> 5;
  v21 = ((v3 >> 5) - 2) >> 1;
  for ( j = &a1[2 * v21 + 1]; ; j -= 2 )
  {
    v25 = (__m128i *)j[-1].m128i_i64[0];
    if ( v25 == j )
    {
      v26 = _mm_loadu_si128(j);
      v24 = j[-1].m128i_i64[1];
      j->m128i_i8[0] = 0;
      j[-1].m128i_i64[1] = 0;
      v52 = v54;
      v51 = v26;
    }
    else
    {
      v23 = j->m128i_i64[0];
      v24 = j[-1].m128i_i64[1];
      j[-1].m128i_i64[0] = (__int64)j;
      v51.m128i_i64[0] = v23;
      j[-1].m128i_i64[1] = 0;
      j->m128i_i8[0] = 0;
      v52 = v54;
      if ( v25 != &v51 )
      {
        v52 = v25;
        *(_QWORD *)&v54[0] = v23;
        goto LABEL_37;
      }
    }
    v54[0] = _mm_load_si128(&v51);
LABEL_37:
    v53 = v24;
    v51.m128i_i8[0] = 0;
    sub_A69760((__int64)a1, v21, s1a, (__int64)&v52);
    if ( v52 != v54 )
      operator delete(v52);
    if ( !v21 )
      break;
    --v21;
  }
  v33 = a1 + 1;
  v34 = v46 - 1;
  do
  {
    v49 = &v51;
    if ( (__m128i *)v34[-1].m128i_i64[0] == v34 )
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
    v50 = v35;
    v34->m128i_i8[0] = 0;
    if ( (__m128i *)a1->m128i_i64[0] == v33 )
    {
      v38 = a1->m128i_u64[1];
      if ( v38 )
      {
        if ( v38 == 1 )
          v34->m128i_i8[0] = a1[1].m128i_i8[0];
        else
          memcpy(v34, &a1[1], v38);
        v38 = a1->m128i_u64[1];
      }
      v39 = v34[-1].m128i_i64[0];
      v34[-1].m128i_i64[1] = v38;
      *(_BYTE *)(v39 + v38) = 0;
      v36 = (__m128i *)a1->m128i_i64[0];
    }
    else
    {
      v34[-1].m128i_i64[0] = a1->m128i_i64[0];
      v34[-1].m128i_i64[1] = a1->m128i_i64[1];
      v34->m128i_i64[0] = a1[1].m128i_i64[0];
      v36 = a1 + 1;
      a1->m128i_i64[0] = (__int64)v33;
    }
    a1->m128i_i64[1] = 0;
    v36->m128i_i8[0] = 0;
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
    v37 = (char *)&v34[-1] - (char *)a1;
    v53 = v50;
    v51.m128i_i8[0] = 0;
    sub_A69760((__int64)a1, 0, v37 >> 5, (__int64)&v52);
    if ( v52 != v54 )
      operator delete(v52);
    v34 -= 2;
  }
  while ( v37 > 32 );
}
