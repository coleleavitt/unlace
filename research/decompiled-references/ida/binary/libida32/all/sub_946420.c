unsigned __int64 __fastcall sub_946420(__m128i *a1)
{
  __m128i *v2; // rsi
  __m128i v3; // xmm0
  __m128i v4; // xmm4
  __m128i v5; // xmm2
  __m128i v6; // xmm6
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __m128i v10; // xmm0
  __m128i *v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r8
  _WORD *v15; // rbp
  _WORD *v16; // r10
  unsigned __int64 v17; // r15
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r11
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  _WORD *v26; // rsi
  _WORD *v27; // rax
  unsigned __int64 v28; // rbx
  char v29; // dl
  __int16 v30; // r11
  __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  _WORD *v33; // rbp
  unsigned __int64 v34; // r11
  char v35; // r9
  __int64 v36; // r11
  unsigned __int64 v37; // r8
  _WORD *v38; // rsi
  unsigned __int64 v39; // r9
  __int64 v40; // r9
  unsigned __int64 v41; // rdi
  _WORD *v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  _WORD *v46; // rbp
  unsigned __int64 v47; // r11
  __int64 v48; // r11
  unsigned __int64 v49; // r8
  _WORD *v50; // rsi
  unsigned __int64 v51; // r9
  __int64 v52; // r9
  unsigned __int64 v53; // rdi
  _WORD *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rbx
  unsigned __int64 v57; // rdx
  _WORD *v58; // rbp
  __int64 v59; // r11
  __int64 v60; // r11
  unsigned __int64 v61; // r8
  _WORD *v62; // rsi
  __int64 v63; // r9
  __int64 v64; // r9
  unsigned __int64 v65; // rdi
  _WORD *v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rbx
  unsigned __int64 v69; // rdx
  _WORD *v70; // rbx
  __int64 v71; // r11
  __int64 v72; // r11
  unsigned __int64 v73; // r8
  _WORD *v74; // r11
  __int64 v75; // r9
  __int64 v76; // r9
  unsigned __int64 v77; // rdi
  _WORD *v78; // r9
  __int64 v79; // rsi
  char v80; // r12
  __int64 v81; // rbp
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v86; // rax
  __int16 v87; // r13
  __int64 v88; // rax
  unsigned __int64 v90; // r9
  __int16 v91; // r14
  __int64 v92; // r9
  unsigned __int64 v93; // r15
  _WORD *v94; // r10
  unsigned __int64 v97; // r9
  __int16 v98; // r14
  __int64 v99; // r9
  unsigned __int64 v100; // r15
  _WORD *v101; // r10
  __int64 v103; // rdx
  __int16 v104; // r12
  __int64 v105; // rdx
  unsigned __int64 v106; // r15
  _WORD *v107; // r10
  __int64 v108; // rdx
  __int64 v109; // rdx
  unsigned __int64 v110; // r15
  _WORD *v111; // r10
  __int64 v112; // rdx
  __int64 v113; // rdx
  __m128i v116; // xmm5
  __m128i v117; // xmm6
  __m128i v118; // xmm7
  __m128i v119; // xmm0
  __m128i v120; // xmm1
  _QWORD *v122; // [rsp+0h] [rbp-128h]
  _QWORD *v123; // [rsp+10h] [rbp-118h]
  _QWORD *v124; // [rsp+18h] [rbp-110h]
  _QWORD *v125; // [rsp+20h] [rbp-108h]
  _WORD *v126; // [rsp+30h] [rbp-F8h]
  __int64 v127; // [rsp+40h] [rbp-E8h]
  __m128i *v128; // [rsp+48h] [rbp-E0h]
  __m128i *v129; // [rsp+50h] [rbp-D8h]
  __m128i v131; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v132; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v133; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v134; // [rsp+90h] [rbp-98h] BYREF
  __m128i v135; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v136; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v137; // [rsp+C0h] [rbp-68h]
  __m128i v138; // [rsp+C8h] [rbp-60h]
  __int64 v139; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v140; // [rsp+E8h] [rbp-40h]

  v2 = a1 + 2;
  v3 = _mm_loadu_si128(a1 + 4);
  v4 = _mm_loadu_si128(a1);
  v5 = _mm_loadu_si128(a1 + 5);
  v6 = _mm_loadu_si128(a1 + 1);
  v7 = a1[6].m128i_i64[0];
  v140 = __readfsqword(0x28u);
  v8 = a1[6].m128i_i64[1];
  v9 = v3.m128i_i64[0];
  v131 = v3;
  v10 = _mm_loadu_si128(a1 + 2);
  v127 = v8;
  v11 = a1 + 4;
  v12 = v5.m128i_i64[0];
  v128 = v11;
  v132 = v5;
  v13 = v4.m128i_i64[0];
  v129 = v2;
  v133 = v4;
  v134 = v6;
  v135 = v10;
  v123 = (_QWORD *)v6.m128i_i64[0];
  v14 = v131.m128i_u64[1];
  v136 = _mm_loadu_si128(a1 + 3);
  v137 = v10.m128i_i64[1];
  v15 = (_WORD *)v10.m128i_i64[0];
  v16 = (_WORD *)v136.m128i_i64[1];
  v138 = v136;
  v139 = a1[7].m128i_i64[0];
  v125 = (_QWORD *)v6.m128i_i64[1];
  v122 = (_QWORD *)v4.m128i_i64[1];
  v17 = v5.m128i_u64[1];
  v18 = 0;
  while ( 1 )
  {
    v19 = ((v13 - v127) * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v20 = (__int64)v15;
    v21 = 0;
    v22 = ((v13 - v127 - v19) >> 1) + v19;
    v23 = v10.m128i_i64[1];
    v24 = v22 >> 2;
    while ( 1 )
    {
      v25 = (v23 - v20) / 0xAuLL;
      if ( v24 > v25 )
        v24 = v25;
      if ( ++v21 == 4 )
        break;
      v23 = *(__int64 *)((char *)&v137 + v21 * 8);
      v20 = v135.m128i_i64[v21];
    }
    v126 = (_WORD *)((char *)v16 + 5 * v24);
    if ( v126 == v16 || (unsigned __int64)v122 < v13 )
    {
LABEL_14:
      if ( v18 )
      {
        v132.m128i_i64[1] = v17;
        v131.m128i_i64[0] = v9;
        v133.m128i_i64[1] = (__int64)v122;
        v131.m128i_i64[1] = v14;
        v134.m128i_i64[0] = (__int64)v123;
        v132.m128i_i64[0] = v12;
        v133.m128i_i64[0] = v13;
        v134.m128i_i64[1] = (__int64)v125;
      }
      goto LABEL_16;
    }
    if ( v122 > v123 )
      break;
    if ( v123 > v125 )
      goto LABEL_14;
    v124 = (_QWORD *)v13;
    v26 = (_WORD *)v135.m128i_i64[1];
    v27 = (_WORD *)v136.m128i_i64[0];
    do
    {
      v28 = v7 + 4 * (v9 >> 53);
      v29 = *(_BYTE *)(v28 + 2);
      v30 = *(_WORD *)v28;
      v31 = *(unsigned __int8 *)(v28 + 3);
      v32 = v9 << v29;
      *v15 = v30;
      v33 = (_WORD *)((char *)v15 + v31);
      v34 = v7 + 4 * (v14 >> 53);
      v35 = *(_BYTE *)(v34 + 2);
      LOWORD(v31) = *(_WORD *)v34;
      v36 = *(unsigned __int8 *)(v34 + 3);
      v37 = v14 << v35;
      *v26 = v31;
      v38 = (_WORD *)((char *)v26 + v36);
      v39 = v7 + 4 * (v12 >> 53);
      LOBYTE(v36) = *(_BYTE *)(v39 + 2);
      LOWORD(v31) = *(_WORD *)v39;
      v40 = *(unsigned __int8 *)(v39 + 3);
      *v27 = v31;
      v41 = v12 << v36;
      v42 = (_WORD *)((char *)v27 + v40);
      v43 = v7 + 4 * (v32 >> 53);
      LOBYTE(v40) = *(_BYTE *)(v43 + 2);
      LOWORD(v36) = *(_WORD *)v43;
      v44 = *(unsigned __int8 *)(v43 + 3);
      v45 = v32 << v40;
      *v33 = v36;
      v46 = (_WORD *)((char *)v33 + v44);
      v47 = v7 + 4 * (v37 >> 53);
      LOBYTE(v40) = *(_BYTE *)(v47 + 2);
      LOWORD(v44) = *(_WORD *)v47;
      v48 = *(unsigned __int8 *)(v47 + 3);
      v49 = v37 << v40;
      *v38 = v44;
      v50 = (_WORD *)((char *)v38 + v48);
      v51 = v7 + 4 * (v41 >> 53);
      LOBYTE(v48) = *(_BYTE *)(v51 + 2);
      LOWORD(v44) = *(_WORD *)v51;
      v52 = *(unsigned __int8 *)(v51 + 3);
      *v42 = v44;
      v53 = v41 << v48;
      v54 = (_WORD *)((char *)v42 + v52);
      v55 = v7 + 4 * (v45 >> 53);
      LOBYTE(v52) = *(_BYTE *)(v55 + 2);
      LOWORD(v48) = *(_WORD *)v55;
      v56 = *(unsigned __int8 *)(v55 + 3);
      v57 = v45 << v52;
      *v46 = v48;
      v58 = (_WORD *)((char *)v46 + v56);
      v59 = v7 + 4 * (v49 >> 53);
      LOBYTE(v52) = *(_BYTE *)(v59 + 2);
      LOWORD(v56) = *(_WORD *)v59;
      v60 = *(unsigned __int8 *)(v59 + 3);
      v61 = v49 << v52;
      *v50 = v56;
      v62 = (_WORD *)((char *)v50 + v60);
      v63 = v7 + 4 * (v53 >> 53);
      LOWORD(v56) = *(_WORD *)v63;
      LOBYTE(v60) = *(_BYTE *)(v63 + 2);
      v64 = *(unsigned __int8 *)(v63 + 3);
      *v54 = v56;
      v65 = v53 << v60;
      v66 = (_WORD *)((char *)v54 + v64);
      v67 = v7 + 4 * (v57 >> 53);
      LOBYTE(v64) = *(_BYTE *)(v67 + 2);
      LOWORD(v60) = *(_WORD *)v67;
      v68 = *(unsigned __int8 *)(v67 + 3);
      v69 = v57 << v64;
      *v58 = v60;
      v70 = (_WORD *)((char *)v58 + v68);
      v71 = v7 + 4 * (v61 >> 53);
      LOWORD(v58) = *(_WORD *)v71;
      LOBYTE(v64) = *(_BYTE *)(v71 + 2);
      v72 = *(unsigned __int8 *)(v71 + 3);
      *v62 = (_WORD)v58;
      v73 = v61 << v64;
      v74 = (_WORD *)((char *)v62 + v72);
      v75 = v7 + 4 * (v65 >> 53);
      LOWORD(v58) = *(_WORD *)v75;
      LOBYTE(v62) = *(_BYTE *)(v75 + 2);
      v76 = *(unsigned __int8 *)(v75 + 3);
      *v66 = (_WORD)v58;
      v77 = v65 << (char)v62;
      v78 = (_WORD *)((char *)v66 + v76);
      v79 = v7 + 4 * (v69 >> 53);
      v80 = *(_BYTE *)(v79 + 2);
      v81 = *(unsigned __int8 *)(v79 + 3);
      *v70 = *(_WORD *)v79;
      _RDX = v69 << v80;
      v15 = (_WORD *)((char *)v70 + v81);
      v83 = v7 + 4 * (v73 >> 53);
      LOWORD(v66) = *(_WORD *)v83;
      LOBYTE(v70) = *(_BYTE *)(v83 + 2);
      v84 = *(unsigned __int8 *)(v83 + 3);
      *v74 = (_WORD)v66;
      _R8 = v73 << (char)v70;
      v26 = (_WORD *)((char *)v74 + v84);
      v86 = v7 + 4 * (v77 >> 53);
      LOBYTE(v74) = *(_BYTE *)(v86 + 2);
      v87 = *(_WORD *)v86;
      v88 = *(unsigned __int8 *)(v86 + 3);
      *v78 = v87;
      _RDI = v77 << (char)v74;
      v27 = (_WORD *)((char *)v78 + v88);
      v90 = v7 + 4 * (v17 >> 53);
      LOBYTE(v87) = *(_BYTE *)(v90 + 2);
      v91 = *(_WORD *)v90;
      v92 = *(unsigned __int8 *)(v90 + 3);
      v93 = v17 << v87;
      *v16 = v91;
      v94 = (_WORD *)((char *)v16 + v92);
      __asm
      {
        tzcnt   r8, r8
        tzcnt   rdi, rdi
      }
      v97 = v7 + 4 * (v93 >> 53);
      v98 = *(_WORD *)v97;
      LOBYTE(v87) = *(_BYTE *)(v97 + 2);
      v99 = *(unsigned __int8 *)(v97 + 3);
      *v94 = v98;
      v100 = v93 << v87;
      v101 = (_WORD *)((char *)v94 + v99);
      __asm { tzcnt   r9, rdx }
      v124 = (_QWORD *)((char *)v124 - (_R9 >> 3));
      v103 = v7 + 4 * (v100 >> 53);
      v9 = (*v124 | 1LL) << (_R9 & 7);
      LOBYTE(v98) = *(_BYTE *)(v103 + 2);
      v104 = *(_WORD *)v103;
      v105 = *(unsigned __int8 *)(v103 + 3);
      *v101 = v104;
      v106 = v100 << v98;
      v107 = (_WORD *)((char *)v101 + v105);
      v122 = (_QWORD *)((char *)v122 - (_R8 >> 3));
      v14 = (*v122 | 1LL) << (_R8 & 7);
      v108 = v7 + 4 * (v106 >> 53);
      LOBYTE(v98) = *(_BYTE *)(v108 + 2);
      LOWORD(v70) = *(_WORD *)v108;
      v109 = *(unsigned __int8 *)(v108 + 3);
      *v107 = (_WORD)v70;
      v110 = v106 << v98;
      v111 = (_WORD *)((char *)v107 + v109);
      v123 = (_QWORD *)((char *)v123 - (_RDI >> 3));
      v12 = (*v123 | 1LL) << (_RDI & 7);
      v112 = v7 + 4 * (v110 >> 53);
      LOBYTE(v98) = *(_BYTE *)(v112 + 2);
      LOWORD(v74) = *(_WORD *)v112;
      v113 = *(unsigned __int8 *)(v112 + 3);
      _R15 = v110 << v98;
      __asm { tzcnt   r15, r15 }
      *v111 = (_WORD)v74;
      v16 = (_WORD *)((char *)v111 + v113);
      v125 = (_QWORD *)((char *)v125 - (_R15 >> 3));
      v17 = (*v125 | 1LL) << (_R15 & 7);
    }
    while ( v126 > v16 );
    v13 = (unsigned __int64)v124;
    v135.m128i_i64[0] = (__int64)v15;
    v18 = 1;
    v135.m128i_i64[1] = (__int64)v26;
    v136.m128i_i64[0] = (__int64)v27;
    v136.m128i_i64[1] = (__int64)v16;
  }
  if ( v18 )
  {
    v132.m128i_i64[1] = v17;
    v131.m128i_i64[0] = v9;
    v133.m128i_i64[1] = (__int64)v122;
    v131.m128i_i64[1] = v14;
    v132.m128i_i64[0] = v12;
    v133.m128i_i64[0] = v13;
    v134.m128i_i64[0] = (__int64)v123;
    v134.m128i_i64[1] = (__int64)v125;
  }
LABEL_16:
  v116 = _mm_load_si128(&v132);
  v117 = _mm_load_si128(&v133);
  a1[4] = _mm_load_si128(&v131);
  v118 = _mm_load_si128(&v134);
  v119 = _mm_load_si128(&v135);
  v128[1] = v116;
  v120 = _mm_load_si128(&v136);
  a1[1] = v118;
  *a1 = v117;
  a1[2] = v119;
  v129[1] = v120;
  return __readfsqword(0x28u) ^ v140;
}

