__int64 __fastcall clang_visitVTableComponents(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r13
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 *v18; // r15
  __int64 v19; // r12
  __int64 *v20; // r13
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __m128i si128; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128i v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __m128i v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128i v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __m128i v53; // xmm0
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __m128i v58; // xmm0
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128i v63; // [rsp+0h] [rbp-168h]
  __m128i v64; // [rsp+0h] [rbp-168h]
  __m128i v65; // [rsp+0h] [rbp-168h]
  __m128i v66; // [rsp+0h] [rbp-168h]
  __m128i v67; // [rsp+0h] [rbp-168h]
  __m128i v68; // [rsp+0h] [rbp-168h]
  __m128i v69; // [rsp+0h] [rbp-168h]
  __m128i v70; // [rsp+0h] [rbp-168h]
  __m128i v71; // [rsp+0h] [rbp-168h]
  __m128i v72; // [rsp+0h] [rbp-168h]
  __m128i v73; // [rsp+30h] [rbp-138h] BYREF
  __m128i v74; // [rsp+40h] [rbp-128h] BYREF
  __m128i v75; // [rsp+50h] [rbp-118h] BYREF
  __m128i v76; // [rsp+60h] [rbp-108h] BYREF
  __m128i v77; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v78; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v79; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v80; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v81; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v82; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v83; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v84; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v85; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v86; // [rsp+100h] [rbp-68h] BYREF
  __m128i v87; // [rsp+110h] [rbp-58h] BYREF
  __m128i v88[4]; // [rsp+120h] [rbp-48h] BYREF

  if ( (_DWORD)a7 != 800 )
    return 1;
  v63 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = sub_639EE0((_DWORD)a1, a2, a3, a4, a5, a6, v63.m128i_i32[0], v63.m128i_i64[1]);
  if ( !v14 )
    return 1;
  v64 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = _mm_loadu_si128((const __m128i *)&a8);
  v16 = sub_63A300(
          (_DWORD)a1,
          a2,
          v10,
          v11,
          v12,
          v13,
          v64.m128i_i32[0],
          v64.m128i_i32[2],
          v15.m128i_i32[0],
          v15.m128i_i64[1]);
  v18 = *(__int64 **)(v14 + 16);
  v19 = v16;
  v20 = &v18[*(_QWORD *)(v14 + 24)];
  if ( v20 == v18 )
    return 0;
  while ( 2 )
  {
    v21 = *v18;
    switch ( *v18 & 7 )
    {
      case 0LL:
        sub_639F00(&v73, v21 >> 3, v19);
        v72 = _mm_load_si128(&v73);
        v58 = _mm_load_si128(&v74);
        v27 = a1(0, a2, v59, v60, v61, v62, v72.m128i_i64[0], v72.m128i_i64[1], v58.m128i_i64[0], v58.m128i_i64[1]);
        goto LABEL_7;
      case 1LL:
        sub_639F00(&v75, v21 >> 3, v19);
        v71 = _mm_load_si128(&v75);
        v53 = _mm_load_si128(&v76);
        v27 = a1(1, a2, v54, v55, v56, v57, v71.m128i_i64[0], v71.m128i_i64[1], v53.m128i_i64[0], v53.m128i_i64[1]);
        goto LABEL_7;
      case 2LL:
        sub_639F00(&v77, v21 >> 3, v19);
        v70 = _mm_load_si128(&v77);
        v48 = _mm_load_si128(&v78);
        v27 = a1(2, a2, v49, v50, v51, v52, v70.m128i_i64[0], v70.m128i_i64[1], v48.m128i_i64[0], v48.m128i_i64[1]);
        goto LABEL_7;
      case 3LL:
        sub_639160(&v79, v21 & 0xFFFFFFFFFFFFFFF8LL, v19, 0, 1, v17);
        v69 = _mm_load_si128(&v79);
        v43 = _mm_load_si128(&v80);
        v27 = a1(3, a2, v44, v45, v46, v47, v69.m128i_i64[0], v69.m128i_i64[1], v43.m128i_i64[0], v43.m128i_i64[1]);
        goto LABEL_7;
      case 4LL:
        sub_639160(&v81, v21 & 0xFFFFFFFFFFFFFFF8LL, v19, 0, 1, v17);
        v68 = _mm_load_si128(&v81);
        v38 = _mm_load_si128(&v82);
        v27 = a1(4, a2, v39, v40, v41, v42, v68.m128i_i64[0], v68.m128i_i64[1], v38.m128i_i64[0], v38.m128i_i64[1]);
        goto LABEL_7;
      case 5LL:
        sub_639160(&v85, v21 & 0xFFFFFFFFFFFFFFF8LL, v19, 0, 1, v17);
        v67 = _mm_load_si128(&v85);
        v33 = _mm_load_si128(&v86);
        v27 = a1(6, a2, v34, v35, v36, v37, v67.m128i_i64[0], v67.m128i_i64[1], v33.m128i_i64[0], v33.m128i_i64[1]);
        goto LABEL_7;
      case 6LL:
        sub_639160(&v87, v21 & 0xFFFFFFFFFFFFFFF8LL, v19, 0, 1, v17);
        v66 = _mm_load_si128(&v87);
        si128 = _mm_load_si128(v88);
        if ( !(unsigned int)a1(
                              7,
                              a2,
                              v29,
                              v30,
                              v31,
                              v32,
                              v66.m128i_i64[0],
                              v66.m128i_i64[1],
                              si128.m128i_i64[0],
                              si128.m128i_i64[1]) )
          return 2;
        goto LABEL_8;
      case 7LL:
        sub_639160(&v83, v21 & 0xFFFFFFFFFFFFFFF8LL, v19, 0, 1, v17);
        v65 = _mm_load_si128(&v83);
        v22 = _mm_load_si128(&v84);
        v27 = a1(5, a2, v23, v24, v25, v26, v65.m128i_i64[0], v65.m128i_i64[1], v22.m128i_i64[0], v22.m128i_i64[1]);
LABEL_7:
        if ( v27 )
        {
LABEL_8:
          if ( v20 == ++v18 )
            return 0;
          continue;
        }
        return 2;
    }
  }
}

