__int64 __fastcall sub_21732E0(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rdi
  void *v25; // rdi
  char *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _WORD *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 *v65; // rdi
  __int64 v66; // [rsp+0h] [rbp-328h] BYREF
  __int64 v67; // [rsp+8h] [rbp-320h] BYREF
  unsigned __int64 v68; // [rsp+10h] [rbp-318h] BYREF
  __int64 v69; // [rsp+18h] [rbp-310h] BYREF
  __m128i v70; // [rsp+20h] [rbp-308h] BYREF
  __int64 v71; // [rsp+30h] [rbp-2F8h] BYREF
  __m128i v72; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v73; // [rsp+50h] [rbp-2D8h] BYREF
  __m128i v74; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v75; // [rsp+70h] [rbp-2B8h] BYREF
  __m128i v76; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v77; // [rsp+90h] [rbp-298h]
  __int16 v78; // [rsp+A0h] [rbp-288h]
  __m128i v79; // [rsp+B0h] [rbp-278h] BYREF
  _WORD v80[16]; // [rsp+C0h] [rbp-268h] BYREF
  __m128i v81; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-238h] BYREF
  __m128i v83; // [rsp+110h] [rbp-218h] BYREF
  _WORD v84[16]; // [rsp+120h] [rbp-208h] BYREF
  __m128i v85; // [rsp+140h] [rbp-1E8h] BYREF
  __int64 v86; // [rsp+150h] [rbp-1D8h] BYREF
  __int16 v87; // [rsp+160h] [rbp-1C8h]
  __m128i v88; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 v89; // [rsp+180h] [rbp-1A8h] BYREF
  __int16 v90; // [rsp+190h] [rbp-198h]
  __m128i v91[2]; // [rsp+1A0h] [rbp-188h] BYREF
  __int16 v92; // [rsp+1C0h] [rbp-168h]
  __m128i v93[2]; // [rsp+1D0h] [rbp-158h] BYREF
  __int16 v94; // [rsp+1F0h] [rbp-138h]
  __m128i v95[3]; // [rsp+200h] [rbp-128h] BYREF
  __m128i v96; // [rsp+230h] [rbp-F8h] BYREF
  __int64 v97; // [rsp+240h] [rbp-E8h]
  __int16 v98; // [rsp+250h] [rbp-D8h]
  __m128i v99[3]; // [rsp+260h] [rbp-C8h] BYREF
  __m128i v100[2]; // [rsp+290h] [rbp-98h] BYREF
  __int16 v101; // [rsp+2B0h] [rbp-78h]
  __m128i v102[6]; // [rsp+2C0h] [rbp-68h] BYREF

  if ( a3[9] != 8 )
  {
    v100[0].m128i_i32[0] = a3[9];
    v92 = 267;
    v96.m128i_i64[0] = (__int64)", but got ";
    v91[0].m128i_i64[0] = (__int64)&v79;
    v101 = 265;
    v98 = 259;
    v79.m128i_i64[0] = 8;
    sub_2170F40(&v83, a2, (__int64)a3, a4, a5, a6);
    sub_E7ED70(&v85, "section ", &v83);
    sub_10E1980(&v88, &v85, " has invalid sh_entsize: expected ");
    v94 = 260;
    v93[0].m128i_i64[0] = (__int64)&v88;
    sub_A41580(v95, v93, v91, v12, v13, v14);
    sub_A41580(v99, v95, &v96, v15, v16, v17);
    sub_A41580(v102, v99, v100, v18, v19, v20);
    sub_2162BF0(&v81, (__int64)v102, v21, v22);
    v23 = v81.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v24 = (__int64 *)v88.m128i_i64[0];
    *(_QWORD *)a1 = v23;
    if ( v24 != &v89 )
      operator delete(v24);
    if ( (__int64 *)v85.m128i_i64[0] != &v86 )
      operator delete((void *)v85.m128i_i64[0]);
    v25 = (void *)v83.m128i_i64[0];
    if ( (_WORD *)v83.m128i_i64[0] == v84 )
      return a1;
LABEL_11:
    operator delete(v25);
    return a1;
  }
  v7 = a3[5];
  if ( (v7 & 7) != 0 )
  {
    v100[0].m128i_i64[0] = (__int64)")";
    v101 = 259;
    v98 = 265;
    v93[0].m128i_i64[0] = (__int64)") which is not a multiple of its sh_entsize (";
    v94 = 259;
    v87 = 265;
    v85.m128i_i32[0] = v7;
    v96.m128i_i32[0] = 8;
    sub_2170F40(&v79, a2, (__int64)a3, (__int64)") which is not a multiple of its sh_entsize (", 259, 265);
    sub_E7ED70(&v81, "section ", &v79);
    v27 = " has an invalid sh_size (";
    goto LABEL_14;
  }
  v8 = a3[4];
  v9 = ~a3[4];
  if ( (unsigned int)v9 < v7 )
  {
    v74.m128i_i64[0] = v7;
    v100[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v101 = 259;
    v96.m128i_i64[0] = (__int64)&v74;
    v98 = 271;
    v93[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v94 = 259;
    v85.m128i_i64[0] = (__int64)&v72;
    v72.m128i_i64[0] = v8;
    v87 = 271;
    v97 = 0;
    v86 = 0;
    sub_2170F40(&v79, a2, (__int64)a3, a4, v8, v9);
    sub_E7ED70(&v81, "section ", &v79);
    v27 = " has a sh_offset (0x";
LABEL_14:
    sub_10E1980(&v83, &v81, v27);
    v90 = 260;
    v88.m128i_i64[0] = (__int64)&v83;
    sub_A41580(v91, &v88, &v85, v28, v29, v30);
    sub_A41580(v95, v91, v93, v31, v32, v33);
    sub_A41580(v99, v95, &v96, v34, v35, v36);
    sub_A41580(v102, v99, v100, v37, v38, v39);
    sub_2162BF0(&v76, (__int64)v102, v40, v41);
    v42 = v76.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v43 = (_WORD *)v83.m128i_i64[0];
    *(_QWORD *)a1 = v42;
    if ( v43 != v84 )
      operator delete(v43);
    if ( (__int64 *)v81.m128i_i64[0] != &v82 )
      operator delete((void *)v81.m128i_i64[0]);
    v25 = (void *)v79.m128i_i64[0];
    if ( (_WORD *)v79.m128i_i64[0] == v80 )
      return a1;
    goto LABEL_11;
  }
  v10 = a2[1];
  if ( (unsigned int)v8 + v7 <= v10 )
  {
    v11 = *a2 + v8;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = (unsigned __int64)v7 >> 3;
    return a1;
  }
  v66 = a3[4];
  v68 = v10;
  v67 = v7;
  v100[0].m128i_i64[0] = (__int64)")";
  v101 = 259;
  v96.m128i_i64[0] = (__int64)&v68;
  v93[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
  v88.m128i_i64[0] = (__int64)&v67;
  v78 = 271;
  v83.m128i_i64[0] = (__int64)") + sh_size (0x";
  v76.m128i_i64[0] = (__int64)&v66;
  v98 = 271;
  v94 = 259;
  v90 = 271;
  v84[8] = 259;
  v97 = 0;
  v89 = 0;
  v77 = 0;
  sub_2170F40(&v70, a2, (__int64)a3, 271, v8, 259);
  sub_E7ED70(&v72, "section ", &v70);
  sub_10E1980(&v74, &v72, " has a sh_offset (0x");
  v80[8] = 260;
  v79.m128i_i64[0] = (__int64)&v74;
  sub_A41580(&v81, &v79, &v76, v44, v45, v46);
  sub_A41580(&v85, &v81, &v83, v47, v48, v49);
  sub_A41580(v91, &v85, &v88, v50, v51, v52);
  sub_A41580(v95, v91, v93, v53, v54, v55);
  sub_A41580(v99, v95, &v96, v56, v57, v58);
  sub_A41580(v102, v99, v100, v59, v60, v61);
  sub_2162BF0(&v69, (__int64)v102, v62, v63);
  v64 = v69;
  v65 = (__int64 *)v74.m128i_i64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v64;
  if ( v65 != &v75 )
    operator delete(v65);
  if ( (__int64 *)v72.m128i_i64[0] != &v73 )
    operator delete((void *)v72.m128i_i64[0]);
  v25 = (void *)v70.m128i_i64[0];
  if ( (__int64 *)v70.m128i_i64[0] != &v71 )
    goto LABEL_11;
  return a1;
}
