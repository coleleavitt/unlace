__int64 __fastcall sub_2174AB0(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // edi
  unsigned __int32 v8; // eax
  __int64 v9; // rcx
  unsigned __int32 v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rdi
  void *v27; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  char *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  _WORD *v47; // rdi
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
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 *v69; // rdi
  __int64 v70; // [rsp+0h] [rbp-328h] BYREF
  __int64 v71; // [rsp+8h] [rbp-320h] BYREF
  unsigned __int64 v72; // [rsp+10h] [rbp-318h] BYREF
  __int64 v73; // [rsp+18h] [rbp-310h] BYREF
  __m128i v74; // [rsp+20h] [rbp-308h] BYREF
  __int64 v75; // [rsp+30h] [rbp-2F8h] BYREF
  __m128i v76; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v77; // [rsp+50h] [rbp-2D8h] BYREF
  __m128i v78; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v79; // [rsp+70h] [rbp-2B8h] BYREF
  __m128i v80; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v81; // [rsp+90h] [rbp-298h]
  __int16 v82; // [rsp+A0h] [rbp-288h]
  __m128i v83; // [rsp+B0h] [rbp-278h] BYREF
  _WORD v84[16]; // [rsp+C0h] [rbp-268h] BYREF
  __m128i v85; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-238h] BYREF
  __m128i v87; // [rsp+110h] [rbp-218h] BYREF
  _WORD v88[16]; // [rsp+120h] [rbp-208h] BYREF
  __m128i v89; // [rsp+140h] [rbp-1E8h] BYREF
  __int64 v90; // [rsp+150h] [rbp-1D8h] BYREF
  __int16 v91; // [rsp+160h] [rbp-1C8h]
  __m128i v92; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 v93; // [rsp+180h] [rbp-1A8h] BYREF
  __int16 v94; // [rsp+190h] [rbp-198h]
  __m128i v95[2]; // [rsp+1A0h] [rbp-188h] BYREF
  __int16 v96; // [rsp+1C0h] [rbp-168h]
  __m128i v97[2]; // [rsp+1D0h] [rbp-158h] BYREF
  __int16 v98; // [rsp+1F0h] [rbp-138h]
  __m128i v99[3]; // [rsp+200h] [rbp-128h] BYREF
  __m128i v100; // [rsp+230h] [rbp-F8h] BYREF
  __int64 v101; // [rsp+240h] [rbp-E8h]
  __int16 v102; // [rsp+250h] [rbp-D8h]
  __m128i v103[3]; // [rsp+260h] [rbp-C8h] BYREF
  __m128i v104[2]; // [rsp+290h] [rbp-98h] BYREF
  __int16 v105; // [rsp+2B0h] [rbp-78h]
  __m128i v106[6]; // [rsp+2C0h] [rbp-68h] BYREF

  v7 = a3[9];
  v8 = _byteswap_ulong(v7);
  if ( v8 != 4 )
  {
    v104[0].m128i_i32[0] = v8;
    v96 = 267;
    v100.m128i_i64[0] = (__int64)", but got ";
    v95[0].m128i_i64[0] = (__int64)&v83;
    v105 = 265;
    v102 = 259;
    v83.m128i_i64[0] = 4;
    sub_21740A0(&v87, a2, (__int64)a3, a4, a5, a6);
    sub_E7ED70(&v89, "section ", &v87);
    sub_10E1980(&v92, &v89, " has invalid sh_entsize: expected ");
    v98 = 260;
    v97[0].m128i_i64[0] = (__int64)&v92;
    sub_A41580(v99, v97, v95, v14, v15, v16);
    sub_A41580(v103, v99, &v100, v17, v18, v19);
    sub_A41580(v106, v103, v104, v20, v21, v22);
    sub_2162BF0(&v85, (__int64)v106, v23, v24);
    v25 = v85.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v26 = (__int64 *)v92.m128i_i64[0];
    *(_QWORD *)a1 = v25;
    if ( v26 != &v93 )
      operator delete(v26);
    if ( (__int64 *)v89.m128i_i64[0] != &v90 )
      operator delete((void *)v89.m128i_i64[0]);
    v27 = (void *)v87.m128i_i64[0];
    if ( (_WORD *)v87.m128i_i64[0] == v88 )
      return a1;
LABEL_11:
    operator delete(v27);
    return a1;
  }
  v9 = _byteswap_ulong(a3[5]);
  if ( (v9 & 3) != 0 )
  {
    v104[0].m128i_i64[0] = (__int64)")";
    v105 = 259;
    v102 = 265;
    v100.m128i_i32[0] = sub_2162B90(v7);
    v97[0].m128i_i64[0] = (__int64)") which is not a multiple of its sh_entsize (";
    v98 = 259;
    v91 = 265;
    v89.m128i_i32[0] = v29;
    sub_21740A0(&v83, a2, v30, v29, 259, 265);
    sub_E7ED70(&v85, "section ", &v83);
    v31 = " has an invalid sh_size (";
    goto LABEL_14;
  }
  v10 = _byteswap_ulong(a3[4]);
  v11 = ~v10;
  if ( (unsigned int)v11 < (unsigned int)v9 )
  {
    v78.m128i_i64[0] = (unsigned int)v9;
    v104[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v105 = 259;
    v100.m128i_i64[0] = (__int64)&v78;
    v102 = 271;
    v97[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v98 = 259;
    v89.m128i_i64[0] = (__int64)&v76;
    v76.m128i_i64[0] = v10;
    v91 = 271;
    v101 = 0;
    v90 = 0;
    sub_21740A0(&v83, a2, (__int64)a3, v9, v10, v11);
    sub_E7ED70(&v85, "section ", &v83);
    v31 = " has a sh_offset (0x";
LABEL_14:
    sub_10E1980(&v87, &v85, v31);
    v94 = 260;
    v92.m128i_i64[0] = (__int64)&v87;
    sub_A41580(v95, &v92, &v89, v32, v33, v34);
    sub_A41580(v99, v95, v97, v35, v36, v37);
    sub_A41580(v103, v99, &v100, v38, v39, v40);
    sub_A41580(v106, v103, v104, v41, v42, v43);
    sub_2162BF0(&v80, (__int64)v106, v44, v45);
    v46 = v80.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v47 = (_WORD *)v87.m128i_i64[0];
    *(_QWORD *)a1 = v46;
    if ( v47 != v88 )
      operator delete(v47);
    if ( (__int64 *)v85.m128i_i64[0] != &v86 )
      operator delete((void *)v85.m128i_i64[0]);
    v27 = (void *)v83.m128i_i64[0];
    if ( (_WORD *)v83.m128i_i64[0] == v84 )
      return a1;
    goto LABEL_11;
  }
  v12 = a2[1];
  if ( (unsigned int)v9 + v10 <= v12 )
  {
    v13 = *a2 + v10;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = (unsigned __int64)(unsigned int)v9 >> 2;
    return a1;
  }
  v70 = v10;
  v72 = v12;
  v71 = (unsigned int)v9;
  v104[0].m128i_i64[0] = (__int64)")";
  v105 = 259;
  v100.m128i_i64[0] = (__int64)&v72;
  v97[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
  v92.m128i_i64[0] = (__int64)&v71;
  v82 = 271;
  v87.m128i_i64[0] = (__int64)") + sh_size (0x";
  v80.m128i_i64[0] = (__int64)&v70;
  v102 = 271;
  v98 = 259;
  v94 = 271;
  v88[8] = 259;
  v101 = 0;
  v93 = 0;
  v81 = 0;
  sub_21740A0(&v74, a2, (__int64)a3, 271, v10, 259);
  sub_E7ED70(&v76, "section ", &v74);
  sub_10E1980(&v78, &v76, " has a sh_offset (0x");
  v84[8] = 260;
  v83.m128i_i64[0] = (__int64)&v78;
  sub_A41580(&v85, &v83, &v80, v48, v49, v50);
  sub_A41580(&v89, &v85, &v87, v51, v52, v53);
  sub_A41580(v95, &v89, &v92, v54, v55, v56);
  sub_A41580(v99, v95, v97, v57, v58, v59);
  sub_A41580(v103, v99, &v100, v60, v61, v62);
  sub_A41580(v106, v103, v104, v63, v64, v65);
  sub_2162BF0(&v73, (__int64)v106, v66, v67);
  v68 = v73;
  v69 = (__int64 *)v78.m128i_i64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v68;
  if ( v69 != &v79 )
    operator delete(v69);
  if ( (__int64 *)v76.m128i_i64[0] != &v77 )
    operator delete((void *)v76.m128i_i64[0]);
  v27 = (void *)v74.m128i_i64[0];
  if ( (__int64 *)v74.m128i_i64[0] != &v75 )
    goto LABEL_11;
  return a1;
}
