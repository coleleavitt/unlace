unsigned __int64 __fastcall sub_6D68A0(
        __int64 a1,
        __int64 *a2,
        __int64 **a3,
        __int64 a4,
        double a5,
        double a6,
        __m128 a7)
{
  __int64 *v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  const void *v13; // r15
  size_t v14; // rbx
  size_t v15; // rbx
  char *v16; // r14
  __int64 v17; // rdx
  size_t v18; // rbp
  char v19; // dl
  __int64 v20; // rax
  char *v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // r15
  __int64 v24; // r12
  const char *v25; // rdi
  __int64 v26; // rax
  __m128i *v27; // r12
  __int64 v28; // rbx
  unsigned __int64 *v29; // r13
  __int64 *v30; // r14
  __int64 v31; // rbp
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  size_t v34; // rdx
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r15
  size_t v44; // rax
  size_t v45; // r10
  size_t v46; // rax
  size_t v47; // rbx
  size_t v48; // r10
  size_t v49; // rax
  char *v50; // rsi
  int v51; // r12d
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rbp
  __int64 v54; // r15
  char *v55; // rdi
  size_t v56; // rbx
  char *v57; // rax
  unsigned __int64 v58; // rbp
  unsigned int v59; // edi
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rdx
  char *v64; // rbp
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rbx
  __int64 v68; // r12
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __int64 v71; // rdx
  __m128i v72; // xmm0
  void *v73; // rdi
  void *v74; // rdi
  __int64 v76; // rax
  void *v77; // rdi
  size_t v78; // rdx
  void *v79; // rdi
  size_t v80; // rdx
  unsigned __int64 v81; // rdx
  __int64 *v82; // r8
  __m128i *v83; // rbx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 *v86; // rax
  __int64 *v87; // rsi
  __m128i *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  char *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 *v94; // [rsp+0h] [rbp-B8h]
  __int64 v95; // [rsp+0h] [rbp-B8h]
  __int64 *v96; // [rsp+0h] [rbp-B8h]
  __int64 *v97; // [rsp+0h] [rbp-B8h]
  __int64 v100; // [rsp+18h] [rbp-A0h]
  int v101; // [rsp+20h] [rbp-98h]
  const void *v102; // [rsp+20h] [rbp-98h]
  char *v104; // [rsp+30h] [rbp-88h]
  __int64 v105; // [rsp+30h] [rbp-88h]
  size_t v106; // [rsp+30h] [rbp-88h]
  size_t v107; // [rsp+30h] [rbp-88h]
  size_t v108; // [rsp+30h] [rbp-88h]
  __int64 v109; // [rsp+38h] [rbp-80h]
  size_t v110; // [rsp+38h] [rbp-80h]
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-70h]
  char *s; // [rsp+60h] [rbp-58h] BYREF
  __int128 v114; // [rsp+68h] [rbp-50h]
  unsigned __int64 v115; // [rsp+78h] [rbp-40h]

  v7 = a2;
  v8 = *a3;
  v9 = (__int64)&(*a3)[3 * (_QWORD)a3[1]];
  v115 = __readfsqword(0x28u);
  v10 = a4;
  if ( v8 != (__int64 *)v9 )
  {
    v100 = v9;
    v94 = v8;
    while ( 1 )
    {
      a5 = 0.0;
      v11 = v94[1];
      v12 = *v94;
      *(_OWORD *)n = 0;
      s2 = nullptr;
      v13 = (const void *)(v12 + *a2);
      v14 = v11 - v12;
      if ( v11 == v12 )
        break;
      v55 = nullptr;
      if ( v14 != -1 )
      {
        s2 = (char *)qvector_reserve(&s2, 0, v14 + 1, 1);
        v55 = s2;
      }
      n[0] = v14 + 1;
      memmove(v55, v13, v14);
      a5 = 0.0;
      s2[v14] = 0;
      v56 = n[0];
      s = nullptr;
      v114 = 0;
      if ( !n[0] )
        goto LABEL_5;
      v57 = (char *)qalloc_or_throw(n[0], (const char *)v13);
      *((_QWORD *)&v114 + 1) = v56;
      s = v57;
      memcpy(v57, s2, v56);
      *(_QWORD *)&v114 = v56;
      if ( **(__int64 **)(a1 + 8) >= 0 )
      {
LABEL_6:
        sub_4B67F0((__int64)&s);
        v15 = v114;
        v16 = s;
        v17 = v114;
        goto LABEL_7;
      }
      v16 = s;
      v49 = v56;
LABEL_64:
      v58 = 0;
      while ( v58 < v49 - 1 )
      {
        v59 = v16[v58];
        if ( v59 > 0x7F || !isalnum(v59) )
        {
          v16[v58] = 95;
          v16 = s;
        }
        v15 = v114;
        ++v58;
        v49 = v114;
        if ( !(_QWORD)v114 )
          goto LABEL_70;
      }
      v15 = v114;
      v17 = v114;
LABEL_7:
      v18 = n[0];
      if ( n[0] )
      {
        v48 = n[0] - 1;
        if ( !v15 )
        {
          v49 = 0;
          goto LABEL_51;
        }
        v49 = v15 - 1;
        if ( v48 >= v15 - 1 )
          goto LABEL_51;
        if ( n[0] != 1 )
        {
          if ( v15 < n[0] )
          {
            if ( *((_QWORD *)&v114 + 1) < n[0] )
            {
              v91 = (char *)qvector_reserve(&s, v16, n[0], 1);
              v17 = v114;
              s = v91;
              v16 = v91;
            }
            memset(&v16[v17], 0, v18 - v17);
            *(_QWORD *)&v114 = v18;
            v16 = s;
          }
          else if ( n[0] != v15 )
          {
            *(_QWORD *)&v114 = n[0];
          }
          v16[v18 - 1] = 0;
          v16 = s;
          goto LABEL_12;
        }
      }
      else if ( v15 <= 1 )
      {
        goto LABEL_12;
      }
      if ( v16 )
      {
        *(_QWORD *)&v114 = 0;
        qfree(v16);
        s = nullptr;
        *((_QWORD *)&v114 + 1) = 0;
      }
      v16 = nullptr;
LABEL_12:
      v19 = *v16;
      if ( *v16 )
      {
        v20 = 0;
        do
        {
          *((_BYTE *)v13 + v20++) = v19;
          v19 = v16[v20];
        }
        while ( v19 );
        v16 = s;
      }
      v21 = s2;
      v22 = *(_QWORD *)(a1 + 568);
      if ( v22 )
      {
        v23 = *(_QWORD *)(a1 + 560);
        v24 = 0;
        while ( 1 )
        {
          v25 = haystack;
          if ( *(_QWORD *)(v23 + 8) )
            v25 = *(const char **)v23;
          if ( !strcmp(v25, v21) )
            break;
          ++v24;
          v23 += 56;
          if ( v24 == v22 )
          {
            v40 = v22 + 1;
            goto LABEL_40;
          }
        }
      }
      else
      {
        v40 = 1;
LABEL_40:
        v101 = *((_DWORD *)v94 + 4);
        v41 = *(_QWORD *)(a1 + 576);
        if ( v41 < v40 )
        {
          v61 = qvector_reserve(a1 + 560, 0, v40, 56);
          v62 = *(_QWORD *)(a1 + 576);
          *(_QWORD *)(a1 + 576) = v41;
          v63 = v61;
          v64 = *(char **)(a1 + 560);
          v65 = *(_QWORD *)(a1 + 568);
          if ( v65 - 1 >= 0 )
          {
            v104 = v21;
            v66 = v63;
            v67 = v65 - 1;
            v109 = v62;
            v68 = v63;
            do
            {
              v69 = *(_QWORD *)v64;
              v70 = _mm_loadu_si128((const __m128i *)(v64 + 8));
              a6 = 0.0;
              *(_QWORD *)v64 = 0;
              *(_OWORD *)(v64 + 8) = 0;
              *(_QWORD *)v68 = v69;
              *(__m128i *)(v68 + 8) = v70;
              v71 = *((_QWORD *)v64 + 3);
              v72 = _mm_loadu_si128((const __m128i *)v64 + 2);
              *((_QWORD *)v64 + 3) = 0;
              *(_QWORD *)(v68 + 24) = v71;
              *(__m128i *)(v68 + 32) = v72;
              LODWORD(v71) = *((_DWORD *)v64 + 12);
              *((_QWORD *)v64 + 5) = 0;
              *(_DWORD *)(v68 + 48) = v71;
              v73 = *((void **)v64 + 3);
              if ( v73 )
              {
                *((_QWORD *)v64 + 4) = 0;
                qfree(v73);
              }
              v74 = *(void **)v64;
              if ( *(_QWORD *)v64 )
              {
                *((_QWORD *)v64 + 1) = 0;
                qfree(v74);
              }
              v64 += 56;
              v68 += 56;
            }
            while ( v67-- != 0 );
            v21 = v104;
            v63 = v66;
            v62 = v109;
            v64 = *(char **)(a1 + 560);
          }
          v105 = v63;
          qfree(v64);
          v42 = v105;
          *(_QWORD *)(a1 + 576) = v62;
          v22 = *(_QWORD *)(a1 + 568);
          *(_QWORD *)(a1 + 560) = v105;
        }
        else
        {
          v42 = *(_QWORD *)(a1 + 560);
        }
        a5 = 0.0;
        v43 = v42 + 56 * v22;
        *(_QWORD *)v43 = 0;
        *(_QWORD *)(v43 + 24) = 0;
        *(_DWORD *)(v43 + 48) = 0;
        *(_OWORD *)(v43 + 8) = 0;
        *(_OWORD *)(v43 + 32) = 0;
        ++*(_QWORD *)(a1 + 568);
        if ( v21 && (v44 = strlen(v21), (v45 = v44) != 0) )
        {
          v77 = *(void **)v43;
          v78 = v44 + 1;
          if ( *(_QWORD *)(v43 + 16) < v44 + 1 )
          {
            v108 = v44 + 1;
            v110 = v44;
            v93 = qvector_reserve(v43, *(_QWORD *)v43, v78, 1);
            v45 = v110;
            v78 = v108;
            *(_QWORD *)v43 = v93;
            v77 = (void *)v93;
          }
          *(_QWORD *)(v43 + 8) = v78;
          v106 = v45;
          memmove(v77, v21, v45);
          *(_BYTE *)(*(_QWORD *)v43 + v106) = 0;
        }
        else
        {
          *(_QWORD *)(v43 + 8) = 0;
        }
        if ( v16 && (v46 = strlen(v16), (v47 = v46) != 0) )
        {
          v79 = *(void **)(v43 + 24);
          v80 = v46 + 1;
          if ( *(_QWORD *)(v43 + 40) < v46 + 1 )
          {
            v107 = v46 + 1;
            v92 = qvector_reserve(v43 + 24, *(_QWORD *)(v43 + 24), v80, 1);
            v80 = v107;
            *(_QWORD *)(v43 + 24) = v92;
            v79 = (void *)v92;
          }
          *(_QWORD *)(v43 + 32) = v80;
          memmove(v79, v16, v47);
          *(_BYTE *)(*(_QWORD *)(v43 + 24) + v47) = 0;
        }
        else
        {
          *(_QWORD *)(v43 + 32) = 0;
        }
        v16 = s;
        *(_DWORD *)(v43 + 48) = v101;
      }
      if ( v16 )
      {
        *(_QWORD *)&v114 = 0;
        qfree(v16);
      }
      if ( s2 )
      {
        n[0] = 0;
        qfree(s2);
      }
      v94 += 3;
      if ( (__int64 *)v100 == v94 )
      {
        v7 = a2;
        v10 = a4;
        goto LABEL_28;
      }
    }
    s = nullptr;
    v114 = 0;
LABEL_5:
    if ( **(__int64 **)(a1 + 8) >= 0 )
      goto LABEL_6;
    v15 = v114;
    v16 = s;
    v49 = v114;
    if ( !(_QWORD)v114 )
    {
LABEL_70:
      if ( !n[0] )
        goto LABEL_12;
      v48 = n[0] - 1;
LABEL_51:
      if ( v49 >= v48 )
        goto LABEL_12;
      v50 = v16;
      v102 = v13;
      v51 = 0;
      v52 = v48 - v49;
      while ( 2 )
      {
        if ( v15 )
        {
          v53 = v15 + 1;
          v54 = v15--;
          if ( *((_QWORD *)&v114 + 1) < v53 )
            goto LABEL_58;
        }
        else
        {
          v54 = 1;
          v53 = 2;
          if ( *((_QWORD *)&v114 + 1) < 2u )
          {
LABEL_58:
            s = (char *)qvector_reserve(&s, v50, v53, 1);
            v50 = s;
          }
        }
        *(_QWORD *)&v114 = v53;
        ++v51;
        v50[v15] = 95;
        s[v54] = 0;
        v50 = s;
        if ( v51 >= v52 )
        {
          v13 = v102;
          v16 = s;
          goto LABEL_12;
        }
        v15 = v114;
        continue;
      }
    }
    goto LABEL_64;
  }
LABEL_28:
  v26 = *(_QWORD *)(v10 + 8);
  if ( !v26 )
    return v115 - __readfsqword(0x28u);
  v27 = *(__m128i **)v10;
  v28 = 8 * v26;
  v29 = (unsigned __int64 *)(*(_QWORD *)v10 + 8 * v26);
  if ( v26 != 1 )
  {
    if ( v27 == (__m128i *)v29 )
      return v115 - __readfsqword(0x28u);
    v96 = v7;
    if ( v28 >> 3 )
    {
      _BitScanReverse64(&v81, v28 >> 3);
      sub_6CF380(v27, v29, 2LL * (int)v81, a5, a6, a7);
      v82 = v96;
      if ( v28 > 128 )
      {
        v83 = v27 + 8;
        sub_6CEFC0(v27->m128i_i8, v27[8].m128i_i8);
        v7 = v96;
        do
        {
          v84 = v83->m128i_i64[0];
          v85 = v83[-1].m128i_u64[1];
          v86 = &v83[-1].m128i_i64[1];
          if ( v83->m128i_i64[0] >= v85 )
          {
            v87 = (__int64 *)v83;
          }
          else
          {
            do
            {
              v86[1] = v85;
              v87 = v86;
              v85 = *--v86;
            }
            while ( v84 < v85 );
          }
          v83 = (__m128i *)((char *)v83 + 8);
          *v87 = v84;
        }
        while ( v83 != (__m128i *)v29 );
        goto LABEL_110;
      }
    }
    else
    {
      sub_6CF380(v27, v29, -2, a5, a6, a7);
      v82 = v96;
    }
    v97 = v82;
    sub_6CEFC0(v27->m128i_i8, (char *)v29);
    v7 = v97;
LABEL_110:
    v27 = *(__m128i **)v10;
    v29 = (unsigned __int64 *)(*(_QWORD *)v10 + 8LL * *(_QWORD *)(v10 + 8));
    if ( *(unsigned __int64 **)v10 == v29 )
      return v115 - __readfsqword(0x28u);
    v88 = (__m128i *)(v29 - 1);
    if ( v27 >= (__m128i *)(v29 - 1) )
      goto LABEL_31;
    do
    {
      v89 = v27->m128i_i64[0];
      v90 = v88->m128i_i64[0];
      v27 = (__m128i *)((char *)v27 + 8);
      v88 = (__m128i *)((char *)v88 - 8);
      v27[-1].m128i_i64[1] = v90;
      v88->m128i_i64[1] = v89;
    }
    while ( v27 < v88 );
    v27 = *(__m128i **)v10;
    v29 = (unsigned __int64 *)(*(_QWORD *)v10 + 8LL * *(_QWORD *)(v10 + 8));
  }
  if ( v27 != (__m128i *)v29 )
  {
LABEL_31:
    v30 = v7;
    while ( 1 )
    {
      v36 = v30[1];
      v37 = v27->m128i_i64[0];
      v38 = v30[2];
      v39 = *v30;
      if ( v36 )
        break;
      if ( v38 <= 5 )
      {
        v32 = 0;
        v31 = 6;
        v33 = 5;
LABEL_96:
        v95 = v33;
        v76 = qvector_reserve(v30, v39, v31, 1);
        v33 = v95;
        *v30 = v76;
        v39 = v76;
LABEL_33:
        v30[1] = v31;
        *(_BYTE *)(v39 + v33) = 0;
        if ( v37 < v32 )
        {
          v34 = v32 - v37;
          v32 = v37;
          memmove((void *)(v37 + *v30 + 5), (const void *)(v37 + *v30), v34);
        }
        goto LABEL_35;
      }
      v30[1] = 6;
      v32 = 0;
      *(_BYTE *)(v39 + 5) = 0;
LABEL_35:
      v35 = *v30 + v32;
      v27 = (__m128i *)((char *)v27 + 8);
      *(_DWORD *)v35 = 1684631414;
      *(_BYTE *)(v35 + 4) = 32;
      if ( v29 == (unsigned __int64 *)v27 )
        return v115 - __readfsqword(0x28u);
    }
    v31 = v36 + 5;
    v32 = v36 - 1;
    v33 = v36 + 4;
    if ( v38 < v36 + 5 )
      goto LABEL_96;
    goto LABEL_33;
  }
  return v115 - __readfsqword(0x28u);
}

