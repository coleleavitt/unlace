__int64 __fastcall sub_22CB4C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdx
  _BYTE *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // rax
  void *v15; // rdi
  __int64 v16; // rax
  char **v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  char *v20; // r12
  __int64 *v21; // rdi
  __int64 v22; // rax
  void **v23; // rbp
  unsigned __int8 (__fastcall *v24)(__int64, void **); // rax
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, void **); // rax
  void *v27; // rax
  size_t v28; // rdx
  char *v29; // rax
  __int64 v30; // rdx
  void *v31; // rax
  size_t v32; // rdx
  char *v33; // r14
  unsigned __int64 v34; // r12
  int v35; // ebx
  unsigned __int64 v36; // rsi
  char *v37; // rdi
  char *v38; // rax
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rdi
  __int64 v41; // rbx
  char *v42; // rax
  void **v43; // rax
  char *v44; // r12
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rax
  _BYTE *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rdx
  size_t v52; // rdx
  __int64 v53; // rax
  _BYTE *v54; // rdi
  __int64 v55; // rbx
  __m128 v56; // xmm0
  __int64 v57; // rax
  size_t v58; // rdx
  size_t v59; // rdx
  __int64 v60; // rax
  __m128 v61; // xmm0
  char *v62; // [rsp+8h] [rbp-390h] BYREF
  unsigned __int64 v63; // [rsp+10h] [rbp-388h]
  char *v64; // [rsp+18h] [rbp-380h]
  char *v65; // [rsp+20h] [rbp-378h]
  void *ptr; // [rsp+28h] [rbp-370h]
  __int64 *v67; // [rsp+30h] [rbp-368h]
  __int64 v68; // [rsp+38h] [rbp-360h]
  unsigned __int8 v69; // [rsp+47h] [rbp-351h]
  void **v70; // [rsp+48h] [rbp-350h]
  _DWORD *v71; // [rsp+50h] [rbp-348h]
  char *v72; // [rsp+58h] [rbp-340h]
  unsigned __int64 v73; // [rsp+60h] [rbp-338h]
  __m128i *v74; // [rsp+68h] [rbp-330h]
  char *v75; // [rsp+70h] [rbp-328h]
  void **v76; // [rsp+78h] [rbp-320h]
  __m128i v77[2]; // [rsp+80h] [rbp-318h] BYREF
  char v78; // [rsp+A0h] [rbp-2F8h]
  void *v79; // [rsp+B0h] [rbp-2E8h] BYREF
  size_t v80; // [rsp+B8h] [rbp-2E0h]
  char *v81; // [rsp+C0h] [rbp-2D8h]
  __int16 v82; // [rsp+D0h] [rbp-2C8h]
  char v83; // [rsp+E0h] [rbp-2B8h] BYREF
  char v84; // [rsp+F0h] [rbp-2A8h] BYREF
  __int16 v85; // [rsp+100h] [rbp-298h]
  __int64 v86; // [rsp+110h] [rbp-288h] BYREF
  __int64 v87; // [rsp+118h] [rbp-280h]
  __int16 v88; // [rsp+130h] [rbp-268h]
  void *v89; // [rsp+140h] [rbp-258h] BYREF
  size_t v90; // [rsp+148h] [rbp-250h]
  _QWORD v91[2]; // [rsp+150h] [rbp-248h] BYREF
  char *v92; // [rsp+160h] [rbp-238h]
  __int64 v93; // [rsp+168h] [rbp-230h]
  const char *v94; // [rsp+170h] [rbp-228h]
  __int64 v95; // [rsp+178h] [rbp-220h]
  const char *v96; // [rsp+180h] [rbp-218h]
  __int64 v97; // [rsp+188h] [rbp-210h]
  const char *v98; // [rsp+190h] [rbp-208h]
  __int64 v99; // [rsp+198h] [rbp-200h]
  char *v100; // [rsp+1A0h] [rbp-1F8h]
  __int64 v101; // [rsp+1A8h] [rbp-1F0h]
  void *v102; // [rsp+1B0h] [rbp-1E8h] BYREF
  __int64 v103; // [rsp+1B8h] [rbp-1E0h]
  __int64 v104; // [rsp+1C0h] [rbp-1D8h] BYREF
  _BYTE src[24]; // [rsp+240h] [rbp-158h] BYREF
  __int64 v106; // [rsp+258h] [rbp-140h] BYREF
  unsigned __int8 v107; // [rsp+260h] [rbp-138h]

  v68 = a2;
  v71 = a3;
  sub_2290A40((__m128i *)src, "VCToolsInstallDir", 17);
  v69 = v107;
  if ( v107 )
  {
    v10 = *(_QWORD *)&src[8];
    v11 = *(_BYTE **)v68;
    if ( *(_BYTE **)src == &src[16] )
    {
      if ( *(_QWORD *)&src[8] )
      {
        if ( *(_QWORD *)&src[8] == 1 )
          *v11 = src[16];
        else
          memcpy(v11, *(const void **)src, *(size_t *)&src[8]);
        v10 = *(_QWORD *)&src[8];
        v11 = *(_BYTE **)v68;
      }
      *(_QWORD *)(v68 + 8) = v10;
      v11[v10] = 0;
      v11 = *(_BYTE **)src;
    }
    else
    {
      if ( v11 == (_BYTE *)(v68 + 16) )
      {
        v16 = v68;
        v62 = *(char **)&src[16];
        *(_QWORD *)v68 = *(_QWORD *)src;
        *(__m128 *)(v16 + 8) = _mm_loadh_ps((const double *)&v62);
      }
      else
      {
        v62 = *(char **)&src[16];
        v12 = v68;
        v13 = *(_QWORD *)(v68 + 16);
        *(_QWORD *)v68 = *(_QWORD *)src;
        *(__m128 *)(v12 + 8) = _mm_loadh_ps((const double *)&v62);
        if ( v11 )
        {
          *(_QWORD *)src = v11;
          *(_QWORD *)&src[16] = v13;
          goto LABEL_15;
        }
      }
      v11 = &src[16];
      *(_QWORD *)src = &src[16];
    }
LABEL_15:
    v14 = v71;
    *(_QWORD *)&src[8] = 0;
    *v11 = 0;
    *v14 = 1;
    if ( !v107 )
      return v69;
LABEL_16:
    v15 = *(void **)src;
    if ( *(_BYTE **)src == &src[16] )
      return v69;
    goto LABEL_17;
  }
  sub_2290A40((__m128i *)src, "VCINSTALLDIR", 12);
  v69 = v107;
  if ( v107 )
  {
    v5 = *(_QWORD *)&src[8];
    v6 = *(_BYTE **)v68;
    if ( *(_BYTE **)src == &src[16] )
    {
      if ( *(_QWORD *)&src[8] )
      {
        if ( *(_QWORD *)&src[8] == 1 )
          *v6 = src[16];
        else
          memcpy(v6, *(const void **)src, *(size_t *)&src[8]);
        v5 = *(_QWORD *)&src[8];
        v6 = *(_BYTE **)v68;
      }
      *(_QWORD *)(v68 + 8) = v5;
      v6[v5] = 0;
      v6 = *(_BYTE **)src;
    }
    else
    {
      v7 = v68;
      if ( v6 == (_BYTE *)(v68 + 16) )
      {
        v62 = *(char **)&src[16];
        *(_QWORD *)v68 = *(_QWORD *)src;
        *(__m128 *)(v7 + 8) = _mm_loadh_ps((const double *)&v62);
      }
      else
      {
        v62 = *(char **)&src[16];
        v8 = *(_QWORD *)(v68 + 16);
        *(_QWORD *)v68 = *(_QWORD *)src;
        *(__m128 *)(v7 + 8) = _mm_loadh_ps((const double *)&v62);
        if ( v6 )
        {
          *(_QWORD *)src = v6;
          *(_QWORD *)&src[16] = v8;
          goto LABEL_9;
        }
      }
      v6 = &src[16];
      *(_QWORD *)src = &src[16];
    }
LABEL_9:
    v9 = v71;
    *(_QWORD *)&src[8] = 0;
    *v6 = 0;
    *v9 = 0;
    if ( !v107 )
      return v69;
    goto LABEL_16;
  }
  v74 = v77;
  sub_2290A40(v77, "PATH", 4);
  if ( !v78 )
    return v69;
  v76 = &v102;
  v102 = &v104;
  v103 = 0x800000000LL;
  *(__m128i *)src = v77[0];
  sub_22476F0((char **)src, (__int64)&v102, 58, -1, 1);
  ptr = (char *)v102 + 16 * (unsigned int)v103;
  if ( v102 == ptr )
  {
LABEL_57:
    if ( ptr != v76 + 2 )
      free(ptr);
    if ( !v78 )
      return v69;
    v15 = (void *)v77[0].m128i_i64[0];
    if ( (__m128i *)v77[0].m128i_i64[0] == &v74[1] )
      return v69;
LABEL_17:
    operator delete(v15);
    return v69;
  }
  v17 = (char **)v102;
  v65 = &v83;
  v75 = &v84;
  while ( 1 )
  {
    v62 = *v17;
    v18 = (unsigned __int64)v17[1];
    v63 = v18;
    v19 = v18;
    if ( v18 )
      break;
LABEL_55:
    v17 += 2;
    if ( ptr == v17 )
    {
      ptr = v102;
      goto LABEL_57;
    }
  }
  v20 = *v17;
  v21 = &v106;
  *(_QWORD *)src = &v106;
  *(__m128i *)&src[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v64 = &v20[v18];
  v22 = 0;
  if ( v19 > 0x100 )
  {
    sub_2236E10((__int64)src, &v106, v19, 1);
    v22 = *(_QWORD *)&src[8];
    v21 = (__int64 *)(*(_QWORD *)&src[8] + *(_QWORD *)src);
  }
  if ( v20 != v64 )
  {
    memcpy(v21, v20, v19);
    v22 = *(_QWORD *)&src[8];
  }
  v23 = &v89;
  *(_QWORD *)&src[8] = v19 + v22;
  v79 = "cl.exe";
  v70 = &v79;
  LOWORD(v92) = 257;
  v88 = 257;
  v85 = 257;
  v82 = 259;
  v67 = &v86;
  sub_228A3B0(src, &v79, v65, &v86, &v89);
  v24 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 96LL);
  LOWORD(v92) = 261;
  v89 = *(void **)src;
  v90 = *(_QWORD *)&src[8];
  if ( !v24(a1, &v89) )
    goto LABEL_53;
  *(_QWORD *)&src[8] = 0;
  v25 = 0;
  if ( v19 > *(_QWORD *)&src[16] )
  {
    sub_2236E10((__int64)src, &v106, v19, 1);
    v25 = *(_QWORD *)&src[8];
  }
  if ( v20 != v64 )
  {
    memcpy((void *)(*(_QWORD *)src + v25), v20, v19);
    v25 = *(_QWORD *)&src[8];
  }
  v88 = 257;
  v85 = 257;
  v82 = 259;
  *(_QWORD *)&src[8] = v19 + v25;
  LOWORD(v92) = 257;
  v79 = (void *)"link.exe";
  sub_228A3B0(src, v70, v65, v67, &v89);
  v26 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 96LL);
  LOWORD(v92) = 261;
  v89 = *(void **)src;
  v90 = *(_QWORD *)&src[8];
  LOBYTE(v64) = v26(a1, &v89);
  if ( !(_BYTE)v64 )
  {
LABEL_53:
    if ( *(__int64 **)src != &v106 )
      free(*(void **)src);
    goto LABEL_55;
  }
  v72 = v62;
  v73 = v63;
  v27 = (void *)sub_228AA60((__int64)v62, v63, 0);
  v90 = v28;
  v89 = v27;
  if ( v28 != 3 || (unsigned int)sub_22462B0((__int64)&v89, (unsigned __int8 *)"bin", 3u) )
  {
    v29 = sub_228A4B0(v62, v63, 0);
    v73 = v30;
    v72 = v29;
    v31 = (void *)sub_228AA60((__int64)v29, v30, 0);
    v90 = v32;
    v89 = v31;
    if ( v32 != 3 || (unsigned int)sub_22462B0((__int64)&v89, (unsigned __int8 *)"bin", 3u) )
    {
      v89 = (void *)&byte_22F0C30;
      v94 = &byte_22F0C30;
      v96 = "MSVC";
      v98 = "Tools";
      v100 = "VC";
      v91[0] = "Host";
      v92 = "bin";
      v90 = 0;
      v91[1] = 4;
      v93 = 3;
      v95 = 0;
      v97 = 4;
      v99 = 5;
      v101 = 2;
      sub_2289790((__int64)v65, (__int64)v62, v63, 0);
      sub_22895F0((__int64)v67, (__int64)v62, v63);
      v63 = v19;
      v62 = (char *)&v102;
      v72 = v20;
      do
      {
        v33 = (char *)*v23;
        v34 = (unsigned __int64)v23[1];
        if ( (unsigned __int8)sub_22897C0((__int64)v65, (__int64)v67)
          || !(unsigned __int8)sub_2246340((__int64)v75, v33, v34) )
        {
          goto LABEL_53;
        }
        v23 += 2;
        sub_2289610((__int64)v65);
      }
      while ( v23 != (void **)v62 );
      v35 = 3;
      v36 = v63;
      v37 = v72;
      do
      {
        v38 = sub_228A4B0(v37, v36, 0);
        v37 = v38;
        v36 = v39;
        --v35;
      }
      while ( v35 );
      v79 = v70 + 2;
      sub_22C9310(v70, v38, (__int64)&v38[v39]);
      v40 = *(_BYTE **)v68;
      if ( v79 == v70 + 2 )
      {
        v52 = v80;
        if ( v80 )
        {
          if ( v80 == 1 )
            *v40 = (_BYTE)v81;
          else
            memcpy(v40, v79, v80);
          v52 = v80;
          v40 = *(_BYTE **)v68;
        }
        *(_QWORD *)(v68 + 8) = v52;
        v40[v52] = 0;
        v40 = v79;
        goto LABEL_50;
      }
      if ( v40 == (_BYTE *)(v68 + 16) )
      {
        v53 = v68;
        v62 = v81;
        *(_QWORD *)v68 = v79;
        *(__m128 *)(v53 + 8) = _mm_loadh_ps((const double *)&v62);
      }
      else
      {
        v62 = v81;
        v41 = v68;
        v42 = *(char **)(v68 + 16);
        *(_QWORD *)v68 = v79;
        *(__m128 *)(v41 + 8) = _mm_loadh_ps((const double *)&v62);
        if ( v40 )
        {
          v79 = v40;
          v81 = v42;
LABEL_50:
          v43 = v70;
          v80 = 0;
          *v40 = 0;
          if ( v79 != v43 + 2 )
            operator delete(v79);
          *v71 = 1;
          goto LABEL_81;
        }
      }
      v40 = v70 + 2;
      v79 = v70 + 2;
      goto LABEL_50;
    }
  }
  v44 = sub_228A4B0(v72, v73, 0);
  v46 = v45;
  v86 = sub_228AA60((__int64)v44, v45, 0);
  v87 = v47;
  v48 = v47;
  if ( v47 == 2 )
  {
    if ( (unsigned int)sub_22462B0((__int64)v67, (unsigned __int8 *)"VC", 2u) )
    {
      v48 = v87;
      goto LABEL_69;
    }
    v89 = v91;
    sub_22C9310(&v89, v44, (__int64)&v44[v46]);
    v54 = *(_BYTE **)v68;
    if ( v89 == v91 )
    {
      v59 = v90;
      if ( v90 )
      {
        if ( v90 == 1 )
          *v54 = v91[0];
        else
          memcpy(v54, v89, v90);
        v59 = v90;
        v54 = *(_BYTE **)v68;
      }
      *(_QWORD *)(v68 + 8) = v59;
      v54[v59] = 0;
      v54 = v89;
      goto LABEL_112;
    }
    v62 = (char *)v91[0];
    if ( v54 == (_BYTE *)(v68 + 16) )
    {
      v60 = v68;
      v61 = _mm_loadh_ps((const double *)&v62);
      *(_QWORD *)v68 = v89;
      *(__m128 *)(v60 + 8) = v61;
    }
    else
    {
      v55 = v68;
      v56 = _mm_loadh_ps((const double *)&v62);
      v57 = *(_QWORD *)(v68 + 16);
      *(_QWORD *)v68 = v89;
      *(__m128 *)(v55 + 8) = v56;
      if ( v54 )
      {
        v89 = v54;
        v91[0] = v57;
LABEL_112:
        v90 = 0;
        *v54 = 0;
        if ( v89 != v91 )
          operator delete(v89);
        *v71 = 0;
        goto LABEL_81;
      }
    }
    v54 = v91;
    v89 = v91;
    goto LABEL_112;
  }
LABEL_69:
  if ( v48 == 6 )
  {
    if ( !(unsigned int)sub_22462B0((__int64)v67, "x86ret", 6u) )
      goto LABEL_74;
    v48 = v87;
    if ( v87 == 6 )
    {
      if ( !(unsigned int)sub_22462B0((__int64)v67, "x86chk", 6u) )
        goto LABEL_74;
      v48 = v87;
    }
  }
  if ( v48 != 8
    || (unsigned int)sub_22462B0((__int64)v67, "amd64ret", 8u)
    && (v87 != 8 || (unsigned int)sub_22462B0((__int64)v67, "amd64chk", 8u)) )
  {
    goto LABEL_53;
  }
LABEL_74:
  v89 = v91;
  sub_22C9310(&v89, v44, (__int64)&v44[v46]);
  v49 = *(_BYTE **)v68;
  if ( v89 == v91 )
  {
    v58 = v90;
    if ( v90 )
    {
      if ( v90 == 1 )
        *v49 = v91[0];
      else
        memcpy(v49, v89, v90);
      v58 = v90;
      v49 = *(_BYTE **)v68;
    }
    *(_QWORD *)(v68 + 8) = v58;
    v49[v58] = 0;
    v49 = v89;
  }
  else
  {
    v50 = v68;
    if ( v49 == (_BYTE *)(v68 + 16) )
    {
      v62 = (char *)v91[0];
      *(_QWORD *)v68 = v89;
      *(__m128 *)(v50 + 8) = _mm_loadh_ps((const double *)&v62);
    }
    else
    {
      v62 = (char *)v91[0];
      v51 = *(_QWORD *)(v68 + 16);
      *(_QWORD *)v68 = v89;
      *(__m128 *)(v50 + 8) = _mm_loadh_ps((const double *)&v62);
      if ( v49 )
      {
        v89 = v49;
        v91[0] = v51;
        goto LABEL_78;
      }
    }
    v49 = v91;
    v89 = v91;
  }
LABEL_78:
  v90 = 0;
  *v49 = 0;
  if ( v89 != v91 )
    operator delete(v89);
  *v71 = 2;
LABEL_81:
  if ( *(__int64 **)src != &v106 )
    free(*(void **)src);
  if ( v102 != v76 + 2 )
    free(v102);
  if ( v78 && (__m128i *)v77[0].m128i_i64[0] != &v74[1] )
    operator delete((void *)v77[0].m128i_i64[0]);
  return (unsigned __int8)v64;
}
