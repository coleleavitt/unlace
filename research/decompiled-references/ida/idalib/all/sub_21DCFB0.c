__int64 __fastcall sub_21DCFB0(char **a1, __int64 a2)
{
  size_t v3; // rax
  char *v4; // rbx
  size_t v5; // r12
  size_t v6; // rbp
  size_t v7; // r12
  char *v8; // rdx
  char *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v12; // r12
  bool v13; // al
  void ***v14; // r9
  char *v16; // r14
  char *v17; // rbx
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r12
  char *v22; // r13
  char *v23; // r14
  unsigned __int64 v24; // r14
  unsigned __int64 *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rbx
  char *v28; // rax
  void ***v29; // rax
  char *v30; // r9
  char *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  void *v35; // rax
  char *v36; // r9
  char v37; // al
  unsigned __int64 *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // r14
  char *v41; // rax
  char v42; // dl
  char *v43; // r11
  _OWORD *v44; // rdi
  signed __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rbx
  char *v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  void ***v52; // rax
  size_t v53; // rax
  int v54; // esi
  char *v55; // rax
  char *v56; // rax
  size_t v57; // rsi
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  char v60; // r12
  char *v61; // rax
  char *v62; // rax
  __int64 v63; // rdx
  unsigned __int64 *v64; // r10
  char v65; // al
  int v66; // esi
  void **v67; // r11
  unsigned __int64 *v68; // r10
  __int64 v69; // rax
  void **v70; // r11
  __int64 *v71; // rax
  void ***v72; // rax
  char v73; // r14
  char *v74; // rax
  char *v75; // rax
  unsigned __int64 v76; // rax
  char v77; // dl
  unsigned __int64 v78; // rax
  char *v79; // rcx
  void **v80; // r10
  char v81; // dl
  unsigned __int64 *v82; // r11
  __int64 v83; // rcx
  void **v84; // rdi
  __int64 v85; // rcx
  __m128i v86; // [rsp+8h] [rbp-190h] BYREF
  void ***v87; // [rsp+18h] [rbp-180h]
  char *v88; // [rsp+20h] [rbp-178h]
  unsigned __int64 *v89; // [rsp+28h] [rbp-170h]
  __int64 v90; // [rsp+30h] [rbp-168h]
  void **v91; // [rsp+38h] [rbp-160h]
  void **v92; // [rsp+40h] [rbp-158h]
  unsigned __int64 *v93; // [rsp+48h] [rbp-150h]
  void **v94; // [rsp+58h] [rbp-140h] BYREF
  char **v95; // [rsp+60h] [rbp-138h] BYREF
  __int64 v96; // [rsp+68h] [rbp-130h]
  void *ptr[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v98; // [rsp+80h] [rbp-118h]
  _OWORD v99[4]; // [rsp+88h] [rbp-110h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-D0h] BYREF
  void *v101; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-C0h]
  _BYTE v103[184]; // [rsp+E0h] [rbp-B8h] BYREF

  if ( a2 )
    a1[84] = a1[83];
  v3 = j__strlen("Ut");
  v4 = *a1;
  v5 = v3;
  v6 = a1[1] - *a1;
  if ( !sub_20D1BF0(v6, *a1, v3, "Ut") )
  {
    v7 = j__strlen("Ul");
    if ( !sub_20D1BF0(v6, v4, v7, "Ul") )
    {
      v12 = j__strlen("Ub");
      v13 = sub_20D1BF0(v6, v4, v12, "Ub");
      v14 = nullptr;
      if ( v13 )
      {
        *a1 = &v4[v12];
        sub_21CFC00(a1, 0);
        v56 = *a1;
        v14 = nullptr;
        if ( *a1 != a1[1] && *v56 == 95 )
        {
          *a1 = v56 + 1;
          return sub_21D5650((__int64)(a1 + 101), "'block-literal'");
        }
      }
      return (__int64)v14;
    }
    v95 = a1;
    v16 = a1[83];
    *a1 = &v4[v7];
    v17 = a1[84];
    v86.m128i_i64[0] = (__int64)v99;
    v18 = _mm_loadl_epi64(&v86);
    v86.m128i_i64[1] = (__int64)a1[98];
    v19 = (v17 - v16) >> 3;
    *(__m128i *)ptr = _mm_unpacklo_epi64(v18, v18);
    a1[98] = (char *)v19;
    v96 = v19;
    v98 = &v100;
    memset(v99, 0, sizeof(v99));
    if ( v17 != a1[85] )
      goto LABEL_8;
    v57 = 16 * v19;
    if ( v16 == (char *)(a1 + 86) )
    {
      v75 = (char *)malloc(v57);
      v9 = v75;
      if ( v75 )
      {
        if ( v16 != v17 )
          v9 = (char *)memmove(v75, v16, v17 - v16);
        a1[83] = v9;
        goto LABEL_52;
      }
    }
    else
    {
      v9 = (char *)realloc(v16, v57);
      a1[83] = v9;
      if ( v9 )
      {
LABEL_52:
        v17 = &v9[v17 - v16];
        v86.m128i_i64[0] = v57;
        v58 = (__m128i)_mm_loadh_ps((const double *)v86.m128i_i64);
        v86.m128i_i64[0] = (__int64)v9;
        v59 = _mm_loadl_epi64(&v86);
        *((__m128i *)a1 + 42) = _mm_add_epi64(v58, _mm_unpacklo_epi64(v59, v59));
LABEL_8:
        v20 = a1[3] - a1[2];
        a1[84] = v17 + 8;
        v21 = v20 >> 3;
        *(_QWORD *)v17 = ptr;
        v22 = *a1;
        v23 = a1[1];
        if ( *a1 != v23 )
        {
          v24 = v23 - v22;
          while ( *v22 == 84 )
          {
            v53 = j__strlen("yptnk");
            v54 = 0;
            if ( v24 > 1 )
              v54 = v22[1];
            if ( !v53 )
              break;
            v55 = (char *)memchr("yptnk", v54, v53);
            if ( !v55 )
              break;
            v8 = "";
            if ( v55 == "" )
              break;
            v35 = (void *)sub_21E3AA0(a1, ptr);
            v101 = v35;
            if ( !v35 )
              goto LABEL_49;
            sub_20D8690(a1 + 2, (__int64 *)&v101);
            v22 = *a1;
            v24 = a1[1] - *a1;
            if ( *a1 == a1[1] )
              break;
          }
        }
        v25 = (unsigned __int64 *)sub_21D4550(a1, v21, (__int64)v8, (__int64)v9, v10, v11);
        v27 = v26;
        if ( !v26 )
          a1[84] -= 8;
        v88 = nullptr;
        v28 = *a1;
        if ( *a1 != a1[1] && *v28 == 81 )
        {
          v73 = *((_BYTE *)a1 + 778);
          *((_BYTE *)a1 + 778) = 1;
          *a1 = v28 + 1;
          v74 = sub_21D94E0((__int64)a1);
          *((_BYTE *)a1 + 778) = v73;
          v88 = v74;
          if ( !v74 )
            goto LABEL_22;
        }
        v29 = (void ***)j__strlen("v");
        v30 = *a1;
        v31 = a1[1];
        v87 = v29;
        v86.m128i_i64[0] = (__int64)v30;
        if ( !sub_20D1BF0(v31 - v30, v30, (size_t)v29, "v") )
        {
          while ( 1 )
          {
            v35 = (void *)sub_21DFD40(a1);
            v101 = v35;
            if ( !v35 )
              break;
            sub_20D8690(a1 + 2, (__int64 *)&v101);
            if ( *a1 != a1[1] )
            {
              v37 = **a1;
              if ( v37 == 69 || v37 == 81 )
                goto LABEL_19;
            }
          }
LABEL_49:
          v14 = (void ***)v35;
          goto LABEL_23;
        }
        v36 = (char *)v87 + v86.m128i_i64[0];
        *a1 = (char *)v87 + v86.m128i_i64[0];
LABEL_19:
        v38 = (unsigned __int64 *)sub_21D4550(a1, v21, v32, v33, v34, (__int64)v36);
        v40 = v39;
        v41 = *a1;
        if ( *a1 == a1[1] )
          goto LABEL_22;
        v42 = *v41;
        v43 = nullptr;
        if ( *v41 == 81 )
        {
          v60 = *((_BYTE *)a1 + 778);
          *((_BYTE *)a1 + 778) = 1;
          *a1 = v41 + 1;
          v86.m128i_i64[0] = (__int64)v38;
          v61 = sub_21D94E0((__int64)a1);
          *((_BYTE *)a1 + 778) = v60;
          v43 = v61;
          if ( !v61 )
            goto LABEL_22;
          v41 = *a1;
          if ( *a1 == a1[1] )
            goto LABEL_22;
          v42 = *v41;
          v38 = (unsigned __int64 *)v86.m128i_i64[0];
        }
        if ( v42 == 69 )
        {
          v89 = v38;
          *a1 = v41 + 1;
          v87 = (void ***)v43;
          v86.m128i_i64[0] = sub_21CFC00(a1, 0);
          v62 = *a1;
          v90 = v63;
          if ( v62 != a1[1] )
          {
            v64 = v89;
            if ( *v62 == 95 )
            {
              v92 = (void **)v87;
              *a1 = v62 + 1;
              v65 = *((_BYTE *)a1 + 937);
              v93 = v64;
              LOBYTE(v89) = v65;
              v101 = v103;
              v102 = 0x2000000000LL;
              v94 = &v101;
              sub_9B7040((__int64)&v101, 52);
              sub_21CFFC0((__int64)&v101);
              v87 = &v94;
              sub_21D0B50(&v94, v25, v27);
              v91 = v94;
              sub_9B7040((__int64)v94, (int)v88);
              sub_9B7040((__int64)v91, SHIDWORD(v88));
              sub_21D0B50(v87, v93, v40);
              v66 = (int)v92;
              v91 = v92;
              v92 = v94;
              sub_9B7040((__int64)v94, v66);
              sub_9B7040((__int64)v92, SHIDWORD(v91));
              v92 = (void **)v93;
              if ( v86.m128i_i64[0] )
              {
                sub_2222BB0(v94, v90, v86.m128i_i64[0]);
                v68 = (unsigned __int64 *)v92;
                v67 = v91;
              }
              else
              {
                sub_2222BB0(v94, 0, 0);
                v67 = v91;
                v68 = (unsigned __int64 *)v92;
              }
              v93 = v68;
              v92 = v67;
              v91 = (void **)(a1 + 113);
              v69 = sub_2223360(a1 + 113, &v101, v87, off_2BE9FD0);
              v70 = v92;
              v14 = (void ***)v69;
              if ( v69 )
              {
                v14 = (void ***)(v69 + 8);
                if ( v101 != v103 )
                {
                  v86.m128i_i64[0] = v69 + 8;
                  free(v101);
                  v14 = (void ***)v86.m128i_i64[0];
                }
                if ( v14 )
                {
                  v86.m128i_i64[0] = (__int64)v14;
                  v101 = v14;
                  v71 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v101);
                  v14 = (void ***)v86.m128i_i64[0];
                  if ( v71 )
                  {
                    v72 = (void ***)v71[1];
                    if ( v72 )
                      v14 = v72;
                  }
                  if ( a1[116] == (char *)v14 )
                    *((_BYTE *)a1 + 936) = 1;
                }
              }
              else
              {
                if ( (_BYTE)v89 )
                {
                  v92 = (void **)v93;
                  v89 = (unsigned __int64 *)v70;
                  v78 = sub_21D40A0((__int64 *)a1 + 101, 88, 3u);
                  v79 = v88;
                  v80 = v92;
                  v81 = *(_BYTE *)(v78 + 18);
                  v82 = v89;
                  *(_QWORD *)(v78 + 24) = v25;
                  *(_QWORD *)(v78 + 40) = v79;
                  v83 = v86.m128i_i64[0];
                  *(_QWORD *)v78 = 0;
                  v84 = v91;
                  *(_QWORD *)(v78 + 72) = v83;
                  v85 = v90;
                  *(_BYTE *)(v78 + 18) = v81 & 0xF0 | 5;
                  *(_QWORD *)(v78 + 80) = v85;
                  *(_WORD *)(v78 + 16) = 16436;
                  *(_QWORD *)(v78 + 8) = off_2BE7A40;
                  *(_QWORD *)(v78 + 32) = v27;
                  *(_QWORD *)(v78 + 48) = v80;
                  *(_QWORD *)(v78 + 56) = v40;
                  *(_QWORD *)(v78 + 64) = v82;
                  v87 = (void ***)(v78 + 8);
                  sub_2223210(v84, v78, v94, off_2BE9FD0);
                  v14 = v87;
                }
                if ( v101 != v103 )
                {
                  v86.m128i_i64[0] = (__int64)v14;
                  free(v101);
                  v14 = (void ***)v86.m128i_i64[0];
                }
                a1[115] = (char *)v14;
              }
              goto LABEL_23;
            }
          }
        }
LABEL_22:
        v14 = nullptr;
LABEL_23:
        v44 = ptr[0];
        v95[84] = &v95[83][8 * v96];
        if ( v44 != v99 )
        {
          v86.m128i_i64[0] = (__int64)v14;
          free(v44);
          v14 = (void ***)v86.m128i_i64[0];
        }
        a1[98] = (char *)v86.m128i_i64[1];
        return (__int64)v14;
      }
    }
    abort();
  }
  *a1 = &v4[v5];
  v45 = sub_21CFC00(a1, 0);
  v14 = nullptr;
  v47 = v45;
  v48 = v46;
  v49 = *a1;
  if ( *a1 != a1[1] && *v49 == 95 )
  {
    *a1 = v49 + 1;
    v86.m128i_i8[0] = *((_BYTE *)a1 + 937);
    v102 = 0x2000000000LL;
    v101 = v103;
    sub_21D0070((__int64)&v101, 0x33u, v47, v46);
    v50 = sub_2223360(a1 + 113, &v101, &v95, off_2BE9FD0);
    v14 = (void ***)v50;
    if ( v50 )
    {
      v14 = (void ***)(v50 + 8);
      if ( v101 != v103 )
      {
        v86.m128i_i64[0] = v50 + 8;
        free(v101);
        v14 = (void ***)v86.m128i_i64[0];
      }
      if ( v14 )
      {
        v86.m128i_i64[0] = (__int64)v14;
        v101 = v14;
        v51 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v101);
        v14 = (void ***)v86.m128i_i64[0];
        if ( v51 )
        {
          v52 = (void ***)v51[1];
          if ( v52 )
            v14 = v52;
        }
        if ( a1[116] == (char *)v14 )
          *((_BYTE *)a1 + 936) = 1;
      }
    }
    else
    {
      if ( v86.m128i_i8[0] )
      {
        v76 = sub_21D40A0((__int64 *)a1 + 101, 40, 3u);
        *(_WORD *)(v76 + 16) = 16435;
        v77 = *(_BYTE *)(v76 + 18);
        *(_QWORD *)v76 = 0;
        *(_QWORD *)(v76 + 24) = v47;
        *(_QWORD *)(v76 + 32) = v48;
        *(_BYTE *)(v76 + 18) = v77 & 0xF0 | 5;
        v86.m128i_i64[0] = v76 + 8;
        *(_QWORD *)(v76 + 8) = off_2BE79E0;
        sub_2223210(a1 + 113, v76, v95, off_2BE9FD0);
        v14 = (void ***)v86.m128i_i64[0];
      }
      if ( v101 != v103 )
      {
        v86.m128i_i64[0] = (__int64)v14;
        free(v101);
        v14 = (void ***)v86.m128i_i64[0];
      }
      a1[115] = (char *)v14;
    }
  }
  return (__int64)v14;
}
