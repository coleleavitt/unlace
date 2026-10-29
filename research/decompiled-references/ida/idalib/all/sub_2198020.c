__int64 *__fastcall sub_2198020(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        unsigned int a7,
        _BYTE *a8)
{
  bool v8; // zf
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
  const __m128i *v21; // r12
  __m128i *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  const __m128i *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v33; // edx
  const char *v34; // rax
  _BYTE *v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // [rsp+0h] [rbp-2E8h] BYREF
  _BYTE *v50; // [rsp+30h] [rbp-2B8h] BYREF
  __int16 v51; // [rsp+50h] [rbp-298h]
  __m128i v52[3]; // [rsp+60h] [rbp-288h] BYREF
  __m128i v53[2]; // [rsp+90h] [rbp-258h] BYREF
  __int16 v54; // [rsp+B0h] [rbp-238h]
  __m128i v55[3]; // [rsp+C0h] [rbp-228h] BYREF
  __m128i v56[2]; // [rsp+F0h] [rbp-1F8h] BYREF
  __int16 v57; // [rsp+110h] [rbp-1D8h]
  __m128i v58[3]; // [rsp+120h] [rbp-1C8h] BYREF
  __m128i v59[2]; // [rsp+150h] [rbp-198h] BYREF
  __int16 v60; // [rsp+170h] [rbp-178h]
  __m128i v61[3]; // [rsp+180h] [rbp-168h] BYREF
  __m128i v62[2]; // [rsp+1B0h] [rbp-138h] BYREF
  __int16 v63; // [rsp+1D0h] [rbp-118h]
  __m128i v64[3]; // [rsp+1E0h] [rbp-108h] BYREF
  __m128i v65[2]; // [rsp+210h] [rbp-D8h] BYREF
  __int16 v66; // [rsp+230h] [rbp-B8h]
  __m128i v67[3]; // [rsp+240h] [rbp-A8h] BYREF
  __m128i v68[2]; // [rsp+270h] [rbp-78h] BYREF
  __int16 v69; // [rsp+290h] [rbp-58h]
  __m128i v70[2]; // [rsp+2A0h] [rbp-48h] BYREF
  __int16 v71; // [rsp+2C0h] [rbp-28h]

  if ( a7 <= 0xB )
  {
    v8 = *a6 == 0;
    v51 = 257;
    if ( !v8 )
    {
      v50 = a6;
      LOBYTE(v51) = 3;
    }
    v8 = *a8 == 0;
    v53[0].m128i_i64[0] = (__int64)".offset field too small, not past the end of the ";
    v54 = 259;
    v57 = 257;
    if ( !v8 )
    {
      v56[0].m128i_i64[0] = (__int64)a8;
      LOBYTE(v57) = 3;
    }
    v8 = *a5 == 0;
    v59[0].m128i_i64[0] = (__int64)" ";
    v60 = 259;
    v63 = 257;
    if ( !v8 )
    {
      v62[0].m128i_i64[0] = (__int64)a5;
      LOBYTE(v63) = 3;
    }
    v65[0].m128i_i64[0] = (__int64)" ";
    v69 = 265;
    v71 = 259;
    v68[0].m128i_i32[0] = a4;
    v66 = 259;
    v70[0].m128i_i64[0] = (__int64)"load command ";
    sub_A41580(v67, v70, v68, a4, (__int64)a5, 257);
    sub_A41580(v64, v67, v65, v9, v10, v11);
    sub_A41580(v61, v64, v62, v12, v13, v14);
    sub_A41580(v58, v61, v59, v15, v16, v17);
    sub_A41580(v55, v58, v56, v18, v19, v20);
    v21 = v52;
    v22 = (__m128i *)&v49;
    sub_A41580(v52, v55, v53, v23, v24, v25);
    v29 = (const __m128i *)&v50;
LABEL_9:
    sub_A41580(v22, v21, v29, v26, v27, v28);
    sub_21967F0(a1, v22->m128i_i64, v30, v31);
    return a1;
  }
  v33 = *a3;
  v34 = ".offset field extends past the end of the load command";
  if ( a7 >= v33 )
  {
LABEL_16:
    v53[0].m128i_i64[0] = (__int64)v34;
    v54 = 259;
    v57 = 257;
    if ( *a8 )
    {
      v56[0].m128i_i64[0] = (__int64)a8;
      LOBYTE(v57) = 3;
    }
    v59[0].m128i_i64[0] = (__int64)" ";
    v60 = 259;
    v63 = 257;
    if ( *a5 )
    {
      v62[0].m128i_i64[0] = (__int64)a5;
      LOBYTE(v63) = 3;
    }
    v65[0].m128i_i64[0] = (__int64)" ";
    v66 = 259;
    v69 = 265;
    v68[0].m128i_i32[0] = a4;
    v70[0].m128i_i64[0] = (__int64)"load command ";
    v71 = 259;
    sub_A41580(v67, v70, v68, a4, 259, 259);
    sub_A41580(v64, v67, v65, v37, v38, v39);
    sub_A41580(v61, v64, v62, v40, v41, v42);
    sub_A41580(v58, v61, v59, v43, v44, v45);
    v21 = v55;
    v22 = v52;
    sub_A41580(v55, v58, v56, v46, v47, v48);
    v29 = v53;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(*a2 + a7) )
  {
    v35 = (_BYTE *)(a7 + 1 + *a2);
    v36 = &v35[v33 - 1 - a7];
    while ( v36 != v35 )
    {
      if ( !*v35++ )
        goto LABEL_21;
    }
    v34 = " name extends past the end of the load command";
    goto LABEL_16;
  }
LABEL_21:
  *a1 = 0;
  return a1;
}
