__int64 __fastcall sub_36FFE0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r12
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r12
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // r12
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r12
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // r12
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r12
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // r12
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // r12
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r12
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // r13
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // r12
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v88; // [rsp+0h] [rbp-238h]
  __int128 v89; // [rsp+60h] [rbp-1D8h] BYREF
  __m128i v90; // [rsp+70h] [rbp-1C8h]
  __int128 v91; // [rsp+80h] [rbp-1B8h] BYREF
  __m128i v92; // [rsp+90h] [rbp-1A8h]
  __int128 v93; // [rsp+A0h] [rbp-198h] BYREF
  __m128i v94; // [rsp+B0h] [rbp-188h]
  __int128 v95; // [rsp+C0h] [rbp-178h] BYREF
  __m128i v96; // [rsp+D0h] [rbp-168h]
  __int128 v97; // [rsp+E0h] [rbp-158h] BYREF
  __m128i v98; // [rsp+F0h] [rbp-148h]
  __int128 v99; // [rsp+100h] [rbp-138h] BYREF
  __m128i v100; // [rsp+110h] [rbp-128h]
  __int128 v101; // [rsp+120h] [rbp-118h] BYREF
  __m128i v102; // [rsp+130h] [rbp-108h]
  __int128 v103; // [rsp+140h] [rbp-F8h] BYREF
  __m128i v104; // [rsp+150h] [rbp-E8h]
  __int128 v105; // [rsp+160h] [rbp-D8h] BYREF
  __m128i v106; // [rsp+170h] [rbp-C8h]
  __int128 v107; // [rsp+180h] [rbp-B8h] BYREF
  __m128i v108; // [rsp+190h] [rbp-A8h]
  __int128 v109; // [rsp+1A0h] [rbp-98h] BYREF
  __m128i v110; // [rsp+1B0h] [rbp-88h]
  __int128 v111; // [rsp+1C0h] [rbp-78h] BYREF
  __m128i v112; // [rsp+1D0h] [rbp-68h]
  __int128 v113; // [rsp+1E0h] [rbp-58h] BYREF
  __m128i v114; // [rsp+1F0h] [rbp-48h]

  v6 = a1;
  v113 = 0;
  v114 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6C0), (__m128i)(unsigned __int64)sub_36FF10);
  v7 = sub_EE4D00(a1, a2, (unsigned int)&v113, a4, a5, a6);
  v8 = sub_383760(a1);
  v9 = sub_EE7A70(v8, v7);
  v111 = 0;
  v112 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6C8), (__m128i)(unsigned __int64)sub_36FF20);
  v13 = sub_EE4D00(a1, a2, (unsigned int)&v111, v10, v11, v12);
  v14 = sub_377FB0();
  v15 = sub_EE8F50(v14, v13, v9);
  v109 = 0;
  v110 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6D0), (__m128i)(unsigned __int64)sub_36FF30);
  v19 = sub_EE4D00(a1, a2, (unsigned int)&v109, v16, v17, v18);
  v20 = sub_379930();
  v21 = sub_EE8F50(v20, v19, v15);
  v107 = 0;
  v108 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6D8), (__m128i)(unsigned __int64)sub_36FF40);
  v25 = sub_EE4D00(a1, a2, (unsigned int)&v107, v22, v23, v24);
  v26 = sub_C98BE0();
  v27 = sub_EE8F50(v26, v25, v21);
  v105 = 0;
  v106 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6E0), (__m128i)(unsigned __int64)sub_36FF50);
  v31 = sub_EE4D00(a1, a2, (unsigned int)&v105, v28, v29, v30);
  v32 = sub_C98CA0();
  v33 = sub_EE8F50(v32, v31, v27);
  v103 = 0;
  v104 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6E8), (__m128i)(unsigned __int64)sub_36FF60);
  v37 = sub_EE4D00(a1, a2, (unsigned int)&v103, v34, v35, v36);
  v38 = sub_C98B50();
  v39 = sub_EE8F50(v38, v37, v33);
  v101 = 0;
  v102 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6F0), (__m128i)(unsigned __int64)sub_36FF70);
  v43 = sub_EE4D00(a1, a2, (unsigned int)&v101, v40, v41, v42);
  v44 = sub_C98B80();
  v45 = sub_EE8F50(v44, v43, v39);
  v99 = 0;
  v100 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D6F8), (__m128i)(unsigned __int64)sub_36FF80);
  v49 = sub_EE4D00(a1, a2, (unsigned int)&v99, v46, v47, v48);
  v50 = sub_C98A90();
  v51 = sub_EE8F50(v50, v49, v45);
  v97 = 0;
  v98 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D700), (__m128i)(unsigned __int64)sub_36FF90);
  v55 = sub_EE4D00(a1, a2, (unsigned int)&v97, v52, v53, v54);
  v56 = sub_C98A60();
  v57 = sub_EE8F50(v56, v55, v51);
  v95 = 0;
  v96 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D708), (__m128i)(unsigned __int64)sub_36FFA0);
  v61 = sub_EE4D00(a1, a2, (unsigned int)&v95, v58, v59, v60);
  v62 = sub_C98A30();
  v63 = sub_EE8F50(v62, v61, v57);
  v93 = 0;
  v94 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D710), (__m128i)(unsigned __int64)sub_36FFB0);
  v67 = sub_EE4D00(a1, a2, (unsigned int)&v93, v64, v65, v66);
  v68 = sub_EF4150();
  v69 = sub_EE8F50(v68, v67, v63);
  v91 = 0;
  v92 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4D718), (__m128i)(unsigned __int64)sub_36FFC0);
  v73 = sub_EE4D00(a1, a2, (unsigned int)&v91, v70, v71, v72);
  v74 = sub_EF4120();
  v75 = sub_EE8F50(v74, v73, v69);
  v89 = 0;
  v90 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C4D720), (__m128i)(unsigned __int64)sub_36FFD0);
  v79 = sub_EE4D00(a1, a2, (unsigned int)&v89, v76, v77, v78);
  v80 = sub_EF4290();
  v88 = sub_EF3D00(v80);
  v81 = sub_EF40F0();
  v82 = sub_EF3D30(v81, v88);
  v83 = sub_EE8F50(v82, v79, v75);
  v84 = sub_D156B0(v6, a2);
  v85 = sub_EE7A70(v84, v83);
  v86 = sub_EE8E00(v85, a2);
  if ( v90.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v90.m128i_i64[0])(&v89, &v89, 3);
  if ( v92.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v92.m128i_i64[0])(&v91, &v91, 3);
  if ( v94.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v94.m128i_i64[0])(&v93, &v93, 3);
  if ( v96.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v96.m128i_i64[0])(&v95, &v95, 3);
  if ( v98.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v98.m128i_i64[0])(&v97, &v97, 3);
  if ( v100.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v100.m128i_i64[0])(&v99, &v99, 3);
  if ( v102.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v102.m128i_i64[0])(&v101, &v101, 3);
  if ( v104.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v104.m128i_i64[0])(&v103, &v103, 3);
  if ( v106.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v106.m128i_i64[0])(&v105, &v105, 3);
  if ( v108.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v108.m128i_i64[0])(&v107, &v107, 3);
  if ( v110.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v110.m128i_i64[0])(&v109, &v109, 3);
  if ( v112.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v112.m128i_i64[0])(&v111, &v111, 3);
  if ( v114.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v114.m128i_i64[0])(&v113, &v113, 3);
  return v86;
}

