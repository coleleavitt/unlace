void __fastcall sub_226BFE0(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *v4; // r15
  __m128i *v5; // rbx
  size_t v6; // r14
  void *v7; // r8
  char *v8; // r13
  const void **v9; // r12
  __int64 *v10; // rcx
  size_t v11; // rdx
  const void *v12; // rsi
  const void *v13; // rdi
  signed __int64 v14; // rax
  void *v15; // rax
  unsigned __int64 v16; // r12
  __m128i *v17; // r14
  size_t v18; // r15
  __m128i *v19; // r13
  size_t v20; // rdx
  signed __int64 v21; // rax
  size_t v22; // rbx
  void **j; // rbp
  size_t v24; // r12
  size_t v25; // rdx
  signed __int64 v26; // rax
  __m128i *v27; // r9
  __int64 v28; // rax
  __m128i *v29; // rax
  size_t v30; // rax
  _BYTE *v31; // r13
  _BYTE *v32; // rax
  __m128i *v33; // r12
  __int64 v34; // rax
  __m128i *v35; // rdi
  __int64 v36; // rdx
  _BYTE *v37; // rdi
  __m128 v38; // xmm0
  __int64 v39; // rdx
  __m128i *v40; // rdi
  __m128 v41; // xmm0
  __int64 v42; // rax
  __m128i *v43; // rdi
  size_t v44; // rdx
  size_t v45; // rdx
  size_t v46; // rdx
  size_t v47; // rdx
  __m128i *v48; // rax
  __m128i *v49; // r14
  unsigned __int64 v50; // rax
  __int64 v51; // rbx
  const __m128i *i; // r15
  __int64 v53; // rdx
  size_t v54; // r8
  __m128i *v55; // rdx
  __int64 v56; // rdi
  size_t v57; // rdi
  __int8 v58; // si
  __m128i *v59; // rcx
  void *v60; // rcx
  size_t v61; // rdx
  const void *v62; // rsi
  signed __int64 v63; // rax
  __int64 v64; // r15
  void *v65; // r12
  void *v66; // rbp
  const __m128i *v67; // r13
  char *v68; // r14
  __m128i *v69; // rax
  __int64 v70; // rax
  __m128i *v71; // rdx
  size_t v72; // rdx
  __int8 v73; // al
  size_t v74; // rax
  __int64 v75; // rbx
  __int64 v76; // [rsp+0h] [rbp-128h]
  char *v77; // [rsp+0h] [rbp-128h]
  void *s2; // [rsp+8h] [rbp-120h] BYREF
  char *v79; // [rsp+10h] [rbp-118h]
  __m128i *v80; // [rsp+18h] [rbp-110h]
  void **v81; // [rsp+20h] [rbp-108h]
  __m128i *v82; // [rsp+28h] [rbp-100h]
  __int64 v83; // [rsp+30h] [rbp-F8h]
  void *v84; // [rsp+38h] [rbp-F0h]
  __m128i *v85; // [rsp+40h] [rbp-E8h]
  __int64 *v86; // [rsp+48h] [rbp-E0h]
  void *v87; // [rsp+50h] [rbp-D8h] BYREF
  size_t v88; // [rsp+58h] [rbp-D0h]
  __m128i v89; // [rsp+60h] [rbp-C8h] BYREF
  void *v90; // [rsp+70h] [rbp-B8h]
  size_t v91; // [rsp+78h] [rbp-B0h]
  __m128i v92; // [rsp+80h] [rbp-A8h] BYREF
  __int8 v93; // [rsp+90h] [rbp-98h]
  void *v94; // [rsp+A0h] [rbp-88h] BYREF
  size_t v95; // [rsp+A8h] [rbp-80h]
  __m128i v96; // [rsp+B0h] [rbp-78h] BYREF
  void *src; // [rsp+C0h] [rbp-68h]
  size_t n; // [rsp+C8h] [rbp-60h]
  __m128i v99; // [rsp+D0h] [rbp-58h] BYREF
  char v100; // [rsp+E0h] [rbp-48h]

  v3 = (char *)a2 - (char *)a1;
  v83 = a3;
  v79 = (char *)a2;
  if ( (char *)a2 - (char *)a1 <= 1152 )
    return;
  v4 = a1;
  if ( !a3 )
  {
    v80 = a2;
LABEL_85:
    v76 = (__int64)v4;
    v50 = 0x8E38E38E38E38E39LL * (v3 >> 3);
    v81 = &v87;
    v51 = (__int64)(v50 - 2) >> 1;
    v79 = (char *)v50;
    s2 = &v94;
    for ( i = (__m128i *)((char *)v4 + 72 * v51 + 16); ; i = (const __m128i *)((char *)i - 72) )
    {
      v59 = (__m128i *)i[-1].m128i_i64[0];
      v87 = &v89;
      if ( v59 == i )
      {
        v59 = &v89;
        v89 = _mm_loadu_si128(i);
      }
      else
      {
        v53 = i->m128i_i64[0];
        v87 = v59;
        v89.m128i_i64[0] = v53;
      }
      v54 = i[-1].m128i_u64[1];
      v55 = (__m128i *)i[1].m128i_i64[0];
      i[-1].m128i_i64[0] = (__int64)i;
      i[-1].m128i_i64[1] = 0;
      v88 = v54;
      i->m128i_i8[0] = 0;
      v90 = &v92;
      if ( v55 == &i[2] )
      {
        v55 = &v92;
        v92 = _mm_loadu_si128(i + 2);
      }
      else
      {
        v56 = i[2].m128i_i64[0];
        v90 = v55;
        v92.m128i_i64[0] = v56;
      }
      v57 = i[1].m128i_u64[1];
      i[1].m128i_i64[0] = (__int64)i[2].m128i_i64;
      v58 = i[3].m128i_i8[0];
      i[1].m128i_i64[1] = 0;
      v91 = v57;
      i[2].m128i_i8[0] = 0;
      v93 = v58;
      v94 = &v96;
      if ( v59 == &v89 )
      {
        v96 = _mm_load_si128(&v89);
      }
      else
      {
        v94 = v59;
        v96.m128i_i64[0] = v89.m128i_i64[0];
      }
      v95 = v54;
      v87 = &v89;
      v88 = 0;
      v89.m128i_i8[0] = 0;
      src = &v99;
      if ( v55 == &v92 )
      {
        v99 = _mm_load_si128(&v92);
      }
      else
      {
        src = v55;
        v99.m128i_i64[0] = v92.m128i_i64[0];
      }
      n = v57;
      v100 = v58;
      v90 = &v92;
      v91 = 0;
      v92.m128i_i8[0] = 0;
      sub_225C6C0(v76, v51, (__int64)v79, (__int64)s2);
      if ( src != &v99 )
        operator delete(src);
      if ( v94 != &v96 )
        operator delete(v94);
      if ( !v51 )
        break;
      --v51;
      if ( v90 != &v92 )
        operator delete(v90);
      if ( v87 != &v89 )
        operator delete(v87);
    }
    v64 = v76;
    if ( v90 != v81 + 6 )
      operator delete(v90);
    if ( v87 != v81 + 2 )
      operator delete(v87);
    v79 = (char *)(v76 + 32);
    v65 = v81 + 2;
    v66 = v81 + 6;
    v77 = (char *)s2 + 16;
    v67 = (__m128i *)((char *)v80 - 56);
    v68 = (char *)s2 + 48;
    do
    {
      while ( 1 )
      {
        v69 = (__m128i *)v67[-1].m128i_i64[0];
        v87 = v65;
        if ( v69 == v67 )
        {
          v89 = _mm_loadu_si128(v67);
        }
        else
        {
          v87 = v69;
          v89.m128i_i64[0] = v67->m128i_i64[0];
        }
        v70 = v67[-1].m128i_i64[1];
        v71 = (__m128i *)v67[1].m128i_i64[0];
        v67[-1].m128i_i64[0] = (__int64)v67;
        v67[-1].m128i_i64[1] = 0;
        v88 = v70;
        v67->m128i_i8[0] = 0;
        v90 = v66;
        if ( v71 == &v67[2] )
        {
          v92 = _mm_loadu_si128(v67 + 2);
        }
        else
        {
          v90 = v71;
          v92.m128i_i64[0] = v67[2].m128i_i64[0];
        }
        v72 = v67[1].m128i_u64[1];
        v67[1].m128i_i64[0] = (__int64)v67[2].m128i_i64;
        v67[1].m128i_i64[1] = 0;
        v73 = v67[3].m128i_i8[0];
        v67[2].m128i_i8[0] = 0;
        v91 = v72;
        v93 = v73;
        sub_A0AAD0((__int64)v67[-1].m128i_i64, (_QWORD *)v64);
        sub_A0AAD0((__int64)v67[1].m128i_i64, v79);
        v67[3].m128i_i8[0] = *(_BYTE *)(v64 + 64);
        v94 = v77;
        if ( v87 == v65 )
        {
          v96 = _mm_load_si128(&v89);
        }
        else
        {
          v94 = v87;
          v96.m128i_i64[0] = v89.m128i_i64[0];
        }
        v74 = v88;
        v87 = v65;
        v88 = 0;
        v95 = v74;
        v89.m128i_i8[0] = 0;
        src = v68;
        if ( v90 == v66 )
        {
          v99 = _mm_load_si128(&v92);
        }
        else
        {
          src = v90;
          v99.m128i_i64[0] = v92.m128i_i64[0];
        }
        v75 = (__int64)v67[-1].m128i_i64 - v64;
        v90 = v66;
        n = v91;
        v91 = 0;
        v100 = v93;
        v92.m128i_i8[0] = 0;
        sub_225C6C0(v64, 0, 0x8E38E38E38E38E39LL * (v75 >> 3), (__int64)s2);
        if ( src != v68 )
          operator delete(src);
        if ( v94 != v77 )
          operator delete(v94);
        if ( v90 != v66 )
          operator delete(v90);
        if ( v87 == v65 )
          break;
        operator delete(v87);
        v67 = (const __m128i *)((char *)v67 - 72);
        if ( v75 <= 72 )
          return;
      }
      v67 = (const __m128i *)((char *)v67 - 72);
    }
    while ( v75 > 72 );
    return;
  }
  v5 = &v96;
  v86 = &a1[4].m128i_i64[1];
  v85 = (__m128i *)((char *)a1 + 120);
  while ( 2 )
  {
    v6 = v4[5].m128i_u64[0];
    --v83;
    v7 = (void *)v4[4].m128i_i64[1];
    v8 = v79 - 72;
    v9 = (const void **)v4 + 9 * ((__int64)(0x8E38E38E38E38E39LL * ((v79 - (char *)v4) >> 3)) / 2);
    v10 = (__int64 *)v9[1];
    v11 = (size_t)v10;
    if ( v6 <= (unsigned __int64)v10 )
      v11 = v6;
    if ( !v11
      || (v12 = *v9,
          v13 = (const void *)v4[4].m128i_i64[1],
          v80 = (__m128i *)v9[1],
          s2 = v7,
          LODWORD(v14) = memcmp(v13, v12, v11),
          v7 = s2,
          v10 = (__int64 *)v80,
          !(_DWORD)v14) )
    {
      v14 = v6 - (_QWORD)v10;
      if ( (__int64)(v6 - (_QWORD)v10) > 0x7FFFFFFF )
        goto LABEL_105;
      if ( v14 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_11;
    }
    if ( (int)v14 < 0 )
    {
LABEL_11:
      if ( sub_9C4B50((__int64)v9, (__int64)v8) >= 0 )
      {
        if ( sub_9C4B50((__int64)v86, (__int64)v8) >= 0 )
        {
LABEL_13:
          sub_226BEB0(v4, (__int64)v86);
          goto LABEL_14;
        }
        goto LABEL_118;
      }
LABEL_113:
      sub_226BEB0(v4, (__int64)v9);
      goto LABEL_14;
    }
LABEL_105:
    v60 = *((void **)v79 - 8);
    v61 = (size_t)v60;
    if ( v6 <= (unsigned __int64)v60 )
      v61 = v6;
    if ( !v61
      || (v62 = *((const void **)v79 - 9),
          s2 = *((void **)v79 - 8),
          LODWORD(v63) = memcmp(v7, v62, v61),
          v60 = s2,
          !(_DWORD)v63) )
    {
      v63 = v6 - (_QWORD)v60;
      if ( (__int64)(v6 - (_QWORD)v60) > 0x7FFFFFFF )
        goto LABEL_112;
      if ( v63 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_13;
    }
    if ( (int)v63 < 0 )
      goto LABEL_13;
LABEL_112:
    if ( sub_9C4B50((__int64)v9, (__int64)v8) >= 0 )
      goto LABEL_113;
LABEL_118:
    sub_226BEB0(v4, (__int64)v8);
LABEL_14:
    v15 = (void *)v4->m128i_i64[0];
    v16 = v4->m128i_u64[1];
    v82 = v4;
    v17 = v85;
    s2 = v15;
    v81 = (void **)v79;
    while ( 1 )
    {
      v18 = v17[-3].m128i_u64[1];
      v19 = (__m128i *)v17[-3].m128i_i64[0];
      v80 = v17 - 3;
      v20 = v18;
      if ( v16 <= v18 )
        v20 = v16;
      if ( v20 )
      {
        LODWORD(v21) = memcmp(v19, s2, v20);
        if ( (_DWORD)v21 )
          goto LABEL_22;
      }
      v21 = v18 - v16;
      if ( (__int64)(v18 - v16) > 0x7FFFFFFF )
        break;
      if ( v21 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_22:
        if ( (int)v21 >= 0 )
          break;
      }
LABEL_15:
      v17 = (__m128i *)((char *)v17 + 72);
    }
    v84 = v5;
    v22 = v16;
    for ( j = v81 - 9; ; j -= 9 )
    {
      v24 = (size_t)j[1];
      v81 = j;
      v25 = v24;
      if ( v22 <= v24 )
        v25 = v22;
      if ( !v25 )
        break;
      LODWORD(v26) = memcmp(s2, *j, v25);
      if ( !(_DWORD)v26 )
        break;
LABEL_25:
      if ( (int)v26 >= 0 )
        goto LABEL_32;
LABEL_26:
      ;
    }
    v26 = v22 - v24;
    if ( (__int64)(v22 - v24) <= 0x7FFFFFFF )
    {
      if ( v26 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_32:
    v5 = (__m128i *)v84;
    if ( j > (void **)v80 )
    {
      v27 = v17 - 2;
      v94 = v84;
      if ( &v17[-2] == v19 )
      {
        v96 = _mm_loadu_si128(v17 - 2);
      }
      else
      {
        v28 = v17[-2].m128i_i64[0];
        v94 = v19;
        v96.m128i_i64[0] = v28;
      }
      v95 = v18;
      v17[-3].m128i_i64[0] = (__int64)v27;
      v17[-3].m128i_i64[1] = 0;
      src = &v99;
      v29 = (__m128i *)v17[-1].m128i_i64[0];
      v17[-2].m128i_i8[0] = 0;
      if ( v17 == v29 )
      {
        v99 = _mm_loadu_si128(v17);
      }
      else
      {
        src = v29;
        v99.m128i_i64[0] = v17->m128i_i64[0];
      }
      v30 = v17[-1].m128i_u64[1];
      v17[-1].m128i_i64[0] = (__int64)v17;
      v31 = j + 2;
      v17[-1].m128i_i64[1] = 0;
      n = v30;
      LOBYTE(v30) = v17[1].m128i_i8[0];
      v17->m128i_i8[0] = 0;
      v100 = v30;
      if ( *j == j + 2 )
      {
        v47 = (size_t)j[1];
        if ( v47 )
        {
          if ( v47 == 1 )
          {
            v17[-2].m128i_i8[0] = *((_BYTE *)j + 16);
            v47 = (size_t)j[1];
          }
          else
          {
            v48 = (__m128i *)memcpy(&v17[-2], j + 2, v47);
            v47 = (size_t)j[1];
            v27 = v48;
          }
        }
        v17[-3].m128i_i64[1] = v47;
        v27->m128i_i8[v47] = 0;
        v32 = *j;
      }
      else
      {
        v17[-3].m128i_i64[0] = (__int64)*j;
        v17[-3].m128i_i64[1] = (__int64)j[1];
        v17[-2].m128i_i64[0] = (__int64)j[2];
        v32 = j + 2;
        *j = v31;
      }
      j[1] = nullptr;
      v33 = (__m128i *)(j + 6);
      *v32 = 0;
      v34 = (__int64)j[4];
      v35 = (__m128i *)v17[-1].m128i_i64[0];
      if ( (void **)v34 == j + 6 )
      {
        v46 = (size_t)j[5];
        if ( v46 )
        {
          if ( v46 == 1 )
            v35->m128i_i8[0] = *((_BYTE *)j + 48);
          else
            memcpy(v35, j + 6, v46);
          v46 = (size_t)j[5];
          v35 = (__m128i *)v17[-1].m128i_i64[0];
        }
        v17[-1].m128i_i64[1] = v46;
        v35->m128i_i8[v46] = 0;
        v35 = (__m128i *)j[4];
      }
      else
      {
        if ( v17 == v35 )
        {
          v17[-1].m128i_i64[0] = v34;
          v17[-1].m128i_i64[1] = (__int64)j[5];
          v17->m128i_i64[0] = (__int64)j[6];
        }
        else
        {
          v17[-1].m128i_i64[0] = v34;
          v36 = v17->m128i_i64[0];
          v17[-1].m128i_i64[1] = (__int64)j[5];
          v17->m128i_i64[0] = (__int64)j[6];
          if ( v35 )
          {
            j[4] = v35;
            j[6] = (void *)v36;
            goto LABEL_43;
          }
        }
        j[4] = v33;
        v35 = (__m128i *)(j + 6);
      }
LABEL_43:
      j[5] = nullptr;
      v35->m128i_i8[0] = 0;
      v17[1].m128i_i8[0] = *((_BYTE *)j + 64);
      v37 = *j;
      if ( v94 == v5 )
      {
        v45 = v95;
        if ( v95 )
        {
          if ( v95 == 1 )
            *v37 = v96.m128i_i8[0];
          else
            memcpy(v37, v5, v95);
          v45 = v95;
          v37 = *j;
        }
        j[1] = (void *)v45;
        v37[v45] = 0;
        v37 = v94;
      }
      else
      {
        s2 = (void *)v96.m128i_i64[0];
        if ( v37 == v31 )
        {
          *j = v94;
          *(__m128 *)(j + 1) = _mm_loadh_ps((const double *)&s2);
        }
        else
        {
          v38 = _mm_loadh_ps((const double *)&s2);
          v39 = (__int64)j[2];
          *j = v94;
          *(__m128 *)(j + 1) = v38;
          if ( v37 )
          {
            v94 = v37;
            v96.m128i_i64[0] = v39;
            goto LABEL_47;
          }
        }
        v94 = v5;
        v37 = v5;
      }
LABEL_47:
      v95 = 0;
      *v37 = 0;
      v40 = (__m128i *)j[4];
      if ( src == &v99 )
      {
        v44 = n;
        if ( n )
        {
          if ( n == 1 )
            v40->m128i_i8[0] = v99.m128i_i8[0];
          else
            memcpy(v40, src, n);
          v44 = n;
          v40 = (__m128i *)j[4];
        }
        j[5] = (void *)v44;
        v40->m128i_i8[v44] = 0;
        v40 = (__m128i *)src;
        goto LABEL_51;
      }
      s2 = (void *)v99.m128i_i64[0];
      if ( v40 == v33 )
      {
        j[4] = src;
        *(__m128 *)(j + 5) = _mm_loadh_ps((const double *)&s2);
      }
      else
      {
        v41 = _mm_loadh_ps((const double *)&s2);
        v42 = (__int64)j[6];
        j[4] = src;
        *(__m128 *)(j + 5) = v41;
        if ( v40 )
        {
          src = v40;
          v99.m128i_i64[0] = v42;
LABEL_51:
          n = 0;
          v40->m128i_i8[0] = 0;
          v43 = (__m128i *)src;
          *((_BYTE *)j + 64) = v100;
          if ( v43 != &v99 )
            operator delete(v43);
          if ( v94 != v5 )
            operator delete(v94);
          v16 = v82->m128i_u64[1];
          s2 = (void *)v82->m128i_i64[0];
          goto LABEL_15;
        }
      }
      v40 = &v99;
      src = &v99;
      goto LABEL_51;
    }
    v49 = v80;
    v4 = v82;
    sub_226BFE0(v80, v79, v83);
    v3 = (char *)v49 - (char *)v4;
    if ( (char *)v49 - (char *)v4 > 1152 )
    {
      v79 = (char *)v80;
      if ( !v83 )
        goto LABEL_85;
      continue;
    }
    break;
  }
}
