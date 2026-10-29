__int64 __fastcall sub_217AE00(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rdi
  void *v30; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  _WORD *v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 *v72; // rdi
  unsigned __int64 v73; // [rsp+0h] [rbp-328h] BYREF
  unsigned __int64 v74; // [rsp+8h] [rbp-320h] BYREF
  __int64 v75; // [rsp+10h] [rbp-318h] BYREF
  __int64 v76; // [rsp+18h] [rbp-310h] BYREF
  __m128i v77; // [rsp+20h] [rbp-308h] BYREF
  __int64 v78; // [rsp+30h] [rbp-2F8h] BYREF
  __m128i v79; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-2D8h] BYREF
  __m128i v81; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v82; // [rsp+70h] [rbp-2B8h] BYREF
  __m128i v83; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v84; // [rsp+90h] [rbp-298h]
  __int16 v85; // [rsp+A0h] [rbp-288h]
  __m128i v86; // [rsp+B0h] [rbp-278h] BYREF
  _WORD v87[16]; // [rsp+C0h] [rbp-268h] BYREF
  __m128i v88; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-238h] BYREF
  __m128i v90; // [rsp+110h] [rbp-218h] BYREF
  _WORD v91[16]; // [rsp+120h] [rbp-208h] BYREF
  __m128i v92; // [rsp+140h] [rbp-1E8h] BYREF
  __int64 v93; // [rsp+150h] [rbp-1D8h] BYREF
  __int16 v94; // [rsp+160h] [rbp-1C8h]
  __m128i v95; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 v96; // [rsp+180h] [rbp-1A8h] BYREF
  __int16 v97; // [rsp+190h] [rbp-198h]
  __m128i v98[2]; // [rsp+1A0h] [rbp-188h] BYREF
  __int16 v99; // [rsp+1C0h] [rbp-168h]
  __m128i v100[2]; // [rsp+1D0h] [rbp-158h] BYREF
  __int16 v101; // [rsp+1F0h] [rbp-138h]
  __m128i v102[3]; // [rsp+200h] [rbp-128h] BYREF
  __m128i v103; // [rsp+230h] [rbp-F8h] BYREF
  __int64 v104; // [rsp+240h] [rbp-E8h]
  __int16 v105; // [rsp+250h] [rbp-D8h]
  __m128i v106[3]; // [rsp+260h] [rbp-C8h] BYREF
  __m128i v107[2]; // [rsp+290h] [rbp-98h] BYREF
  __int16 v108; // [rsp+2B0h] [rbp-78h]
  __m128i v109[6]; // [rsp+2C0h] [rbp-68h] BYREF

  v5 = a3[7];
  v6 = sub_2162D00(v5);
  if ( v6 != 4 )
  {
    v86.m128i_i64[0] = v6;
    v108 = 267;
    v107[0].m128i_i64[0] = (__int64)&v86;
    v103.m128i_i64[0] = (__int64)", but got ";
    v105 = 259;
    v99 = 267;
    v98[0].m128i_i64[0] = (__int64)&v83;
    v83.m128i_i64[0] = 4;
    sub_217A410(&v90, a2, (__int64)a3, v7, v8, v9);
    sub_E7ED70(&v92, "section ", &v90);
    sub_10E1980(&v95, &v92, " has invalid sh_entsize: expected ");
    v101 = 260;
    v100[0].m128i_i64[0] = (__int64)&v95;
    sub_A41580(v102, v100, v98, 260, v18, v19);
    sub_A41580(v106, v102, &v103, v20, v21, v22);
    sub_A41580(v109, v106, v107, v23, v24, v25);
    sub_2162BF0(&v88, (__int64)v109, v26, v27);
    v28 = v88.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v29 = (__int64 *)v95.m128i_i64[0];
    *(_QWORD *)a1 = v28;
    if ( v29 != &v96 )
      operator delete(v29);
    if ( (__int64 *)v92.m128i_i64[0] != &v93 )
      operator delete((void *)v92.m128i_i64[0]);
    v30 = (void *)v90.m128i_i64[0];
    if ( (_WORD *)v90.m128i_i64[0] == v91 )
      return a1;
LABEL_11:
    operator delete(v30);
    return a1;
  }
  v10 = sub_2162D00(a3[3]);
  v11 = a3[4];
  v12 = v10;
  v73 = v10;
  v13 = sub_2162D00(v11);
  v74 = v13;
  if ( (v13 & 3) != 0 )
  {
    v107[0].m128i_i64[0] = (__int64)")";
    v108 = 259;
    v81.m128i_i64[0] = sub_2162D00(v5);
    v105 = 267;
    v103.m128i_i64[0] = (__int64)&v81;
    v100[0].m128i_i64[0] = (__int64)") which is not a multiple of its sh_entsize (";
    v101 = 259;
    v94 = 267;
    v92.m128i_i64[0] = (__int64)&v74;
    sub_217A410(&v86, a2, (__int64)a3, v32, v33, v34);
    sub_E7ED70(&v88, "section ", &v86);
    v35 = " has an invalid sh_size (";
    goto LABEL_14;
  }
  if ( ~v12 < v13 )
  {
    v107[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v103.m128i_i64[0] = (__int64)&v74;
    v100[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v105 = 271;
    v108 = 259;
    v92.m128i_i64[0] = (__int64)&v73;
    v104 = 0;
    v101 = 259;
    v93 = 0;
    v94 = 271;
    sub_217A410(&v86, a2, (__int64)a3, v14, v15, v16);
    sub_E7ED70(&v88, "section ", &v86);
    v35 = " has a sh_offset (0x";
LABEL_14:
    sub_10E1980(&v90, &v88, v35);
    v97 = 260;
    v95.m128i_i64[0] = (__int64)&v90;
    sub_A41580(v98, &v95, &v92, v36, v37, v38);
    sub_A41580(v102, v98, v100, v39, v40, v41);
    sub_A41580(v106, v102, &v103, v42, v43, v44);
    sub_A41580(v109, v106, v107, v45, v46, v47);
    sub_2162BF0(&v83, (__int64)v109, v48, v49);
    v50 = v83.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v51 = (_WORD *)v90.m128i_i64[0];
    *(_QWORD *)a1 = v50;
    if ( v51 != v91 )
      operator delete(v51);
    if ( (__int64 *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
    v30 = (void *)v86.m128i_i64[0];
    if ( (_WORD *)v86.m128i_i64[0] == v87 )
      return a1;
    goto LABEL_11;
  }
  if ( v13 + v12 <= a2[1] )
  {
    v17 = *a2 + v12;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = v13 >> 2;
    return a1;
  }
  v75 = a2[1];
  v107[0].m128i_i64[0] = (__int64)")";
  v105 = 271;
  v108 = 259;
  v103.m128i_i64[0] = (__int64)&v75;
  v100[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
  v95.m128i_i64[0] = (__int64)&v74;
  v97 = 271;
  v90.m128i_i64[0] = (__int64)") + sh_size (0x";
  v91[8] = 259;
  v83.m128i_i64[0] = (__int64)&v73;
  v101 = 259;
  v85 = 271;
  v104 = 0;
  v96 = 0;
  v84 = 0;
  sub_217A410(&v77, a2, (__int64)a3, 259, 271, v16);
  sub_E7ED70(&v79, "section ", &v77);
  sub_10E1980(&v81, &v79, " has a sh_offset (0x");
  v86.m128i_i64[0] = (__int64)&v81;
  v87[8] = 260;
  sub_A41580(&v88, &v86, &v83, v52, v53, 260);
  sub_A41580(&v92, &v88, &v90, v54, v55, v56);
  sub_A41580(v98, &v92, &v95, v57, v58, v59);
  sub_A41580(v102, v98, v100, v60, v61, v62);
  sub_A41580(v106, v102, &v103, v63, v64, v65);
  sub_A41580(v109, v106, v107, v66, v67, v68);
  sub_2162BF0(&v76, (__int64)v109, v69, v70);
  v71 = v76;
  v72 = (__int64 *)v81.m128i_i64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v71;
  if ( v72 != &v82 )
    operator delete(v72);
  if ( (__int64 *)v79.m128i_i64[0] != &v80 )
    operator delete((void *)v79.m128i_i64[0]);
  v30 = (void *)v77.m128i_i64[0];
  if ( (__int64 *)v77.m128i_i64[0] != &v78 )
    goto LABEL_11;
  return a1;
}
