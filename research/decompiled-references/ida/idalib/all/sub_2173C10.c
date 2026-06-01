__int64 __fastcall sub_2173C10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdi
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
  __int64 v46; // r14
  _WORD *v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-330h]
  __int64 v49; // [rsp+10h] [rbp-328h] BYREF
  __int64 v50; // [rsp+18h] [rbp-320h] BYREF
  __int64 v51; // [rsp+20h] [rbp-318h] BYREF
  __int64 v52; // [rsp+28h] [rbp-310h] BYREF
  __m128i v53; // [rsp+30h] [rbp-308h] BYREF
  __int64 v54; // [rsp+40h] [rbp-2F8h] BYREF
  __m128i v55; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-2D8h] BYREF
  __m128i v57; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v58; // [rsp+80h] [rbp-2B8h] BYREF
  __m128i v59; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-298h]
  __int16 v61; // [rsp+B0h] [rbp-288h]
  __m128i v62; // [rsp+C0h] [rbp-278h] BYREF
  _WORD v63[16]; // [rsp+D0h] [rbp-268h] BYREF
  __m128i v64; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v65; // [rsp+100h] [rbp-238h] BYREF
  __m128i v66; // [rsp+120h] [rbp-218h] BYREF
  _WORD v67[16]; // [rsp+130h] [rbp-208h] BYREF
  __m128i v68; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v69; // [rsp+160h] [rbp-1D8h]
  __int16 v70; // [rsp+170h] [rbp-1C8h]
  __m128i v71; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v72; // [rsp+190h] [rbp-1A8h]
  __int16 v73; // [rsp+1A0h] [rbp-198h]
  __m128i v74[3]; // [rsp+1B0h] [rbp-188h] BYREF
  __m128i v75[2]; // [rsp+1E0h] [rbp-158h] BYREF
  __int16 v76; // [rsp+200h] [rbp-138h]
  __m128i v77[3]; // [rsp+210h] [rbp-128h] BYREF
  __m128i v78; // [rsp+240h] [rbp-F8h] BYREF
  __int64 v79; // [rsp+250h] [rbp-E8h]
  __int16 v80; // [rsp+260h] [rbp-D8h]
  __m128i v81[3]; // [rsp+270h] [rbp-C8h] BYREF
  __m128i v82[2]; // [rsp+2A0h] [rbp-98h] BYREF
  __int16 v83; // [rsp+2C0h] [rbp-78h]
  __m128i v84[6]; // [rsp+2D0h] [rbp-68h] BYREF

  v5 = *(unsigned int *)(a3 + 16);
  v6 = *(unsigned int *)(a3 + 20);
  v7 = (unsigned int)~*(_DWORD *)(a3 + 16);
  if ( (unsigned int)v7 < (unsigned int)v6 )
  {
    v57.m128i_i64[0] = *(unsigned int *)(a3 + 16);
    v82[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v78.m128i_i64[0] = (__int64)&v59;
    v80 = 271;
    v75[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v76 = 259;
    v68.m128i_i64[0] = (__int64)&v57;
    v59.m128i_i64[0] = v6;
    v70 = 271;
    v83 = 259;
    v79 = 0;
    v69 = 0;
    sub_2170F40(&v62, a2, a3, a4, v7, v6);
    sub_E7ED70(&v64, "section ", &v62);
    sub_10E1980(&v66, &v64, " has a sh_offset (0x");
    v73 = 260;
    v71.m128i_i64[0] = (__int64)&v66;
    sub_A41580(v74, &v71, &v68, v32, v33, v34);
    sub_A41580(v77, v74, v75, v35, v36, v37);
    sub_A41580(v81, v77, &v78, v38, v39, v40);
    sub_A41580(v84, v81, v82, v41, v42, v43);
    v48 = sub_2195B10(v84, v81, v44, v45);
    v46 = operator new(0x40u);
    sub_2220590(v46, v84, 3, v48);
    v47 = (_WORD *)v66.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v46;
    if ( v47 != v67 )
      operator delete(v47);
    if ( (__int64 *)v64.m128i_i64[0] != &v65 )
      operator delete((void *)v64.m128i_i64[0]);
    if ( (_WORD *)v62.m128i_i64[0] != v63 )
      operator delete((void *)v62.m128i_i64[0]);
  }
  else if ( (unsigned __int64)(unsigned int)(v6 + v5) > a2[1] )
  {
    v51 = a2[1];
    v50 = v6;
    v82[0].m128i_i64[0] = (__int64)")";
    v83 = 259;
    v78.m128i_i64[0] = (__int64)&v51;
    v75[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
    v71.m128i_i64[0] = (__int64)&v50;
    v66.m128i_i64[0] = (__int64)") + sh_size (0x";
    v49 = v5;
    v59.m128i_i64[0] = (__int64)&v49;
    v80 = 271;
    v76 = 259;
    v73 = 271;
    v67[8] = 259;
    v61 = 271;
    v79 = 0;
    v72 = 0;
    v60 = 0;
    sub_2170F40(&v53, a2, a3, 271, 259, 271);
    sub_E7ED70(&v55, "section ", &v53);
    sub_10E1980(&v57, &v55, " has a sh_offset (0x");
    v63[8] = 260;
    v62.m128i_i64[0] = (__int64)&v57;
    sub_A41580(&v64, &v62, &v59, v10, v11, v12);
    sub_A41580(&v68, &v64, &v66, v13, v14, v15);
    sub_A41580(v74, &v68, &v71, v16, v17, v18);
    sub_A41580(v77, v74, v75, v19, v20, v21);
    sub_A41580(v81, v77, &v78, v22, v23, v24);
    sub_A41580(v84, v81, v82, v25, v26, v27);
    sub_2162BF0(&v52, (__int64)v84, v28, v29);
    v30 = v52;
    v31 = (__int64 *)v57.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v30;
    if ( v31 != &v58 )
      operator delete(v31);
    if ( (__int64 *)v55.m128i_i64[0] != &v56 )
      operator delete((void *)v55.m128i_i64[0]);
    if ( (__int64 *)v53.m128i_i64[0] != &v54 )
      operator delete((void *)v53.m128i_i64[0]);
  }
  else
  {
    v8 = *a2 + v5;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v6;
  }
  return a1;
}
