__int64 __fastcall sub_2175DD0(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  unsigned __int32 v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int32 v12; // eax
  unsigned __int64 v13; // r10
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rdi
  void *v28; // rdi
  __int64 v30; // r8
  __int64 v31; // rcx
  char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _WORD *v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 *v70; // rdi
  __int64 v71; // [rsp+0h] [rbp-328h] BYREF
  __int64 v72; // [rsp+8h] [rbp-320h] BYREF
  unsigned __int64 v73; // [rsp+10h] [rbp-318h] BYREF
  __int64 v74; // [rsp+18h] [rbp-310h] BYREF
  __m128i v75; // [rsp+20h] [rbp-308h] BYREF
  __int64 v76; // [rsp+30h] [rbp-2F8h] BYREF
  __m128i v77; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v78; // [rsp+50h] [rbp-2D8h] BYREF
  __m128i v79; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v80; // [rsp+70h] [rbp-2B8h] BYREF
  __m128i v81; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v82; // [rsp+90h] [rbp-298h]
  __int16 v83; // [rsp+A0h] [rbp-288h]
  __m128i v84; // [rsp+B0h] [rbp-278h] BYREF
  _WORD v85[16]; // [rsp+C0h] [rbp-268h] BYREF
  __m128i v86; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-238h] BYREF
  __m128i v88; // [rsp+110h] [rbp-218h] BYREF
  _WORD v89[16]; // [rsp+120h] [rbp-208h] BYREF
  __m128i v90; // [rsp+140h] [rbp-1E8h] BYREF
  __int64 v91; // [rsp+150h] [rbp-1D8h] BYREF
  __int16 v92; // [rsp+160h] [rbp-1C8h]
  __m128i v93; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 v94; // [rsp+180h] [rbp-1A8h] BYREF
  __int16 v95; // [rsp+190h] [rbp-198h]
  __m128i v96[2]; // [rsp+1A0h] [rbp-188h] BYREF
  __int16 v97; // [rsp+1C0h] [rbp-168h]
  __m128i v98[2]; // [rsp+1D0h] [rbp-158h] BYREF
  __int16 v99; // [rsp+1F0h] [rbp-138h]
  __m128i v100[3]; // [rsp+200h] [rbp-128h] BYREF
  __m128i v101; // [rsp+230h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+240h] [rbp-E8h]
  __int16 v103; // [rsp+250h] [rbp-D8h]
  __m128i v104[3]; // [rsp+260h] [rbp-C8h] BYREF
  __m128i v105[2]; // [rsp+290h] [rbp-98h] BYREF
  __int16 v106; // [rsp+2B0h] [rbp-78h]
  __m128i v107[6]; // [rsp+2C0h] [rbp-68h] BYREF

  v8 = a3[9];
  v9 = _byteswap_ulong(v8);
  if ( v9 != 12 )
  {
    v105[0].m128i_i32[0] = v9;
    v97 = 267;
    v101.m128i_i64[0] = (__int64)", but got ";
    v96[0].m128i_i64[0] = (__int64)&v84;
    v106 = 265;
    v103 = 259;
    v84.m128i_i64[0] = 12;
    sub_21740A0(&v88, a2, (__int64)a3, (__int64)a3, a5, a6);
    sub_E7ED70(&v90, "section ", &v88);
    sub_10E1980(&v93, &v90, " has invalid sh_entsize: expected ");
    v99 = 260;
    v98[0].m128i_i64[0] = (__int64)&v93;
    sub_A41580(v100, v98, v96, v15, v16, v17);
    sub_A41580(v104, v100, &v101, v18, v19, v20);
    sub_A41580(v107, v104, v105, v21, v22, v23);
    sub_2162BF0(&v86, (__int64)v107, v24, v25);
    v26 = v86.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v27 = (__int64 *)v93.m128i_i64[0];
    *(_QWORD *)a1 = v26;
    if ( v27 != &v94 )
      operator delete(v27);
    if ( (__int64 *)v90.m128i_i64[0] != &v91 )
      operator delete((void *)v90.m128i_i64[0]);
    v28 = (void *)v88.m128i_i64[0];
    if ( (_WORD *)v88.m128i_i64[0] == v89 )
      return a1;
LABEL_11:
    operator delete(v28);
    return a1;
  }
  v10 = _byteswap_ulong(a3[5]);
  v11 = (unsigned int)v10 / 0xCuLL;
  if ( (unsigned int)v10 != 12 * v11 )
  {
    v105[0].m128i_i64[0] = (__int64)")";
    v106 = 259;
    v103 = 265;
    v101.m128i_i32[0] = sub_2162B90(v8);
    v99 = 259;
    v98[0].m128i_i64[0] = (__int64)") which is not a multiple of its sh_entsize (";
    v92 = 265;
    v90.m128i_i32[0] = v30;
    sub_21740A0(&v84, a2, v31, v31, v30, 265);
    sub_E7ED70(&v86, "section ", &v84);
    v32 = " has an invalid sh_size (";
    goto LABEL_14;
  }
  v12 = _byteswap_ulong(a3[4]);
  if ( ~v12 < (unsigned int)v10 )
  {
    v77.m128i_i64[0] = v12;
    v105[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v106 = 259;
    v101.m128i_i64[0] = (__int64)&v79;
    v103 = 271;
    v98[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v99 = 259;
    v90.m128i_i64[0] = (__int64)&v77;
    v79.m128i_i64[0] = (unsigned int)v10;
    v92 = 271;
    v102 = 0;
    v91 = 0;
    sub_21740A0(&v84, a2, (__int64)a3, (__int64)a3, v10, (unsigned int)v10);
    sub_E7ED70(&v86, "section ", &v84);
    v32 = " has a sh_offset (0x";
LABEL_14:
    sub_10E1980(&v88, &v86, v32);
    v95 = 260;
    v93.m128i_i64[0] = (__int64)&v88;
    sub_A41580(v96, &v93, &v90, v33, v34, v35);
    sub_A41580(v100, v96, v98, v36, v37, v38);
    sub_A41580(v104, v100, &v101, v39, v40, v41);
    sub_A41580(v107, v104, v105, v42, v43, v44);
    sub_2162BF0(&v81, (__int64)v107, v45, v46);
    v47 = v81.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v48 = (_WORD *)v88.m128i_i64[0];
    *(_QWORD *)a1 = v47;
    if ( v48 != v89 )
      operator delete(v48);
    if ( (__int64 *)v86.m128i_i64[0] != &v87 )
      operator delete((void *)v86.m128i_i64[0]);
    v28 = (void *)v84.m128i_i64[0];
    if ( (_WORD *)v84.m128i_i64[0] == v85 )
      return a1;
    goto LABEL_11;
  }
  v13 = a2[1];
  if ( (unsigned int)v10 + v12 <= v13 )
  {
    v14 = *a2 + v12;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v11;
    return a1;
  }
  v71 = v12;
  v105[0].m128i_i64[0] = (__int64)")";
  v106 = 259;
  v73 = v13;
  v101.m128i_i64[0] = (__int64)&v73;
  v98[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
  v93.m128i_i64[0] = (__int64)&v72;
  v103 = 271;
  v72 = (unsigned int)v10;
  v88.m128i_i64[0] = (__int64)") + sh_size (0x";
  v81.m128i_i64[0] = (__int64)&v71;
  v99 = 259;
  v95 = 271;
  v89[8] = 259;
  v83 = 271;
  v102 = 0;
  v94 = 0;
  v82 = 0;
  sub_21740A0(&v75, a2, (__int64)a3, (__int64)a3, 259, 271);
  sub_E7ED70(&v77, "section ", &v75);
  sub_10E1980(&v79, &v77, " has a sh_offset (0x");
  v85[8] = 260;
  v84.m128i_i64[0] = (__int64)&v79;
  sub_A41580(&v86, &v84, &v81, v49, v50, v51);
  sub_A41580(&v90, &v86, &v88, v52, v53, v54);
  sub_A41580(v96, &v90, &v93, v55, v56, v57);
  sub_A41580(v100, v96, v98, v58, v59, v60);
  sub_A41580(v104, v100, &v101, v61, v62, v63);
  sub_A41580(v107, v104, v105, v64, v65, v66);
  sub_2162BF0(&v74, (__int64)v107, v67, v68);
  v69 = v74;
  v70 = (__int64 *)v79.m128i_i64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v69;
  if ( v70 != &v80 )
    operator delete(v70);
  if ( (__int64 *)v77.m128i_i64[0] != &v78 )
    operator delete((void *)v77.m128i_i64[0]);
  v28 = (void *)v75.m128i_i64[0];
  if ( (__int64 *)v75.m128i_i64[0] != &v76 )
    goto LABEL_11;
  return a1;
}
