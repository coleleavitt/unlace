__int64 __fastcall sub_10A8F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  bool v13; // cc
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  size_t v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  size_t v24; // rdx
  _BYTE *v25; // r13
  size_t v26; // rax
  size_t v27; // rsi
  unsigned __int64 v28; // rax
  size_t v29; // r14
  __int64 v30; // rdx
  __m128i v31; // xmm3
  _BYTE *v32; // r13
  __m128i *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r14
  char *v36; // r12
  char v37; // r14
  __int64 v38; // r12
  __int64 v39; // rdx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  size_t v43; // r14
  unsigned __int64 v44; // rdx
  _BYTE *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  void **v49; // rbx
  _BYTE *v50; // rbx
  __m128i *v51; // rsi
  __int64 v52; // r14
  char *v53; // r12
  char v54; // r14
  __int64 v55; // r12
  __int64 v56; // rdx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rcx
  __int64 v59; // rdi
  size_t v60; // r14
  unsigned __int64 v61; // rax
  _BYTE *v62; // rdi
  __m128i *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rbx
  void **v66; // r13
  void **v67; // r14
  void *v68; // rdi
  _BYTE *v69; // [rsp+0h] [rbp-198h]
  void **v70; // [rsp+0h] [rbp-198h]
  _BYTE *v71; // [rsp+0h] [rbp-198h]
  _BYTE *v72; // [rsp+0h] [rbp-198h]
  char v73; // [rsp+8h] [rbp-190h]
  __int64 v74; // [rsp+8h] [rbp-190h]
  __m128i *ptr; // [rsp+10h] [rbp-188h]
  void **v76; // [rsp+30h] [rbp-168h]
  void **v77; // [rsp+30h] [rbp-168h]
  __int64 v78; // [rsp+30h] [rbp-168h]
  __m128i *v79; // [rsp+38h] [rbp-160h]
  __m128i *v80; // [rsp+48h] [rbp-150h]
  _QWORD v81[2]; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v82[2]; // [rsp+60h] [rbp-138h] BYREF
  __m128i v83; // [rsp+70h] [rbp-128h] BYREF
  __m128i *v84; // [rsp+80h] [rbp-118h] BYREF
  __int64 v85; // [rsp+88h] [rbp-110h]
  _BYTE v86[16]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE *v87; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-F0h]
  _BYTE v89[16]; // [rsp+B0h] [rbp-E8h] BYREF
  void *v90; // [rsp+C0h] [rbp-D8h] BYREF
  size_t v91; // [rsp+C8h] [rbp-D0h]
  char v92; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v93; // [rsp+E0h] [rbp-B8h] BYREF
  __m128i v94; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE *v95; // [rsp+100h] [rbp-98h] BYREF
  __int64 v96; // [rsp+108h] [rbp-90h]
  _BYTE v97[16]; // [rsp+110h] [rbp-88h] BYREF
  void *src; // [rsp+120h] [rbp-78h] BYREF
  size_t n; // [rsp+128h] [rbp-70h]
  __int64 v100; // [rsp+130h] [rbp-68h] BYREF
  __m128i v101; // [rsp+140h] [rbp-58h] BYREF
  __m128i v102; // [rsp+150h] [rbp-48h] BYREF

  *(_OWORD *)a1 = 0;
  v81[1] = a4;
  v81[0] = a3;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  if ( a4 == 7
    && *(_DWORD *)v81[0] == 1634100580
    && *(_WORD *)(v81[0] + 4LL) == 27765
    && *(_BYTE *)(v81[0] + 6LL) == 116 )
  {
    return a1;
  }
  v84 = (__m128i *)v86;
  v85 = 0x100000000LL;
  sub_22471D0(v81, &v84, ";", 1, 0xFFFFFFFFLL, 1);
  ptr = &v84[(unsigned int)v85];
  if ( v84 != ptr )
  {
    v73 = 0;
    v5 = v84;
    while ( 1 )
    {
      v6 = 0;
      v7 = sub_2246FB0(v5, asc_22E1692, 6, 0);
      v8 = v5->m128i_u64[1];
      if ( v7 < v8 )
      {
        v8 = v7;
        v6 = v5->m128i_i64[1] - v7;
      }
      v9 = v5->m128i_i64[0] + v8;
      v101.m128i_i64[1] = v6;
      v101.m128i_i64[0] = v9;
      v10 = sub_2247130(&v101, asc_22E1692, 6, -1);
      v11 = v101.m128i_u64[1];
      v12 = v10 + 1;
      v13 = v12 <= v101.m128i_i64[1];
      v5->m128i_i64[0] = v101.m128i_i64[0];
      if ( !v13 )
        v12 = v11;
      v14 = v11 - v6 + v12;
      if ( v14 > v11 )
        v14 = v11;
      v5->m128i_i64[1] = v14;
      v15 = sub_2246AB0(v5, "=", 1, 0);
      if ( v15 == -1 )
      {
        v46 = v5->m128i_i64[0];
        v47 = v5->m128i_i64[1];
        v102 = 0u;
        v101.m128i_i64[0] = v46;
        v101.m128i_i64[1] = v47;
      }
      else
      {
        v16 = v5->m128i_u64[1];
        v17 = v15 + 1;
        if ( v15 + 1 > v16 )
        {
          v17 = v5->m128i_u64[1];
          v18 = 0;
        }
        else
        {
          v18 = v16 - v17;
        }
        v19 = v5->m128i_i64[0];
        v102.m128i_i64[1] = v18;
        if ( v15 > v16 )
          v15 = v16;
        v101.m128i_i64[0] = v19;
        v101.m128i_i64[1] = v15;
        v102.m128i_i64[0] = v17 + v19;
      }
      v20 = 0;
      v21 = sub_2246FB0(&v102, asc_22E1692, 6, 0);
      v22 = v102.m128i_i64[1];
      if ( v21 < v102.m128i_i64[1] )
      {
        v22 = v21;
        v20 = v102.m128i_i64[1] - v21;
      }
      src = (void *)(v102.m128i_i64[0] + v22);
      n = v20;
      v23 = sub_2247130(&src, asc_22E1692, 6, -1);
      v24 = n;
      v25 = src;
      v26 = v23 + 1;
      if ( v26 > n )
        v26 = n;
      v27 = v26 + n - v20;
      v28 = v5->m128i_u64[1];
      if ( v27 <= n )
        v24 = v27;
      v29 = v24;
      if ( v28 <= 4 )
      {
        if ( v28 != 4 )
        {
          if ( !v28 )
            goto LABEL_64;
          v30 = v5->m128i_i64[0];
          goto LABEL_29;
        }
        v30 = v5->m128i_i64[0];
        if ( *(_DWORD *)v5->m128i_i64[0] != 1031106659 )
          goto LABEL_29;
        goto LABEL_61;
      }
      v30 = v5->m128i_i64[0];
      if ( *(_DWORD *)v5->m128i_i64[0] != 1751347809 || *(_BYTE *)(v30 + 4) != 61 )
      {
        if ( *(_DWORD *)v30 != 1031106659 )
        {
          if ( *(_DWORD *)v30 == 1701737844 && *(_BYTE *)(v30 + 4) == 61 )
          {
            if ( *(_QWORD *)(a1 + 48) )
            {
              *(_QWORD *)(a1 + 80) = 5;
              *(_QWORD *)(a1 + 72) = "tune=";
            }
            *(_QWORD *)(a1 + 40) = v25;
            *(_QWORD *)(a1 + 48) = v29;
            goto LABEL_64;
          }
          if ( v28 > 7 && *(_QWORD *)v30 == 0x797469726F697270LL )
            goto LABEL_64;
LABEL_29:
          if ( *(_BYTE *)v30 != 43 )
            goto LABEL_64;
          v31 = _mm_loadu_si128(v5);
          v95 = v97;
          v96 = 0x100000000LL;
          v83 = v31;
          sub_22471D0(&v83, &v95, ",", 1, 0xFFFFFFFFLL, 1);
          v32 = v95;
          v69 = &v95[16 * (unsigned int)v96];
          if ( v95 == v69 )
            goto LABEL_148;
          v80 = v5;
          while ( 2 )
          {
            v35 = *((_QWORD *)v32 + 1);
            if ( v35 )
            {
              v36 = *(char **)v32;
              sub_22AF6A0(&src, *(_QWORD *)v32 + 1LL, v35 - 1);
              if ( n )
              {
                v37 = *v36;
                v101.m128i_i64[0] = (__int64)&v102;
                v101.m128i_i64[1] = 0;
                v102.m128i_i8[0] = 0;
                sub_995C30((__int64)&v101, n + 1);
                v38 = v101.m128i_i64[1];
                if ( v101.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
LABEL_155:
                  std::__throw_length_error("basic_string::_M_replace_aux");
                v39 = v101.m128i_i64[0];
                v40 = v101.m128i_i64[1] + 1;
                if ( (__m128i *)v101.m128i_i64[0] == &v102 )
                  v41 = 15;
                else
                  v41 = v102.m128i_i64[0];
                if ( v40 > v41 )
                {
                  v78 = v101.m128i_i64[1] + 1;
                  sub_998B30((__int64)&v101, v101.m128i_u64[1], 0, nullptr, 1u);
                  v39 = v101.m128i_i64[0];
                  v40 = v78;
                }
                *(_BYTE *)(v39 + v38) = v37;
                v101.m128i_i64[1] = v40;
                *(_BYTE *)(v101.m128i_i64[0] + v38 + 1) = 0;
                v42 = v101.m128i_i64[0];
                v43 = n + v101.m128i_i64[1];
                if ( (__m128i *)v101.m128i_i64[0] == &v102 )
                  v44 = 15;
                else
                  v44 = v102.m128i_i64[0];
                if ( v43 > v44 )
                {
                  sub_998B30((__int64)&v101, v101.m128i_u64[1], 0, src, n);
                  v42 = v101.m128i_i64[0];
                }
                else if ( n )
                {
                  v45 = (_BYTE *)(v101.m128i_i64[0] + v101.m128i_i64[1]);
                  if ( n == 1 )
                    *v45 = *(_BYTE *)src;
                  else
                    memcpy(v45, src, n);
                  v42 = v101.m128i_i64[0];
                }
                v101.m128i_i64[1] = v43;
                *(_BYTE *)(v42 + v43) = 0;
                v33 = *(__m128i **)(a1 + 8);
                if ( v33 != *(__m128i **)(a1 + 16) )
                {
                  v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
                  v34 = v101.m128i_i64[0];
                  if ( (__m128i *)v101.m128i_i64[0] == &v102 )
                    goto LABEL_57;
LABEL_36:
                  v33->m128i_i64[0] = v34;
                  v33[1].m128i_i64[0] = v102.m128i_i64[0];
                  goto LABEL_37;
                }
LABEL_144:
                sub_A82970((void ***)a1, v33, &v101);
                if ( (__m128i *)v101.m128i_i64[0] != &v102 )
                  operator delete((void *)v101.m128i_i64[0]);
              }
              else
              {
                if ( v36 )
                {
                  v101.m128i_i64[0] = (__int64)&v102;
                  sub_10A4F80(&v101, v36, (__int64)&v36[v35]);
                }
                else
                {
                  v102.m128i_i8[0] = 0;
                  v101.m128i_i64[0] = (__int64)&v102;
                  v101.m128i_i64[1] = 0;
                }
                v33 = *(__m128i **)(a1 + 8);
                if ( v33 == *(__m128i **)(a1 + 16) )
                  goto LABEL_144;
                v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
                v34 = v101.m128i_i64[0];
                if ( (__m128i *)v101.m128i_i64[0] != &v102 )
                  goto LABEL_36;
LABEL_57:
                v33[1] = _mm_load_si128(&v102);
LABEL_37:
                v33->m128i_i64[1] = v101.m128i_i64[1];
                *(_QWORD *)(a1 + 8) += 32LL;
              }
              if ( src != &v100 )
                operator delete(src);
            }
            v32 += 16;
            if ( v69 == v32 )
            {
              v5 = v80;
              v69 = v95;
LABEL_148:
              if ( v69 != v97 )
                free(v69);
              goto LABEL_64;
            }
            continue;
          }
        }
LABEL_61:
        if ( *(_QWORD *)(a1 + 32) )
        {
          *(_QWORD *)(a1 + 80) = 4;
          *(_QWORD *)(a1 + 72) = "cpu=";
        }
        *(_QWORD *)(a1 + 24) = v25;
        *(_QWORD *)(a1 + 32) = v29;
        if ( v73 )
          goto LABEL_64;
        v72 = (_BYTE *)sub_22AFC60(v25, v29);
        v65 = v64;
        if ( !v64 )
          goto LABEL_64;
        v66 = *(void ***)(a1 + 8);
        v77 = *(void ***)a1;
        if ( *(void ***)a1 != v66 )
        {
          v67 = *(void ***)a1;
          do
          {
            while ( *v67 != v67 + 2 )
            {
              operator delete(*v67);
              v67 += 4;
              if ( v66 == v67 )
                goto LABEL_113;
            }
            v67 += 4;
          }
          while ( v66 != v67 );
LABEL_113:
          *(_QWORD *)(a1 + 8) = v77;
        }
        sub_10A8C30(v72, v65, a1);
        goto LABEL_64;
      }
      v76 = *(void ***)a1;
      v49 = *(void ***)a1;
      v70 = *(void ***)(a1 + 8);
      if ( *(void ***)a1 != v70 )
      {
        do
        {
          while ( *v49 != v49 + 2 )
          {
            operator delete(*v49);
            v49 += 4;
            if ( v70 == v49 )
              goto LABEL_74;
          }
          v49 += 4;
        }
        while ( v70 != v49 );
LABEL_74:
        *(_QWORD *)(a1 + 8) = v76;
      }
      if ( v73 )
      {
        *(_QWORD *)(a1 + 80) = 5;
        *(_QWORD *)(a1 + 72) = "arch=";
      }
      if ( !v29 || *v25 != 43 )
      {
        sub_10A8C30(v25, v29, a1);
        v73 = 1;
        goto LABEL_64;
      }
      v82[0] = v25;
      v87 = v89;
      v88 = 0x100000000LL;
      v82[1] = v29;
      sub_22471D0(v82, &v87, ",", 1, 0xFFFFFFFFLL, 1);
      v50 = v87;
      v71 = &v87[16 * (unsigned int)v88];
      if ( v87 == v71 )
        goto LABEL_122;
      v79 = v5;
      do
      {
        v52 = *((_QWORD *)v50 + 1);
        if ( !v52 )
          goto LABEL_89;
        v53 = *(char **)v50;
        sub_22AF6A0(&v90, *(_QWORD *)v50 + 1LL, v52 - 1);
        if ( v91 )
        {
          v54 = *v53;
          v93.m128i_i64[0] = (__int64)&v94;
          v93.m128i_i64[1] = 0;
          v94.m128i_i8[0] = 0;
          sub_995C30((__int64)&v93, v91 + 1);
          v55 = v93.m128i_i64[1];
          if ( v93.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_155;
          v56 = v93.m128i_i64[0];
          v57 = v93.m128i_i64[1] + 1;
          if ( (__m128i *)v93.m128i_i64[0] == &v94 )
            v58 = 15;
          else
            v58 = v94.m128i_i64[0];
          if ( v57 > v58 )
          {
            v74 = v93.m128i_i64[1] + 1;
            sub_998B30((__int64)&v93, v93.m128i_u64[1], 0, nullptr, 1u);
            v56 = v93.m128i_i64[0];
            v57 = v74;
          }
          *(_BYTE *)(v56 + v55) = v54;
          v93.m128i_i64[1] = v57;
          *(_BYTE *)(v93.m128i_i64[0] + v55 + 1) = 0;
          v59 = v93.m128i_i64[0];
          v60 = v91 + v93.m128i_i64[1];
          if ( (__m128i *)v93.m128i_i64[0] == &v94 )
            v61 = 15;
          else
            v61 = v94.m128i_i64[0];
          if ( v60 > v61 )
          {
            sub_998B30((__int64)&v93, v93.m128i_u64[1], 0, v90, v91);
            v59 = v93.m128i_i64[0];
          }
          else if ( v91 )
          {
            v62 = (_BYTE *)(v93.m128i_i64[1] + v93.m128i_i64[0]);
            if ( v91 == 1 )
              *v62 = *(_BYTE *)v90;
            else
              memcpy(v62, v90, v91);
            v59 = v93.m128i_i64[0];
          }
          v93.m128i_i64[1] = v60;
          *(_BYTE *)(v59 + v60) = 0;
          v63 = *(__m128i **)(a1 + 8);
          if ( v63 == *(__m128i **)(a1 + 16) )
          {
            sub_A82970((void ***)a1, v63, &v93);
            v68 = (void *)v93.m128i_i64[0];
            if ( (__m128i *)v93.m128i_i64[0] != &v94 )
              goto LABEL_118;
          }
          else
          {
            v63->m128i_i64[0] = (__int64)v63[1].m128i_i64;
            if ( (__m128i *)v93.m128i_i64[0] == &v94 )
            {
              v63[1] = _mm_load_si128(&v94);
            }
            else
            {
              v63->m128i_i64[0] = v93.m128i_i64[0];
              v63[1].m128i_i64[0] = v94.m128i_i64[0];
            }
            v63->m128i_i64[1] = v93.m128i_i64[1];
            *(_QWORD *)(a1 + 8) += 32LL;
          }
        }
        else
        {
          if ( v53 )
          {
            v101.m128i_i64[0] = (__int64)&v102;
            sub_10A4F80(&v101, v53, (__int64)&v53[v52]);
          }
          else
          {
            v102.m128i_i8[0] = 0;
            v101.m128i_i64[0] = (__int64)&v102;
            v101.m128i_i64[1] = 0;
          }
          v51 = *(__m128i **)(a1 + 8);
          if ( v51 == *(__m128i **)(a1 + 16) )
          {
            sub_A82970((void ***)a1, v51, &v101);
            v68 = (void *)v101.m128i_i64[0];
            if ( (__m128i *)v101.m128i_i64[0] == &v102 )
              goto LABEL_87;
LABEL_118:
            operator delete(v68);
            goto LABEL_87;
          }
          v51->m128i_i64[0] = (__int64)v51[1].m128i_i64;
          if ( (__m128i *)v101.m128i_i64[0] == &v102 )
          {
            v51[1] = _mm_load_si128(&v102);
          }
          else
          {
            v51->m128i_i64[0] = v101.m128i_i64[0];
            v51[1].m128i_i64[0] = v102.m128i_i64[0];
          }
          v51->m128i_i64[1] = v101.m128i_i64[1];
          *(_QWORD *)(a1 + 8) += 32LL;
        }
LABEL_87:
        if ( v90 != &v92 )
          operator delete(v90);
LABEL_89:
        v50 += 16;
      }
      while ( v71 != v50 );
      v5 = v79;
      v71 = v87;
LABEL_122:
      if ( v71 != v89 )
        free(v71);
      v73 = 1;
LABEL_64:
      if ( ptr == ++v5 )
      {
        ptr = v84;
        break;
      }
    }
  }
  if ( ptr != (__m128i *)v86 )
    free(ptr);
  return a1;
}
