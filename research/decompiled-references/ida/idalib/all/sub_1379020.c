__int64 __fastcall sub_1379020(__int64 a1, char *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // al
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  char v15; // al
  const char *v16; // rax
  char v17; // dl
  const char *v18; // rax
  __int32 v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 result; // rax
  const char *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  bool v79; // zf
  int v80; // esi
  char *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned int v106; // eax
  __int64 v107; // kr00_8
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  char *v115; // rax
  const char *v116; // [rsp+30h] [rbp-128h] BYREF
  __int16 v117; // [rsp+50h] [rbp-108h]
  __m128i v118; // [rsp+60h] [rbp-F8h] BYREF
  _WORD v119[16]; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v120[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int16 v121; // [rsp+B0h] [rbp-A8h]
  __m128i v122[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int16 v123; // [rsp+E0h] [rbp-78h]
  __int64 v124; // [rsp+F0h] [rbp-68h]
  __int64 v125; // [rsp+F8h] [rbp-60h]
  __int64 v126; // [rsp+100h] [rbp-58h]
  __int64 v127; // [rsp+108h] [rbp-50h]
  __int64 v128; // [rsp+110h] [rbp-48h]

  if ( (a2[89] & 1) == 0 )
  {
    v8 = a2[14];
    if ( (*a2 & 0x20) != 0 )
    {
      if ( (a2[97] & 8) == 0 || (v8 & 4) != 0 )
        goto LABEL_4;
    }
    else if ( (v8 & 4) != 0 )
    {
LABEL_4:
      v9 = "1";
      goto LABEL_5;
    }
    v122[0].m128i_i64[0] = (__int64)"1";
    v123 = 259;
    v120[0].m128i_i64[0] = (__int64)"__STDC__";
    v121 = 259;
    LOWORD(v128) = 257;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, 257, a5, a6, v124, v125, v126, v127, 1u);
    v8 = a2[14];
LABEL_5:
    LOWORD(v128) = 257;
    if ( v8 < 0 )
      v10 = "0";
    else
      v10 = "1";
    v122[0].m128i_i64[0] = (__int64)v10;
    v123 = 259;
    v120[0].m128i_i64[0] = (__int64)"__STDC_HOSTED__";
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, (__int64)v9, a5, a6, v124, v125, v126, v127, v128);
    v14 = a2[1];
    if ( (v14 & 8) == 0 )
    {
      v15 = *a2;
      if ( (*a2 & 0x10) != 0 )
      {
        LOWORD(v128) = 257;
        v52 = "202400L";
      }
      else if ( (v15 & 8) != 0 )
      {
        LOWORD(v128) = 257;
        v52 = "202311L";
      }
      else if ( (v15 & 4) != 0 )
      {
        v52 = "201710L";
        LOWORD(v128) = 257;
      }
      else if ( (v15 & 2) != 0 )
      {
        v13 = 257;
        v52 = "201112L";
        LOWORD(v128) = 257;
      }
      else
      {
        if ( (v15 & 1) == 0 )
        {
          if ( (a2[4] & 4) == 0 && (a2[12] & 2) != 0 )
          {
            v122[0].m128i_i64[0] = (__int64)"199409L";
            v16 = "__STDC_VERSION__";
            LOWORD(v128) = 257;
            v123 = 259;
LABEL_82:
            v120[0].m128i_i64[0] = (__int64)v16;
            v121 = 259;
            sub_1039E30(a3, (__int64)v120, (__int64)v122, v11, v12, 259, v124, v125, v126, v127, v128);
            goto LABEL_36;
          }
          goto LABEL_36;
        }
        v12 = 257;
        v52 = "199901L";
        LOWORD(v128) = 257;
      }
      v122[0].m128i_i64[0] = (__int64)v52;
      v121 = 259;
      v123 = 259;
      v120[0].m128i_i64[0] = (__int64)"__STDC_VERSION__";
      sub_1039E30(a3, (__int64)v120, (__int64)v122, v11, v12, v13, v124, v125, v126, v127, v128);
      goto LABEL_36;
    }
    v17 = a2[2];
    LOWORD(v128) = 257;
    if ( (v17 & 2) != 0 )
    {
      v18 = "202400L";
    }
    else if ( (v17 & 1) != 0 )
    {
      v18 = "202302L";
    }
    else if ( v14 < 0 )
    {
      v18 = "202002L";
    }
    else if ( (v14 & 0x40) != 0 )
    {
      v18 = "201703L";
    }
    else if ( (v14 & 0x20) != 0 )
    {
      v18 = "201402L";
    }
    else if ( (v14 & 0x10) != 0 )
    {
      v18 = "201103L";
    }
    else
    {
      v18 = "199711L";
    }
    v122[0].m128i_i64[0] = (__int64)v18;
    v123 = 259;
    v120[0].m128i_i64[0] = (__int64)"__cplusplus";
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, 257, v12, v13, v124, v125, v126, v127, v128);
    v80 = *(_DWORD *)(a1 + 136);
    LOWORD(v128) = 257;
    v81 = sub_102DA20(a1, v80);
    v121 = 257;
    if ( *v81 )
    {
      v120[0].m128i_i64[0] = (__int64)v81;
      LOBYTE(v121) = 3;
    }
    v85 = *(unsigned __int16 *)(a1 + 64);
    if ( !(_WORD)v85 )
    {
      v85 = *(unsigned __int8 *)(a1 + 25);
      if ( (unsigned __int8)v85 < *(_BYTE *)(a1 + 33) )
        v85 = *(unsigned __int8 *)(a1 + 33);
    }
    v119[8] = 265;
    v118.m128i_i32[0] = v85 >> 3;
    sub_A41580(v122, &v118, v120, v82, v83, v84);
    v116 = "__STDCPP_DEFAULT_NEW_ALIGNMENT__";
    v117 = 259;
    sub_1039E30(a3, (__int64)&v116, (__int64)v122, v86, v87, v88, v124, v125, v126, v127, v128);
    if ( (a2[212] & 3) == 0 )
    {
      LOWORD(v128) = 257;
      v123 = 259;
      v122[0].m128i_i64[0] = (__int64)"1";
      v16 = "__STDCPP_THREADS__";
      goto LABEL_82;
    }
LABEL_36:
    LOWORD(v128) = 257;
    v120[0].m128i_i64[0] = (__int64)"__STDC_UTF_16__";
    v122[0].m128i_i64[0] = (__int64)"1";
    v123 = 259;
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, (__int64)"__STDC_UTF_16__", v12, v13, v124, v125, v126, v127, 1u);
    LOWORD(v128) = 257;
    v121 = 259;
    v122[0].m128i_i64[0] = (__int64)"1";
    v123 = 259;
    v120[0].m128i_i64[0] = (__int64)"__STDC_UTF_32__";
    sub_1039E30(a3, (__int64)v120, (__int64)v122, v53, v54, v55, v124, v125, v126, v127, 1u);
    v118.m128i_i64[0] = (__int64)v119;
    v119[0] = 48;
    v123 = 260;
    v120[0].m128i_i64[0] = (__int64)"__STDC_EMBED_NOT_FOUND__";
    LOWORD(v128) = 257;
    v118.m128i_i64[1] = 1;
    v122[0].m128i_i64[0] = (__int64)&v118;
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, 257, 259, v56, v124, v125, v126, v127, 1u);
    if ( (_WORD *)v118.m128i_i64[0] != v119 )
      operator delete((void *)v118.m128i_i64[0]);
    v118.m128i_i64[0] = (__int64)v119;
    v120[0].m128i_i64[0] = (__int64)"__STDC_EMBED_FOUND__";
    LOWORD(v128) = 257;
    v118.m128i_i64[1] = 1;
    v119[0] = 49;
    v123 = 260;
    v122[0].m128i_i64[0] = (__int64)&v118;
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, v57, v58, 257, v124, v125, v126, v127, 1u);
    if ( (_WORD *)v118.m128i_i64[0] != v119 )
      operator delete((void *)v118.m128i_i64[0]);
    v118.m128i_i64[0] = (__int64)v119;
    v119[0] = 50;
    v123 = 260;
    LOWORD(v128) = 257;
    v118.m128i_i64[1] = 1;
    v122[0].m128i_i64[0] = (__int64)&v118;
    v120[0].m128i_i64[0] = (__int64)"__STDC_EMBED_EMPTY__";
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, 257, 259, v59, v124, v125, v126, v127, 1u);
    if ( (_WORD *)v118.m128i_i64[0] != v119 )
      operator delete((void *)v118.m128i_i64[0]);
    if ( (a2[2] & 4) != 0 )
    {
      LOWORD(v128) = 257;
      v121 = 259;
      v122[0].m128i_i64[0] = (__int64)"1";
      v123 = 259;
      v120[0].m128i_i64[0] = (__int64)"__OBJC__";
      sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
    }
    if ( (a2[47] & 0x20) == 0 )
    {
LABEL_55:
      if ( (a2[96] & 0x30) == 0 )
        goto LABEL_58;
      v78 = a2[206] & 3;
      if ( v78 == 1 )
      {
        LOWORD(v128) = 257;
        v123 = 259;
        v122[0].m128i_i64[0] = (__int64)"121";
        v115 = "CL_SYCL_LANGUAGE_VERSION";
      }
      else
      {
        if ( v78 != 2 )
          goto LABEL_58;
        v60 = 259;
        v122[0].m128i_i64[0] = (__int64)"202012L";
        v115 = "SYCL_LANGUAGE_VERSION";
        LOWORD(v128) = 257;
        v123 = 259;
      }
      v120[0].m128i_i64[0] = (__int64)v115;
      v121 = 259;
      sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, v128);
LABEL_58:
      if ( (a2[4] & 2) != 0 )
      {
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"1";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__ASSEMBLER__";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
      }
      result = (unsigned __int8)a2[60];
      if ( (result & 0x10) != 0 )
      {
        if ( (a2[89] & 0x40) != 0 )
        {
          v122[0].m128i_i64[0] = (__int64)"1";
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__CLANG_RDC__";
          v121 = 259;
          LOWORD(v128) = 257;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
          LOBYTE(result) = a2[60];
        }
        if ( (result & 0x20) == 0 )
        {
          v122[0].m128i_i64[0] = (__int64)"1";
          LOWORD(v128) = 257;
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__CUDA__";
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, 257, v124, v125, v126, v127, 1u);
        }
        if ( *((_DWORD *)a2 + 187) == 1 )
        {
          LOWORD(v128) = 257;
          v122[0].m128i_i64[0] = (__int64)"1";
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"CUDA_API_PER_THREAD_DEFAULT_STREAM";
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, 259, v62, v124, v125, v126, v127, 1u);
        }
        result = (unsigned __int8)a2[60];
      }
      if ( (result & 0x20) != 0 )
      {
        LOWORD(v128) = 257;
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIP__";
        v122[0].m128i_i64[0] = (__int64)"1";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v121 = 259;
        v122[0].m128i_i64[0] = (__int64)"1";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIPCC__";
        sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v89, v90, v124, v125, v126, v127, 1u);
        v121 = 259;
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"1";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIP_MEMORY_SCOPE_SINGLETHREAD";
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v91, 259, v92, v124, v125, v126, v127, 1u);
        v122[0].m128i_i64[0] = (__int64)"2";
        LOWORD(v128) = 257;
        v123 = 259;
        v121 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIP_MEMORY_SCOPE_WAVEFRONT";
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v93, v94, 257, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"3";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIP_MEMORY_SCOPE_WORKGROUP";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v95, v96, v97, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"4";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIP_MEMORY_SCOPE_AGENT";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v98, v99, v100, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"5";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__HIP_MEMORY_SCOPE_SYSTEM";
        v121 = 259;
        result = (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v101, v102, v124, v125, v126, v127, 1u);
        if ( (a2[97] & 1) != 0 )
        {
          v122[0].m128i_i64[0] = (__int64)"1";
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__HIPSTDPAR__";
          LOWORD(v128) = 257;
          v121 = 259;
          result = (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
          if ( (a2[97] & 2) != 0 )
          {
            LOWORD(v128) = 257;
            v123 = 259;
            v120[0].m128i_i64[0] = (__int64)"__HIPSTDPAR_INTERPOSE_ALLOC__";
            v121 = 259;
            v122[0].m128i_i64[0] = (__int64)"1";
            sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, 259, v62, v124, v125, v126, v127, 1u);
            LOWORD(v128) = 257;
            v122[0].m128i_i64[0] = (__int64)"1";
            v123 = 259;
            v120[0].m128i_i64[0] = (__int64)"__HIPSTDPAR_INTERPOSE_ALLOC_V1__";
            v121 = 259;
            result = (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, v113, v114, 257, v124, v125, v126, v127, 1u);
          }
        }
        if ( (a2[89] & 4) != 0 )
        {
          LOWORD(v128) = 257;
          v123 = 259;
          v122[0].m128i_i64[0] = (__int64)"1";
          v120[0].m128i_i64[0] = (__int64)"__HIP_DEVICE_COMPILE__";
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v61, v62, v124, v125, v126, v127, 1u);
          result = *(_QWORD *)(*(_QWORD *)a1 + 920LL);
          if ( (__int64 (*)())result != sub_102BBB0 )
          {
            result = ((__int64 (__fastcall *)(__int64))result)(a1);
            if ( !(_BYTE)result )
            {
              LOWORD(v128) = 257;
              v123 = 259;
              v120[0].m128i_i64[0] = (__int64)"__HIP_NO_IMAGE_SUPPORT__";
              v121 = 259;
              v122[0].m128i_i64[0] = (__int64)"1";
              sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
              LOWORD(v128) = 257;
              v123 = 259;
              v120[0].m128i_i64[0] = (__int64)"__HIP_NO_IMAGE_SUPPORT";
              v122[0].m128i_i64[0] = (__int64)"1";
              v121 = 259;
              result = (__int64)sub_1039E30(
                                  a3,
                                  (__int64)v120,
                                  (__int64)v122,
                                  v110,
                                  v111,
                                  v112,
                                  v124,
                                  v125,
                                  v126,
                                  v127,
                                  1u);
            }
          }
        }
        if ( *((_DWORD *)a2 + 187) == 1 )
        {
          LOWORD(v128) = 257;
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__HIP_API_PER_THREAD_DEFAULT_STREAM__";
          v121 = 259;
          v122[0].m128i_i64[0] = (__int64)"1";
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, 259, 259, v124, v125, v126, v127, 1u);
          LOWORD(v128) = 257;
          v122[0].m128i_i64[0] = (__int64)"1";
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"HIP_API_PER_THREAD_DEFAULT_STREAM";
          v121 = 259;
          result = (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, v103, v104, v105, v124, v125, v126, v127, 1u);
        }
      }
      if ( (a2[97] & 4) != 0 )
      {
        v79 = *((_QWORD *)a2 + 104) == 0;
        LOWORD(v128) = 257;
        if ( v79 )
        {
          v123 = 259;
          v122[0].m128i_i64[0] = (__int64)"1";
        }
        else
        {
          v60 = 260;
          v123 = 260;
          v122[0].m128i_i64[0] = (__int64)(a2 + 824);
        }
        v120[0].m128i_i64[0] = (__int64)"_OPENACC";
        v121 = 259;
        return (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, v128);
      }
      return result;
    }
    if ( (a2[1] & 8) != 0 )
    {
      v63 = *((_DWORD *)a2 + 14);
      if ( v63 == 100 )
      {
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"100";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__OPENCL_CPP_VERSION__";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
        goto LABEL_49;
      }
      if ( v63 == 202100 )
      {
        LOWORD(v128) = 257;
        v120[0].m128i_i64[0] = (__int64)"__OPENCL_CPP_VERSION__";
        v121 = 259;
        v122[0].m128i_i64[0] = (__int64)"202100";
        v123 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
LABEL_49:
        v122[0].m128i_i64[0] = (__int64)"100";
        LOWORD(v128) = 257;
        v120[0].m128i_i64[0] = (__int64)"__CL_CPP_VERSION_1_0__";
        v121 = 259;
        v123 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v64, v65, v124, v125, v126, v127, 1u);
        v61 = 259;
        v62 = 259;
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"202100";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"__CL_CPP_VERSION_2021__";
        v121 = 259;
LABEL_50:
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, v128);
LABEL_51:
        v122[0].m128i_i64[0] = (__int64)"100";
        v123 = 259;
        LOWORD(v128) = 257;
        v120[0].m128i_i64[0] = (__int64)"CL_VERSION_1_0";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v66, v67, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v123 = 259;
        v121 = 259;
        v122[0].m128i_i64[0] = (__int64)"110";
        v120[0].m128i_i64[0] = (__int64)"CL_VERSION_1_1";
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v68, 259, 259, v124, v125, v126, v127, 1u);
        v121 = 259;
        v122[0].m128i_i64[0] = (__int64)"120";
        LOWORD(v128) = 257;
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"CL_VERSION_1_2";
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v69, v70, v71, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"200";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"CL_VERSION_2_0";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v72, v73, v74, v124, v125, v126, v127, 1u);
        LOWORD(v128) = 257;
        v122[0].m128i_i64[0] = (__int64)"300";
        v123 = 259;
        v120[0].m128i_i64[0] = (__int64)"CL_VERSION_3_0";
        v121 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v75, v76, v77, v124, v125, v126, v127, 1u);
        if ( !*(_BYTE *)(a1 + 272) )
        {
          v122[0].m128i_i64[0] = (__int64)"1";
          v120[0].m128i_i64[0] = (__int64)"__ENDIAN_LITTLE__";
          LOWORD(v128) = 257;
          v123 = 259;
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
        }
        if ( (a2[106] & 8) != 0 )
        {
          v122[0].m128i_i64[0] = (__int64)"1";
          LOWORD(v128) = 257;
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__FAST_RELAXED_MATH__";
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, 257, 259, v124, v125, v126, v127, 1u);
        }
        goto LABEL_55;
      }
    }
    else
    {
      v106 = *((_DWORD *)a2 + 12);
      if ( v106 == 120 )
      {
        v122[0].m128i_i64[0] = (__int64)"120";
        v120[0].m128i_i64[0] = (__int64)"__OPENCL_C_VERSION__";
        v121 = 259;
        LOWORD(v128) = 257;
        v123 = 259;
        sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
        goto LABEL_51;
      }
      if ( v106 > 0x78 )
      {
        if ( v106 == 200 )
        {
          LOWORD(v128) = 257;
          v122[0].m128i_i64[0] = (__int64)"200";
          v120[0].m128i_i64[0] = (__int64)"__OPENCL_C_VERSION__";
          v123 = 259;
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, 259, 259, v124, v125, v126, v127, 1u);
          goto LABEL_51;
        }
        if ( v106 == 300 )
        {
          v122[0].m128i_i64[0] = (__int64)"300";
          LOWORD(v128) = 257;
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__OPENCL_C_VERSION__";
          v121 = 259;
          sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v61, v62, v124, v125, v126, v127, 1u);
          goto LABEL_51;
        }
      }
      else
      {
        if ( v106 == 100 )
        {
          LOWORD(v128) = 257;
          v122[0].m128i_i64[0] = (__int64)"100";
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__OPENCL_C_VERSION__";
          v121 = 259;
          goto LABEL_50;
        }
        if ( v106 == 110 )
        {
          LOWORD(v128) = 257;
          v123 = 259;
          v120[0].m128i_i64[0] = (__int64)"__OPENCL_C_VERSION__";
          v121 = 259;
          v122[0].m128i_i64[0] = (__int64)"110";
          sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, 1u);
          goto LABEL_51;
        }
      }
    }
    return sub_137B700();
  }
  LOWORD(v128) = 257;
  v123 = 259;
  v120[0].m128i_i64[0] = (__int64)"__hlsl_clang";
  v121 = 259;
  v122[0].m128i_i64[0] = (__int64)"1";
  sub_1039E30(a3, (__int64)v120, (__int64)v122, a4, a5, a6, v124, v125, v126, v127, 1u);
  LOWORD(v128) = 257;
  v19 = *((unsigned __int16 *)a2 + 102);
  v121 = 259;
  v122[0].m128i_i32[0] = v19;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__HLSL_VERSION";
  sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v20, v21, v124, v125, v126, v127, 1u);
  v120[0].m128i_i64[0] = (__int64)"__HLSL_202x";
  LOWORD(v128) = 257;
  v123 = 265;
  v121 = 259;
  v122[0].m128i_i32[0] = 2028;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v22, 259, v23, v124, v125, v126, v127, 1u);
  LOWORD(v128) = 257;
  v123 = 265;
  v122[0].m128i_i32[0] = 2029;
  v120[0].m128i_i64[0] = (__int64)"__HLSL_202y";
  v121 = 259;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v24, v25, 257, v124, v125, v126, v127, 1u);
  if ( (a2[60] & 4) != 0 )
  {
    v122[0].m128i_i64[0] = (__int64)"1";
    v120[0].m128i_i64[0] = (__int64)"__HLSL_ENABLE_16_BIT";
    LOWORD(v128) = 257;
    v123 = 259;
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, v26, v27, v28, v124, v125, v126, v127, 1u);
  }
  LOWORD(v128) = 257;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_VERTEX";
  v121 = 259;
  v122[0].m128i_i32[0] = 1;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v26, v27, v28, v124, v125, v126, v127, 1u);
  LOWORD(v128) = 257;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_PIXEL";
  v121 = 259;
  v122[0].m128i_i32[0] = 0;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v29, v30, v31, v124, v125, v126, v127, 1u);
  v123 = 265;
  LOWORD(v128) = 257;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_GEOMETRY";
  v121 = 259;
  v122[0].m128i_i32[0] = 2;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, 265, v32, v33, v124, v125, v126, v127, 1u);
  LOWORD(v128) = 257;
  v121 = 259;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_HULL";
  v122[0].m128i_i32[0] = 3;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v34, 265, 259, v124, v125, v126, v127, 1u);
  v122[0].m128i_i32[0] = 4;
  LOWORD(v128) = 257;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_DOMAIN";
  v121 = 259;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v35, v36, v37, v124, v125, v126, v127, 1u);
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_COMPUTE";
  v121 = 259;
  LOWORD(v128) = 257;
  v122[0].m128i_i32[0] = 5;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v38, v39, v40, v124, v125, v126, v127, 1u);
  LOWORD(v128) = 257;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_AMPLIFICATION";
  v121 = 259;
  v122[0].m128i_i32[0] = 14;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v41, v42, v43, v124, v125, v126, v127, 1u);
  LOWORD(v128) = 257;
  v121 = 259;
  v123 = 265;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_MESH";
  v122[0].m128i_i32[0] = 13;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, 259, v44, v45, v124, v125, v126, v127, 1u);
  v120[0].m128i_i64[0] = (__int64)"__SHADER_STAGE_LIBRARY";
  LOWORD(v128) = 257;
  v123 = 265;
  v121 = 259;
  v122[0].m128i_i32[0] = 6;
  sub_1039E30(a3, (__int64)v120, (__int64)v122, v46, 259, v47, v124, v125, v126, v127, 1u);
  v50 = *(_DWORD *)(a1 + 264) - 33;
  LOWORD(v128) = 257;
  v123 = 265;
  v121 = 259;
  if ( v50 > 0xF )
    v50 = 15;
  v122[0].m128i_i32[0] = v50;
  v120[0].m128i_i64[0] = (__int64)"__SHADER_TARGET_STAGE";
  result = (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, v48, v49, 257, v124, v125, v126, v127, v128);
  if ( *(_DWORD *)(a1 + 260) == 38 )
  {
    v107 = sub_22B7B00(a1 + 216);
    v122[0].m128i_i32[0] = v107;
    v120[0].m128i_i64[0] = (__int64)"__SHADER_TARGET_MAJOR";
    LOWORD(v128) = 257;
    v123 = 265;
    v121 = 259;
    sub_1039E30(a3, (__int64)v120, (__int64)v122, v108, 257, 265, v124, v125, v126, v127, 1u);
    v121 = 259;
    LOWORD(v128) = 257;
    v109 = 0;
    if ( v107 < 0 )
      v109 = HIDWORD(v107) & 0x7FFFFFFF;
    v123 = 265;
    v122[0].m128i_i32[0] = v109;
    v120[0].m128i_i64[0] = (__int64)"__SHADER_TARGET_MINOR";
    return (__int64)sub_1039E30(a3, (__int64)v120, (__int64)v122, v60, v61, v62, v124, v125, v126, v127, v128);
  }
  return result;
}
