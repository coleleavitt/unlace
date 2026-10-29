void __fastcall sub_137B700(__int64 *a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  const char *v10; // r15
  __int64 v11; // rdx
  const char *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  bool v16; // zf
  const char *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  const char *v29; // rax
  __int64 v30; // rdx
  const char *v31; // rax
  size_t v32; // rax
  size_t v33; // rbx
  unsigned __int64 v34; // rax
  size_t v35; // r12
  size_t v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _BYTE *v93; // rdi
  __m128i v94; // [rsp+8h] [rbp-220h]
  __int32 v95; // [rsp+20h] [rbp-208h]
  const char *v96; // [rsp+28h] [rbp-200h]
  const char *v97; // [rsp+30h] [rbp-1F8h]
  const char *v98; // [rsp+38h] [rbp-1F0h]
  __int32 v99; // [rsp+40h] [rbp-1E8h]
  __int32 v100; // [rsp+44h] [rbp-1E4h]
  int v101; // [rsp+48h] [rbp-1E0h]
  int v102; // [rsp+4Ch] [rbp-1DCh]
  __int32 v103; // [rsp+50h] [rbp-1D8h]
  __int32 v104; // [rsp+54h] [rbp-1D4h]
  __int64 v105; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v106; // [rsp+68h] [rbp-1C0h]
  const char *v107; // [rsp+70h] [rbp-1B8h]
  __int16 v108; // [rsp+80h] [rbp-1A8h]
  __m128i v109[2]; // [rsp+90h] [rbp-198h] BYREF
  __int16 v110; // [rsp+B0h] [rbp-178h]
  __m128i v111; // [rsp+C0h] [rbp-168h] BYREF
  char *v112; // [rsp+D0h] [rbp-158h]
  __int16 v113; // [rsp+E0h] [rbp-148h]
  __m128i v114[2]; // [rsp+F0h] [rbp-138h] BYREF
  __int16 v115; // [rsp+110h] [rbp-118h]
  __m128i v116; // [rsp+120h] [rbp-108h] BYREF
  char *v117; // [rsp+130h] [rbp-F8h]
  __int16 v118; // [rsp+140h] [rbp-E8h]
  __m128i v119[2]; // [rsp+150h] [rbp-D8h] BYREF
  __int16 v120; // [rsp+170h] [rbp-B8h]
  __int64 v121; // [rsp+180h] [rbp-A8h]
  __int64 v122; // [rsp+188h] [rbp-A0h]
  __int64 v123; // [rsp+190h] [rbp-98h]
  __int64 v124; // [rsp+198h] [rbp-90h]
  __int64 v125; // [rsp+1A0h] [rbp-88h]
  _BYTE ptr[24]; // [rsp+1B0h] [rbp-78h] BYREF
  _BYTE v127[96]; // [rsp+1C8h] [rbp-60h] BYREF

  v94.m128i_i64[0] = a5;
  v94.m128i_i64[1] = a6;
  if ( a4 == sub_21F9080() )
  {
    v10 = "6.5504e+4";
    v102 = 3;
    v98 = "9.765625e-4";
    v12 = "5.9604644775390625e-8";
    v101 = 5;
    v100 = 11;
    v95 = -4;
    v103 = 4;
    v99 = -13;
    v104 = 16;
    v96 = "6.103515625e-5";
    v97 = "6.5504e+4";
  }
  else if ( a4 == sub_21F90A0() )
  {
    v10 = "3.40282347e+38";
    v102 = 6;
    v98 = "1.19209290e-7";
    v12 = "1.40129846e-45";
    v101 = 9;
    v100 = 24;
    v95 = -37;
    v103 = 38;
    v99 = -125;
    v104 = 128;
    v96 = "1.17549435e-38";
    v97 = "3.40282347e+38";
  }
  else if ( a4 == sub_21F90B0(a1, a2) )
  {
    v10 = "1.7976931348623157e+308";
    v102 = 15;
    v98 = "2.2204460492503131e-16";
    v12 = "4.9406564584124654e-324";
    v101 = 17;
    v100 = 53;
    v95 = -307;
    v103 = 308;
    v99 = -1021;
    v104 = 1024;
    v96 = "2.2250738585072014e-308";
    v97 = "1.7976931348623157e+308";
  }
  else
  {
    v10 = "1.18973149535723176502e+4932";
    if ( a4 != sub_21F90E0() )
    {
      v10 = "1.18973149535723176508575932662800702e+4932";
      if ( a4 == sub_21F90D0(a1, a2, v9) )
        v10 = "8.98846567431157953864652595394501e+307";
    }
    v12 = "3.64519953188247460253e-4951";
    if ( a4 != sub_21F90E0() )
    {
      v12 = "4.94065645841246544176568792868221e-324";
      if ( a4 != sub_21F90D0(a1, a2, v11) )
        v12 = "6.47517511943802511092443895822764655e-4966";
    }
    if ( a4 == sub_21F90E0() )
      v102 = 18;
    else
      v102 = 2 * (a4 != sub_21F90D0(a1, a2, v13)) + 31;
    if ( a4 == sub_21F90E0() )
      v101 = 21;
    else
      v101 = 3 * (a4 != sub_21F90D0(a1, a2, v14)) + 33;
    v98 = "1.08420217248550443401e-19";
    if ( a4 != sub_21F90E0() )
    {
      v16 = a4 == sub_21F90D0(a1, a2, v15);
      v17 = "4.94065645841246544176568792868221e-324";
      if ( !v16 )
        v17 = "1.92592994438723585305597794258492732e-34";
      v98 = v17;
    }
    if ( a4 == sub_21F90E0() )
    {
      v100 = 64;
    }
    else
    {
      v16 = a4 == sub_21F90D0(a1, a2, v18);
      v19 = 106;
      if ( !v16 )
        v19 = 113;
      v100 = v19;
    }
    v95 = -4931;
    if ( a4 != sub_21F90E0() )
    {
      v16 = a4 == sub_21F90D0(a1, a2, v20);
      v21 = -291;
      if ( !v16 )
        v21 = -4931;
      v95 = v21;
    }
    if ( a4 == sub_21F90E0() )
    {
      v103 = 4932;
    }
    else
    {
      v16 = a4 == sub_21F90D0(a1, a2, v22);
      v23 = 4932;
      if ( v16 )
        v23 = 308;
      v103 = v23;
    }
    v99 = -16381;
    if ( a4 != sub_21F90E0() )
    {
      v16 = a4 == sub_21F90D0(a1, a2, v24);
      v25 = -968;
      if ( !v16 )
        v25 = -16381;
      v99 = v25;
    }
    if ( a4 == sub_21F90E0() )
    {
      v104 = 0x4000;
    }
    else
    {
      v16 = a4 == sub_21F90D0(a1, a2, v26);
      v27 = 0x4000;
      if ( v16 )
        v27 = 1024;
      v104 = v27;
    }
    v96 = "3.36210314311209350626e-4932";
    if ( a4 != sub_21F90E0() )
    {
      v16 = a4 == sub_21F90D0(a1, a2, v28);
      v29 = "2.00416836000897277799610805135016e-292";
      if ( !v16 )
        v29 = "3.36210314311209350626267781732175260e-4932";
      v96 = v29;
    }
    v97 = "1.18973149535723176502e+4932";
    if ( a4 != sub_21F90E0() )
    {
      v16 = a4 == sub_21F90D0(a1, a2, v30);
      v31 = "1.79769313486231580793728971405301e+308";
      if ( !v16 )
        v31 = "1.18973149535723176508575932662800702e+4932";
      v97 = v31;
    }
  }
  *(_QWORD *)ptr = v127;
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v32 = j__strlen("__");
  v33 = v32;
  if ( v32 > 0x20 )
  {
    sub_2236E10(ptr, v127, v32, 1);
    v93 = (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
  }
  else
  {
    v34 = 32;
    if ( !v33 )
      goto LABEL_48;
    v93 = v127;
  }
  memcpy(v93, "__", v33);
  v34 = *(_QWORD *)&ptr[16];
  v33 += *(_QWORD *)&ptr[8];
LABEL_48:
  *(_QWORD *)&ptr[8] = v33;
  if ( a3 + v33 > v34 )
  {
    sub_2236E10(ptr, v127, a3 + v33, 1);
    v33 = *(_QWORD *)&ptr[8];
  }
  if ( a3 )
  {
    memcpy((void *)(v33 + *(_QWORD *)ptr), a2, a3);
    v33 = *(_QWORD *)&ptr[8];
  }
  v35 = v33 + a3;
  *(_QWORD *)&ptr[8] = v35;
  v36 = j__strlen("_");
  if ( v36 + v35 > *(_QWORD *)&ptr[16] )
  {
    sub_2236E10(ptr, v127, v36 + v35, 1);
    v35 = *(_QWORD *)&ptr[8];
  }
  if ( v36 )
  {
    memcpy((void *)(v35 + *(_QWORD *)ptr), "_", v36);
    v35 = *(_QWORD *)&ptr[8];
  }
  v114[0].m128i_i64[0] = (__int64)v12;
  *(_QWORD *)&ptr[8] = v36 + v35;
  LOWORD(v125) = 257;
  v116 = v94;
  v118 = 261;
  v115 = 259;
  sub_A41580(v119, v114, &v116, v94.m128i_i64[1], 261, 259);
  v112 = "DENORM_MIN__";
  v111 = *(__m128i *)ptr;
  v113 = 773;
  sub_1039E30(a1, (__int64)&v111, (__int64)v119, v37, v38, v39, v121, v122, v123, v124, v125);
  v118 = 261;
  LOWORD(v125) = 257;
  v116 = v94;
  v115 = 257;
  if ( *v10 )
  {
    v114[0].m128i_i64[0] = (__int64)v10;
    LOBYTE(v115) = 3;
  }
  sub_A41580(v119, v114, &v116, v94.m128i_i64[1], v40, v41);
  v113 = 773;
  v111 = *(__m128i *)ptr;
  v112 = "NORM_MAX__";
  sub_1039E30(a1, (__int64)&v111, (__int64)v119, v42, 773, v43, v121, v122, v123, v124, v125);
  v116 = *(__m128i *)ptr;
  LOWORD(v125) = 257;
  v120 = 259;
  v118 = 773;
  v117 = "HAS_DENORM__";
  v119[0].m128i_i64[0] = (__int64)"1";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v44, v45, 257, v121, v122, v123, v124, 1u);
  LOWORD(v125) = 257;
  v120 = 266;
  v119[0].m128i_i32[0] = v102;
  v118 = 773;
  v116 = *(__m128i *)ptr;
  v117 = "DIG__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v46, v47, v48, v121, v122, v123, v124, 1u);
  LOWORD(v125) = 257;
  v120 = 266;
  v119[0].m128i_i32[0] = v101;
  v118 = 773;
  v116 = *(__m128i *)ptr;
  v117 = "DECIMAL_DIG__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v49, v50, v51, v121, v122, v123, v124, 1u);
  LOWORD(v125) = 257;
  v116 = v94;
  v118 = 261;
  v115 = 257;
  if ( *v98 )
  {
    v114[0].m128i_i64[0] = (__int64)v98;
    LOBYTE(v115) = 3;
  }
  sub_A41580(v119, v114, &v116, 261, v52, v53);
  v113 = 773;
  v111 = *(__m128i *)ptr;
  v112 = "EPSILON__";
  sub_1039E30(a1, (__int64)&v111, (__int64)v119, v54, v55, v56, v121, v122, v123, v124, v125);
  LOWORD(v125) = 257;
  v116 = *(__m128i *)ptr;
  v119[0].m128i_i64[0] = (__int64)"1";
  v120 = 259;
  v118 = 773;
  v117 = "HAS_INFINITY__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, 257, v57, v58, v121, v122, v123, v124, 1u);
  v116 = *(__m128i *)ptr;
  LOWORD(v125) = 257;
  v120 = 259;
  v118 = 773;
  v119[0].m128i_i64[0] = (__int64)"1";
  v117 = "HAS_QUIET_NAN__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v59, 257, 259, v121, v122, v123, v124, 1u);
  v120 = 266;
  v119[0].m128i_i32[0] = v100;
  v118 = 773;
  LOWORD(v125) = 257;
  v116 = *(__m128i *)ptr;
  v117 = "MANT_DIG__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v60, v61, v62, v121, v122, v123, v124, 1u);
  LOWORD(v125) = 257;
  v120 = 266;
  v119[0].m128i_i32[0] = v103;
  v118 = 773;
  v116 = *(__m128i *)ptr;
  v117 = "MAX_10_EXP__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v63, v64, v65, v121, v122, v123, v124, 1u);
  LOWORD(v125) = 257;
  v120 = 266;
  v118 = 773;
  v119[0].m128i_i32[0] = v104;
  v116 = *(__m128i *)ptr;
  v117 = "MAX_EXP__";
  sub_1039E30(a1, (__int64)&v116, (__int64)v119, v66, v67, v68, v121, v122, v123, v124, 1u);
  LOWORD(v125) = 257;
  v116 = v94;
  v118 = 261;
  v115 = 257;
  if ( *v97 )
  {
    v114[0].m128i_i64[0] = (__int64)v97;
    LOBYTE(v115) = 3;
  }
  sub_A41580(v119, v114, &v116, 257, v69, v70);
  v113 = 773;
  v111 = *(__m128i *)ptr;
  v112 = "MAX__";
  sub_1039E30(a1, (__int64)&v111, (__int64)v119, v71, v72, v73, v121, v122, v123, v124, v125);
  LOWORD(v125) = 257;
  v116.m128i_i64[0] = (__int64)")";
  v111.m128i_i64[0] = (__int64)"(";
  v113 = 259;
  v118 = 259;
  v110 = 266;
  v109[0].m128i_i32[0] = v95;
  sub_A41580(v114, &v111, v109, (__int64)"(", 259, v74);
  sub_A41580(v119, v114, &v116, v75, v76, v77);
  v105 = *(_QWORD *)ptr;
  v108 = 773;
  v106 = *(_QWORD *)&ptr[8];
  v107 = "MIN_10_EXP__";
  sub_1039E30(a1, (__int64)&v105, (__int64)v119, v78, v79, 773, v121, v122, v123, v124, v125);
  v110 = 266;
  LOWORD(v125) = 257;
  v109[0].m128i_i32[0] = v99;
  v116.m128i_i64[0] = (__int64)")";
  v118 = 259;
  v111.m128i_i64[0] = (__int64)"(";
  v113 = 259;
  sub_A41580(v114, &v111, v109, (__int64)"(", (__int64)")", v80);
  sub_A41580(v119, v114, &v116, v81, v82, v83);
  v108 = 773;
  v105 = *(_QWORD *)ptr;
  v106 = *(_QWORD *)&ptr[8];
  v107 = "MIN_EXP__";
  sub_1039E30(a1, (__int64)&v105, (__int64)v119, v84, v85, v86, v121, v122, v123, v124, v125);
  LOWORD(v125) = 257;
  v118 = 261;
  v116 = v94;
  v115 = 257;
  if ( *v96 )
  {
    v114[0].m128i_i64[0] = (__int64)v96;
    LOBYTE(v115) = 3;
  }
  sub_A41580(v119, v114, &v116, v87, v88, v89);
  v113 = 773;
  v111 = *(__m128i *)ptr;
  v112 = "MIN__";
  sub_1039E30(a1, (__int64)&v111, (__int64)v119, v90, v91, v92, v121, v122, v123, v124, v125);
  if ( *(_BYTE **)ptr != v127 )
    free(*(void **)ptr);
}
