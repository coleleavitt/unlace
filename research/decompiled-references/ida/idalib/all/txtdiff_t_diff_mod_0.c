unsigned __int64 __fastcall txtdiff_t_diff_mod_0(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 result; // rax
  __int64 v3; // rbx
  char *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r13
  void **v7; // r14
  _QWORD *v8; // r13
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi
  const __m128i *v11; // rbx
  char *v12; // rdi
  __m128i v13; // xmm0
  void *v14; // r8
  char *v15; // rbx
  char *v16; // rax
  void *v17; // rsi
  void **v18; // rbp
  __int64 v19; // r14
  void *k; // r12
  char *v21; // rax
  void *v22; // rdi
  __int64 v23; // rcx
  char *v24; // rax
  char *v25; // rbp
  void **v26; // rbx
  void *v27; // rdi
  size_t v28; // rdx
  __int64 v29; // rcx
  _BYTE *v30; // rax
  char *v31; // r14
  char *v32; // rbx
  void *v33; // rdi
  _BYTE *v34; // rsi
  _QWORD *v35; // rdx
  char *v36; // r8
  __int64 v37; // rbp
  _QWORD *v38; // r13
  __int64 v39; // rbx
  char *v40; // rdx
  void *v41; // rdi
  __int64 v42; // rcx
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  _QWORD *v45; // r9
  void **v46; // r10
  __int64 v47; // r8
  void **v48; // rax
  void **v49; // rbp
  void **v50; // rbx
  void *v51; // rdi
  size_t v52; // rdx
  void *v53; // rax
  __m128i v54; // xmm0
  char *v55; // rbx
  void *v56; // rdi
  const __m128i *v57; // rax
  __int64 v58; // rdx
  __m128i v59; // xmm0
  char **v60; // rbx
  char *v61; // rdx
  char *v62; // r14
  char *i; // r13
  char *v64; // rax
  void *v65; // rdi
  char *v66; // rdx
  char *v67; // r14
  char *j; // r13
  char *v69; // rax
  void *v70; // rdi
  void *v71; // rbx
  __int128 v72; // xmm0
  _QWORD *v73; // rbp
  void *v74; // r13
  char *v75; // r12
  __int64 v76; // rdx
  __int64 v77; // r15
  size_t v78; // r14
  void *v79; // rax
  __int128 v80; // xmm0
  void **v81; // rbp
  __int64 v82; // r13
  void *v83; // rbx
  void *v84; // r12
  void *v85; // rdx
  __int64 v86; // r15
  size_t v87; // r14
  void *v88; // rax
  __int64 v89; // [rsp+0h] [rbp-78h]
  _BYTE *v90; // [rsp+0h] [rbp-78h]
  __int64 v91; // [rsp+0h] [rbp-78h]
  void *v92; // [rsp+0h] [rbp-78h]
  char *v93; // [rsp+0h] [rbp-78h]
  _QWORD *v94; // [rsp+0h] [rbp-78h]
  char *v95; // [rsp+8h] [rbp-70h]
  char *v96; // [rsp+8h] [rbp-70h]
  char *v97; // [rsp+8h] [rbp-70h]
  char *v98; // [rsp+8h] [rbp-70h]
  char *v99; // [rsp+8h] [rbp-70h]
  _QWORD *v100; // [rsp+8h] [rbp-70h]
  void **v101; // [rsp+8h] [rbp-70h]
  _BYTE *v102; // [rsp+8h] [rbp-70h]
  __int64 v103; // [rsp+8h] [rbp-70h]
  char *v104; // [rsp+8h] [rbp-70h]
  char *dest; // [rsp+10h] [rbp-68h]
  void *destf; // [rsp+10h] [rbp-68h]
  char *desta; // [rsp+10h] [rbp-68h]
  void *destb; // [rsp+10h] [rbp-68h]
  void *destg; // [rsp+10h] [rbp-68h]
  _QWORD *destc; // [rsp+10h] [rbp-68h]
  char *destd; // [rsp+10h] [rbp-68h]
  char *deste; // [rsp+10h] [rbp-68h]
  unsigned __int64 v113; // [rsp+18h] [rbp-60h]
  void *v114; // [rsp+18h] [rbp-60h]
  __int64 v115; // [rsp+18h] [rbp-60h]
  __int64 v116; // [rsp+18h] [rbp-60h]
  char *v117; // [rsp+18h] [rbp-60h]
  _QWORD *v118; // [rsp+18h] [rbp-60h]
  void *v119; // [rsp+20h] [rbp-58h]
  _QWORD *v120; // [rsp+20h] [rbp-58h]
  unsigned __int64 v121; // [rsp+20h] [rbp-58h]
  _QWORD *v122; // [rsp+20h] [rbp-58h]
  __int64 v123; // [rsp+28h] [rbp-50h]
  void **v124; // [rsp+28h] [rbp-50h]
  __int64 v125; // [rsp+28h] [rbp-50h]
  void *v126; // [rsp+30h] [rbp-48h]
  __int64 v127; // [rsp+30h] [rbp-48h]
  unsigned __int64 v128; // [rsp+30h] [rbp-48h]
  __int64 v129; // [rsp+30h] [rbp-48h]
  __int64 v130; // [rsp+38h] [rbp-40h]
  __int64 v131; // [rsp+38h] [rbp-40h]

  v1 = a1;
  sub_401BE0(a1);
  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v3 = 0;
    v4 = nullptr;
    do
    {
      v6 = *(_QWORD *)(v1 + 56);
      ++v4;
      v7 = (void **)(v6 + v3);
      if ( *(_DWORD *)(v6 + v3 + 48) == 2 && (unsigned __int64)v4 < result )
      {
        v5 = v3 + 56;
        v8 = (_QWORD *)(v3 + 56 + v6);
        if ( *((_DWORD *)v8 + 12) == 1 )
        {
          v9 = (unsigned __int64)v7[1];
          v10 = v8[1];
          if ( v9 == v10 )
          {
            *((_DWORD *)v8 + 12) = 3;
            v57 = (const __m128i *)(v5 + *(_QWORD *)(v1 + 56));
            v58 = v57[1].m128i_i64[1];
            v59 = _mm_loadu_si128(v57 + 2);
            v57[1].m128i_i64[1] = (__int64)*v7;
            v57[2].m128i_i64[0] = (__int64)v7[1];
            v57[2].m128i_i64[1] = (__int64)v7[2];
            *v7 = (void *)v58;
            *(__m128i *)(v7 + 1) = v59;
            v60 = (char **)(*(_QWORD *)(v1 + 56) + v3);
            v61 = v60[3];
            if ( v61 )
            {
              v62 = v60[4];
              if ( v62 )
              {
                for ( i = nullptr; i != v62; ++i )
                {
                  v64 = &v61[24 * (_QWORD)i];
                  v65 = *(void **)v64;
                  if ( *(_QWORD *)v64 )
                  {
                    *((_QWORD *)v64 + 1) = 0;
                    qfree(v65);
                    v61 = v60[3];
                  }
                }
              }
              v60[4] = nullptr;
              qfree(v61);
            }
            v66 = *v60;
            if ( *v60 )
            {
              v67 = v60[1];
              if ( v67 )
              {
                for ( j = nullptr; j != v67; ++j )
                {
                  v69 = &v66[24 * (_QWORD)j];
                  v70 = *(void **)v69;
                  if ( *(_QWORD *)v69 )
                  {
                    *((_QWORD *)v69 + 1) = 0;
                    qfree(v70);
                    v66 = *v60;
                  }
                }
              }
              v60[1] = nullptr;
              qfree(v66);
            }
            memmove(v60, v60 + 7, *(_QWORD *)(v1 + 56) + 56LL * *(_QWORD *)(v1 + 64) - (_QWORD)v60 - 56);
            result = *(_QWORD *)(v1 + 64) - 1LL;
            *(_QWORD *)(v1 + 64) = result;
            goto LABEL_5;
          }
          *((_DWORD *)v7 + 12) = 3;
          if ( v9 >= v10 )
          {
            v92 = nullptr;
            v35 = (_QWORD *)(v3 + *(_QWORD *)(v1 + 56));
            if ( v9 )
            {
              v122 = (_QWORD *)(v3 + *(_QWORD *)(v1 + 56));
              v128 = v9;
              v104 = v4;
              v80 = 0;
              v118 = v8;
              v81 = v7;
              v82 = qalloc_or_throw(24 * v9);
              v125 = v3;
              v83 = (void *)v128;
              v92 = (void *)v82;
              v129 = v1;
              v84 = nullptr;
              v131 = v5;
              do
              {
                v85 = *v81;
                *(_OWORD *)(v82 + 8) = v80;
                *(_QWORD *)v82 = 0;
                v86 = (__int64)v85 + 24 * (_QWORD)v84;
                v87 = *(_QWORD *)(v86 + 8);
                if ( v87 )
                {
                  v88 = (void *)qalloc_or_throw(*(_QWORD *)(v86 + 8));
                  *(_QWORD *)(v82 + 16) = v87;
                  *(_QWORD *)v82 = v88;
                  memcpy(v88, *(const void **)v86, v87);
                  *(_QWORD *)(v82 + 8) = v87;
                  v80 = 0;
                }
                v84 = (char *)v84 + 1;
                v82 += 24;
              }
              while ( v83 != v84 );
              v9 = (unsigned __int64)v83;
              v7 = v81;
              v8 = v118;
              v4 = v104;
              v35 = v122;
              v3 = v125;
              v1 = v129;
              v5 = v131;
            }
            v36 = (char *)v35[3];
            if ( v36 )
            {
              if ( v35[4] )
              {
                destb = (void *)v9;
                v99 = v4;
                v37 = v35[4];
                v120 = v8;
                v38 = v35;
                v123 = v3;
                v39 = 0;
                do
                {
                  v40 = &v36[24 * v39];
                  v41 = *(void **)v40;
                  if ( *(_QWORD *)v40 )
                  {
                    *((_QWORD *)v40 + 1) = 0;
                    qfree(v41);
                    v36 = (char *)v38[3];
                  }
                  ++v39;
                }
                while ( v37 != v39 );
                v35 = v38;
                v4 = v99;
                v9 = (unsigned __int64)destb;
                v8 = v120;
                v3 = v123;
              }
              v35[4] = 0;
              destg = (void *)v9;
              v100 = v35;
              qfree(v36);
              v9 = (unsigned __int64)destg;
              v35 = v100;
            }
            v35[4] = v9;
            v35[5] = v9;
            v42 = 24 * v10;
            v35[3] = v92;
            v43 = (_QWORD *)(*(_QWORD *)(v1 + 56) + v3);
            v44 = v43[3];
            v45 = v43;
            v46 = (void **)(v44 + 24 * v10);
            v47 = 24LL * v43[4];
            v48 = (void **)(v44 + v47);
            if ( 24 * v10 == v47 )
            {
              v52 = 0;
            }
            else
            {
              v101 = (void **)(v44 + 24 * v10);
              v116 = 24LL * v43[4];
              v93 = v4;
              v49 = v101;
              destc = v43;
              v50 = (void **)(v44 + v47);
              do
              {
                v51 = *v49;
                if ( *v49 )
                {
                  v49[1] = nullptr;
                  qfree(v51);
                }
                v49 += 3;
              }
              while ( v50 != v49 );
              v45 = destc;
              v4 = v93;
              v48 = v50;
              v46 = v101;
              v47 = v116;
              v42 = 24 * v10;
              v52 = destc[3] + 24LL * destc[4] - (_QWORD)v50;
            }
            destd = (char *)v42;
            v102 = (_BYTE *)v47;
            v94 = v45;
            memmove(v46, v48, v52);
            v29 = (__int64)destd;
            v94[4] -= 0xAAAAAAAAAAAAAAABLL * ((v102 - destd) >> 3);
            v53 = *v7;
            v54 = _mm_loadu_si128((const __m128i *)(v7 + 1));
            *v7 = (void *)*v8;
            *(__m128i *)(v7 + 1) = _mm_loadu_si128((const __m128i *)(v8 + 1));
            *v8 = v53;
            *(__m128i *)(v8 + 1) = v54;
            *(_DWORD *)(*(_QWORD *)(v1 + 56) + v5 + 48) = 2;
            v30 = (_BYTE *)*v8;
            v31 = &destd[*v8];
            if ( (char *)*v8 == v31 )
              goto LABEL_83;
            v90 = (_BYTE *)*v8;
            v55 = (char *)*v8;
            v98 = destd;
            do
            {
              v56 = *(void **)v55;
              if ( *(_QWORD *)v55 )
              {
                *((_QWORD *)v55 + 1) = 0;
                qfree(v56);
              }
              v55 += 24;
            }
            while ( v31 != v55 );
LABEL_32:
            v30 = v90;
            v29 = (__int64)v98;
            v34 = (_BYTE *)*v8;
          }
          else
          {
            v11 = (const __m128i *)(*(_QWORD *)(v1 + 56) + v3);
            v12 = (char *)v11[1].m128i_i64[1];
            v13 = _mm_loadu_si128(v11 + 2);
            v11[1].m128i_i64[1] = (__int64)*v7;
            v11[2].m128i_i64[0] = (__int64)v7[1];
            v11[2].m128i_i64[1] = (__int64)v7[2];
            *v7 = v12;
            *(__m128i *)(v7 + 1) = v13;
            v14 = (void *)v8[1];
            if ( v14 )
            {
              v121 = v9;
              v71 = nullptr;
              v126 = (void *)v8[1];
              v103 = 24LL * (_QWORD)v14;
              v89 = 24LL * (_QWORD)v14;
              v117 = v4;
              v72 = 0;
              v73 = v8;
              deste = (char *)qalloc_or_throw(24LL * (_QWORD)v14);
              v74 = v126;
              v124 = v7;
              v127 = v1;
              v75 = deste;
              v130 = v5;
              do
              {
                v76 = *v73;
                *(_OWORD *)(v75 + 8) = v72;
                *(_QWORD *)v75 = 0;
                v77 = v76 + 24LL * (_QWORD)v71;
                v78 = *(_QWORD *)(v77 + 8);
                if ( v78 )
                {
                  v79 = (void *)qalloc_or_throw(*(_QWORD *)(v77 + 8));
                  *((_QWORD *)v75 + 2) = v78;
                  *(_QWORD *)v75 = v79;
                  memcpy(v79, *(const void **)v77, v78);
                  *((_QWORD *)v75 + 1) = v78;
                  v72 = 0;
                }
                v71 = (char *)v71 + 1;
                v75 += 24;
              }
              while ( v74 != v71 );
              v16 = deste;
              v7 = v124;
              v14 = v74;
              v8 = v73;
              v9 = v121;
              v4 = v117;
              v1 = v127;
              v5 = v130;
              v12 = (char *)*v124;
              v15 = &deste[v103];
            }
            else
            {
              v89 = 0;
              v15 = nullptr;
              v16 = nullptr;
            }
            if ( v12 )
            {
              v17 = v7[1];
              if ( v17 )
              {
                v95 = v16;
                v113 = v9;
                v119 = v14;
                dest = v4;
                v18 = v7;
                v19 = v1;
                for ( k = nullptr; k != v17; k = (char *)k + 1 )
                {
                  v21 = &v12[24 * (_QWORD)k];
                  v22 = *(void **)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    *((_QWORD *)v21 + 1) = 0;
                    qfree(v22);
                  }
                  v12 = (char *)*v18;
                }
                v1 = v19;
                v16 = v95;
                v7 = v18;
                v9 = v113;
                v14 = v119;
                v4 = dest;
              }
              v7[1] = nullptr;
              v114 = v14;
              destf = (void *)v9;
              v96 = v16;
              qfree(v12);
              v14 = v114;
              v9 = (unsigned __int64)destf;
              v16 = v96;
            }
            *v7 = v16;
            v23 = 24 * v9;
            v7[1] = v14;
            v7[2] = v14;
            v24 = &v16[24 * v9];
            if ( 24 * v9 == v89 )
            {
              v28 = 0;
            }
            else
            {
              desta = v24;
              v115 = 24 * v9;
              v97 = v4;
              v25 = v15;
              v26 = (void **)v24;
              do
              {
                v27 = *v26;
                if ( *v26 )
                {
                  v26[1] = nullptr;
                  qfree(v27);
                }
                v26 += 3;
              }
              while ( v26 != (void **)v25 );
              v15 = v25;
              v24 = desta;
              v4 = v97;
              v23 = v115;
              v28 = (_BYTE *)*v7 + 24 * (_QWORD)v7[1] - v15;
            }
            v98 = (char *)v23;
            memmove(v24, v15, v28);
            v29 = (__int64)v98;
            v7[1] = (char *)v7[1] + 0x5555555555555555LL * ((v89 - (__int64)v98) >> 3);
            v30 = (_BYTE *)*v8;
            v31 = &v98[*v8];
            if ( (char *)*v8 != v31 )
            {
              v90 = (_BYTE *)*v8;
              v32 = (char *)*v8;
              do
              {
                v33 = *(void **)v32;
                if ( *(_QWORD *)v32 )
                {
                  *((_QWORD *)v32 + 1) = 0;
                  qfree(v33);
                }
                v32 += 24;
              }
              while ( v31 != v32 );
              goto LABEL_32;
            }
LABEL_83:
            v34 = v30;
          }
          v91 = v29;
          memmove(v30, v31, &v34[24 * v8[1]] - v31);
          v8[1] -= 0xAAAAAAAAAAAAAAABLL * (v91 >> 3);
        }
      }
      else
      {
        v5 = v3 + 56;
      }
      result = *(_QWORD *)(v1 + 64);
LABEL_5:
      v3 = v5;
    }
    while ( (unsigned __int64)v4 < result );
  }
  return result;
}
