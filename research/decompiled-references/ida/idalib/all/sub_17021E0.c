void __fastcall sub_17021E0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9)
{
  __int64 *v9; // rbp
  __m128i *v10; // rbx
  __m128i *v11; // r14
  __int64 *v12; // rbp
  __m128i v13; // xmm7
  __int64 v14; // rax
  void *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i *v22; // r15
  _QWORD *v23; // r12
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char *v33; // rdi
  int v34; // eax
  char v35; // dl
  __m128i v36; // xmm2
  __m128i v37; // xmm4
  __int64 v38; // rax
  _QWORD *v39; // r13
  __m128i v40; // xmm3
  _QWORD *v41; // rbp
  __int64 v42; // rax
  _QWORD *v43; // r12
  __m128i v44; // xmm4
  __int64 v45; // rax
  void *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  char *v49; // rdi
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm7
  _QWORD *v52; // rbp
  __m128i v53; // xmm0
  __int64 v54; // rax
  __m128i v55; // xmm1
  __int64 v56; // rax
  _QWORD *v57; // r15
  _QWORD *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __m128i v64; // xmm4
  __m128i v65; // xmm2
  unsigned __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rbx
  __m128i v70; // xmm5
  __int64 v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // r15
  __int64 v74; // rax
  __m128i v75; // xmm6
  _QWORD *v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rax
  char *v79; // rdi
  char v80; // dl
  char v81; // al
  char v82; // al
  char v83; // al
  char v84; // al
  char v85; // al
  char v86; // al
  char v87; // al
  __m128i v88; // xmm7
  __m128i v89; // xmm6
  __int64 v90; // rax
  _QWORD *v91; // r15
  __m128i v92; // xmm3
  _QWORD *v93; // rbp
  __m128i v94; // xmm4
  __int64 v95; // rax
  _QWORD *v96; // r12
  char *v97; // rdi
  __m128i v98; // xmm7
  __m128i v99; // xmm2
  __m128i v100; // xmm3
  __int32 v101; // eax
  __m128i *v102; // [rsp+20h] [rbp-140h]
  __int64 v103; // [rsp+20h] [rbp-140h]
  __int64 v104; // [rsp+30h] [rbp-130h]
  __int64 v105; // [rsp+38h] [rbp-128h]
  __int64 v106; // [rsp+40h] [rbp-120h]
  __int64 v107; // [rsp+48h] [rbp-118h]
  __int32 v108; // [rsp+50h] [rbp-110h]
  __int32 v109; // [rsp+54h] [rbp-10Ch]
  __int64 v110; // [rsp+58h] [rbp-108h]
  __int32 v111; // [rsp+60h] [rbp-100h]
  int v112; // [rsp+64h] [rbp-FCh]
  __int64 *v113; // [rsp+68h] [rbp-F8h]
  __m128i *v114; // [rsp+70h] [rbp-F0h]
  __int64 v115; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v116; // [rsp+80h] [rbp-E0h]
  __m128i v117; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v118; // [rsp+98h] [rbp-C8h]
  __int64 v119; // [rsp+A0h] [rbp-C0h]
  __m128i v120; // [rsp+A8h] [rbp-B8h] BYREF
  void *v121; // [rsp+B8h] [rbp-A8h]
  _QWORD *v122; // [rsp+C0h] [rbp-A0h]
  __int64 v123; // [rsp+C8h] [rbp-98h]
  __int64 v124; // [rsp+D0h] [rbp-90h]
  __int64 v125; // [rsp+D8h] [rbp-88h]
  __int64 v126; // [rsp+E0h] [rbp-80h]
  __m128i v127; // [rsp+E8h] [rbp-78h] BYREF
  __m128i v128; // [rsp+F8h] [rbp-68h] BYREF
  __m128i v129; // [rsp+108h] [rbp-58h] BYREF
  __int64 v130; // [rsp+118h] [rbp-48h]

  if ( a1 != a2 )
  {
    v9 = &a1[10].m128i_i64[1];
    if ( a2 != (__m128i *)&a1[10].m128i_u64[1] )
    {
      v10 = a1;
      do
      {
        v11 = (__m128i *)(v9 + 21);
        if ( (unsigned __int8)sub_1BD5DB0(a7, v9, v10, *a8, *(unsigned int *)(a9 + 2972), 1) )
        {
          v103 = *v9;
          v59 = v9[1];
          v120 = _mm_loadu_si128((const __m128i *)v9 + 3);
          v116 = v59;
          v117 = *((__m128i *)v9 + 1);
          v118 = v9[4];
          v104 = v9[5];
          v60 = v9[8];
          v9[8] = 0;
          v105 = v60;
          v61 = v9[9];
          v9[9] = 0;
          v106 = v61;
          v62 = v9[10];
          v9[10] = 0;
          v107 = v62;
          v108 = *((_DWORD *)v9 + 22);
          v109 = *((_DWORD *)v9 + 23);
          v110 = v9[12];
          v112 = *((_DWORD *)v9 + 26);
          v111 = *((_DWORD *)v9 + 27);
          v63 = v9[20];
          v64 = _mm_loadu_si128((const __m128i *)v9 + 8);
          v65 = _mm_loadu_si128((const __m128i *)v9 + 9);
          v127 = _mm_loadu_si128((const __m128i *)v9 + 7);
          v130 = v63;
          v128 = v64;
          v129 = v65;
          if ( (char *)v9 - (char *)v10 > 0 )
          {
            v113 = v9 + 21;
            v66 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v9 - (char *)v10) >> 3);
            v114 = v10;
            do
            {
              v9 -= 21;
              v67 = *v9;
              v68 = v9[8];
              v69 = (_QWORD *)v9[29];
              v70 = _mm_loadu_si128((const __m128i *)v9 + 1);
              v9[8] = 0;
              v9[21] = v67;
              v71 = v9[1];
              v9[29] = v68;
              v72 = v9[9];
              v73 = v69;
              v9[22] = v71;
              v74 = v9[4];
              v75 = _mm_loadu_si128((const __m128i *)v9 + 3);
              v76 = (_QWORD *)v9[30];
              v9[30] = v72;
              v9[25] = v74;
              v77 = v9[10];
              v78 = v9[5];
              *(__m128i *)(v9 + 23) = v70;
              *(__m128i *)(v9 + 27) = v75;
              v9[26] = v78;
              v9[9] = 0;
              v9[31] = v77;
              v9[10] = 0;
              if ( v69 != v76 )
              {
                do
                {
                  while ( 1 )
                  {
                    v79 = (char *)v73[3];
                    if ( v79 == (char *)(v73 + 5) )
                      break;
                    operator delete(v79);
                    v73 += 8;
                    if ( v76 == v73 )
                      goto LABEL_37;
                  }
                  v73 += 8;
                }
                while ( v76 != v73 );
              }
LABEL_37:
              if ( v69 )
                operator delete(v69);
              v80 = *((_BYTE *)v9 + 104);
              *((_DWORD *)v9 + 64) = *((_DWORD *)v9 + 22);
              *((_DWORD *)v9 + 65) = *((_DWORD *)v9 + 23);
              v9[33] = v9[12];
              v81 = v80 & 1 | v9[34] & 0xFE;
              *((_BYTE *)v9 + 272) = v81;
              v82 = v9[13] & 2 | v81 & 0xFD;
              *((_BYTE *)v9 + 272) = v82;
              v83 = v9[13] & 4 | v82 & 0xFB;
              *((_BYTE *)v9 + 272) = v83;
              v84 = v9[13] & 8 | v83 & 0xF7;
              *((_BYTE *)v9 + 272) = v84;
              v85 = v9[13] & 0x10 | v84 & 0xEF;
              *((_BYTE *)v9 + 272) = v85;
              v86 = v9[13] & 0x20 | v85 & 0xDF;
              *((_BYTE *)v9 + 272) = v86;
              v87 = v9[13] & 0x40 | v86 & 0xBF;
              *((_BYTE *)v9 + 272) = v87;
              *((_BYTE *)v9 + 272) = v9[13] & 0x80 | v87 & 0x7F;
              *((_BYTE *)v9 + 273) = *((_BYTE *)v9 + 105) & 3 | *((_BYTE *)v9 + 273) & 0xFC;
              *((_DWORD *)v9 + 68) = v9[13] & 0x3FC00 | v9[34] & 0xFFFC03FF;
              v88 = _mm_loadu_si128((const __m128i *)v9 + 7);
              *((_DWORD *)v9 + 69) = *((_DWORD *)v9 + 27);
              *(__m128i *)(v9 + 35) = v88;
              v89 = _mm_loadu_si128((const __m128i *)v9 + 9);
              v90 = v9[20];
              *(__m128i *)(v9 + 37) = _mm_loadu_si128((const __m128i *)v9 + 8);
              *(__m128i *)(v9 + 39) = v89;
              v9[41] = v90;
              --v66;
            }
            while ( v66 );
            v11 = (__m128i *)v113;
            v10 = v114;
          }
          v91 = (_QWORD *)v10[4].m128i_i64[0];
          v92 = _mm_load_si128(&v117);
          v93 = (_QWORD *)v10[4].m128i_i64[1];
          v94 = _mm_load_si128(&v120);
          v10->m128i_i64[0] = v103;
          v95 = v116;
          v10[1] = v92;
          v10[3] = v94;
          v10->m128i_i64[1] = v95;
          v10[2].m128i_i64[0] = v118;
          v10[2].m128i_i64[1] = v104;
          v10[4].m128i_i64[0] = v105;
          v10[4].m128i_i64[1] = v106;
          v10[5].m128i_i64[0] = v107;
          if ( v91 != v93 )
          {
            v96 = v91;
            do
            {
              while ( 1 )
              {
                v97 = (char *)v96[3];
                if ( v97 == (char *)(v96 + 5) )
                  break;
                operator delete(v97);
                v96 += 8;
                if ( v93 == v96 )
                  goto LABEL_45;
              }
              v96 += 8;
            }
            while ( v93 != v96 );
          }
LABEL_45:
          if ( v91 )
            operator delete(v91);
          v98 = _mm_load_si128(&v127);
          v99 = _mm_load_si128(&v128);
          v10[5].m128i_i32[2] = v108;
          v100 = _mm_load_si128(&v129);
          v10[7] = v98;
          v10[5].m128i_i32[3] = v109;
          v10[8] = v99;
          v10[6].m128i_i64[0] = v110;
          v101 = v10[6].m128i_i32[2];
          v10[9] = v100;
          v10[6].m128i_i32[2] = v112 & 0x3FFFF | v101 & 0xFFFC0000;
          v10[6].m128i_i32[3] = v111;
          v10[10].m128i_i64[0] = v130;
        }
        else
        {
          v115 = *v9;
          v12 = v9 - 21;
          v13 = _mm_loadu_si128((__m128i *)((char *)v11 - 120));
          v116 = v11[-10].m128i_i64[0];
          v14 = v11[-10].m128i_i64[1];
          v120 = v13;
          v117.m128i_i64[0] = v14;
          v117.m128i_i64[1] = v11[-9].m128i_i64[0];
          v118 = v11[-9].m128i_i64[1];
          v119 = v11[-8].m128i_i64[0];
          v15 = (void *)v11[-7].m128i_i64[1];
          v11[-7].m128i_i64[1] = 0;
          v121 = v15;
          v16 = (_QWORD *)v11[-6].m128i_i64[0];
          v11[-6].m128i_i64[0] = 0;
          v122 = v16;
          v17 = v11[-6].m128i_i64[1];
          v11[-6].m128i_i64[1] = 0;
          v18 = *((_DWORD *)v12 + 68);
          v123 = v17;
          v124 = v11[-5].m128i_i64[0];
          v125 = v11[-5].m128i_i64[1];
          LODWORD(v126) = v18 & 0x3FFFF | v126 & 0xFFFC0000;
          HIDWORD(v126) = v11[-4].m128i_i32[1];
          v19 = _mm_loadu_si128((__m128i *)((char *)v11 - 56));
          v20 = _mm_loadu_si128((__m128i *)((char *)v11 - 40));
          v102 = v10;
          v21 = _mm_loadu_si128((__m128i *)((char *)v11 - 24));
          v130 = v11[-1].m128i_i64[1];
          v127 = v19;
          v128 = v20;
          v129 = v21;
          while ( 1 )
          {
            v22 = (__m128i *)(v12 + 21);
            if ( !(unsigned __int8)sub_1BD5DB0(a7, &v115, v12, *a8, *(unsigned int *)(a9 + 2972), 1) )
              break;
            v23 = (_QWORD *)v12[29];
            v24 = _mm_loadu_si128((const __m128i *)v12 + 1);
            v25 = _mm_loadu_si128((const __m128i *)v12 + 3);
            v12[21] = *v12;
            v26 = v12[1];
            v27 = v23;
            v28 = (_QWORD *)v12[30];
            *(__m128i *)(v12 + 23) = v24;
            v12[22] = v26;
            v29 = v12[4];
            *(__m128i *)(v12 + 27) = v25;
            v12[25] = v29;
            v12[26] = v12[5];
            v30 = v12[8];
            v12[8] = 0;
            v12[29] = v30;
            v31 = v12[9];
            v12[9] = 0;
            v12[30] = v31;
            v32 = v12[10];
            v12[10] = 0;
            v12[31] = v32;
            if ( v23 != v28 )
            {
              do
              {
                while ( 1 )
                {
                  v33 = (char *)v27[3];
                  if ( v33 == (char *)(v27 + 5) )
                    break;
                  operator delete(v33);
                  v27 += 8;
                  if ( v28 == v27 )
                    goto LABEL_10;
                }
                v27 += 8;
              }
              while ( v28 != v27 );
            }
LABEL_10:
            if ( v23 )
              operator delete(v23);
            v34 = *((_DWORD *)v12 + 22);
            v35 = *((_BYTE *)v12 + 104);
            v12 -= 21;
            *((_DWORD *)v12 + 106) = v34;
            *((_DWORD *)v12 + 107) = *((_DWORD *)v12 + 65);
            v12[54] = v12[33];
            LOBYTE(v34) = v35 & 1 | v22[6].m128i_i8[8] & 0xFE;
            v22[6].m128i_i8[8] = v34;
            LOBYTE(v34) = v12[34] & 2 | v34 & 0xFD;
            v22[6].m128i_i8[8] = v34;
            LOBYTE(v34) = v12[34] & 4 | v34 & 0xFB;
            v22[6].m128i_i8[8] = v34;
            LOBYTE(v34) = v12[34] & 8 | v34 & 0xF7;
            v22[6].m128i_i8[8] = v34;
            LOBYTE(v34) = v12[34] & 0x10 | v34 & 0xEF;
            v22[6].m128i_i8[8] = v34;
            LOBYTE(v34) = v12[34] & 0x20 | v34 & 0xDF;
            v22[6].m128i_i8[8] = v34;
            LOBYTE(v34) = v12[34] & 0x40 | v34 & 0xBF;
            v22[6].m128i_i8[8] = v34;
            v22[6].m128i_i8[8] = v12[34] & 0x80 | v34 & 0x7F;
            v22[6].m128i_i8[9] = *((_BYTE *)v12 + 273) & 3 | v22[6].m128i_i8[9] & 0xFC;
            v22[6].m128i_i32[2] = v12[34] & 0x3FC00 | v22[6].m128i_i32[2] & 0xFFFC03FF;
            v36 = _mm_loadu_si128((const __m128i *)(v12 + 35));
            *((_DWORD *)v12 + 111) = *((_DWORD *)v12 + 69);
            *((__m128i *)v12 + 28) = v36;
            v37 = _mm_loadu_si128((const __m128i *)(v12 + 39));
            v38 = v12[41];
            *((__m128i *)v12 + 29) = _mm_loadu_si128((const __m128i *)(v12 + 37));
            *((__m128i *)v12 + 30) = v37;
            v12[62] = v38;
          }
          v39 = (_QWORD *)v12[29];
          v40 = _mm_load_si128(&v117);
          v41 = (_QWORD *)v12[30];
          v22->m128i_i64[0] = v115;
          v42 = v116;
          v43 = v39;
          v44 = _mm_load_si128(&v120);
          v10 = v102;
          v22[1] = v40;
          v22->m128i_i64[1] = v42;
          v45 = v118;
          v22[3] = v44;
          v22[2].m128i_i64[0] = v45;
          v22[2].m128i_i64[1] = v119;
          v46 = v121;
          v121 = nullptr;
          v22[4].m128i_i64[0] = (__int64)v46;
          v47 = v122;
          v122 = nullptr;
          v22[4].m128i_i64[1] = (__int64)v47;
          v48 = v123;
          v123 = 0;
          for ( v22[5].m128i_i64[0] = v48; v41 != v43; v43 += 8 )
          {
            while ( 1 )
            {
              v49 = (char *)v43[3];
              if ( v49 == (char *)(v43 + 5) )
                break;
              operator delete(v49);
              v43 += 8;
              if ( v41 == v43 )
                goto LABEL_18;
            }
          }
LABEL_18:
          if ( v39 )
            operator delete(v39);
          v50 = v126 & 0xFFFFFFFF0003FFFFLL;
          v51 = _mm_load_si128(&v127);
          v52 = v121;
          v53 = _mm_load_si128(&v128);
          v22[5].m128i_i64[1] = v124;
          v54 = v125;
          v22[7] = v51;
          v55 = _mm_load_si128(&v129);
          v22[8] = v53;
          v22[6].m128i_i64[0] = v54;
          v56 = v22[6].m128i_i64[1];
          v22[9] = v55;
          v22[6].m128i_i64[1] = v50 | (unsigned int)v56 & 0xFFFC0000;
          v22[10].m128i_i64[0] = v130;
          v57 = v122;
          if ( v122 != v52 )
          {
            do
            {
              while ( 1 )
              {
                v58 = (_QWORD *)v52[3];
                if ( v58 == v52 + 5 )
                  break;
                operator delete(v58);
                v52 += 8;
                if ( v57 == v52 )
                  goto LABEL_23;
              }
              v52 += 8;
            }
            while ( v57 != v52 );
LABEL_23:
            v52 = v121;
          }
          if ( v52 )
            operator delete(v52);
        }
        v9 = (__int64 *)v11;
      }
      while ( a2 != v11 );
    }
  }
}
