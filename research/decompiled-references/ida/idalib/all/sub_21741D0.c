__int64 __fastcall sub_21741D0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int32 v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r14
  _WORD *v46; // rdi
  __int64 v47; // [rsp+8h] [rbp-330h]
  __int64 v48; // [rsp+10h] [rbp-328h] BYREF
  __int64 v49; // [rsp+18h] [rbp-320h] BYREF
  __int64 v50; // [rsp+20h] [rbp-318h] BYREF
  __int64 v51; // [rsp+28h] [rbp-310h] BYREF
  __m128i v52; // [rsp+30h] [rbp-308h] BYREF
  __int64 v53; // [rsp+40h] [rbp-2F8h] BYREF
  __m128i v54; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-2D8h] BYREF
  __m128i v56; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v57; // [rsp+80h] [rbp-2B8h] BYREF
  __m128i v58; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-298h]
  __int16 v60; // [rsp+B0h] [rbp-288h]
  __m128i v61; // [rsp+C0h] [rbp-278h] BYREF
  _WORD v62[16]; // [rsp+D0h] [rbp-268h] BYREF
  __m128i v63; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v64; // [rsp+100h] [rbp-238h] BYREF
  __m128i v65; // [rsp+120h] [rbp-218h] BYREF
  _WORD v66[16]; // [rsp+130h] [rbp-208h] BYREF
  __m128i v67; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v68; // [rsp+160h] [rbp-1D8h]
  __int16 v69; // [rsp+170h] [rbp-1C8h]
  __m128i v70; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v71; // [rsp+190h] [rbp-1A8h]
  __int16 v72; // [rsp+1A0h] [rbp-198h]
  __m128i v73[3]; // [rsp+1B0h] [rbp-188h] BYREF
  __m128i v74[2]; // [rsp+1E0h] [rbp-158h] BYREF
  __int16 v75; // [rsp+200h] [rbp-138h]
  __m128i v76[3]; // [rsp+210h] [rbp-128h] BYREF
  __m128i v77; // [rsp+240h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+250h] [rbp-E8h]
  __int16 v79; // [rsp+260h] [rbp-D8h]
  __m128i v80[3]; // [rsp+270h] [rbp-C8h] BYREF
  __m128i v81[2]; // [rsp+2A0h] [rbp-98h] BYREF
  __int16 v82; // [rsp+2C0h] [rbp-78h]
  __m128i v83[6]; // [rsp+2D0h] [rbp-68h] BYREF

  v4 = _byteswap_ulong(*(_DWORD *)(a3 + 16));
  v5 = _byteswap_ulong(*(_DWORD *)(a3 + 20));
  v6 = ~v4;
  if ( (unsigned int)v6 < (unsigned int)v5 )
  {
    v56.m128i_i64[0] = v4;
    v81[0].m128i_i64[0] = (__int64)") that cannot be represented";
    v77.m128i_i64[0] = (__int64)&v58;
    v79 = 271;
    v74[0].m128i_i64[0] = (__int64)") + sh_size (0x";
    v75 = 259;
    v67.m128i_i64[0] = (__int64)&v56;
    v58.m128i_i64[0] = (unsigned int)v5;
    v69 = 271;
    v82 = 259;
    v78 = 0;
    v68 = 0;
    sub_21740A0(&v61, a2, a3, v5, v6, (unsigned int)v5);
    sub_E7ED70(&v63, "section ", &v61);
    sub_10E1980(&v65, &v63, " has a sh_offset (0x");
    v72 = 260;
    v70.m128i_i64[0] = (__int64)&v65;
    sub_A41580(v73, &v70, &v67, v31, v32, v33);
    sub_A41580(v76, v73, v74, v34, v35, v36);
    sub_A41580(v80, v76, &v77, v37, v38, v39);
    sub_A41580(v83, v80, v81, v40, v41, v42);
    v47 = sub_2195B10(v83, v80, v43, v44);
    v45 = operator new(0x40u);
    sub_2220590(v45, v83, 3, v47);
    v46 = (_WORD *)v65.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v45;
    if ( v46 != v66 )
      operator delete(v46);
    if ( (__int64 *)v63.m128i_i64[0] != &v64 )
      operator delete((void *)v63.m128i_i64[0]);
    if ( (_WORD *)v61.m128i_i64[0] != v62 )
      operator delete((void *)v61.m128i_i64[0]);
  }
  else if ( (unsigned int)v5 + v4 > (unsigned __int64)a2[1] )
  {
    v50 = a2[1];
    v49 = (unsigned int)v5;
    v81[0].m128i_i64[0] = (__int64)")";
    v82 = 259;
    v77.m128i_i64[0] = (__int64)&v50;
    v74[0].m128i_i64[0] = (__int64)") that is greater than the file size (0x";
    v70.m128i_i64[0] = (__int64)&v49;
    v65.m128i_i64[0] = (__int64)") + sh_size (0x";
    v48 = v4;
    v58.m128i_i64[0] = (__int64)&v48;
    v79 = 271;
    v75 = 259;
    v72 = 271;
    v66[8] = 259;
    v60 = 271;
    v78 = 0;
    v71 = 0;
    v59 = 0;
    sub_21740A0(&v52, a2, a3, 271, 259, 271);
    sub_E7ED70(&v54, "section ", &v52);
    sub_10E1980(&v56, &v54, " has a sh_offset (0x");
    v62[8] = 260;
    v61.m128i_i64[0] = (__int64)&v56;
    sub_A41580(&v63, &v61, &v58, v9, v10, v11);
    sub_A41580(&v67, &v63, &v65, v12, v13, v14);
    sub_A41580(v73, &v67, &v70, v15, v16, v17);
    sub_A41580(v76, v73, v74, v18, v19, v20);
    sub_A41580(v80, v76, &v77, v21, v22, v23);
    sub_A41580(v83, v80, v81, v24, v25, v26);
    sub_2162BF0(&v51, (__int64)v83, v27, v28);
    v29 = v51;
    v30 = (__int64 *)v56.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v29;
    if ( v30 != &v57 )
      operator delete(v30);
    if ( (__int64 *)v54.m128i_i64[0] != &v55 )
      operator delete((void *)v54.m128i_i64[0]);
    if ( (__int64 *)v52.m128i_i64[0] != &v53 )
      operator delete((void *)v52.m128i_i64[0]);
  }
  else
  {
    v7 = *a2 + v4;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = (unsigned int)v5;
  }
  return a1;
}
