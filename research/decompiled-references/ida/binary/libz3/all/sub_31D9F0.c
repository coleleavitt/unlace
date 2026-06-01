__int64 __fastcall sub_31D9F0(__int64 *a1, __int64 a2, __m128i *a3, double a4, __m128 a5)
{
  __m128i v7; // xmm0
  __int32 v8; // r12d
  __int32 v9; // r10d
  char v10; // bl
  char v11; // bp
  char v12; // r8
  char v13; // cl
  __int64 v14; // r11
  __int64 v15; // r9
  char v16; // dl
  __int32 v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // r14
  __int8 v21; // r13
  __int8 v22; // r14
  __int32 v23; // r13d
  __int64 v24; // r13
  __int64 v25; // rdx
  char v26; // r14
  __int64 v27; // rsi
  __int64 v28; // r13
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // si
  char v34; // si
  __int64 v35; // rdx
  __int64 v36; // rax
  char v37; // si
  char v38; // si
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // eax
  __int64 *v45; // rbp
  __int64 v46; // rsi
  __int64 *v47; // rbx
  __int64 v48; // rdi
  bool v49; // zf
  __m128 v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r14
  int v54; // eax
  int v55; // edx
  __int64 v56; // rdx
  __int64 v57; // rax
  char v58; // cl
  char v59; // cl
  __int64 v60; // rdx
  __int64 v61; // rax
  char v62; // cl
  char v63; // cl
  __int64 *v64; // rbx
  __int64 *v65; // rdx
  __int64 *v66; // rbp
  __int64 v67; // rsi
  __int64 v68; // rdi
  unsigned __int64 v69; // rdi
  __int64 v70; // rsi
  int v71; // eax
  int v72; // edx
  char v73; // cl
  __int64 v74; // rax
  __int64 v75; // rdx
  char v76; // si
  __int64 v77; // rax
  char v78; // cl
  __int64 v79; // rdx
  char v80; // si
  void *v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rdi
  void *v84; // rbx
  __int64 v85; // rsi
  __int64 v86; // rdi
  void *v87; // rbx
  __int64 v89; // rcx
  __int64 v90; // rax
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // rdx
  char v94; // di
  char v95; // di
  __int64 v96; // rcx
  __int64 v97; // rdx
  char v98; // di
  char v99; // di
  __int64 v100; // [rsp+8h] [rbp-100h]
  __int32 v101; // [rsp+20h] [rbp-E8h] BYREF
  char v102; // [rsp+24h] [rbp-E4h]
  __int64 v103; // [rsp+28h] [rbp-E0h]
  __int32 v104; // [rsp+30h] [rbp-D8h] BYREF
  char v105; // [rsp+34h] [rbp-D4h]
  __int64 v106; // [rsp+38h] [rbp-D0h]
  __int32 v107; // [rsp+40h] [rbp-C8h]
  __m128i v108; // [rsp+50h] [rbp-B8h] BYREF
  __int32 v109; // [rsp+60h] [rbp-A8h] BYREF
  char v110; // [rsp+64h] [rbp-A4h]
  __int64 v111; // [rsp+68h] [rbp-A0h]
  __int32 v112; // [rsp+70h] [rbp-98h] BYREF
  char v113; // [rsp+74h] [rbp-94h]
  __int64 v114; // [rsp+78h] [rbp-90h]
  __int32 v115; // [rsp+80h] [rbp-88h]
  __m128i v116; // [rsp+90h] [rbp-78h]
  int v117; // [rsp+A0h] [rbp-68h] BYREF
  char v118; // [rsp+A4h] [rbp-64h]
  __int64 v119; // [rsp+A8h] [rbp-60h]
  __int32 v120; // [rsp+B0h] [rbp-58h] BYREF
  char v121; // [rsp+B4h] [rbp-54h]
  __int64 v122; // [rsp+B8h] [rbp-50h]
  int v123; // [rsp+C0h] [rbp-48h]

  v7 = _mm_loadu_si128(a3);
  a3->m128i_i64[0] = 0;
  v9 = a3[2].m128i_i32[0];
  v10 = a3[1].m128i_i8[4] & 2;
  v11 = a3[1].m128i_i8[4] & 1;
  v12 = a3[2].m128i_i8[4] & 1;
  v13 = a3[2].m128i_i8[4] & 2;
  v14 = a3[1].m128i_i64[1];
  v15 = a3[2].m128i_i64[1];
  v101 = a3[1].m128i_i32[0];
  v8 = v101;
  v16 = v11 | v102 & 0xFC;
  a3[1].m128i_i64[1] = 0;
  a3[2].m128i_i64[1] = 0;
  v102 = v10 | v16;
  v104 = v9;
  v105 = v13 | v12 | v105 & 0xFC;
  v18 = *a1;
  v107 = a3[3].m128i_i32[0];
  v17 = v107;
  a3->m128i_i64[0] = v18;
  LODWORD(v18) = *((_DWORD *)a1 + 4);
  *a1 = 0;
  a3[1].m128i_i32[0] = v18;
  v19 = a1[3];
  *((_DWORD *)a1 + 4) = v8;
  a3[1].m128i_i64[1] = v19;
  v20 = *((_BYTE *)a1 + 20);
  a1[3] = 0;
  v21 = a3[1].m128i_i8[4];
  a3[1].m128i_i8[4] = v20 & 2 | v21 & 0xFD;
  LOBYTE(v19) = v21 & 2 | *((_BYTE *)a1 + 20) & 0xFD;
  *((_BYTE *)a1 + 20) = v19;
  v22 = a3[1].m128i_i8[4];
  a3[1].m128i_i8[4] = v19 & 1 | v22 & 0xFE;
  v23 = *((_DWORD *)a1 + 8);
  *((_BYTE *)a1 + 20) = v22 & 1 | *((_BYTE *)a1 + 20) & 0xFE;
  LODWORD(v19) = a3[2].m128i_i32[0];
  a3[2].m128i_i32[0] = v23;
  v24 = a1[5];
  *((_DWORD *)a1 + 8) = v19;
  v25 = a3[2].m128i_i64[1];
  a3[2].m128i_i64[1] = v24;
  v26 = *((_BYTE *)a1 + 36);
  a1[5] = v25;
  LOBYTE(v24) = a3[2].m128i_i8[4];
  a3[2].m128i_i8[4] = v26 & 2 | v24 & 0xFD;
  LOBYTE(v25) = v24 & 2 | *((_BYTE *)a1 + 36) & 0xFD;
  *((_BYTE *)a1 + 36) = v25;
  LOBYTE(v24) = a3[2].m128i_i8[4];
  v109 = v8;
  v27 = a2 - (_QWORD)a1;
  v111 = v14;
  a3[2].m128i_i8[4] = v25 & 1 | v24 & 0xFE;
  LOBYTE(v25) = *((_BYTE *)a1 + 36);
  v103 = 0;
  v112 = v9;
  v114 = v15;
  *((_BYTE *)a1 + 36) = v24 & 1 | v25 & 0xFE;
  LODWORD(v25) = *((_DWORD *)a1 + 12);
  v106 = 0;
  a3[3].m128i_i32[0] = v25;
  v115 = v17;
  v108 = v7;
  v110 = v10 | v11 | v110 & 0xFC;
  v113 = v13 | v12 | v113 & 0xFC;
  v100 = 0x6DB6DB6DB6DB6DB7LL * (v27 >> 3);
  if ( v27 > 112 )
  {
    v28 = 0;
    while ( 1 )
    {
      v39 = 2 * (v28 + 1);
      v40 = 14 * (v28 + 1);
      v41 = (__int64)&a1[v40 - 7];
      v42 = &a1[v40];
      v43 = v41 + 16;
      if ( (*(_BYTE *)(v41 + 36) & 1) != 0
        || *(_DWORD *)(v41 + 32) != 1
        || (*((_BYTE *)v42 + 36) & 1) != 0
        || *((_DWORD *)v42 + 8) != 1 )
      {
        break;
      }
      if ( (*(_BYTE *)(v41 + 20) & 1) != 0 || (*((_BYTE *)v42 + 20) & 1) != 0 )
      {
        v44 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v43, v42 + 2) >> 31;
        v45 = &a1[7 * v28];
        v46 = *v45;
        goto LABEL_7;
      }
      v45 = &a1[7 * v28];
      v28 = v39 - (*(_DWORD *)(v41 + 16) < *((_DWORD *)v42 + 4));
      v47 = &a1[7 * v28];
      *v45 = *v47;
      *v47 = 0;
LABEL_3:
      v29 = *((_DWORD *)v45 + 4);
      v30 = *((_DWORD *)v47 + 4);
      *v47 = 0;
      *((_DWORD *)v45 + 4) = v30;
      v31 = v47[3];
      *((_DWORD *)v47 + 4) = v29;
      v32 = v45[3];
      v45[3] = v31;
      v33 = *((_BYTE *)v47 + 20);
      v47[3] = v32;
      LOBYTE(v31) = *((_BYTE *)v45 + 20);
      *((_BYTE *)v45 + 20) = v33 & 2 | v31 & 0xFD;
      LOBYTE(v32) = v31 & 2 | *((_BYTE *)v47 + 20) & 0xFD;
      *((_BYTE *)v47 + 20) = v32;
      v34 = *((_BYTE *)v45 + 20);
      *((_BYTE *)v45 + 20) = v32 & 1 | v34 & 0xFE;
      LODWORD(v31) = *((_DWORD *)v47 + 8);
      *((_BYTE *)v47 + 20) = v34 & 1 | *((_BYTE *)v47 + 20) & 0xFE;
      LODWORD(v32) = *((_DWORD *)v45 + 8);
      *((_DWORD *)v45 + 8) = v31;
      v35 = v47[5];
      *((_DWORD *)v47 + 8) = v32;
      v36 = v45[5];
      v45[5] = v35;
      v37 = *((_BYTE *)v47 + 36);
      v47[5] = v36;
      LOBYTE(v35) = *((_BYTE *)v45 + 36);
      *((_BYTE *)v45 + 36) = v37 & 2 | v35 & 0xFD;
      LOBYTE(v36) = v35 & 2 | *((_BYTE *)v47 + 36) & 0xFD;
      *((_BYTE *)v47 + 36) = v36;
      v38 = *((_BYTE *)v45 + 36) & 1;
      *((_BYTE *)v45 + 36) = v36 & 1 | *((_BYTE *)v45 + 36) & 0xFE;
      *((_BYTE *)v47 + 36) = v38 | *((_BYTE *)v47 + 36) & 0xFE;
      *((_DWORD *)v45 + 12) = *((_DWORD *)v47 + 12);
      if ( (v100 - 1) / 2 <= v28 )
        goto LABEL_16;
    }
    LOBYTE(v44) = sub_1848D40(qword_1C7F2C0, v43, v42 + 2);
    v45 = &a1[7 * v28];
    v46 = *v45;
LABEL_7:
    v28 = v39 - (unsigned __int8)v44;
    v47 = &a1[7 * v28];
    *v45 = *v47;
    *v47 = v46;
    if ( v46 )
    {
      v48 = v47[1];
      v49 = (*(_DWORD *)(v46 + 8))-- == 1;
      if ( v49 )
        sub_15D7BC0(v48, v46);
    }
    goto LABEL_3;
  }
  v47 = a1;
  v28 = 0;
LABEL_16:
  if ( (v100 & 1) == 0 && (v100 - 2) / 2 == v28 )
  {
    v89 = 14 * (v28 + 1);
    v28 = 2 * (v28 + 1) - 1;
    v90 = (__int64)&a1[v89 - 7];
    LODWORD(v89) = *(_DWORD *)(v90 + 16);
    *v47 = *(_QWORD *)v90;
    v91 = *((_DWORD *)v47 + 4);
    *(_QWORD *)v90 = 0;
    *((_DWORD *)v47 + 4) = v89;
    v92 = *(_QWORD *)(v90 + 24);
    *(_DWORD *)(v90 + 16) = v91;
    v93 = v47[3];
    v47[3] = v92;
    v94 = *(_BYTE *)(v90 + 20);
    *(_QWORD *)(v90 + 24) = v93;
    LOBYTE(v93) = *((_BYTE *)v47 + 20);
    *((_BYTE *)v47 + 20) = v94 & 2 | v93 & 0xFD;
    LOBYTE(v93) = v93 & 2 | *(_BYTE *)(v90 + 20) & 0xFD;
    *(_BYTE *)(v90 + 20) = v93;
    v95 = *((_BYTE *)v47 + 20);
    *((_BYTE *)v47 + 20) = v93 & 1 | v95 & 0xFE;
    LODWORD(v92) = *(_DWORD *)(v90 + 32);
    *(_BYTE *)(v90 + 20) = v95 & 1 | *(_BYTE *)(v90 + 20) & 0xFE;
    LODWORD(v93) = *((_DWORD *)v47 + 8);
    *((_DWORD *)v47 + 8) = v92;
    v96 = *(_QWORD *)(v90 + 40);
    *(_DWORD *)(v90 + 32) = v93;
    v97 = v47[5];
    v47[5] = v96;
    v98 = *(_BYTE *)(v90 + 36);
    *(_QWORD *)(v90 + 40) = v97;
    LOBYTE(v97) = *((_BYTE *)v47 + 36);
    *((_BYTE *)v47 + 36) = v98 & 2 | v97 & 0xFD;
    LOBYTE(v97) = v97 & 2 | *(_BYTE *)(v90 + 36) & 0xFD;
    *(_BYTE *)(v90 + 36) = v97;
    v99 = *((_BYTE *)v47 + 36) & 1;
    *((_BYTE *)v47 + 36) = v97 & 1 | *((_BYTE *)v47 + 36) & 0xFE;
    *(_BYTE *)(v90 + 36) = v99 | *(_BYTE *)(v90 + 36) & 0xFE;
    *((_DWORD *)v47 + 12) = *(_DWORD *)(v90 + 48);
  }
  v50 = (__m128)_mm_load_si128(&v108);
  v108.m128i_i64[0] = 0;
  v117 = v109;
  v116 = (__m128i)v50;
  v118 = v110 & 3 | v118 & 0xFC;
  v51 = v111;
  v111 = 0;
  v119 = v51;
  v120 = v112;
  v121 = v113 & 3 | v121 & 0xFC;
  v52 = v114;
  v114 = 0;
  v122 = v52;
  v123 = v115;
  v53 = (v28 - 1) / 2;
  if ( v28 )
  {
    while ( 1 )
    {
      v64 = &a1[7 * v53];
      v65 = v64 + 2;
      if ( (v121 & 1) != 0 || v120 != 1 || (*((_BYTE *)v64 + 36) & 1) != 0 || *((_DWORD *)v64 + 8) != 1 )
      {
        if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v117, v65) )
          goto LABEL_34;
      }
      else if ( (v118 & 1) != 0 || (*((_BYTE *)v64 + 20) & 1) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, &v117, v65) >= 0 )
        {
LABEL_34:
          v69 = v116.m128i_u64[1];
          v50.m128_u64[0] = v116.m128i_i64[0];
          v64 = &a1[7 * v28];
          v70 = *v64;
          goto LABEL_35;
        }
      }
      else if ( v117 >= *((_DWORD *)v64 + 4) )
      {
        goto LABEL_34;
      }
      v66 = &a1[7 * v28];
      v67 = *v66;
      *v66 = *v64;
      *v64 = v67;
      if ( v67 )
      {
        v68 = v64[1];
        v49 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v49 )
          sub_15D7BC0(v68, v67);
      }
      v54 = *((_DWORD *)v66 + 4);
      v55 = *((_DWORD *)v64 + 4);
      *v64 = 0;
      v28 = v53;
      *((_DWORD *)v66 + 4) = v55;
      v56 = v64[3];
      *((_DWORD *)v64 + 4) = v54;
      v57 = v66[3];
      v66[3] = v56;
      v58 = *((_BYTE *)v64 + 20);
      v64[3] = v57;
      LOBYTE(v56) = *((_BYTE *)v66 + 20);
      *((_BYTE *)v66 + 20) = v58 & 2 | v56 & 0xFD;
      LOBYTE(v57) = v56 & 2 | *((_BYTE *)v64 + 20) & 0xFD;
      *((_BYTE *)v64 + 20) = v57;
      v59 = *((_BYTE *)v66 + 20);
      *((_BYTE *)v66 + 20) = v57 & 1 | v59 & 0xFE;
      LODWORD(v56) = *((_DWORD *)v64 + 8);
      *((_BYTE *)v64 + 20) = v59 & 1 | *((_BYTE *)v64 + 20) & 0xFE;
      LODWORD(v57) = *((_DWORD *)v66 + 8);
      *((_DWORD *)v66 + 8) = v56;
      v60 = v64[5];
      *((_DWORD *)v64 + 8) = v57;
      v61 = v66[5];
      v66[5] = v60;
      v62 = *((_BYTE *)v64 + 36);
      v64[5] = v61;
      LOBYTE(v60) = *((_BYTE *)v66 + 36);
      *((_BYTE *)v66 + 36) = v62 & 2 | v60 & 0xFD;
      LOBYTE(v61) = v60 & 2 | *((_BYTE *)v64 + 36) & 0xFD;
      *((_BYTE *)v64 + 36) = v61;
      v63 = *((_BYTE *)v66 + 36) & 1;
      *((_BYTE *)v66 + 36) = v61 & 1 | *((_BYTE *)v66 + 36) & 0xFE;
      *((_BYTE *)v64 + 36) = v63 | *((_BYTE *)v64 + 36) & 0xFE;
      *((_DWORD *)v66 + 12) = *((_DWORD *)v64 + 12);
      if ( !v53 )
        break;
      v53 = (v53 - 1) / 2;
    }
    *v64 = v116.m128i_i64[0];
  }
  else
  {
    v70 = *a1;
    v64 = a1;
    v69 = _mm_movehl_ps(a5, v50).m128_u64[0];
LABEL_35:
    v116.m128i_i64[0] = v70;
    *v64 = v50.m128_u64[0];
    if ( v70 )
    {
      v49 = (*(_DWORD *)(v70 + 8))-- == 1;
      if ( v49 )
        sub_15D7BC0(v69, v70);
    }
  }
  v71 = *((_DWORD *)v64 + 4);
  v72 = v117;
  v116.m128i_i64[0] = 0;
  v73 = v118;
  v117 = v71;
  v74 = v64[3];
  *((_DWORD *)v64 + 4) = v72;
  v75 = v119;
  v119 = v74;
  LOBYTE(v74) = *((_BYTE *)v64 + 20);
  v64[3] = v75;
  LOBYTE(v75) = v73;
  v73 &= ~2u;
  v76 = v74 & 0xFD;
  v118 = v74 & 1 | v73 & 0xFE | v74 & 2;
  LODWORD(v74) = *((_DWORD *)v64 + 8);
  *((_BYTE *)v64 + 20) = v73 & 1 | v76 & 0xFE | v75 & 2;
  LODWORD(v75) = v120;
  v120 = v74;
  v77 = v64[5];
  v78 = v121;
  *((_DWORD *)v64 + 8) = v75;
  v79 = v122;
  v122 = v77;
  LOBYTE(v77) = *((_BYTE *)v64 + 36);
  v64[5] = v79;
  LOBYTE(v79) = v78;
  v78 &= ~2u;
  v80 = v77 & 0xFD;
  v121 = v77 & 1 | v78 & 0xFE | v77 & 2;
  LODWORD(v77) = v123;
  *((_BYTE *)v64 + 36) = v78 & 1 | v80 & 0xFE | v79 & 2;
  *((_DWORD *)v64 + 12) = v77;
  v81 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v117);
  sub_182CBA0(v81, &v120);
  v82 = v116.m128i_i64[0];
  if ( v116.m128i_i64[0] )
  {
    v83 = v116.m128i_i64[1];
    v49 = (*(_DWORD *)(v116.m128i_i64[0] + 8))-- == 1;
    if ( v49 )
      sub_15D7BC0(v83, v82);
  }
  v84 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v109);
  sub_182CBA0(v84, &v112);
  v85 = v108.m128i_i64[0];
  if ( v108.m128i_i64[0] )
  {
    v86 = v108.m128i_i64[1];
    v49 = (*(_DWORD *)(v108.m128i_i64[0] + 8))-- == 1;
    if ( v49 )
      sub_15D7BC0(v86, v85);
  }
  v87 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v101);
  return sub_182CBA0(v87, &v104);
}

