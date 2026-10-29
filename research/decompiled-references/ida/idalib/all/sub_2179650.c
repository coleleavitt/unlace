__int64 __fastcall sub_2179650(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rdi
  void *v23; // rdi
  char *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  _WORD *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // rdi
  __int64 v64; // [rsp+0h] [rbp-328h] BYREF
  unsigned __int64 v65; // [rsp+8h] [rbp-320h] BYREF
  __int64 v66; // [rsp+10h] [rbp-318h] BYREF
  __int64 v67; // [rsp+18h] [rbp-310h] BYREF
  __m128i v68; // [rsp+20h] [rbp-308h] BYREF
  __int64 v69; // [rsp+30h] [rbp-2F8h] BYREF
  __m128i v70; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v71; // [rsp+50h] [rbp-2D8h] BYREF
  __m128i v72; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v73; // [rsp+70h] [rbp-2B8h] BYREF
  __m128i v74; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v75; // [rsp+90h] [rbp-298h]
  __int16 v76; // [rsp+A0h] [rbp-288h]
  __m128i v77; // [rsp+B0h] [rbp-278h] BYREF
  _WORD v78[16]; // [rsp+C0h] [rbp-268h] BYREF
  __m128i v79; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-238h] BYREF
  __m128i v81; // [rsp+110h] [rbp-218h] BYREF
  _WORD v82[16]; // [rsp+120h] [rbp-208h] BYREF
  __m128i v83; // [rsp+140h] [rbp-1E8h] BYREF
  __int64 v84; // [rsp+150h] [rbp-1D8h] BYREF
  __int16 v85; // [rsp+160h] [rbp-1C8h]
  __m128i v86; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 v87; // [rsp+180h] [rbp-1A8h] BYREF
  __int16 v88; // [rsp+190h] [rbp-198h]
  __m128i v89[2]; // [rsp+1A0h] [rbp-188h] BYREF
  __int16 v90; // [rsp+1C0h] [rbp-168h]
  __m128i v91[2]; // [rsp+1D0h] [rbp-158h] BYREF
  __int16 v92; // [rsp+1F0h] [rbp-138h]
  __m128i v93[3]; // [rsp+200h] [rbp-128h] BYREF
  __m128i v94; // [rsp+230h] [rbp-F8h] BYREF
  __int64 v95; // [rsp+240h] [rbp-E8h]
  __int16 v96; // [rsp+250h] [rbp-D8h]
  __m128i v97[3]; // [rsp+260h] [rbp-C8h] BYREF
  __m128i v98[2]; // [rsp+290h] [rbp-98h] BYREF
  __int16 v99; // [rsp+2B0h] [rbp-78h]
  __m128i v100[6]; // [rsp+2C0h] [rbp-68h] BYREF

  if ( a3[7] != 16 )
  {
    v77.m128i_i64[0] = a3[7];
    v98[0].m128i_i64[0] = (__int64)&v77;
    v99 = 267;
    v94.m128i_i64[0] = (__int64)", but got ";
    v89[0].m128i_i64[0] = (__int64)&v74;
    v96 = 259;
    v90 = 267;
    v74.m128i_i64[0] = 16;
    sub_2177250(&v81, a2, (__int64)a3, a4, 259, 267);
    sub_E7ED70(&v83, "section ", &v81);
    sub_10E1980(&v86, &v83, " has invalid sh_entsize: expected ");
    v91[0].m128i_i64[0] = (__int64)&v86;
    v92 = 260;
    sub_A41580(v93, v91, v89, v10, v11, v12);
    sub_A41580(v97, v93, &v94, v13, v14, v15);
    sub_A41580(v100, v97, v98, v16, v17, v18);
    sub_2162BF0(&v79, (__int64)v100, v19, v20);
    v21 = v79.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v22 = (__int64 *)v86.m128i_i64[0];
    *(_QWORD *)a1 = v21;
    if ( v22 != &v87 )
      operator delete(v22);
    if ( (__int64 *)v83.m128i_i64[0] != &v84 )
      operator delete((void *)v83.m128i_i64[0]);
    v23 = (void *)v81.m128i_i64[0];
    if ( (_WORD *)v81.m128i_i64[0] == v82 )
      return a1;
LABEL_11:
    operator delete(v23);
    return a1;
  }
  v7 = a3[3];
  v8 = a3[4];
  v64 = v7;
  v65 = v8;
  if ( (v8 & 0xF) != 0 )
  {
    v72.m128i_i64[0] = 16;
    v98[0].m128i_i64[0] = (__int64)")";
    v99 = 259;
    v96 = 267;
    v94.m128i_i64[0] = (__int64)&v72;
    v91[0].m128i_i64[0] = (__int64)") which is not a multiple of its sh_entsize (";
    v92 = 259;
    v85 = 267;
    v83.m128i_i64[0] = (__int64)&v65;
    sub_2177250(&v77, a2, (__int64)a3, 267, a5, a6);
    sub_E7ED70(&v79, "section ", &v77);
    v25 = " has an invalid sh_size (";
    goto LABEL_14;
  }
  if ( ~v7 < v8 )
  {
    v95 = 0;
    v98[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v94.m128i_i64[0] = (__int64)&v65;
    v96 = 271;
    v91[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v92 = 259;
    v83.m128i_i64[0] = (__int64)&v64;
    v85 = 271;
    v99 = 259;
    v84 = 0;
    sub_2177250(&v77, a2, (__int64)a3, v7, a5, a6);
    sub_E7ED70(&v79, "section ", &v77);
    v25 = " has a sh_offset (0x";
LABEL_14:
    sub_10E1980(&v81, &v79, v25);
    v88 = 260;
    v86.m128i_i64[0] = (__int64)&v81;
    sub_A41580(v89, &v86, &v83, v26, v27, v28);
    sub_A41580(v93, v89, v91, v29, v30, v31);
    sub_A41580(v97, v93, &v94, v32, v33, v34);
    sub_A41580(v100, v97, v98, v35, v36, v37);
    sub_2162BF0(&v74, (__int64)v100, v38, v39);
    v40 = v74.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v41 = (_WORD *)v81.m128i_i64[0];
    *(_QWORD *)a1 = v40;
    if ( v41 != v82 )
      operator delete(v41);
    if ( (__int64 *)v79.m128i_i64[0] != &v80 )
      operator delete((void *)v79.m128i_i64[0]);
    v23 = (void *)v77.m128i_i64[0];
    if ( (_WORD *)v77.m128i_i64[0] == v78 )
      return a1;
    goto LABEL_11;
  }
  if ( v8 + v7 <= a2[1] )
  {
    v9 = *a2 + v7;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v8 >> 4;
    return a1;
  }
  v66 = a2[1];
  v98[0].m128i_i64[0] = (__int64)")";
  v99 = 259;
  v94.m128i_i64[0] = (__int64)&v66;
  v91[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
  v86.m128i_i64[0] = (__int64)&v65;
  v92 = 259;
  v81.m128i_i64[0] = (__int64)") + sh_size (0x";
  v74.m128i_i64[0] = (__int64)&v64;
  v96 = 271;
  v88 = 271;
  v82[8] = 259;
  v76 = 271;
  v95 = 0;
  v87 = 0;
  v75 = 0;
  sub_2177250(&v68, a2, (__int64)a3, 271, 271, 259);
  sub_E7ED70(&v70, "section ", &v68);
  sub_10E1980(&v72, &v70, " has a sh_offset (0x");
  v77.m128i_i64[0] = (__int64)&v72;
  v78[8] = 260;
  sub_A41580(&v79, &v77, &v74, v42, v43, v44);
  sub_A41580(&v83, &v79, &v81, v45, v46, v47);
  sub_A41580(v89, &v83, &v86, v48, v49, v50);
  sub_A41580(v93, v89, v91, v51, v52, v53);
  sub_A41580(v97, v93, &v94, v54, v55, v56);
  sub_A41580(v100, v97, v98, v57, v58, v59);
  sub_2162BF0(&v67, (__int64)v100, v60, v61);
  v62 = v67;
  v63 = (__int64 *)v72.m128i_i64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v62;
  if ( v63 != &v73 )
    operator delete(v63);
  if ( (__int64 *)v70.m128i_i64[0] != &v71 )
    operator delete((void *)v70.m128i_i64[0]);
  v23 = (void *)v68.m128i_i64[0];
  if ( (__int64 *)v68.m128i_i64[0] != &v69 )
    goto LABEL_11;
  return a1;
}
