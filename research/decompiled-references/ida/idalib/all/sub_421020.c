unsigned __int64 __fastcall sub_421020(__int64 *a1)
{
  __int64 v2; // rsi
  const char *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  const char *v14; // rdx
  bool v15; // cc
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // r15
  __int64 *v24; // rbp
  __int64 v25; // r12
  const char *v26; // rcx
  const char *v27; // rsi
  __int64 *v28; // r13
  const char *v29; // rdi
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rbp
  const char *v35; // rax
  const char *v36; // rsi
  _QWORD *v37; // rax
  unsigned __int32 v38; // edx
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // r15
  __int64 v44; // r12
  const char *v45; // rax
  _QWORD *v46; // r13
  const char *v47; // rsi
  const char *v48; // rdi
  int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  const char *v53; // rax
  const char *v54; // rsi
  __int64 v55; // rdx
  const char *v56; // rsi
  __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __m128i v61; // xmm0
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  void *v65; // r13
  void *v66; // rdi
  const char *v67; // [rsp+8h] [rbp-F0h]
  char *s2; // [rsp+10h] [rbp-E8h]
  __int32 v69; // [rsp+18h] [rbp-E0h]
  const char *v70; // [rsp+20h] [rbp-D8h]
  char *s1; // [rsp+28h] [rbp-D0h]
  _QWORD *v72; // [rsp+30h] [rbp-C8h]
  __int32 v73; // [rsp+40h] [rbp-B8h] BYREF
  int v74; // [rsp+44h] [rbp-B4h] BYREF
  __int64 v75; // [rsp+48h] [rbp-B0h] BYREF
  void **p_src; // [rsp+50h] [rbp-A8h] BYREF
  void **p_dest; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v78; // [rsp+60h] [rbp-98h] BYREF
  __m128i v79; // [rsp+70h] [rbp-88h] BYREF
  void *dest; // [rsp+80h] [rbp-78h] BYREF
  __int128 v81; // [rsp+88h] [rbp-70h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v83; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v84; // [rsp+B8h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 80) )
    return v84 - __readfsqword(0x28u);
  v2 = a1[11];
  v75 = -1;
  netnode_check(&v75, v2, 0, 1);
  dest = nullptr;
  src = nullptr;
  v81 = 0;
  v83 = 0;
  v72 = a1 + 4;
  if ( netnode_qhashfirst(v75, &src, 72) <= 0 )
    goto LABEL_24;
  do
  {
    v4 = haystack;
    if ( (_QWORD)v83 )
      v4 = (const char *)src;
    v5 = v75;
    if ( netnode_hashval(v75, v4, &v79, 4, 72) <= 0 )
    {
LABEL_20:
      v13 = v83;
      goto LABEL_21;
    }
    if ( (unsigned __int8)is_cvt64(v5, v4, v6) )
    {
      v73 = v79.m128i_i32[0];
      netnode_hashset(v75, v4, &v73, 4, 72);
    }
    v69 = v79.m128i_i32[0];
    if ( v79.m128i_i32[0] )
    {
      if ( v79.m128i_i32[0] > 0x400u )
        goto LABEL_20;
      v41 = v79.m128i_u32[0];
      v42 = a1[1];
      if ( v79.m128i_u32[0] >= v42 )
        goto LABEL_82;
    }
    else
    {
      if ( !a1[13] )
        goto LABEL_20;
      if ( !a1[1] )
      {
        v78.m128i_i64[0] = 0;
        v7 = 1;
        v78.m128i_i8[8] = 0;
        goto LABEL_13;
      }
      v41 = 0;
    }
    if ( !*(_BYTE *)(*a1 + 16 * v41 + 8) )
      goto LABEL_65;
    if ( (unsigned __int8)sub_3E9220(a1 + 3, (const char *)v79.m128i_u32[0], v4, &v75) )
      goto LABEL_20;
    v42 = a1[1];
    v69 = v79.m128i_i32[0];
    if ( v79.m128i_u32[0] < v42 )
      goto LABEL_65;
LABEL_82:
    v7 = (unsigned int)(v69 + 1);
    if ( v7 != v42 )
    {
      v78.m128i_i64[0] = 0;
      v78.m128i_i8[8] = 0;
      if ( v7 < v42 )
      {
LABEL_84:
        a1[1] = v7;
        goto LABEL_65;
      }
LABEL_13:
      v8 = *a1;
      v9 = a1[2];
      if ( (unsigned __int64)&v78 < *a1 || (unsigned __int64)&v78 >= v8 + 16 * v9 )
      {
        if ( v9 < v7 )
          *a1 = qvector_reserve(a1, v8, v7, 16);
        v60 = a1[1];
        if ( v60 < v7 )
        {
          v61 = _mm_load_si128(&v78);
          do
          {
            v62 = v60++;
            *(__m128i *)(*a1 + 16 * v62) = v61;
          }
          while ( v7 != v60 );
        }
      }
      else
      {
        if ( v9 < v7 )
          *a1 = qvector_reserve(a1, v8, v7, 16);
        v10 = a1[1];
        if ( v10 < v7 )
        {
          do
          {
            v11 = v10++;
            v12 = *a1 + 16 * v11;
            *(_QWORD *)v12 = 0;
            *(_BYTE *)(v12 + 8) = 0;
          }
          while ( v7 != v10 );
        }
      }
      v69 = v79.m128i_i32[0];
      goto LABEL_84;
    }
LABEL_65:
    v43 = (_QWORD *)a1[5];
    if ( !v43 )
    {
      v34 = v72;
      goto LABEL_55;
    }
    v44 = v83;
    v45 = (const char *)src;
    v34 = v72;
    s1 = (char *)src;
    if ( !(_QWORD)v83 )
      v45 = haystack;
    v70 = v45;
    while ( 1 )
    {
      v51 = v43[5];
      if ( !v44 )
        break;
      v46 = v43;
      if ( v51 )
        goto LABEL_79;
      v47 = s1;
      v48 = haystack;
LABEL_71:
      v49 = strcmp(v48, v47);
      v50 = (_QWORD *)v43[2];
      v43 = (_QWORD *)v43[3];
      if ( v49 >= 0 )
      {
        v34 = v46;
        v43 = v50;
      }
      if ( !v43 )
        goto LABEL_49;
    }
    if ( v51 )
    {
LABEL_78:
      v46 = v43;
LABEL_79:
      v48 = (const char *)v43[4];
      v47 = v70;
      goto LABEL_71;
    }
    while ( 1 )
    {
      v52 = v43[2];
      if ( !v52 )
        break;
      v34 = v43;
      v43 = (_QWORD *)v43[2];
      if ( *(_QWORD *)(v52 + 40) )
        goto LABEL_78;
    }
    v34 = v43;
LABEL_49:
    if ( v72 == v34 )
      goto LABEL_55;
    if ( !v34[5] )
    {
      v36 = haystack;
      if ( v44 )
        goto LABEL_54;
LABEL_101:
      v38 = v69;
      goto LABEL_56;
    }
    v35 = haystack;
    if ( v44 )
      v35 = s1;
    v36 = (const char *)v34[4];
    s1 = (char *)v35;
LABEL_54:
    if ( strcmp(s1, v36) >= 0 )
      goto LABEL_101;
LABEL_55:
    p_src = &src;
    v37 = sub_4205B0(a1 + 3, v34, (__int64 *)&p_src);
    v38 = v79.m128i_i32[0];
    v34 = v37;
LABEL_56:
    *((_DWORD *)v34 + 14) = v69;
    v39 = *a1 + 16LL * v38;
    *(_QWORD *)v39 = 0;
    *(_BYTE *)(v39 + 8) = 1;
    v13 = v83;
    if ( v38 || !a1[13] )
      goto LABEL_21;
    if ( !(_QWORD)v83 )
    {
      *(_QWORD *)&v81 = 0;
LABEL_22:
      v14 = haystack;
      continue;
    }
    v40 = v83 - 1;
    if ( (_QWORD)v83 != 1 )
    {
      v65 = src;
      v66 = dest;
      if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)v83 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v83, 1);
        v66 = dest;
      }
      *(_QWORD *)&v81 = v13;
      memmove(v66, v65, v13 - 1);
      *((_BYTE *)dest + v40) = 0;
      v13 = v83;
LABEL_21:
      if ( v13 )
        goto LABEL_61;
      goto LABEL_22;
    }
    *(_QWORD *)&v81 = 0;
LABEL_61:
    v14 = (const char *)src;
  }
  while ( netnode_qhashnext(v75, &src, v14, 72) > 0 );
LABEL_24:
  v15 = (unsigned __int64)v81 <= 1;
  *((_BYTE *)a1 + 80) = 1;
  if ( v15 )
    goto LABEL_96;
  v16 = a1[1];
  v17 = (unsigned int)(v16 + 1);
  if ( v17 != v16 )
  {
    v79.m128i_i64[0] = 0;
    v79.m128i_i8[8] = 0;
    if ( v17 >= v16 )
    {
      v18 = *a1;
      v19 = a1[2];
      if ( (unsigned __int64)&v79 < *a1 || (unsigned __int64)&v79 >= v18 + 16 * v19 )
      {
        v63 = v16;
        if ( v19 < v17 )
        {
          *a1 = qvector_reserve(a1, v18, (unsigned int)(v16 + 1), 16);
          v63 = a1[1];
        }
        if ( v63 < v17 )
        {
          do
          {
            v64 = v63++;
            *(__m128i *)(*a1 + 16 * v64) = _mm_load_si128(&v79);
          }
          while ( v17 != v63 );
        }
      }
      else
      {
        v20 = v16;
        if ( v19 < v17 )
        {
          *a1 = qvector_reserve(a1, v18, (unsigned int)(v16 + 1), 16);
          v20 = a1[1];
        }
        if ( v20 < v17 )
        {
          do
          {
            v21 = v20++;
            v22 = *a1 + 16 * v21;
            *(_QWORD *)v22 = 0;
            *(_BYTE *)(v22 + 8) = 0;
          }
          while ( v17 != v20 );
        }
      }
    }
    a1[1] = v17;
  }
  v23 = (__int64 *)a1[5];
  v24 = a1 + 4;
  if ( !v23 )
  {
    v24 = a1 + 4;
    goto LABEL_92;
  }
  v25 = v81;
  v26 = haystack;
  s2 = (char *)dest;
  if ( (_QWORD)v81 )
    v26 = (const char *)dest;
  v67 = v26;
  while ( 2 )
  {
    v32 = v23[5];
    if ( v25 )
    {
      if ( !v32 )
      {
        v27 = s2;
        v28 = v23;
        v29 = haystack;
        goto LABEL_40;
      }
LABEL_47:
      v29 = (const char *)v23[4];
      v27 = v67;
      v28 = v23;
LABEL_40:
      v30 = strcmp(v29, v27);
      v31 = (__int64 *)v23[2];
      v23 = (__int64 *)v23[3];
      if ( v30 >= 0 )
      {
        v24 = v28;
        v23 = v31;
      }
      if ( !v23 )
        goto LABEL_86;
      continue;
    }
    break;
  }
  if ( v32 )
    goto LABEL_47;
  while ( 1 )
  {
    v33 = v23[2];
    if ( !v33 )
      break;
    v24 = v23;
    v23 = (__int64 *)v23[2];
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_47;
  }
  v24 = v23;
LABEL_86:
  if ( a1 + 4 == v24 )
    goto LABEL_92;
  if ( v24[5] )
  {
    v53 = haystack;
    if ( v25 )
      v53 = s2;
    v54 = (const char *)v24[4];
    s2 = (char *)v53;
LABEL_91:
    if ( strcmp(s2, v54) < 0 )
    {
LABEL_92:
      p_dest = &dest;
      v24 = sub_4205B0(a1 + 3, v24, (__int64 *)&p_dest);
    }
  }
  else
  {
    v54 = haystack;
    if ( v25 )
      goto LABEL_91;
  }
  *((_DWORD *)v24 + 14) = v16;
  v55 = *a1;
  v56 = haystack;
  v57 = 16LL * (unsigned int)v16;
  *(_QWORD *)(v55 + v57) = *(_QWORD *)*a1;
  *(_BYTE *)(v55 + v57 + 8) = *(_BYTE *)(v55 + 8);
  v58 = (_QWORD *)*a1;
  *v58 = 0;
  *((_BYTE *)v58 + 8) = 0;
  v59 = *a1 + v57;
  if ( (_QWORD)v81 )
    v56 = (const char *)dest;
  *(_BYTE *)(v59 + 8) = 1;
  v74 = v16;
  netnode_hashset(v75, v56, &v74, 4, 72);
  *(_DWORD *)a1[13] = v16;
LABEL_96:
  if ( src )
  {
    *(_QWORD *)&v83 = 0;
    qfree(src);
  }
  if ( dest )
  {
    *(_QWORD *)&v81 = 0;
    qfree(dest);
  }
  return v84 - __readfsqword(0x28u);
}
