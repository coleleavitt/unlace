unsigned __int64 __fastcall txtdiff_t_diff_mod_0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  char *v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r13
  void **v10; // r14
  _QWORD *v11; // r13
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rsi
  const __m128i *v14; // rbx
  char *v15; // rdi
  __m128i v16; // xmm0
  void *v17; // r8
  char *v18; // rbx
  char *v19; // rax
  void *v20; // rsi
  void **v21; // rbp
  __int64 v22; // r14
  void *k; // r12
  char *v24; // rax
  void *v25; // rdi
  __int64 v26; // rcx
  char *v27; // rax
  char *v28; // rbp
  void **v29; // rbx
  void *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rcx
  _BYTE *v33; // rax
  char *v34; // r14
  char *v35; // rbx
  void *v36; // rdi
  _BYTE *v37; // rsi
  _QWORD *v38; // rdx
  char *v39; // r8
  __int64 v40; // rbp
  _QWORD *v41; // r13
  __int64 v42; // rbx
  char *v43; // rdx
  void *v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rbx
  __int64 v47; // rdx
  _QWORD *v48; // r9
  void **v49; // r10
  __int64 v50; // r8
  void **v51; // rax
  void **v52; // rbp
  void **v53; // rbx
  void *v54; // rdi
  size_t v55; // rdx
  void *v56; // rax
  __m128i v57; // xmm0
  char *v58; // rbx
  void *v59; // rdi
  const __m128i *v60; // rax
  __int64 v61; // rdx
  __m128i v62; // xmm0
  char **v63; // rbx
  char *v64; // rdx
  char *v65; // r14
  char *i; // r13
  char *v67; // rax
  void *v68; // rdi
  char *v69; // rdx
  char *v70; // r14
  char *j; // r13
  char *v72; // rax
  void *v73; // rdi
  void *v74; // rbx
  __int128 v75; // xmm0
  _QWORD *v76; // rbp
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  void *v80; // r13
  char *v81; // r12
  __int64 v82; // rdx
  unsigned __int64 *v83; // r15
  size_t v84; // r14
  void *v85; // rax
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  __int128 v90; // xmm0
  void **v91; // rbp
  __int64 v92; // r13
  unsigned __int64 v93; // rbx
  __int64 v94; // r12
  char *v95; // rdx
  unsigned __int64 *v96; // r15
  size_t v97; // r14
  void *v98; // rax
  __int64 v99; // [rsp+0h] [rbp-78h]
  _BYTE *v100; // [rsp+0h] [rbp-78h]
  __int64 v101; // [rsp+0h] [rbp-78h]
  void *v102; // [rsp+0h] [rbp-78h]
  char *v103; // [rsp+0h] [rbp-78h]
  _QWORD *v104; // [rsp+0h] [rbp-78h]
  char *v105; // [rsp+8h] [rbp-70h]
  char *v106; // [rsp+8h] [rbp-70h]
  char *v107; // [rsp+8h] [rbp-70h]
  char *v108; // [rsp+8h] [rbp-70h]
  char *v109; // [rsp+8h] [rbp-70h]
  _QWORD *v110; // [rsp+8h] [rbp-70h]
  void **v111; // [rsp+8h] [rbp-70h]
  _BYTE *v112; // [rsp+8h] [rbp-70h]
  __int64 v113; // [rsp+8h] [rbp-70h]
  char *v114; // [rsp+8h] [rbp-70h]
  char *dest; // [rsp+10h] [rbp-68h]
  void *destg; // [rsp+10h] [rbp-68h]
  char *desta; // [rsp+10h] [rbp-68h]
  void *destb; // [rsp+10h] [rbp-68h]
  void *desth; // [rsp+10h] [rbp-68h]
  _QWORD *destc; // [rsp+10h] [rbp-68h]
  char *destd; // [rsp+10h] [rbp-68h]
  char *deste; // [rsp+10h] [rbp-68h]
  void *destf; // [rsp+10h] [rbp-68h]
  unsigned __int64 v124; // [rsp+18h] [rbp-60h]
  void *v125; // [rsp+18h] [rbp-60h]
  __int64 v126; // [rsp+18h] [rbp-60h]
  __int64 v127; // [rsp+18h] [rbp-60h]
  char *v128; // [rsp+18h] [rbp-60h]
  _QWORD *v129; // [rsp+18h] [rbp-60h]
  void *v130; // [rsp+20h] [rbp-58h]
  _QWORD *v131; // [rsp+20h] [rbp-58h]
  unsigned __int64 v132; // [rsp+20h] [rbp-58h]
  _QWORD *v133; // [rsp+20h] [rbp-58h]
  __int64 v134; // [rsp+28h] [rbp-50h]
  void **v135; // [rsp+28h] [rbp-50h]
  __int64 v136; // [rsp+28h] [rbp-50h]
  void *v137; // [rsp+30h] [rbp-48h]
  __int64 v138; // [rsp+30h] [rbp-48h]
  unsigned __int64 v139; // [rsp+30h] [rbp-48h]
  __int64 v140; // [rsp+30h] [rbp-48h]
  __int64 v141; // [rsp+38h] [rbp-40h]
  __int64 v142; // [rsp+38h] [rbp-40h]

  v1 = a1;
  sub_3EEBA0(a1);
  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v6 = 0;
    v7 = nullptr;
    do
    {
      v9 = *(_QWORD *)(v1 + 56);
      ++v7;
      v10 = (void **)(v9 + v6);
      if ( *(_DWORD *)(v9 + v6 + 48) == 2 && (unsigned __int64)v7 < result )
      {
        v8 = v6 + 56;
        v11 = (_QWORD *)(v6 + 56 + v9);
        if ( *((_DWORD *)v11 + 12) == 1 )
        {
          v12 = (unsigned __int64)v10[1];
          v13 = v11[1];
          if ( v12 == v13 )
          {
            *((_DWORD *)v11 + 12) = 3;
            v60 = (const __m128i *)(v8 + *(_QWORD *)(v1 + 56));
            v61 = v60[1].m128i_i64[1];
            v62 = _mm_loadu_si128(v60 + 2);
            v60[1].m128i_i64[1] = (__int64)*v10;
            v60[2].m128i_i64[0] = (__int64)v10[1];
            v60[2].m128i_i64[1] = (__int64)v10[2];
            *v10 = (void *)v61;
            *(__m128i *)(v10 + 1) = v62;
            v63 = (char **)(*(_QWORD *)(v1 + 56) + v6);
            v64 = v63[3];
            if ( v64 )
            {
              v65 = v63[4];
              if ( v65 )
              {
                for ( i = nullptr; i != v65; ++i )
                {
                  v67 = &v64[24 * (_QWORD)i];
                  v68 = *(void **)v67;
                  if ( *(_QWORD *)v67 )
                  {
                    *((_QWORD *)v67 + 1) = 0;
                    qfree(v68);
                    v64 = v63[3];
                  }
                }
              }
              v63[4] = nullptr;
              qfree(v64);
            }
            v69 = *v63;
            if ( *v63 )
            {
              v70 = v63[1];
              if ( v70 )
              {
                for ( j = nullptr; j != v70; ++j )
                {
                  v72 = &v69[24 * (_QWORD)j];
                  v73 = *(void **)v72;
                  if ( *(_QWORD *)v72 )
                  {
                    *((_QWORD *)v72 + 1) = 0;
                    qfree(v73);
                    v69 = *v63;
                  }
                }
              }
              v63[1] = nullptr;
              qfree(v69);
            }
            memmove(v63, v63 + 7, *(_QWORD *)(v1 + 56) + 56LL * *(_QWORD *)(v1 + 64) - (_QWORD)v63 - 56);
            result = *(_QWORD *)(v1 + 64) - 1LL;
            *(_QWORD *)(v1 + 64) = result;
            goto LABEL_5;
          }
          *((_DWORD *)v10 + 12) = 3;
          if ( v12 >= v13 )
          {
            v102 = nullptr;
            v38 = (_QWORD *)(v6 + *(_QWORD *)(v1 + 56));
            if ( v12 )
            {
              v133 = (_QWORD *)(v6 + *(_QWORD *)(v1 + 56));
              destf = (void *)v13;
              v139 = v12;
              v86 = qalloc_or_throw(24 * v12, v13, v38, v3, v4, v12);
              v89 = 0;
              v114 = v7;
              v90 = 0;
              v129 = v11;
              v91 = v10;
              v92 = v86;
              v136 = v6;
              v93 = v139;
              v102 = (void *)v86;
              v140 = v1;
              v94 = 0;
              v142 = v8;
              do
              {
                v95 = (char *)*v91;
                *(_OWORD *)(v92 + 8) = v90;
                *(_QWORD *)v92 = 0;
                v96 = (unsigned __int64 *)&v95[24 * v94];
                v97 = v96[1];
                if ( v97 )
                {
                  v98 = (void *)qalloc_or_throw(v96[1], v13, v95, v89, v87, v88);
                  *(_QWORD *)(v92 + 16) = v97;
                  *(_QWORD *)v92 = v98;
                  v13 = *v96;
                  memcpy(v98, (const void *)*v96, v97);
                  *(_QWORD *)(v92 + 8) = v97;
                  v90 = 0;
                }
                ++v94;
                v92 += 24;
              }
              while ( v93 != v94 );
              v12 = v93;
              v10 = v91;
              v13 = (unsigned __int64)destf;
              v11 = v129;
              v7 = v114;
              v38 = v133;
              v6 = v136;
              v1 = v140;
              v8 = v142;
            }
            v39 = (char *)v38[3];
            if ( v39 )
            {
              if ( v38[4] )
              {
                destb = (void *)v12;
                v109 = v7;
                v40 = v38[4];
                v131 = v11;
                v41 = v38;
                v134 = v6;
                v42 = 0;
                do
                {
                  v43 = &v39[24 * v42];
                  v44 = *(void **)v43;
                  if ( *(_QWORD *)v43 )
                  {
                    *((_QWORD *)v43 + 1) = 0;
                    qfree(v44);
                    v39 = (char *)v41[3];
                  }
                  ++v42;
                }
                while ( v40 != v42 );
                v38 = v41;
                v7 = v109;
                v12 = (unsigned __int64)destb;
                v11 = v131;
                v6 = v134;
              }
              v38[4] = 0;
              desth = (void *)v12;
              v110 = v38;
              qfree(v39);
              v12 = (unsigned __int64)desth;
              v38 = v110;
            }
            v38[4] = v12;
            v38[5] = v12;
            v45 = 24 * v13;
            v38[3] = v102;
            v46 = (_QWORD *)(*(_QWORD *)(v1 + 56) + v6);
            v47 = v46[3];
            v48 = v46;
            v49 = (void **)(v47 + 24 * v13);
            v50 = 24LL * v46[4];
            v51 = (void **)(v47 + v50);
            if ( 24 * v13 == v50 )
            {
              v55 = 0;
            }
            else
            {
              v111 = (void **)(v47 + 24 * v13);
              v127 = 24LL * v46[4];
              v103 = v7;
              v52 = v111;
              destc = v46;
              v53 = (void **)(v47 + v50);
              do
              {
                v54 = *v52;
                if ( *v52 )
                {
                  v52[1] = nullptr;
                  qfree(v54);
                }
                v52 += 3;
              }
              while ( v53 != v52 );
              v48 = destc;
              v7 = v103;
              v51 = v53;
              v49 = v111;
              v50 = v127;
              v45 = 24 * v13;
              v55 = destc[3] + 24LL * destc[4] - (_QWORD)v53;
            }
            destd = (char *)v45;
            v112 = (_BYTE *)v50;
            v104 = v48;
            memmove(v49, v51, v55);
            v32 = (__int64)destd;
            v104[4] -= 0xAAAAAAAAAAAAAAABLL * ((v112 - destd) >> 3);
            v56 = *v10;
            v57 = _mm_loadu_si128((const __m128i *)(v10 + 1));
            *v10 = (void *)*v11;
            *(__m128i *)(v10 + 1) = _mm_loadu_si128((const __m128i *)(v11 + 1));
            *v11 = v56;
            *(__m128i *)(v11 + 1) = v57;
            *(_DWORD *)(*(_QWORD *)(v1 + 56) + v8 + 48) = 2;
            v33 = (_BYTE *)*v11;
            v34 = &destd[*v11];
            if ( (char *)*v11 == v34 )
              goto LABEL_83;
            v100 = (_BYTE *)*v11;
            v58 = (char *)*v11;
            v108 = destd;
            do
            {
              v59 = *(void **)v58;
              if ( *(_QWORD *)v58 )
              {
                *((_QWORD *)v58 + 1) = 0;
                qfree(v59);
              }
              v58 += 24;
            }
            while ( v34 != v58 );
LABEL_32:
            v33 = v100;
            v32 = (__int64)v108;
            v37 = (_BYTE *)*v11;
          }
          else
          {
            v14 = (const __m128i *)(*(_QWORD *)(v1 + 56) + v6);
            v15 = (char *)v14[1].m128i_i64[1];
            v16 = _mm_loadu_si128(v14 + 2);
            v14[1].m128i_i64[1] = (__int64)*v10;
            v14[2].m128i_i64[0] = (__int64)v10[1];
            v14[2].m128i_i64[1] = (__int64)v10[2];
            *v10 = v15;
            *(__m128i *)(v10 + 1) = v16;
            v17 = (void *)v11[1];
            if ( v17 )
            {
              v132 = v12;
              v74 = nullptr;
              v137 = (void *)v11[1];
              v113 = 24LL * (_QWORD)v17;
              v99 = 24LL * (_QWORD)v17;
              v128 = v7;
              v75 = 0;
              v76 = v11;
              deste = (char *)qalloc_or_throw(24LL * (_QWORD)v17, v13, v2, v3, v17, v12);
              v80 = v137;
              v135 = v10;
              v138 = v1;
              v81 = deste;
              v141 = v8;
              do
              {
                v82 = *v76;
                *(_OWORD *)(v81 + 8) = v75;
                *(_QWORD *)v81 = 0;
                v83 = (unsigned __int64 *)(v82 + 24LL * (_QWORD)v74);
                v84 = v83[1];
                if ( v84 )
                {
                  v85 = (void *)qalloc_or_throw(v83[1], v13, v82, v77, v78, v79);
                  *((_QWORD *)v81 + 2) = v84;
                  *(_QWORD *)v81 = v85;
                  v13 = *v83;
                  memcpy(v85, (const void *)*v83, v84);
                  *((_QWORD *)v81 + 1) = v84;
                  v75 = 0;
                }
                v74 = (char *)v74 + 1;
                v81 += 24;
              }
              while ( v80 != v74 );
              v19 = deste;
              v10 = v135;
              v17 = v80;
              v11 = v76;
              v12 = v132;
              v7 = v128;
              v1 = v138;
              v8 = v141;
              v15 = (char *)*v135;
              v18 = &deste[v113];
            }
            else
            {
              v99 = 0;
              v18 = nullptr;
              v19 = nullptr;
            }
            if ( v15 )
            {
              v20 = v10[1];
              if ( v20 )
              {
                v105 = v19;
                v124 = v12;
                v130 = v17;
                dest = v7;
                v21 = v10;
                v22 = v1;
                for ( k = nullptr; k != v20; k = (char *)k + 1 )
                {
                  v24 = &v15[24 * (_QWORD)k];
                  v25 = *(void **)v24;
                  if ( *(_QWORD *)v24 )
                  {
                    *((_QWORD *)v24 + 1) = 0;
                    qfree(v25);
                  }
                  v15 = (char *)*v21;
                }
                v1 = v22;
                v19 = v105;
                v10 = v21;
                v12 = v124;
                v17 = v130;
                v7 = dest;
              }
              v10[1] = nullptr;
              v125 = v17;
              destg = (void *)v12;
              v106 = v19;
              qfree(v15);
              v17 = v125;
              v12 = (unsigned __int64)destg;
              v19 = v106;
            }
            *v10 = v19;
            v26 = 24 * v12;
            v10[1] = v17;
            v10[2] = v17;
            v27 = &v19[24 * v12];
            if ( 24 * v12 == v99 )
            {
              v31 = 0;
            }
            else
            {
              desta = v27;
              v126 = 24 * v12;
              v107 = v7;
              v28 = v18;
              v29 = (void **)v27;
              do
              {
                v30 = *v29;
                if ( *v29 )
                {
                  v29[1] = nullptr;
                  qfree(v30);
                }
                v29 += 3;
              }
              while ( v29 != (void **)v28 );
              v18 = v28;
              v27 = desta;
              v7 = v107;
              v26 = v126;
              v31 = (_BYTE *)*v10 + 24 * (_QWORD)v10[1] - v18;
            }
            v108 = (char *)v26;
            memmove(v27, v18, v31);
            v32 = (__int64)v108;
            v10[1] = (char *)v10[1] + 0x5555555555555555LL * ((v99 - (__int64)v108) >> 3);
            v33 = (_BYTE *)*v11;
            v34 = &v108[*v11];
            if ( (char *)*v11 != v34 )
            {
              v100 = (_BYTE *)*v11;
              v35 = (char *)*v11;
              do
              {
                v36 = *(void **)v35;
                if ( *(_QWORD *)v35 )
                {
                  *((_QWORD *)v35 + 1) = 0;
                  qfree(v36);
                }
                v35 += 24;
              }
              while ( v34 != v35 );
              goto LABEL_32;
            }
LABEL_83:
            v37 = v33;
          }
          v101 = v32;
          memmove(v33, v34, &v37[24 * v11[1]] - v34);
          v3 = 0xAAAAAAAAAAAAAAABLL * (v101 >> 3);
          v11[1] -= v3;
        }
      }
      else
      {
        v8 = v6 + 56;
      }
      result = *(_QWORD *)(v1 + 64);
LABEL_5:
      v6 = v8;
    }
    while ( (unsigned __int64)v7 < result );
  }
  return result;
}

