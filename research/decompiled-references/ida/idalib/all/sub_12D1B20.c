void __fastcall sub_12D1B20(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __m128i *v5; // r12
  void *v6; // rcx
  const void *v7; // r10
  __m128i *v8; // r15
  size_t v9; // rbp
  size_t v10; // rdx
  signed __int64 v11; // rax
  size_t v12; // r13
  const void *v13; // r11
  size_t v14; // rdx
  int v15; // eax
  size_t v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  size_t v19; // r15
  const void *v20; // r13
  __m128i *i; // rbp
  size_t v22; // r8
  size_t v23; // rdx
  signed __int64 v24; // rax
  __m128i *v25; // r8
  size_t v26; // r10
  size_t v27; // rdx
  signed __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r12
  const __m128i *j; // r15
  __int64 v32; // rcx
  __int64 v33; // rsi
  __m128i *v34; // rdx
  __m128i v35; // xmm2
  size_t v36; // r13
  const void *v37; // r11
  size_t v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  size_t v41; // rdx
  int v42; // eax
  __m128i *v43; // r13
  __m128i *v44; // r14
  __int64 v45; // rax
  __m128i *v46; // rax
  __int64 v47; // r12
  size_t v48; // rdx
  __int64 v49; // rax
  void *s1; // [rsp+0h] [rbp-A0h]
  void *s1b; // [rsp+0h] [rbp-A0h]
  __m128i *s1a; // [rsp+0h] [rbp-A0h]
  const void *v53; // [rsp+8h] [rbp-98h]
  const void *v54; // [rsp+8h] [rbp-98h]
  size_t v55; // [rsp+8h] [rbp-98h]
  __m128i *v56; // [rsp+8h] [rbp-98h]
  const void *v57; // [rsp+8h] [rbp-98h]
  __int64 v58; // [rsp+10h] [rbp-90h]
  void *v59; // [rsp+10h] [rbp-90h]
  size_t v60; // [rsp+10h] [rbp-90h]
  void *v61; // [rsp+10h] [rbp-90h]
  const void *v62; // [rsp+20h] [rbp-80h]
  __m128i *v63; // [rsp+20h] [rbp-80h]
  __m128i *v64; // [rsp+28h] [rbp-78h]
  __int64 v65; // [rsp+30h] [rbp-70h]
  __m128i v66; // [rsp+38h] [rbp-68h] BYREF
  void *v67; // [rsp+48h] [rbp-58h] BYREF
  __int64 v68; // [rsp+50h] [rbp-50h]
  _OWORD v69[4]; // [rsp+58h] [rbp-48h] BYREF

  v3 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 512 )
    return;
  v4 = a3;
  if ( !a3 )
  {
    v63 = a2;
    goto LABEL_50;
  }
  v5 = a2;
  do
  {
    v6 = (void *)a1[2].m128i_i64[1];
    --v4;
    v7 = (const void *)a1[2].m128i_i64[0];
    v8 = &a1[2
           * ((__int64)((((char *)v5 - (char *)a1) >> 5) + ((unsigned __int64)((char *)v5 - (char *)a1) >> 63)) >> 1)];
    v9 = v8->m128i_u64[1];
    v10 = v9;
    s1 = (void *)v8->m128i_i64[0];
    if ( (unsigned __int64)v6 <= v9 )
      v10 = a1[2].m128i_u64[1];
    if ( v10 )
    {
      v58 = a1[2].m128i_i64[1];
      v53 = (const void *)a1[2].m128i_i64[0];
      LODWORD(v11) = memcmp(v7, (const void *)v8->m128i_i64[0], v10);
      v7 = v53;
      v6 = (void *)v58;
      if ( (_DWORD)v11 )
        goto LABEL_10;
    }
    v11 = (signed __int64)v6 - v9;
    if ( (__int64)((__int64)v6 - v9) > 0x7FFFFFFF )
      goto LABEL_60;
    if ( v11 >= (__int64)0xFFFFFFFF80000000LL )
    {
LABEL_10:
      if ( (int)v11 >= 0 )
      {
LABEL_60:
        v36 = v5[-2].m128i_u64[1];
        v37 = (const void *)v5[-2].m128i_i64[0];
        v38 = v36;
        if ( (unsigned __int64)v6 <= v36 )
          v38 = (size_t)v6;
        if ( !v38
          || (v61 = v6, v57 = (const void *)v5[-2].m128i_i64[0], v39 = memcmp(v7, v57, v38), v37 = v57, v6 = v61, !v39) )
        {
          v40 = (__int64)v6 - v36;
          if ( v40 > 0x7FFFFFFF )
          {
LABEL_68:
            v41 = v36;
            if ( v9 <= v36 )
              v41 = v9;
            if ( !v41 || (v42 = memcmp(s1, v37, v41)) == 0 )
            {
              if ( (__int64)(v9 - v36) > 0x7FFFFFFF )
                goto LABEL_76;
              if ( (__int64)(v9 - v36) < (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_27;
              v42 = v9 - v36;
            }
            if ( v42 >= 0 )
            {
LABEL_76:
              sub_ABA4C0(a1, v8);
              goto LABEL_28;
            }
            goto LABEL_27;
          }
          if ( v40 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_47;
          v39 = v40;
        }
        if ( v39 < 0 )
        {
LABEL_47:
          sub_ABA4C0(a1, a1 + 2);
          goto LABEL_28;
        }
        goto LABEL_68;
      }
    }
    v12 = v5[-2].m128i_u64[1];
    v13 = (const void *)v5[-2].m128i_i64[0];
    v14 = v12;
    if ( v9 <= v12 )
      v14 = v9;
    if ( v14 )
    {
      v62 = v7;
      v59 = v6;
      v54 = (const void *)v5[-2].m128i_i64[0];
      v15 = memcmp(s1, v54, v14);
      v13 = v54;
      v6 = v59;
      v7 = v62;
      if ( v15 )
        goto LABEL_18;
    }
    if ( (__int64)(v9 - v12) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v9 - v12) < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_76;
      v15 = v9 - v12;
LABEL_18:
      if ( v15 < 0 )
        goto LABEL_76;
    }
    v16 = v12;
    if ( (unsigned __int64)v6 <= v12 )
      v16 = (size_t)v6;
    if ( !v16 || (s1b = v6, v17 = memcmp(v7, v13, v16), v6 = s1b, !v17) )
    {
      v18 = (__int64)v6 - v12;
      if ( v18 > 0x7FFFFFFF )
        goto LABEL_47;
      if ( v18 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_27;
      v17 = v18;
    }
    if ( v17 >= 0 )
      goto LABEL_47;
LABEL_27:
    sub_ABA4C0(a1, v5 - 2);
LABEL_28:
    v19 = a1->m128i_u64[1];
    v20 = (const void *)a1->m128i_i64[0];
    s1a = v5;
    for ( i = a1 + 2; ; i += 2 )
    {
      v22 = i->m128i_u64[1];
      v63 = i;
      v23 = v22;
      if ( v19 <= v22 )
        v23 = v19;
      if ( !v23
        || (v55 = i->m128i_u64[1],
            LODWORD(v24) = memcmp((const void *)i->m128i_i64[0], v20, v23),
            v22 = v55,
            !(_DWORD)v24) )
      {
        v24 = v22 - v19;
        if ( (__int64)(v22 - v19) > 0x7FFFFFFF )
          goto LABEL_37;
        if ( v24 < (__int64)0xFFFFFFFF80000000LL )
          continue;
      }
      if ( (int)v24 < 0 )
        continue;
LABEL_37:
      v25 = s1a;
      do
      {
        do
        {
          v25 -= 2;
          v26 = v25->m128i_u64[1];
          s1a = v25;
          v27 = v26;
          if ( v19 <= v26 )
            v27 = v19;
          if ( v27 )
          {
            v60 = v25->m128i_u64[1];
            v56 = v25;
            LODWORD(v28) = memcmp(v20, (const void *)v25->m128i_i64[0], v27);
            v25 = v56;
            v26 = v60;
            if ( (_DWORD)v28 )
              break;
          }
          v28 = v19 - v26;
          if ( (__int64)(v19 - v26) > 0x7FFFFFFF )
            goto LABEL_45;
        }
        while ( v28 < (__int64)0xFFFFFFFF80000000LL );
      }
      while ( (int)v28 < 0 );
LABEL_45:
      if ( i >= v25 )
        break;
      sub_ABA4C0(i, v25);
      v19 = a1->m128i_u64[1];
      v20 = (const void *)a1->m128i_i64[0];
    }
    sub_12D1B20(i, v5, v4);
    v3 = (char *)i - (char *)a1;
    if ( (char *)i - (char *)a1 <= 512 )
      return;
    v5 = i;
  }
  while ( v4 );
LABEL_50:
  v29 = v3 >> 5;
  v30 = ((v3 >> 5) - 2) >> 1;
  for ( j = &a1[2 * v30 + 1]; ; j -= 2 )
  {
    v34 = (__m128i *)j[-1].m128i_i64[0];
    if ( v34 == j )
    {
      v35 = _mm_loadu_si128(j);
      v33 = j[-1].m128i_i64[1];
      j->m128i_i8[0] = 0;
      j[-1].m128i_i64[1] = 0;
      v67 = v69;
      v66 = v35;
    }
    else
    {
      v32 = j->m128i_i64[0];
      v33 = j[-1].m128i_i64[1];
      j[-1].m128i_i64[0] = (__int64)j;
      v66.m128i_i64[0] = v32;
      j[-1].m128i_i64[1] = 0;
      j->m128i_i8[0] = 0;
      v67 = v69;
      if ( v34 != &v66 )
      {
        v67 = v34;
        *(_QWORD *)&v69[0] = v32;
        goto LABEL_53;
      }
    }
    v69[0] = _mm_load_si128(&v66);
LABEL_53:
    v68 = v33;
    v66.m128i_i8[0] = 0;
    sub_12CDDB0((__int64)a1, v30, v29, (__int64)&v67);
    if ( v67 != v69 )
      operator delete(v67);
    if ( !v30 )
      break;
    --v30;
  }
  v43 = a1 + 1;
  v44 = v63 - 1;
  do
  {
    v64 = &v66;
    if ( (__m128i *)v44[-1].m128i_i64[0] == v44 )
    {
      v66 = _mm_loadu_si128(v44);
    }
    else
    {
      v64 = (__m128i *)v44[-1].m128i_i64[0];
      v66.m128i_i64[0] = v44->m128i_i64[0];
    }
    v45 = v44[-1].m128i_i64[1];
    v44[-1].m128i_i64[0] = (__int64)v44;
    v44[-1].m128i_i64[1] = 0;
    v65 = v45;
    v44->m128i_i8[0] = 0;
    if ( v43 == (__m128i *)a1->m128i_i64[0] )
    {
      v48 = a1->m128i_u64[1];
      if ( v48 )
      {
        if ( v48 == 1 )
          v44->m128i_i8[0] = a1[1].m128i_i8[0];
        else
          memcpy(v44, &a1[1], v48);
        v48 = a1->m128i_u64[1];
      }
      v49 = v44[-1].m128i_i64[0];
      v44[-1].m128i_i64[1] = v48;
      *(_BYTE *)(v49 + v48) = 0;
      v46 = (__m128i *)a1->m128i_i64[0];
    }
    else
    {
      v44[-1].m128i_i64[0] = a1->m128i_i64[0];
      v44[-1].m128i_i64[1] = a1->m128i_i64[1];
      v44->m128i_i64[0] = a1[1].m128i_i64[0];
      v46 = a1 + 1;
      a1->m128i_i64[0] = (__int64)v43;
    }
    a1->m128i_i64[1] = 0;
    v46->m128i_i8[0] = 0;
    v67 = v69;
    if ( v64 == &v66 )
    {
      v69[0] = _mm_load_si128(&v66);
    }
    else
    {
      v67 = v64;
      *(_QWORD *)&v69[0] = v66.m128i_i64[0];
    }
    v47 = (char *)&v44[-1] - (char *)a1;
    v68 = v65;
    v66.m128i_i8[0] = 0;
    sub_12CDDB0((__int64)a1, 0, v47 >> 5, (__int64)&v67);
    if ( v67 != v69 )
      operator delete(v67);
    v44 -= 2;
  }
  while ( v47 > 32 );
}
