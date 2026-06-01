void __fastcall sub_11CC730(__int64 *a1, __m128i *a2, __int64 a3, __int64 a4, __int32 a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  _QWORD *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r12
  _DWORD *v15; // r13
  size_t v16; // rdx
  const char *v17; // r12
  size_t v18; // rax
  __int64 v19; // rdx
  char *v20; // r12
  size_t v21; // rax
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  void *v24; // r13
  size_t v25; // r12
  __int64 v26; // rdx
  __int32 v27; // eax
  size_t v28; // rax
  char *v29; // rdx
  char *v30; // rcx
  void *v31; // rbp
  void *v32; // rax
  __int64 v33; // rcx
  char *v34; // rsi
  char *v35; // rsi
  _QWORD *v36; // rbp
  __int64 v37; // rcx
  size_t v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  char v41; // r12
  void *v42; // r13
  __m128i *v43; // r12
  size_t v44; // rbx
  size_t v45; // rbp
  size_t v46; // rdx
  int v47; // eax
  size_t v48; // rax
  size_t v49; // r12
  size_t v50; // r13
  size_t v51; // rdx
  int v52; // eax
  __int64 v53; // rsi
  void **v54; // rbp
  const char *v55; // rdi
  _QWORD **v56; // rbx
  __int64 v57; // r12
  _QWORD **v58; // rbp
  __m128i v59; // [rsp+8h] [rbp-170h] BYREF
  __m128i *p_s1; // [rsp+18h] [rbp-160h]
  __int64 v61; // [rsp+20h] [rbp-158h]
  char *v62; // [rsp+28h] [rbp-150h]
  __int64 *v63; // [rsp+30h] [rbp-148h]
  _QWORD *v64; // [rsp+38h] [rbp-140h]
  __int64 v65; // [rsp+40h] [rbp-138h]
  char *v66; // [rsp+48h] [rbp-130h]
  __int64 v67; // [rsp+50h] [rbp-128h]
  void **p_s2; // [rsp+58h] [rbp-120h]
  void **v69; // [rsp+60h] [rbp-118h]
  __int64 v70; // [rsp+68h] [rbp-110h]
  void *s2; // [rsp+70h] [rbp-108h] BYREF
  size_t n; // [rsp+78h] [rbp-100h]
  void *s1; // [rsp+80h] [rbp-F8h] BYREF
  size_t v74; // [rsp+88h] [rbp-F0h]
  void *v75[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int32 v76; // [rsp+B0h] [rbp-C8h]
  char v77; // [rsp+C0h] [rbp-B8h] BYREF
  int v78; // [rsp+C8h] [rbp-B0h] BYREF
  void *v79; // [rsp+D0h] [rbp-A8h]
  int *v80; // [rsp+D8h] [rbp-A0h]
  int *v81; // [rsp+E0h] [rbp-98h]
  __int64 v82; // [rsp+E8h] [rbp-90h]
  void *v83[2]; // [rsp+F0h] [rbp-88h] BYREF
  _QWORD v84[2]; // [rsp+100h] [rbp-78h] BYREF
  __m128i v85; // [rsp+110h] [rbp-68h]
  __int64 v86; // [rsp+120h] [rbp-58h]

  v63 = a1;
  v61 = a3;
  v66 = &v77;
  LODWORD(v83[0]) = a5;
  v65 = a4;
  v78 = 0;
  v79 = nullptr;
  v80 = &v78;
  v81 = &v78;
  v82 = 0;
  v8 = sub_21B6DA0(a3, v83, 1);
  v9 = *(_QWORD *)(a3 + 8);
  LODWORD(v84[0]) = a5;
  v59.m128i_i64[0] = v9 + 8 * HIDWORD(v8);
  v10 = _mm_loadl_epi64(&v59);
  v59.m128i_i64[1] = v9 + 8LL * (unsigned int)v8;
  *(__m128i *)v83 = _mm_unpacklo_epi64(v10, v10);
  sub_10DFFA0((__int64)v83);
  v76 = a5;
  v69 = v75;
  *(__m128 *)v75 = _mm_loadh_ps((const double *)v59.m128i_i64);
  sub_10DFFA0((__int64)v75);
  v11 = v75[0];
  v59.m128i_i64[0] = (__int64)v75[1];
  v59.m128i_i32[2] = v76;
  v64 = v83[0];
  p_s1 = (__m128i *)&s1;
  if ( v83[0] == v75[0] )
    goto LABEL_69;
  do
  {
    p_s2 = &s2;
    v70 = v59.m128i_i64[0] - 16;
LABEL_3:
    v12 = *v11;
    v13 = *(_QWORD *)(*v11 + 8LL);
    v14 = **(_QWORD **)(v13 + 8);
    v15 = (_DWORD *)(*(_QWORD *)(v13 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)*v11 + 40LL) - 1));
    if ( !*v15 )
    {
      v16 = 0;
      v17 = (const char *)((unsigned int)v15[1] + v14);
      if ( !v17 )
      {
        v16 = 0;
        v18 = 0;
        goto LABEL_31;
      }
LABEL_5:
      v62 = (char *)v16;
      v18 = strlen(v17);
      v16 = (size_t)v62;
      goto LABEL_6;
    }
    v16 = 0;
    v55 = (const char *)(v14 + *(unsigned int *)(*(_QWORD *)(v13 + 16) + 4LL * (unsigned int)(*v15 + 1)));
    if ( v55 )
      v16 = (unsigned int)j__strlen(v55);
    v18 = 0;
    v17 = (const char *)((unsigned int)v15[1] + v14);
    if ( v17 )
      goto LABEL_5;
LABEL_6:
    if ( v18 < v16 )
    {
      v19 = *(_QWORD *)(v12 + 16);
      if ( v19 )
        *(_BYTE *)(v19 + 44) |= 1u;
      else
        *(_BYTE *)(v12 + 44) |= 1u;
      goto LABEL_9;
    }
LABEL_31:
    v37 = *(_QWORD *)(v12 + 16);
    if ( !v37 )
      v37 = v12;
    *(_BYTE *)(v37 + 44) |= 1u;
    v38 = v18 - v16;
    if ( !v38 )
    {
      v18 = v16;
LABEL_9:
      v20 = (char *)&v17[v18];
      v21 = 0;
      goto LABEL_10;
    }
    v21 = v38 - 1;
    v20 = (char *)&v17[v16 + 1];
LABEL_10:
    s2 = v20;
    n = v21;
    sub_11C8180(p_s1, v63, v61, a2, 0);
    v22 = (_BYTE *)a2->m128i_i64[0];
    v23 = a2->m128i_i64[1];
    v83[0] = v84;
    v24 = s1;
    v25 = v74;
    sub_11BA820(v83, v22, (__int64)&v22[v23]);
    v26 = a2[3].m128i_i64[0];
    v27 = a2[2].m128i_i32[0];
    v85 = _mm_loadu_si128(a2 + 2);
    v86 = v26;
    if ( v27 == 25 )
    {
      v39 = (unsigned int)sub_22B0C70(v24, v25);
      if ( v85.m128i_i32[0] == 26 )
        goto LABEL_74;
    }
    else
    {
      if ( v27 != 26 )
        goto LABEL_12;
      v39 = (unsigned int)sub_22B0BE0(v24, v25);
      if ( v85.m128i_i32[0] == 26 )
      {
LABEL_74:
        v40 = sub_22B0D00(v39);
        goto LABEL_37;
      }
    }
    v40 = sub_22B0D60(v39);
LABEL_37:
    if ( (v40 & 0x200) != 0 )
    {
LABEL_12:
      if ( v83[0] != v84 )
        operator delete(v83[0]);
LABEL_14:
      v28 = n;
      v29 = (char *)s2;
      if ( n > 2 && *(_WORD *)s2 == 28526 && *((_BYTE *)s2 + 2) == 45 )
      {
        v28 = n - 3;
        v29 = (char *)s2 + 3;
        v30 = "-";
        s2 = (char *)s2 + 3;
        n -= 3LL;
      }
      else
      {
        v30 = "+";
      }
      v83[0] = v30;
      v85.m128i_i16[0] = 1283;
      v84[0] = v29;
      v84[1] = v28;
      v31 = (void *)sub_10DA6C0(v61, (__int64)v83);
      v75[0] = v31;
      v32 = nullptr;
      if ( v31 )
        v32 = (void *)strlen((const char *)v31);
      v33 = v65;
      v75[1] = v32;
      v34 = *(char **)(v65 + 8);
      if ( v34 == *(char **)(v65 + 16) )
      {
        sub_1075D80(v65, v34, v69);
      }
      else
      {
        *(_QWORD *)v34 = v31;
        v35 = v34 + 16;
        *((_QWORD *)v35 - 1) = v32;
        *(_QWORD *)(v33 + 8) = v35;
      }
      goto LABEL_21;
    }
    v41 = sub_21B9810(v12, 2575);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( !v41 )
      goto LABEL_14;
    v42 = v79;
    if ( !v79 )
      goto LABEL_59;
    v67 = v12;
    v62 = v66 + 8;
    v43 = a2;
    v44 = n;
    do
    {
      while ( 1 )
      {
        v45 = *((_QWORD *)v42 + 5);
        v46 = v44;
        if ( v45 <= v44 )
          v46 = *((_QWORD *)v42 + 5);
        if ( v46 )
        {
          v47 = memcmp(*((const void **)v42 + 4), s2, v46);
          if ( v47 )
            break;
        }
        if ( v45 == v44 || v45 >= v44 )
        {
          v62 = (char *)v42;
          v42 = *((void **)v42 + 2);
          goto LABEL_51;
        }
LABEL_43:
        v42 = *((void **)v42 + 3);
        if ( !v42 )
          goto LABEL_52;
      }
      if ( v47 < 0 )
        goto LABEL_43;
      v62 = (char *)v42;
      v42 = *((void **)v42 + 2);
LABEL_51:
      ;
    }
    while ( v42 );
LABEL_52:
    v48 = v44;
    a2 = v43;
    v12 = v67;
    v49 = v48;
    if ( v62 == v66 + 8 )
      goto LABEL_59;
    v50 = *((_QWORD *)v62 + 5);
    v51 = v50;
    if ( v48 <= v50 )
      v51 = v48;
    if ( v51 && (v52 = memcmp(s2, *((const void **)v62 + 4), v51)) != 0 )
    {
      if ( v52 < 0 )
        goto LABEL_59;
    }
    else if ( v49 != v50 && v49 < v50 )
    {
LABEL_59:
      sub_FC70B0((__int64)v83, *v63, 0, 608);
      v53 = v12;
      v54 = v69;
      sub_21B5FF0(v69, v53, v61);
      sub_AEC220((unsigned __int8 **)v83, (_BYTE *)v75[0], (signed __int64)v75[1]);
      sub_AEC220((unsigned __int8 **)v83, s1, v74);
      if ( v75[0] != v54 + 2 )
        operator delete(v75[0]);
      sub_AEA040((__int64)v83);
      sub_102B060((__int64)v66, (__int64)p_s2);
    }
LABEL_21:
    if ( s1 != &p_s1[1] )
      operator delete(s1);
    v36 = v11 + 1;
    if ( v11 + 1 == (_QWORD *)v59.m128i_i64[0] )
    {
      v36 = (_QWORD *)v59.m128i_i64[0];
LABEL_28:
      if ( v64 == v36 )
        break;
      v11 = v36;
      goto LABEL_3;
    }
    if ( !v59.m128i_i32[2] )
    {
      v36 += ((unsigned __int64)(v70 - (_QWORD)v11) >> 3) + 1;
      goto LABEL_28;
    }
    while ( !*v36 || !(unsigned __int8)sub_21B9810(*v36, v59.m128i_u32[2]) )
    {
      if ( ++v36 == (_QWORD *)v59.m128i_i64[0] )
        goto LABEL_28;
    }
    v11 = v36;
  }
  while ( v64 != v36 );
LABEL_69:
  v56 = (_QWORD **)v79;
  if ( v79 )
  {
    v57 = (__int64)v66;
    do
    {
      sub_9ED9D0(v57, v56[3]);
      v58 = (_QWORD **)v56[2];
      operator delete(v56);
      v56 = v58;
    }
    while ( v58 );
  }
}
