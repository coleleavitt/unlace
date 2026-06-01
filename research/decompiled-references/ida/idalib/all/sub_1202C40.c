void __fastcall sub_1202C40(__int64 a1, __int64 *a2, __int64 a3)
{
  __m128i *v5; // r12
  __int64 *v6; // rax
  __int64 v7; // rax
  __m128i *v8; // rax
  const char *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rdx
  const char *v14; // r15
  __int64 v15; // rdi
  char v16; // al
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r12
  _QWORD *v20; // r14
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdi
  char v24; // al
  const char **v25; // rax
  size_t v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __m128i *v31; // rdx
  __m128i *v32; // r15
  __int64 *v33; // rcx
  __int64 v34; // rdi
  char v35; // al
  char v36; // al
  const char **v37; // rax
  const char *v38; // r15
  __m128i *v39; // rax
  __m128i *v40; // rax
  __int64 v41; // rcx
  _OWORD *v42; // rdi
  __int64 v43; // rax
  const char **v44; // rax
  const char *v45; // r14
  size_t v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r12
  const char **v51; // rax
  const char *v52; // r14
  const char *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 *v58; // rdx
  __m128i *v59; // rcx
  __int64 v60; // rdi
  char v61; // al
  __int32 v62; // eax
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  unsigned int v65; // r14d
  unsigned __int64 v66; // rax
  unsigned int v67; // edx
  __m128i *v68; // rax
  __int64 v69; // rcx
  __m128i *v70; // rax
  __int64 v71; // rcx
  __m128i *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // edx
  signed __int64 v76; // rdx
  char *v77; // rsi
  _BYTE *v78; // rax
  signed __int64 v79; // rdx
  __m128 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r12
  __m128i *v84; // r12
  __m128i *v85; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v86; // [rsp+8h] [rbp-110h]
  __m128i *v87; // [rsp+10h] [rbp-108h]
  char *v88; // [rsp+18h] [rbp-100h]
  __m128i v89[2]; // [rsp+20h] [rbp-F8h] BYREF
  void *v90[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v91; // [rsp+50h] [rbp-C8h] BYREF
  void *v92[2]; // [rsp+60h] [rbp-B8h] BYREF
  _OWORD v93[2]; // [rsp+70h] [rbp-A8h] BYREF
  __m128 v94; // [rsp+90h] [rbp-88h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-78h]
  __int16 v96; // [rsp+B0h] [rbp-68h]

  v5 = *(__m128i **)(a1 + 24);
  v6 = (__int64 *)v5->m128i_i64[1];
  v87 = v89;
  v85 = v5 + 110;
  v86 = v6;
  sub_11C8180(v89, v6, (__int64)a2, (__m128i *)v5[110].m128i_i32, 0);
  if ( v89[0].m128i_i64[1] )
  {
    v7 = *(unsigned int *)(a3 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-target-cpu";
    v8 = v87;
    ++*(_DWORD *)(a3 + 8);
    v96 = 260;
    v94.m128_u64[0] = (unsigned __int64)v8;
    v9 = (const char *)sub_10DA6C0((__int64)a2, (__int64)&v94);
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v88 = (char *)v9;
      sub_2237220(a3, a3 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(a3 + 8);
      v9 = v88;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = v9;
    ++*(_DWORD *)(a3 + 8);
  }
  sub_11BFAE0(v86, *(_QWORD *)(a1 + 24), (__int64)a2, a3, (__int64)v85);
  switch ( v5[3].m128i_i32[0] )
  {
    case 3:
      sub_11CCDF0(v86, v85, a2, a3, nullptr, nullptr);
      sub_11FCF10(a1, a2, a3);
      break;
    case 0xE:
      sub_11CCDF0(v86, v85, a2, a3, nullptr, nullptr);
      sub_11FD5C0(a1, (__int64)a2, a3);
      break;
    case 0x15:
    case 0x17:
    case 0x18:
      sub_11FE0B0(a1, (__int64)a2, a3);
      break;
    case 0x19:
    case 0x1A:
      sub_11CCDF0(v86, v85, a2, a3, nullptr, nullptr);
      sub_11FFA70(a1, a2, a3);
      break;
    case 0x1C:
      sub_11CCDF0(v86, v85, a2, a3, nullptr, nullptr);
      sub_11FFDA0(a1, a2, a3);
      break;
    case 0x26:
      sub_11CCDF0(v86, v85, a2, a3, nullptr, nullptr);
      sub_11FEE30(a1, a2, a3);
      break;
    default:
      sub_11CCDF0(v86, v85, a2, a3, nullptr, nullptr);
      break;
  }
  v94.m128_i32[0] = 1924;
  v11 = sub_21B6DA0(a2, &v94, 1);
  v12 = a2[1];
  v13 = (const char *)(v12 + 8LL * (unsigned int)v11);
  v14 = (const char *)(v12 + 8 * HIDWORD(v11));
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        v88 = (char *)v13;
        v16 = sub_21B9810(v15, 1924);
        v13 = v88;
        if ( v16 )
          break;
      }
      v13 += 8;
      if ( v14 == v13 )
        goto LABEL_13;
    }
    if ( v88 != v14 )
    {
      do
      {
        v21 = *(_QWORD *)v13;
        v22 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
        if ( !v22 )
          v22 = *(_QWORD *)v13;
        v13 += 8;
        *(_BYTE *)(v22 + 44) |= 1u;
        if ( v13 == v14 )
          break;
        while ( 1 )
        {
          v23 = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 )
          {
            v88 = (char *)v13;
            v24 = sub_21B9810(v23, 1924);
            v13 = v88;
            if ( v24 )
              break;
          }
          v13 += 8;
          if ( v14 == v13 )
            goto LABEL_34;
        }
      }
      while ( v14 != v88 );
LABEL_34:
      v25 = *(const char ***)(v21 + 48);
      if ( *v25 )
      {
        v88 = (char *)*v25;
        v26 = strlen(v88);
        if ( v26 == 4 )
        {
          if ( *(_DWORD *)v88 != 1280136787 || (unsigned int)(v5[112].m128i_i32[0] - 37) <= 1 )
            goto LABEL_38;
          sub_FC70B0((__int64)&v94, *v86, 0, 495);
          v76 = 4;
          v77 = v88;
LABEL_127:
          sub_AEC220((unsigned __int8 **)&v94, v77, v76);
          v78 = (_BYTE *)sub_22B7480(v85);
          sub_AEC220((unsigned __int8 **)&v94, v78, v79);
          sub_AEA040((__int64)&v94);
          goto LABEL_38;
        }
        if ( v26 == 7 )
        {
          if ( *(_DWORD *)v88 == 1279544641 && *((_WORD *)v88 + 2) == 16969 && v88[6] == 77 )
          {
            if ( (unsigned int)(v5[112].m128i_i32[0] - 37) <= 1 )
              goto LABEL_38;
            goto LABEL_135;
          }
          if ( *(_DWORD *)v88 == 1835166060 && *((_WORD *)v88 + 2) == 25974 && v88[6] == 99 )
          {
            v62 = v5[112].m128i_i32[0];
            if ( (unsigned int)(v62 - 3) > 1 && (unsigned int)(v62 - 37) > 1 )
            {
LABEL_135:
              sub_FC70B0((__int64)&v94, *v86, 0, 495);
              v76 = 7;
              v77 = v88;
              goto LABEL_127;
            }
          }
        }
        else if ( v26 == 5
               && (*(_DWORD *)v88 == 1162169427 && v88[4] == 70 || *(_DWORD *)v88 == 1349349953 && v88[4] == 76)
               && (unsigned int)(v5[112].m128i_i32[0] - 3) > 1 )
        {
          sub_FC70B0((__int64)&v94, *v86, 0, 495);
          v76 = 5;
          v77 = v88;
          goto LABEL_127;
        }
      }
LABEL_38:
      v27 = v5[112].m128i_u32[3];
      if ( (unsigned int)v27 <= 0x1F )
      {
        v28 = 4160750114LL;
        if ( _bittest64(&v28, v27) )
        {
          v94.m128_u64[0] = 0xBDD00000BF0LL;
          v29 = sub_21B6DA0(a2, &v94, 2);
          v30 = a2[1];
          v95 = 0xBDD00000BF0LL;
          v31 = (__m128i *)(v30 + 8LL * (unsigned int)v29);
          v32 = (__m128i *)(v30 + 8 * HIDWORD(v29));
          v85 = v32;
          v94 = _mm_loadh_ps((const double *)&v85);
          if ( v31 == v32 )
            goto LABEL_45;
          while ( 1 )
          {
            v33 = (__int64 *)v31->m128i_i64[0];
            if ( v31->m128i_i64[0] )
            {
              v34 = v31->m128i_i64[0];
              v85 = v31;
              v86 = v33;
              v35 = sub_21B9810(v34, 3056);
              v31 = v85;
              if ( v35 )
                break;
              v36 = sub_21B9810(v86, 3037);
              v31 = v85;
              if ( v36 )
                break;
            }
            v31 = (__m128i *)((char *)v31 + 8);
            v94.m128_u64[0] = (unsigned __int64)v31;
            if ( v32 == v31 )
              goto LABEL_45;
          }
          v85 = v32;
          v95 = 0xBDD00000BF0LL;
          v94 = _mm_loadh_ps((const double *)&v85);
          if ( v32 == v31 )
          {
LABEL_45:
            v37 = *(const char ***)(v21 + 48);
            v38 = *v37;
            if ( *v37 && j__strlen(*v37) == 10 && *(_QWORD *)v38 == 0x6172656C65636341LL && *((_WORD *)v38 + 4) == 25972 )
            {
              sub_10DC5D0(a3, (__int64)"-framework");
              sub_10DC5D0(a3, (__int64)"Accelerate");
            }
          }
          else
          {
            do
            {
              v57 = v31->m128i_i64[0];
              if ( *(_QWORD *)(v31->m128i_i64[0] + 16) )
                v57 = *(_QWORD *)(v31->m128i_i64[0] + 16);
              v58 = &v31->m128i_i64[1];
              *(_BYTE *)(v57 + 44) |= 1u;
              v94.m128_u64[0] = (unsigned __int64)v58;
              if ( v58 == (__int64 *)v32 )
                break;
              while ( 1 )
              {
                v59 = (__m128i *)*v58;
                if ( *v58 )
                {
                  v60 = *v58;
                  v86 = v58;
                  v85 = v59;
                  if ( (unsigned __int8)sub_21B9810(v60, 3056) )
                    break;
                  v61 = sub_21B9810(v85, 3037);
                  v58 = v86;
                  if ( v61 )
                    break;
                }
                v94.m128_u64[0] = (unsigned __int64)++v58;
                if ( v32 == (__m128i *)v58 )
                  goto LABEL_50;
              }
              v31 = (__m128i *)v94.m128_u64[0];
            }
            while ( v32 != (__m128i *)v94.m128_u64[0] );
          }
        }
      }
LABEL_50:
      sub_21B5A40(v21, a2, a3);
      if ( v5[112].m128i_i32[3] != 15 )
        goto LABEL_14;
      goto LABEL_51;
    }
  }
LABEL_13:
  if ( v5[112].m128i_i32[3] != 15 )
    goto LABEL_14;
LABEL_51:
  if ( v5[113].m128i_i32[0] == 27 )
  {
    sub_112D250((__int64)v90, (__int64)v5);
    v39 = (__m128i *)sub_99BDC0(v90, 0, 0, "--dependent-lib=", 0x10u);
    v92[0] = v93;
    if ( (__m128i *)v39->m128i_i64[0] == &v39[1] )
    {
      v93[0] = _mm_loadu_si128(v39 + 1);
    }
    else
    {
      v92[0] = (void *)v39->m128i_i64[0];
      *(_QWORD *)&v93[0] = v39[1].m128i_i64[0];
    }
    v92[1] = (void *)v39->m128i_i64[1];
    v39->m128i_i64[0] = (__int64)v39[1].m128i_i64;
    v39->m128i_i64[1] = 0;
    v39[1].m128i_i8[0] = 0;
    v96 = 260;
    v94.m128_u64[0] = (unsigned __int64)v92;
    v40 = (__m128i *)sub_10DA6C0((__int64)a2, (__int64)&v94);
    v41 = *(unsigned int *)(a3 + 8);
    if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v85 = v40;
      sub_2237220(a3, a3 + 16, v41 + 1, 8);
      v41 = *(unsigned int *)(a3 + 8);
      v40 = v85;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v41) = v40;
    v42 = v92[0];
    ++*(_DWORD *)(a3 + 8);
    if ( v42 != v93 )
      operator delete(v42);
    if ( v90[0] != &v91 )
      operator delete(v90[0]);
    v43 = sub_10DCD30((__int64)a2, 0x3D6u);
    if ( v43 )
    {
      v44 = *(const char ***)(v43 + 48);
      v45 = *v44;
      if ( *v44 )
      {
        v46 = j__strlen(*v44);
        if ( v46 != 6 )
        {
          if ( v46 == 10 )
          {
            if ( *(_QWORD *)v45 == 0x645F636974617473LL && *((_WORD *)v45 + 4) == 26466 )
            {
              sub_10DC5D0(a3, (__int64)"-D_MT");
              sub_10DC5D0(a3, (__int64)"-D_DEBUG");
              sub_10DC5D0(a3, (__int64)"--dependent-lib=libcmtd");
              sub_10DC5D0(a3, (__int64)"--dependent-lib=flang_rt.runtime.static_dbg.lib");
LABEL_106:
              v63 = (*(__int64 (__fastcall **)(__m128i *, _QWORD, __int64 *))(v5->m128i_i64[0] + 712))(v5, 0, a2);
              v65 = 10000000 * v63;
              if ( v63 < 0 )
                v65 += 100000 * (HIDWORD(v63) & 0x7FFFFFFF);
              v66 = v64 >> 24;
              v67 = v65 + (v64 & 0x7FFFFFFF);
              v96 = 2307;
              if ( (v66 & 0x80u) != 0LL )
                v65 = v67;
              v94.m128_u64[0] = (unsigned __int64)"-D_MSC_VER=";
              LODWORD(v92[0]) = v65 / 0x186A0;
              v95 = (__int64)v92[0];
              v68 = (__m128i *)sub_10DA6C0((__int64)a2, (__int64)&v94);
              v69 = *(unsigned int *)(a3 + 8);
              if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
              {
                v85 = v68;
                sub_2237220(a3, a3 + 16, v69 + 1, 8);
                v69 = *(unsigned int *)(a3 + 8);
                v68 = v85;
              }
              *(_QWORD *)(*(_QWORD *)a3 + 8 * v69) = v68;
              ++*(_DWORD *)(a3 + 8);
              LODWORD(v92[0]) = v65;
              v94.m128_u64[0] = (unsigned __int64)"-D_MSC_FULL_VER=";
              v96 = 2307;
              v95 = (__int64)v92[0];
              v70 = (__m128i *)sub_10DA6C0((__int64)a2, (__int64)&v94);
              v71 = *(unsigned int *)(a3 + 8);
              if ( v71 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
              {
                v85 = v70;
                sub_2237220(a3, a3 + 16, v71 + 1, 8);
                v71 = *(unsigned int *)(a3 + 8);
                v70 = v85;
              }
              *(_QWORD *)(*(_QWORD *)a3 + 8 * v71) = v70;
              ++*(_DWORD *)(a3 + 8);
              v96 = 259;
              v94.m128_u64[0] = (unsigned __int64)"-D_WIN32";
              v72 = (__m128i *)sub_10DA6C0((__int64)a2, (__int64)&v94);
              v73 = *(unsigned int *)(a3 + 8);
              if ( v73 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
              {
                v85 = v72;
                sub_2237220(a3, a3 + 16, v73 + 1, 8);
                v73 = *(unsigned int *)(a3 + 8);
                v72 = v85;
              }
              *(_QWORD *)(*(_QWORD *)a3 + 8 * v73) = v72;
              v74 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
              v75 = v5[3].m128i_i32[0] - 3;
              *(_DWORD *)(a3 + 8) = v74;
              if ( v75 > 2 )
              {
                v84 = v5 + 1;
                if ( (unsigned __int8)sub_22B7EC0(v84) )
                {
                  sub_10DC5D0(a3, (__int64)"-D_M_IX86=600");
                }
                else
                {
                  sub_22B7EA0(v84);
                  sub_10DC5D0(a3, (__int64)"-D_M_X64=100");
                }
              }
              else
              {
                if ( v74 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
                {
                  sub_2237220(a3, a3 + 16, v74 + 1, 8);
                  v74 = *(unsigned int *)(a3 + 8);
                }
                *(_QWORD *)(*(_QWORD *)a3 + 8 * v74) = "-D_M_ARM64=1";
                ++*(_DWORD *)(a3 + 8);
              }
              goto LABEL_14;
            }
          }
          else if ( v46 == 3 )
          {
            if ( *(_WORD *)v45 == 27748 && v45[2] == 108 )
            {
              sub_10DC5D0(a3, (__int64)"-D_MT");
              sub_10DC5D0(a3, (__int64)"-D_DLL");
              sub_10DC5D0(a3, (__int64)"--dependent-lib=msvcrt");
              sub_10DC5D0(a3, (__int64)"--dependent-lib=flang_rt.runtime.dynamic.lib");
              goto LABEL_106;
            }
          }
          else if ( v46 == 7 && *(_DWORD *)v45 == 1600941156 && *((_WORD *)v45 + 2) == 25188 && v45[6] == 103 )
          {
            sub_10DC5D0(a3, (__int64)"-D_MT");
            sub_10DC5D0(a3, (__int64)"-D_DEBUG");
            sub_10DC5D0(a3, (__int64)"-D_DLL");
            sub_10DC5D0(a3, (__int64)"--dependent-lib=msvcrtd");
            sub_10DC5D0(a3, (__int64)"--dependent-lib=flang_rt.runtime.dynamic_dbg.lib");
            goto LABEL_106;
          }
        }
      }
    }
    sub_10DC5D0(a3, (__int64)"-D_MT");
    sub_10DC5D0(a3, (__int64)"--dependent-lib=libcmt");
    sub_10DC5D0(a3, (__int64)"--dependent-lib=flang_rt.runtime.static.lib");
    goto LABEL_106;
  }
LABEL_14:
  v94.m128_i32[0] = 2916;
  v17 = sub_21B6DA0(a2, &v94, 1);
  v18 = a2[1];
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  if ( v19 != v20 )
  {
    while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 2916) )
    {
      if ( v20 == ++v19 )
        goto LABEL_18;
    }
    if ( v20 != v19 )
    {
      do
      {
        v47 = *v19;
        v48 = *(_QWORD *)(*v19 + 16LL);
        if ( !v48 )
          v48 = *v19;
        ++v19;
        *(_BYTE *)(v48 + 44) |= 1u;
        if ( v19 == v20 )
          break;
        while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 2916) )
        {
          if ( v20 == ++v19 )
            goto LABEL_76;
        }
      }
      while ( v20 != v19 );
LABEL_76:
      v49 = *(unsigned int *)(a3 + 8);
      if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v49 + 1, 8);
        v49 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v49) = "-tune-cpu";
      v50 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      v51 = *(const char ***)(v47 + 48);
      *(_DWORD *)(a3 + 8) = v50;
      v52 = *v51;
      if ( *v51 )
      {
        v53 = *v51;
        if ( strlen(*v51) == 6 && *(_DWORD *)v52 == 1769234798 && *((_WORD *)v52 + 2) == 25974 )
        {
          v80.m128_u64[0] = sub_22A33B0(v53, "-tune-cpu", v54, v55, v56);
          v96 = 261;
          v94 = v80;
          v81 = sub_10DA6C0((__int64)a2, (__int64)&v94);
          v82 = *(unsigned int *)(a3 + 8);
          v83 = v81;
          if ( v82 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
          {
            sub_2237220(a3, a3 + 16, v82 + 1, 8);
            v82 = *(unsigned int *)(a3 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v82) = v83;
          ++*(_DWORD *)(a3 + 8);
          goto LABEL_18;
        }
      }
      else
      {
        v52 = nullptr;
      }
      if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v50 + 1, 8);
        v50 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v50) = v52;
      ++*(_DWORD *)(a3 + 8);
    }
  }
LABEL_18:
  v94.m128_u64[0] = 0x5BF00000787LL;
  sub_21B6650(a2, a3, &v94, 2);
  if ( (__m128i *)v89[0].m128i_i64[0] != &v87[1] )
    operator delete((void *)v89[0].m128i_i64[0]);
}
