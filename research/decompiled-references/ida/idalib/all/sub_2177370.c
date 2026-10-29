__int64 __fastcall sub_2177370(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rdi
  void *v32; // rdi
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
  __int64 v47; // r14
  _WORD *v48; // rdi
  __int64 v49; // [rsp+8h] [rbp-330h]
  __int64 v50; // [rsp+10h] [rbp-328h] BYREF
  unsigned __int64 v51; // [rsp+18h] [rbp-320h] BYREF
  __int64 v52; // [rsp+20h] [rbp-318h] BYREF
  __int64 v53; // [rsp+28h] [rbp-310h] BYREF
  __m128i v54; // [rsp+30h] [rbp-308h] BYREF
  __int64 v55; // [rsp+40h] [rbp-2F8h] BYREF
  __m128i v56; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-2D8h] BYREF
  __m128i v58; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v59; // [rsp+80h] [rbp-2B8h] BYREF
  __m128i v60; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-298h]
  __int16 v62; // [rsp+B0h] [rbp-288h]
  __m128i v63; // [rsp+C0h] [rbp-278h] BYREF
  _WORD v64[16]; // [rsp+D0h] [rbp-268h] BYREF
  __m128i v65; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v66; // [rsp+100h] [rbp-238h] BYREF
  __m128i v67; // [rsp+120h] [rbp-218h] BYREF
  _WORD v68[16]; // [rsp+130h] [rbp-208h] BYREF
  __m128i v69; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v70; // [rsp+160h] [rbp-1D8h]
  __int16 v71; // [rsp+170h] [rbp-1C8h]
  __m128i v72; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v73; // [rsp+190h] [rbp-1A8h]
  __int16 v74; // [rsp+1A0h] [rbp-198h]
  __m128i v75[3]; // [rsp+1B0h] [rbp-188h] BYREF
  __m128i v76[2]; // [rsp+1E0h] [rbp-158h] BYREF
  __int16 v77; // [rsp+200h] [rbp-138h]
  __m128i v78[3]; // [rsp+210h] [rbp-128h] BYREF
  __m128i v79; // [rsp+240h] [rbp-F8h] BYREF
  __int64 v80; // [rsp+250h] [rbp-E8h]
  __int16 v81; // [rsp+260h] [rbp-D8h]
  __m128i v82[3]; // [rsp+270h] [rbp-C8h] BYREF
  __m128i v83[2]; // [rsp+2A0h] [rbp-98h] BYREF
  __int16 v84; // [rsp+2C0h] [rbp-78h]
  __m128i v85[6]; // [rsp+2D0h] [rbp-68h] BYREF

  v7 = *(_QWORD *)(a3 + 32);
  v50 = *(_QWORD *)(a3 + 24);
  v51 = v7;
  if ( ~v50 < v7 )
  {
    v83[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v84 = 259;
    v79.m128i_i64[0] = (__int64)&v51;
    v81 = 271;
    v76[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v69.m128i_i64[0] = (__int64)&v50;
    v77 = 259;
    v71 = 271;
    v80 = 0;
    v70 = 0;
    sub_2177250(&v63, a2, a3, v7, a5, a6);
    sub_E7ED70(&v65, "section ", &v63);
    sub_10E1980(&v67, &v65, " has a sh_offset (0x");
    v74 = 260;
    v72.m128i_i64[0] = (__int64)&v67;
    sub_A41580(v75, &v72, &v69, v33, v34, v35);
    sub_A41580(v78, v75, v76, v36, v37, v38);
    sub_A41580(v82, v78, &v79, v39, v40, v41);
    sub_A41580(v85, v82, v83, v42, v43, v44);
    v49 = sub_2195B10(v85, v82, v45, v46);
    v47 = operator new(0x40u);
    sub_2220590(v47, v85, 3, v49);
    v48 = (_WORD *)v67.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v47;
    if ( v48 != v68 )
      operator delete(v48);
    if ( (__int64 *)v65.m128i_i64[0] != &v66 )
      operator delete((void *)v65.m128i_i64[0]);
    v32 = (void *)v63.m128i_i64[0];
    if ( (_WORD *)v63.m128i_i64[0] != v64 )
      goto LABEL_10;
  }
  else
  {
    if ( v7 + v50 <= a2[1] )
    {
      v8 = *a2 + v50;
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = v7;
      return a1;
    }
    v52 = a2[1];
    v83[0].m128i_i64[0] = (__int64)")";
    v84 = 259;
    v79.m128i_i64[0] = (__int64)&v52;
    v76[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
    v72.m128i_i64[0] = (__int64)&v51;
    v77 = 259;
    v67.m128i_i64[0] = (__int64)") + sh_size (0x";
    v60.m128i_i64[0] = (__int64)&v50;
    v81 = 271;
    v74 = 271;
    v68[8] = 259;
    v62 = 271;
    v80 = 0;
    v73 = 0;
    v61 = 0;
    sub_2177250(&v54, a2, a3, 271, 271, 259);
    sub_E7ED70(&v56, "section ", &v54);
    sub_10E1980(&v58, &v56, " has a sh_offset (0x");
    v63.m128i_i64[0] = (__int64)&v58;
    v64[8] = 260;
    sub_A41580(&v65, &v63, &v60, v10, v11, v12);
    sub_A41580(&v69, &v65, &v67, v13, v14, v15);
    sub_A41580(v75, &v69, &v72, v16, v17, v18);
    sub_A41580(v78, v75, v76, v19, v20, v21);
    sub_A41580(v82, v78, &v79, v22, v23, v24);
    sub_A41580(v85, v82, v83, v25, v26, v27);
    sub_2162BF0(&v53, (__int64)v85, v28, v29);
    v30 = v53;
    v31 = (__int64 *)v58.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v30;
    if ( v31 != &v59 )
      operator delete(v31);
    if ( (__int64 *)v56.m128i_i64[0] != &v57 )
      operator delete((void *)v56.m128i_i64[0]);
    v32 = (void *)v54.m128i_i64[0];
    if ( (__int64 *)v54.m128i_i64[0] != &v55 )
LABEL_10:
      operator delete(v32);
  }
  return a1;
}
