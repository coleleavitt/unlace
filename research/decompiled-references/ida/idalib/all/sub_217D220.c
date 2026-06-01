__int64 __fastcall sub_217D220(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rdi
  void *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r14
  _WORD *v49; // rdi
  __int64 v50; // [rsp+8h] [rbp-330h]
  unsigned __int64 v51; // [rsp+10h] [rbp-328h] BYREF
  unsigned __int64 v52; // [rsp+18h] [rbp-320h] BYREF
  __int64 v53; // [rsp+20h] [rbp-318h] BYREF
  __int64 v54; // [rsp+28h] [rbp-310h] BYREF
  __m128i v55; // [rsp+30h] [rbp-308h] BYREF
  __int64 v56; // [rsp+40h] [rbp-2F8h] BYREF
  __m128i v57; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-2D8h] BYREF
  __m128i v59; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-2B8h] BYREF
  __m128i v61; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-298h]
  __int16 v63; // [rsp+B0h] [rbp-288h]
  __m128i v64; // [rsp+C0h] [rbp-278h] BYREF
  _WORD v65[16]; // [rsp+D0h] [rbp-268h] BYREF
  __m128i v66; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v67; // [rsp+100h] [rbp-238h] BYREF
  __m128i v68; // [rsp+120h] [rbp-218h] BYREF
  _WORD v69[16]; // [rsp+130h] [rbp-208h] BYREF
  __m128i v70; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v71; // [rsp+160h] [rbp-1D8h]
  __int16 v72; // [rsp+170h] [rbp-1C8h]
  __m128i v73; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v74; // [rsp+190h] [rbp-1A8h]
  __int16 v75; // [rsp+1A0h] [rbp-198h]
  __m128i v76[3]; // [rsp+1B0h] [rbp-188h] BYREF
  __m128i v77[2]; // [rsp+1E0h] [rbp-158h] BYREF
  __int16 v78; // [rsp+200h] [rbp-138h]
  __m128i v79[3]; // [rsp+210h] [rbp-128h] BYREF
  __m128i v80; // [rsp+240h] [rbp-F8h] BYREF
  __int64 v81; // [rsp+250h] [rbp-E8h]
  __int16 v82; // [rsp+260h] [rbp-D8h]
  __m128i v83[3]; // [rsp+270h] [rbp-C8h] BYREF
  __m128i v84[2]; // [rsp+2A0h] [rbp-98h] BYREF
  __int16 v85; // [rsp+2C0h] [rbp-78h]
  __m128i v86[6]; // [rsp+2D0h] [rbp-68h] BYREF

  v7 = _byteswap_uint64(*(_QWORD *)(a3 + 24));
  v8 = _byteswap_uint64(*(_QWORD *)(a3 + 32));
  v51 = v7;
  v52 = v8;
  if ( ~v7 < v8 )
  {
    v84[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v85 = 259;
    v80.m128i_i64[0] = (__int64)&v52;
    v82 = 271;
    v77[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v70.m128i_i64[0] = (__int64)&v51;
    v78 = 259;
    v72 = 271;
    v81 = 0;
    v71 = 0;
    sub_217A410(&v64, a2, a3, v8, a5, a6);
    sub_E7ED70(&v66, "section ", &v64);
    sub_10E1980(&v68, &v66, " has a sh_offset (0x");
    v75 = 260;
    v73.m128i_i64[0] = (__int64)&v68;
    sub_A41580(v76, &v73, &v70, v34, v35, v36);
    sub_A41580(v79, v76, v77, v37, v38, v39);
    sub_A41580(v83, v79, &v80, v40, v41, v42);
    sub_A41580(v86, v83, v84, v43, v44, v45);
    v50 = sub_2195B10(v86, v83, v46, v47);
    v48 = operator new(0x40u);
    sub_2220590(v48, v86, 3, v50);
    v49 = (_WORD *)v68.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v48;
    if ( v49 != v69 )
      operator delete(v49);
    if ( (__int64 *)v66.m128i_i64[0] != &v67 )
      operator delete((void *)v66.m128i_i64[0]);
    v33 = (void *)v64.m128i_i64[0];
    if ( (_WORD *)v64.m128i_i64[0] != v65 )
      goto LABEL_10;
  }
  else
  {
    if ( v8 + v7 <= a2[1] )
    {
      v9 = *a2 + v7;
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = v8;
      return a1;
    }
    v53 = a2[1];
    v84[0].m128i_i64[0] = (__int64)")";
    v85 = 259;
    v80.m128i_i64[0] = (__int64)&v53;
    v77[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
    v73.m128i_i64[0] = (__int64)&v52;
    v78 = 259;
    v68.m128i_i64[0] = (__int64)") + sh_size (0x";
    v61.m128i_i64[0] = (__int64)&v51;
    v82 = 271;
    v75 = 271;
    v69[8] = 259;
    v63 = 271;
    v81 = 0;
    v74 = 0;
    v62 = 0;
    sub_217A410(&v55, a2, a3, 271, 271, 259);
    sub_E7ED70(&v57, "section ", &v55);
    sub_10E1980(&v59, &v57, " has a sh_offset (0x");
    v64.m128i_i64[0] = (__int64)&v59;
    v65[8] = 260;
    sub_A41580(&v66, &v64, &v61, v11, v12, v13);
    sub_A41580(&v70, &v66, &v68, v14, v15, v16);
    sub_A41580(v76, &v70, &v73, v17, v18, v19);
    sub_A41580(v79, v76, v77, v20, v21, v22);
    sub_A41580(v83, v79, &v80, v23, v24, v25);
    sub_A41580(v86, v83, v84, v26, v27, v28);
    sub_2162BF0(&v54, (__int64)v86, v29, v30);
    v31 = v54;
    v32 = (__int64 *)v59.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v31;
    if ( v32 != &v60 )
      operator delete(v32);
    if ( (__int64 *)v57.m128i_i64[0] != &v58 )
      operator delete((void *)v57.m128i_i64[0]);
    v33 = (void *)v55.m128i_i64[0];
    if ( (__int64 *)v55.m128i_i64[0] != &v56 )
LABEL_10:
      operator delete(v33);
  }
  return a1;
}
