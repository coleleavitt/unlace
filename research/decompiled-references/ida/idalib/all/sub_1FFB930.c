unsigned __int64 __fastcall sub_1FFB930(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  __m128i *v7; // r15
  size_t v8; // r13
  const void *v9; // rbp
  size_t v10; // r12
  __m128i *v11; // rbx
  size_t v12; // r14
  int v13; // eax
  int v14; // eax
  size_t v15; // r9
  size_t v16; // r12
  int v17; // eax
  int v18; // eax
  size_t v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  size_t v31; // rbx
  const void *v32; // r12
  unsigned __int64 v33; // rbp
  int v34; // eax
  size_t v35; // rcx
  const void *v36; // r8
  int v37; // eax
  __m128i *v38; // r14
  size_t v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rax
  size_t v42; // r13
  int v43; // eax
  int v44; // eax
  __m128i *v45; // r13
  unsigned __int64 v46; // r14
  const void *v47; // rbp
  size_t v48; // r15
  size_t v49; // r12
  size_t v50; // r9
  size_t v51; // r12
  int v52; // eax
  int v53; // eax
  size_t v54; // rbp
  int v55; // eax
  int v56; // eax
  unsigned __int64 v57; // rax
  __m128i v58; // xmm5
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rbp
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rbx
  __int128 v68; // xmm1
  __int64 v69; // rbp
  __int64 v70; // rdx
  __m128i v71; // xmm6
  __int64 v72; // rdx
  __int64 v73; // rax
  const void *s1; // [rsp+0h] [rbp-A8h]
  const void *s1a; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+10h] [rbp-98h]
  void *s2; // [rsp+18h] [rbp-90h]
  __m128i *s2a; // [rsp+18h] [rbp-90h]
  void *s2b; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t nb; // [rsp+20h] [rbp-88h]
  size_t nc; // [rsp+20h] [rbp-88h]
  __m128i *v84; // [rsp+28h] [rbp-80h]
  __int64 v85; // [rsp+30h] [rbp-78h]
  void *v86; // [rsp+38h] [rbp-70h]
  unsigned __int64 v87; // [rsp+40h] [rbp-68h]
  unsigned __int64 v88; // [rsp+60h] [rbp-48h]

  result = a2 - (_QWORD)a1;
  v85 = a3;
  v76 = a2;
  if ( (__int64)(a2 - (_QWORD)a1) <= 384 )
    return result;
  v7 = a1;
  if ( !a3 )
  {
    v61 = a2 - (_QWORD)a1;
    v87 = a2;
    goto LABEL_95;
  }
  while ( 2 )
  {
    v8 = v7[2].m128i_u64[0];
    --v85;
    v9 = (const void *)v7[1].m128i_i64[1];
    v10 = v8;
    v11 = (__m128i *)((char *)v7 + 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)(v76 - (_QWORD)v7) >> 3)) / 2));
    v12 = v11->m128i_u64[1];
    s1 = (const void *)v11->m128i_i64[0];
    if ( v12 <= v8 )
      v10 = v11->m128i_u64[1];
    if ( !v10 )
    {
      if ( v12 != v8 )
      {
LABEL_8:
        if ( v12 > v8 )
          goto LABEL_13;
        if ( !v10 || (v14 = memcmp(s1, v9, v10)) == 0 )
        {
LABEL_11:
          if ( v12 < v8 )
            goto LABEL_67;
          goto LABEL_12;
        }
LABEL_66:
        if ( v14 < 0 )
          goto LABEL_67;
      }
LABEL_12:
      if ( v7[2].m128i_i64[1] < (unsigned __int64)v11[1].m128i_i64[0] )
        goto LABEL_13;
LABEL_67:
      v50 = v8;
      v51 = *(_QWORD *)(v76 - 16);
      s2b = *(void **)(v76 - 24);
      if ( v51 <= v8 )
        v50 = *(_QWORD *)(v76 - 16);
      if ( v50 )
      {
        nc = v50;
        v52 = memcmp(v9, *(const void **)(v76 - 24), v50);
        v50 = nc;
        if ( v52 )
        {
          if ( v52 >= 0 )
          {
            v53 = memcmp(s2b, v9, nc);
            if ( !v53 )
            {
              if ( v51 != v8 && v51 < v8 )
                goto LABEL_76;
              goto LABEL_88;
            }
            goto LABEL_87;
          }
          goto LABEL_119;
        }
        if ( v51 == v8 )
        {
          v53 = memcmp(s2b, v9, nc);
          if ( !v53 )
            goto LABEL_88;
          goto LABEL_87;
        }
      }
      else if ( v51 == v8 )
      {
        v57 = v7[2].m128i_u64[1];
        if ( v57 < *(_QWORD *)(v76 - 8) )
          goto LABEL_89;
        goto LABEL_76;
      }
      if ( v51 <= v8 )
      {
        if ( !v50 || (v53 = memcmp(s2b, v9, v50)) == 0 )
        {
          if ( v51 < v8 )
            goto LABEL_76;
LABEL_88:
          v57 = v7[2].m128i_u64[1];
          if ( v57 < *(_QWORD *)(v76 - 8) )
          {
LABEL_89:
            v58 = _mm_loadu_si128((__m128i *)((char *)v7 + 24));
            v59 = v7->m128i_i64[0];
            v7[2].m128i_i64[0] = v7->m128i_i64[1];
            v60 = v7[1].m128i_i64[0];
            *v7 = v58;
            v7[1].m128i_i64[1] = v59;
            v7[1].m128i_i64[0] = v57;
            v7[2].m128i_i64[1] = v60;
            goto LABEL_37;
          }
LABEL_76:
          v54 = v12;
          if ( v51 <= v12 )
            v54 = v51;
          if ( v54 )
          {
            v55 = memcmp(s1, s2b, v54);
            if ( v55 )
            {
              if ( v55 < 0 )
                goto LABEL_32;
              v56 = memcmp(s2b, s1, v54);
              if ( v56 )
                goto LABEL_151;
              if ( v51 != v12 )
                goto LABEL_84;
            }
            else
            {
              if ( v51 != v12 )
                goto LABEL_81;
              v56 = memcmp(s2b, s1, v54);
              if ( v56 )
              {
LABEL_151:
                if ( v56 < 0 )
                  goto LABEL_36;
              }
            }
          }
          else if ( v51 != v12 )
          {
LABEL_81:
            if ( v51 > v12 )
              goto LABEL_32;
            if ( !v54 || (v56 = memcmp(s2b, s1, v54)) == 0 )
            {
LABEL_84:
              if ( v51 < v12 )
                goto LABEL_36;
              goto LABEL_129;
            }
            goto LABEL_151;
          }
LABEL_129:
          if ( v11[1].m128i_i64[0] < *(_QWORD *)(v76 - 8) )
            goto LABEL_32;
          goto LABEL_36;
        }
LABEL_87:
        if ( v53 < 0 )
          goto LABEL_76;
        goto LABEL_88;
      }
LABEL_119:
      v57 = v7[2].m128i_u64[1];
      goto LABEL_89;
    }
    v13 = memcmp(v9, (const void *)v11->m128i_i64[0], v10);
    if ( !v13 )
    {
      if ( v12 != v8 )
        goto LABEL_8;
      v14 = memcmp(s1, v9, v10);
      if ( v14 )
        goto LABEL_66;
      goto LABEL_12;
    }
    if ( v13 >= 0 )
    {
      v14 = memcmp(s1, v9, v10);
      if ( v14 )
        goto LABEL_66;
      if ( v12 != v8 )
        goto LABEL_11;
      goto LABEL_12;
    }
LABEL_13:
    v15 = v12;
    v16 = *(_QWORD *)(v76 - 16);
    s2 = *(void **)(v76 - 24);
    if ( v16 <= v12 )
      v15 = *(_QWORD *)(v76 - 16);
    if ( v15 )
    {
      n = v15;
      v17 = memcmp(s1, *(const void **)(v76 - 24), v15);
      v15 = n;
      if ( v17 )
      {
        if ( v17 < 0 )
          goto LABEL_36;
        v18 = memcmp(s2, s1, n);
        if ( !v18 )
        {
          if ( v16 != v12 && v16 < v12 )
            goto LABEL_22;
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      if ( v16 == v12 )
      {
        v18 = memcmp(s2, s1, n);
        if ( !v18 )
          goto LABEL_35;
LABEL_34:
        if ( v18 < 0 )
          goto LABEL_22;
        goto LABEL_35;
      }
    }
    else if ( v16 == v12 )
    {
      if ( v11[1].m128i_i64[0] < *(_QWORD *)(v76 - 8) )
        goto LABEL_36;
      goto LABEL_22;
    }
    if ( v16 > v12 )
    {
LABEL_36:
      v27 = v7->m128i_i64[0];
      v28 = v7->m128i_i64[1];
      *v7 = _mm_loadu_si128(v11);
      v11->m128i_i64[0] = v27;
      v29 = v11[1].m128i_i64[0];
      v11->m128i_i64[1] = v28;
      v30 = v7[1].m128i_i64[0];
      v7[1].m128i_i64[0] = v29;
      v11[1].m128i_i64[0] = v30;
      goto LABEL_37;
    }
    if ( v15 )
    {
      v18 = memcmp(s2, s1, v15);
      if ( v18 )
        goto LABEL_34;
    }
    if ( v16 < v12 )
      goto LABEL_22;
LABEL_35:
    if ( v11[1].m128i_i64[0] < *(_QWORD *)(v76 - 8) )
      goto LABEL_36;
LABEL_22:
    v19 = v8;
    if ( v16 <= v8 )
      v19 = v16;
    if ( v19 )
    {
      v20 = memcmp(v9, s2, v19);
      if ( v20 )
      {
        if ( v20 < 0 )
          goto LABEL_32;
        v21 = v7[2].m128i_u64[1];
        v22 = memcmp(s2, v9, v19);
        if ( v22 )
        {
LABEL_30:
          if ( v22 < 0 )
            goto LABEL_135;
          goto LABEL_31;
        }
        if ( v16 != v8 )
          goto LABEL_134;
      }
      else
      {
        if ( v16 != v8 )
          goto LABEL_27;
        v21 = v7[2].m128i_u64[1];
        v22 = memcmp(s2, v9, v19);
        if ( v22 )
          goto LABEL_30;
      }
LABEL_31:
      if ( *(_QWORD *)(v76 - 8) > v21 )
        goto LABEL_32;
LABEL_135:
      v71 = _mm_loadu_si128((__m128i *)((char *)v7 + 24));
      v72 = v7->m128i_i64[0];
      v7[2].m128i_i64[0] = v7->m128i_i64[1];
      v73 = v7[1].m128i_i64[0];
      *v7 = v71;
      v7[1].m128i_i64[1] = v72;
      v7[1].m128i_i64[0] = v21;
      v7[2].m128i_i64[1] = v73;
      goto LABEL_37;
    }
    if ( v16 == v8 )
    {
      v21 = v7[2].m128i_u64[1];
      goto LABEL_31;
    }
LABEL_27:
    if ( v16 <= v8 )
    {
      v21 = v7[2].m128i_u64[1];
      if ( v19 )
      {
        v22 = memcmp(s2, v9, v19);
        if ( v22 )
          goto LABEL_30;
      }
LABEL_134:
      if ( v16 < v8 )
        goto LABEL_135;
      goto LABEL_31;
    }
LABEL_32:
    v23 = v7->m128i_i64[0];
    v24 = v7->m128i_i64[1];
    *v7 = _mm_loadu_si128((const __m128i *)(v76 - 24));
    *(_QWORD *)(v76 - 24) = v23;
    v25 = *(_QWORD *)(v76 - 8);
    *(_QWORD *)(v76 - 16) = v24;
    v26 = v7[1].m128i_i64[0];
    v7[1].m128i_i64[0] = v25;
    *(_QWORD *)(v76 - 8) = v26;
LABEL_37:
    v31 = v7->m128i_u64[1];
    s2a = v7;
    v32 = (const void *)v7->m128i_i64[0];
    v33 = (unsigned __int64)&a1[1].m128i_u64[1];
    v84 = (__m128i *)v76;
    while ( 1 )
    {
      v42 = *(_QWORD *)(v33 + 8);
      v87 = v33;
      v35 = v42;
      s1a = *(const void **)v33;
      if ( v31 <= v42 )
        v35 = v31;
      if ( !v35 )
      {
        if ( v31 == v42 )
          goto LABEL_57;
        goto LABEL_53;
      }
      na = v35;
      v43 = memcmp(*(const void **)v33, v32, v35);
      v35 = na;
      if ( !v43 )
        break;
      if ( v43 < 0 )
        goto LABEL_47;
      v44 = memcmp(v32, s1a, na);
      if ( v44 )
        goto LABEL_103;
      if ( v31 != v42 )
        goto LABEL_56;
LABEL_57:
      if ( *(_QWORD *)(v33 + 16) >= s2a[1].m128i_i64[0] )
        goto LABEL_58;
LABEL_47:
      v33 += 24LL;
    }
    if ( v31 != v42 )
    {
LABEL_53:
      if ( v31 > v42 )
        goto LABEL_47;
      if ( v35 )
      {
        v44 = memcmp(v32, s1a, v35);
        if ( v44 )
          goto LABEL_103;
      }
LABEL_56:
      if ( v31 < v42 )
        goto LABEL_58;
      goto LABEL_57;
    }
    v44 = memcmp(v32, s1a, na);
    if ( !v44 )
      goto LABEL_57;
LABEL_103:
    if ( v44 >= 0 )
      goto LABEL_57;
LABEL_58:
    nb = v42;
    v45 = (__m128i *)((char *)v84 - 24);
    v46 = v33;
    v47 = v32;
    while ( 2 )
    {
      v48 = v45->m128i_u64[1];
      v36 = (const void *)v45->m128i_i64[0];
      v84 = v45;
      v49 = v48;
      if ( v31 <= v48 )
        v49 = v31;
      if ( !v49 )
      {
        if ( v31 != v48 )
        {
          if ( v31 < v48 )
            goto LABEL_64;
          goto LABEL_41;
        }
LABEL_44:
        v35 = v45[1].m128i_u64[0];
        if ( s2a[1].m128i_i64[0] >= v35 )
        {
LABEL_45:
          v33 = v46;
          v38 = v45;
          v39 = nb;
          if ( v33 >= (unsigned __int64)v38 )
            goto LABEL_93;
LABEL_46:
          *(__m128i *)v33 = _mm_loadu_si128(v38);
          v40 = v38[1].m128i_i64[0];
          v38->m128i_i64[0] = (__int64)s1a;
          v38->m128i_i64[1] = v39;
          v41 = *(_QWORD *)(v33 + 16);
          *(_QWORD *)(v33 + 16) = v40;
          v38[1].m128i_i64[0] = v41;
          v31 = s2a->m128i_u64[1];
          v32 = (const void *)s2a->m128i_i64[0];
          goto LABEL_47;
        }
        goto LABEL_64;
      }
      v86 = (void *)v45->m128i_i64[0];
      v34 = memcmp(v47, v36, v49);
      v36 = v86;
      if ( v34 )
      {
        if ( v34 < 0 )
          goto LABEL_64;
        v37 = memcmp(v86, v47, v49);
        if ( !v37 )
        {
          if ( v31 == v48 )
            goto LABEL_44;
          goto LABEL_43;
        }
      }
      else if ( v31 == v48 )
      {
        v37 = memcmp(v86, v47, v49);
        if ( !v37 )
          goto LABEL_44;
      }
      else
      {
        if ( v31 < v48 )
        {
LABEL_64:
          v45 = (__m128i *)((char *)v45 - 24);
          continue;
        }
LABEL_41:
        if ( !v49 || (v37 = memcmp(v36, v47, v49)) == 0 )
        {
LABEL_43:
          if ( v31 > v48 )
            goto LABEL_45;
          goto LABEL_44;
        }
      }
      break;
    }
    if ( v37 >= 0 )
      goto LABEL_44;
    v33 = v46;
    v38 = v45;
    v39 = nb;
    if ( v33 < (unsigned __int64)v38 )
      goto LABEL_46;
LABEL_93:
    v7 = s2a;
    result = sub_1FFB930(v33, v76, v85, v35, v36);
    v61 = v33 - (_QWORD)s2a;
    if ( (__int64)(v33 - (_QWORD)s2a) > 384 )
    {
      v76 = v33;
      if ( !v85 )
      {
LABEL_95:
        v62 = 0xAAAAAAAAAAAAAAABLL * (v61 >> 3);
        v63 = (v62 - 2) >> 1;
        sub_1FFAD80(
          v7->m128i_i8,
          v63,
          v62,
          a4,
          a5,
          a6,
          (__int128)_mm_loadu_si128((__m128i *)((char *)v7 + 24 * v63)),
          v7[1].m128i_u64[3 * v63]);
        do
        {
          --v63;
          sub_1FFAD80(
            v7->m128i_i8,
            v63,
            v62,
            v64,
            v65,
            v66,
            (__int128)_mm_loadu_si128((__m128i *)((char *)v7 + 24 * v63)),
            v7[1].m128i_u64[3 * v63]);
        }
        while ( v63 );
        v67 = v87 - 24;
        do
        {
          v68 = (__int128)_mm_loadu_si128((const __m128i *)v67);
          v69 = v67 - (_QWORD)v7;
          v88 = *(_QWORD *)(v67 + 16);
          v70 = v67 - (_QWORD)v7;
          v67 -= 24LL;
          *(__m128i *)(v67 + 24) = _mm_loadu_si128(v7);
          *(_QWORD *)(v67 + 40) = v7[1].m128i_i64[0];
          result = sub_1FFAD80(v7->m128i_i8, 0, 0xAAAAAAAAAAAAAAABLL * (v70 >> 3), v64, v65, v66, v68, v88);
        }
        while ( v69 > 24 );
        return result;
      }
      continue;
    }
    return result;
  }
}
