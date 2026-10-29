unsigned __int64 __fastcall sub_670080(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i *v45; // rax
  __m128i *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rbp
  __m128i *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rdx
  __m128i v53; // xmm0
  bool v54; // cf
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __m128i *v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __m128i *v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __m128i *v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  __m128i v72; // xmm0
  __int64 *v76; // [rsp+30h] [rbp-D8h]
  __int64 v77; // [rsp+40h] [rbp-C8h]
  __int64 v78; // [rsp+48h] [rbp-C0h]
  __int64 v79; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+68h] [rbp-A0h]
  unsigned int v82; // [rsp+74h] [rbp-94h]
  __int64 v83; // [rsp+80h] [rbp-88h]
  __int64 v84; // [rsp+80h] [rbp-88h]
  unsigned __int64 v85; // [rsp+80h] [rbp-88h]
  unsigned __int64 v86; // [rsp+80h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-88h]
  __int64 v88; // [rsp+80h] [rbp-88h]
  unsigned __int64 v89; // [rsp+80h] [rbp-88h]
  __int64 v90; // [rsp+80h] [rbp-88h]
  unsigned int v91; // [rsp+88h] [rbp-80h]
  char v92; // [rsp+8Eh] [rbp-7Ah]
  char v93; // [rsp+8Fh] [rbp-79h]
  unsigned int v94; // [rsp+90h] [rbp-78h]
  char v95; // [rsp+98h] [rbp-70h]
  char v96; // [rsp+98h] [rbp-70h]
  __int64 v97; // [rsp+98h] [rbp-70h]
  char v98; // [rsp+98h] [rbp-70h]
  unsigned __int64 v99; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v100; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v101; // [rsp+A0h] [rbp-68h]
  char v102; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v104; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v105; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v106; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v107; // [rsp+A8h] [rbp-60h]
  __m128i v108; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v109; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v110; // [rsp+C8h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  if ( a8 )
  {
    if ( a7 )
    {
      v93 = 100;
      v78 = (__int64)(a1 + 224);
      v77 = (__int64)(a1 + 237);
      v82 = 26;
      v92 = 68;
      v91 = 28;
    }
    else
    {
      v93 = 120;
      v78 = (__int64)(a1 + 250);
      v77 = (__int64)(a1 + 263);
      v82 = 30;
      v92 = 88;
      v91 = 32;
    }
  }
  else if ( a7 )
  {
    v93 = 68;
    v78 = (__int64)(a1 + 237);
    v77 = (__int64)(a1 + 224);
    v82 = 28;
    v92 = 100;
    v91 = 26;
  }
  else
  {
    v93 = 88;
    v78 = (__int64)(a1 + 263);
    v77 = (__int64)(a1 + 250);
    v82 = 32;
    v92 = 120;
    v91 = 30;
  }
  v11 = *a1;
  v76 = a1;
  v108 = 0;
  sub_630CA0(v11, 26, &v108, 0x10u, a5);
  v81 = v108.m128i_i64[0] + a4 - a5;
  v80 = a4 - a5 + v108.m128i_i64[1];
  v12 = *(_QWORD **)(v78 + 72);
  v13 = v78 + 64;
  v79 = v78 + 64;
  if ( v12 )
  {
    do
    {
      while ( 1 )
      {
        v14 = v12[2];
        v15 = v12[3];
        if ( v12[4] < a4 )
          break;
        v13 = (__int64)v12;
        v12 = (_QWORD *)v12[2];
        if ( !v14 )
          goto LABEL_11;
      }
      v12 = (_QWORD *)v12[3];
    }
    while ( v15 );
LABEL_11:
    if ( v79 != v13 )
    {
      v16 = v93;
      BYTE1(v16) = (v93 >> 7) | 1;
      v94 = v16;
      do
      {
        v18 = *(_QWORD *)(v13 + 32);
        if ( v18 >= a4 + a6 )
          return v110 - __readfsqword(0x28u);
        v19 = *(_QWORD *)(v13 + 40);
        v20 = sub_684CE0((_DWORD)v76, *(_QWORD *)(v13 + 32), a4, a5, a6, a9, 0);
        v21 = sub_684CE0((_DWORD)v76, v19, a4, a5, a6, a9, v19 >= v80 || v19 < v81);
        if ( a9 )
        {
          if ( !a3 )
            goto LABEL_36;
        }
        else
        {
          v83 = v21;
          v29 = sub_3BDD60(v76, v20);
          netnode_supdel(v29, v19, v94);
          v30 = sub_3BDD60(v76, v83);
          v31 = (unsigned int)v92;
          BYTE1(v31) = (v92 >> 7) | 1;
          netnode_supdel(v30, v18, v31);
          v21 = v83;
          if ( !a3 )
          {
LABEL_36:
            v32 = *(_BYTE *)(v13 + 48);
            v108.m128i_i64[0] = v20;
            v33 = a2[1];
            v34 = a2[2];
            v108.m128i_i64[1] = v21;
            BYTE1(v109) = v93;
            v35 = *a2;
            LOBYTE(v109) = v32;
            v36 = v33 + 1;
            if ( (unsigned __int64)&v108 < v35 || (unsigned __int64)&v108 >= v35 + 24 * v34 )
            {
              if ( v34 < v36 )
              {
                v99 = v34;
                v95 = v32;
                v87 = v21;
                v55 = qvector_reserve(a2, 0, v33 + 1, 24);
                v56 = a2[2];
                v57 = (__m128i *)*a2;
                v58 = a2[1] - 1;
                a2[2] = v99;
                if ( v58 >= 0 )
                {
                  v59 = v55;
                  do
                  {
                    v60 = _mm_loadu_si128(v57);
                    v59 += 24;
                    v57 = (__m128i *)((char *)v57 + 24);
                    *(__m128i *)(v59 - 24) = v60;
                    *(_QWORD *)(v59 - 8) = v57[-1].m128i_i64[1];
                    v54 = v58-- == 0;
                  }
                  while ( !v54 );
                  v57 = (__m128i *)*a2;
                }
                v105 = v56;
                v100 = v55;
                qfree(v57);
                v33 = a2[1];
                v21 = v87;
                v35 = v100;
                v32 = v95;
                *a2 = v100;
                a2[2] = v105;
              }
              v46 = (__m128i *)(v35 + 24 * v33);
              *v46 = _mm_load_si128(&v108);
              v46[1].m128i_i64[0] = v109;
            }
            else
            {
              if ( v34 < v36 )
              {
                v103 = v34;
                v98 = v32;
                v90 = v21;
                v67 = qvector_reserve(a2, 0, v33 + 1, 24);
                v68 = a2[2];
                v69 = (__m128i *)*a2;
                v70 = a2[1] - 1;
                a2[2] = v103;
                if ( v70 >= 0 )
                {
                  v71 = v67;
                  do
                  {
                    v72 = _mm_loadu_si128(v69);
                    v71 += 24;
                    v69 = (__m128i *)((char *)v69 + 24);
                    *(__m128i *)(v71 - 24) = v72;
                    *(_QWORD *)(v71 - 8) = v69[-1].m128i_i64[1];
                    v54 = v70-- == 0;
                  }
                  while ( !v54 );
                  v69 = (__m128i *)*a2;
                }
                v107 = v68;
                v104 = v67;
                qfree(v69);
                v33 = a2[1];
                v21 = v90;
                v35 = v104;
                v32 = v98;
                *a2 = v104;
                a2[2] = v107;
              }
              v37 = v35 + 24 * v33;
              *(_QWORD *)v37 = v20;
              *(_QWORD *)(v37 + 8) = v21;
              *(_BYTE *)(v37 + 16) = v32;
              *(_BYTE *)(v37 + 17) = v93;
            }
            v38 = a2[1];
            v108.m128i_i64[0] = v21;
            v39 = a2[2];
            v108.m128i_i64[1] = v20;
            BYTE1(v109) = v92;
            v40 = *a2;
            v41 = v38 + 1;
            v42 = v38 + 2;
            a2[1] = v38 + 1;
            LOBYTE(v109) = v32;
            if ( (unsigned __int64)&v108 < v40 || (unsigned __int64)&v108 >= v40 + 24 * v39 )
            {
              if ( v39 < v42 )
              {
                v85 = v39;
                v47 = qvector_reserve(a2, 0, v42, 24);
                v48 = a2[1];
                v49 = a2[2];
                v50 = (__m128i *)*a2;
                a2[2] = v85;
                v51 = v48 - 1;
                if ( v51 >= 0 )
                {
                  v52 = v47;
                  do
                  {
                    v53 = _mm_loadu_si128(v50);
                    v52 += 24;
                    v50 = (__m128i *)((char *)v50 + 24);
                    *(__m128i *)(v52 - 24) = v53;
                    *(_QWORD *)(v52 - 8) = v50[-1].m128i_i64[1];
                    v54 = v51-- == 0;
                  }
                  while ( !v54 );
                  v50 = (__m128i *)*a2;
                }
                v86 = v47;
                qfree(v50);
                v40 = v86;
                a2[2] = v49;
                v41 = a2[1];
                *a2 = v86;
              }
              v45 = (__m128i *)(v40 + 24 * v41);
              *v45 = _mm_load_si128(&v108);
              v45[1].m128i_i64[0] = v109;
            }
            else
            {
              if ( v39 < v42 )
              {
                v101 = v39;
                v96 = v32;
                v88 = v21;
                v61 = qvector_reserve(a2, 0, v42, 24);
                v62 = a2[2];
                v63 = (__m128i *)*a2;
                v64 = a2[1] - 1;
                a2[2] = v101;
                if ( v64 >= 0 )
                {
                  v65 = v61;
                  do
                  {
                    v66 = _mm_loadu_si128(v63);
                    v65 += 24;
                    v63 = (__m128i *)((char *)v63 + 24);
                    *(__m128i *)(v65 - 24) = v66;
                    *(_QWORD *)(v65 - 8) = v63[-1].m128i_i64[1];
                    v54 = v64-- == 0;
                  }
                  while ( !v54 );
                  v63 = (__m128i *)*a2;
                }
                v106 = v62;
                v102 = v96;
                v97 = v88;
                v89 = v61;
                qfree(v63);
                v40 = v89;
                v41 = a2[1];
                v21 = v97;
                v32 = v102;
                *a2 = v89;
                a2[2] = v106;
              }
              v43 = v40 + 24 * v41;
              *(_QWORD *)v43 = v21;
              *(_QWORD *)(v43 + 8) = v20;
              *(_BYTE *)(v43 + 16) = v32;
              *(_BYTE *)(v43 + 17) = v92;
            }
            ++a2[1];
            goto LABEL_19;
          }
        }
        v22 = a3[1];
        v23 = *a3;
        if ( a3[2] < (unsigned __int64)(v22 + 1) )
        {
          v84 = v21;
          v44 = qvector_reserve(a3, v23, v22 + 1, 8);
          v21 = v84;
          *a3 = v44;
          v23 = v44;
          v22 = a3[1];
        }
        *(_QWORD *)(v23 + 8 * v22) = v20;
        ++a3[1];
        auto_mark_range(v21, v21 + 1, 40);
LABEL_19:
        v24 = *(_QWORD **)(v77 + 72);
        if ( v24 )
        {
          v25 = (_QWORD *)(v77 + 64);
          do
          {
            while ( 1 )
            {
              v26 = v24[4];
              if ( v26 < v19 || v19 >= v26 && v24[5] < v18 )
                break;
              v25 = v24;
              v24 = (_QWORD *)v24[2];
              if ( !v24 )
                goto LABEL_26;
            }
            v24 = (_QWORD *)v24[3];
          }
          while ( v24 );
LABEL_26:
          if ( (_QWORD *)(v77 + 64) != v25 )
          {
            v27 = v25[4];
            if ( v19 >= v27 && (v27 < v19 || v18 >= v25[5]) )
              sub_66FDC0(v77, v25, v91);
          }
        }
        v13 = sub_66FDC0(v78, (_QWORD *)v13, v82);
      }
      while ( v79 != v13 );
    }
  }
  return v110 - __readfsqword(0x28u);
}
