void __fastcall sub_11C01D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  size_t v7; // rax
  __int64 *v8; // r12
  __int64 *i; // r13
  int v10; // edx
  __int64 *v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rcx
  void **v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // r13d
  bool v20; // cf
  char *v21; // rax
  const char *v22; // r15
  size_t v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rcx
  unsigned int v30; // r13d
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r12
  _QWORD *v34; // r14
  __int64 v35; // rax
  const char **v36; // rax
  _QWORD *v37; // rbx
  char *v38; // rdx
  char *v39; // r13
  void *v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rax
  size_t v43; // rax
  _BYTE *v44; // r8
  __int64 v45; // r13
  const __m128i *v46; // r15
  const __m128i *v47; // r13
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // ecx
  void **v51; // rax
  unsigned __int64 v52; // rbx
  size_t v53; // r14
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  char *v56; // r15
  char *v57; // r14
  _BYTE *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // rax
  __m128i v63; // [rsp+30h] [rbp-378h] BYREF
  __int64 v64; // [rsp+40h] [rbp-368h]
  char *v65; // [rsp+48h] [rbp-360h]
  __int64 v66; // [rsp+50h] [rbp-358h]
  void **v67; // [rsp+58h] [rbp-350h]
  __int64 v68; // [rsp+60h] [rbp-348h]
  size_t v69; // [rsp+68h] [rbp-340h]
  void *v70[2]; // [rsp+70h] [rbp-338h] BYREF
  __int64 v71; // [rsp+80h] [rbp-328h] BYREF
  void *v72[4]; // [rsp+90h] [rbp-318h] BYREF
  char v73; // [rsp+B0h] [rbp-2F8h]
  _QWORD v74[4]; // [rsp+C0h] [rbp-2E8h] BYREF
  __int16 v75; // [rsp+E0h] [rbp-2C8h]
  _QWORD v76[4]; // [rsp+F0h] [rbp-2B8h] BYREF
  __int16 v77; // [rsp+110h] [rbp-298h]
  __m128i s; // [rsp+120h] [rbp-288h] BYREF
  const char *v79; // [rsp+130h] [rbp-278h]
  size_t v80; // [rsp+138h] [rbp-270h]
  __int16 v81; // [rsp+140h] [rbp-268h]
  __m128 v82; // [rsp+150h] [rbp-258h] BYREF
  int v83; // [rsp+160h] [rbp-248h]
  __int16 v84; // [rsp+170h] [rbp-238h]
  void *v85; // [rsp+1A0h] [rbp-208h] BYREF
  __int64 v86; // [rsp+1A8h] [rbp-200h]
  _BYTE v87[128]; // [rsp+1B0h] [rbp-1F8h] BYREF
  void *v88; // [rsp+230h] [rbp-178h] BYREF
  __m128i si128; // [rsp+238h] [rbp-170h]
  _BYTE v90[136]; // [rsp+248h] [rbp-160h] BYREF
  _BYTE ptr[24]; // [rsp+2D0h] [rbp-D8h] BYREF
  _WORD v92[96]; // [rsp+2E8h] [rbp-C0h] BYREF

  v63.m128i_i64[1] = a1;
  v64 = a2;
  v68 = a3;
  v85 = v87;
  v86 = 0x800000000LL;
  v7 = j__strlen("LIBRARY_PATH");
  v67 = v72;
  sub_2290A40(v72, "LIBRARY_PATH", v7);
  if ( v73 )
  {
    *(_QWORD *)&ptr[8] = 0x800000000LL;
    *(_QWORD *)ptr = &ptr[16];
    strcpy(s.m128i_i8, ":");
    v43 = j__strlen(s.m128i_i8);
    sub_2244850(v72[0], v72[1], ptr, &s, v43);
    v44 = *(_BYTE **)ptr;
    v45 = 16LL * *(unsigned int *)&ptr[8];
    if ( *(_QWORD *)ptr + v45 != *(_QWORD *)ptr )
    {
      v46 = *(const __m128i **)ptr;
      v47 = (const __m128i *)(*(_QWORD *)ptr + v45);
      do
      {
        v52 = 0;
        v82 = (__m128)_mm_loadu_si128(v46);
        v53 = j__strlen(asc_22E1692);
        v54 = sub_2246FB0(&v82, asc_22E1692, v53, 0);
        v55 = v82.m128_i64[1];
        if ( v54 < v82.m128_u64[1] )
        {
          v55 = v54;
          v52 = v82.m128_u64[1] - v54;
        }
        v88 = (void *)(v82.m128_u64[0] + v55);
        si128.m128i_i64[0] = v52;
        v48 = sub_2247130(&v88, asc_22E1692, v53, -1) + 1;
        if ( v48 > si128.m128i_i64[0] )
          v48 = si128.m128i_i64[0];
        v49 = v48 + si128.m128i_i64[0] - v52;
        if ( v49 > si128.m128i_i64[0] )
          v49 = si128.m128i_i64[0];
        v50 = v86;
        if ( HIDWORD(v86) <= (unsigned int)v86 )
        {
          sub_111E070((__int64)&v85, (__int64)v88, v49);
        }
        else
        {
          v51 = (void **)((char *)v85 + 16 * (unsigned int)v86);
          *v51 = v88;
          v51[1] = (void *)v49;
          LODWORD(v86) = v50 + 1;
        }
        ++v46;
      }
      while ( v47 != v46 );
      v44 = *(_BYTE **)ptr;
    }
    if ( v44 != &ptr[16] )
      free(v44);
  }
  v8 = *(__int64 **)(a7 + 624);
  for ( i = &v8[4 * *(unsigned int *)(a7 + 632)]; i != v8; v8 += 4 )
  {
    v10 = v86;
    if ( HIDWORD(v86) <= (unsigned int)v86 )
    {
      sub_111E070((__int64)&v85, *v8, v8[1]);
    }
    else
    {
      v11 = (__int64 *)((char *)v85 + 16 * (unsigned int)v86);
      *v11 = *v8;
      v11[1] = v8[1];
      LODWORD(v86) = v10 + 1;
    }
  }
  v12 = *(_BYTE **)(v63.m128i_i64[1] + 104);
  v13 = *(_QWORD *)(v63.m128i_i64[1] + 112);
  v88 = v90;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(&v88, v12, &v12[v13]);
  v92[4] = 257;
  v82.m128_u64[0] = a6;
  s.m128i_i64[0] = (__int64)"lib";
  v76[0] = "..";
  v84 = 260;
  v81 = 259;
  v77 = 259;
  sub_228A3B0(&v88, v76, &s, &v82, ptr);
  v14 = v86;
  if ( HIDWORD(v86) <= (unsigned int)v86 )
  {
    sub_111E070((__int64)&v85, (__int64)v88, si128.m128i_i64[0]);
  }
  else
  {
    v15 = si128.m128i_i64[0];
    v16 = (void **)((char *)v85 + 16 * (unsigned int)v86);
    *v16 = v88;
    v16[1] = (void *)v15;
    LODWORD(v86) = v14 + 1;
  }
  v17 = *(_DWORD *)(a6 + 32);
  if ( v17 == 26 )
  {
    v19 = 2193;
    v65 = (char *)"amdgpu";
    v22 = "amdgpu";
  }
  else
  {
    v18 = v17 - 41;
    v19 = 2195 - (v18 < 2);
    v20 = v18 < 2;
    v21 = "spirv";
    if ( v20 )
      v21 = "nvptx";
    v65 = v21;
    v22 = v21;
  }
  v23 = j__strlen(v22);
  v82.m128_u64[0] = (unsigned __int64)".bc";
  s.m128i_i64[0] = (__int64)"libomptarget-";
  v84 = 259;
  v81 = 1283;
  v69 = v23;
  v80 = v23;
  v79 = v22;
  sub_A41580((__m128i *)ptr, &s, (const __m128i *)&v82, 1283, v24, v25);
  sub_2253560(v70, ptr);
  *(_DWORD *)ptr = v19;
  v26 = sub_21B6DA0(v64, ptr, 1);
  v27 = *(_QWORD *)(v64 + 8);
  *(_DWORD *)&ptr[16] = v19;
  v63.m128i_i64[0] = v27 + 8 * HIDWORD(v26);
  v28 = _mm_loadl_epi64(&v63);
  v66 = v27 + 8LL * (unsigned int)v26;
  *(__m128i *)ptr = _mm_unpacklo_epi64(v28, v28);
  sub_10DFFA0((__int64)ptr);
  v83 = v19;
  v82 = _mm_loadh_ps((const double *)v63.m128i_i64);
  sub_10DFFA0((__int64)&v82);
  v29 = v82.m128_u64[0];
  v30 = v83;
  v66 = v82.m128_u64[1] - 16;
  if ( v82.m128_u64[0] == *(_QWORD *)ptr )
  {
    v56 = (char *)v85 + 16 * (unsigned int)v86;
    v57 = (char *)v85;
    if ( v85 == v56 )
    {
LABEL_62:
      sub_FC70B0((__int64)ptr, *(_QWORD *)v63.m128i_i64[1], 0, 451);
      sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v70[0], (signed __int64)v70[1]);
      sub_AEC220((unsigned __int8 **)ptr, v65, v69);
      sub_AEA040((__int64)ptr);
    }
    else
    {
      while ( 1 )
      {
        v58 = *(_BYTE **)v57;
        v59 = *((_QWORD *)v57 + 1);
        *(_QWORD *)ptr = v92;
        *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        sub_A1FE50(ptr, v58, &v58[v59]);
        v84 = 257;
        v81 = 257;
        v77 = 257;
        v75 = 260;
        v74[0] = v70;
        sub_228A3B0(ptr, v74, v76, &s, &v82);
        v84 = 261;
        v82 = *(__m128 *)ptr;
        if ( !(unsigned int)sub_228C1E0(&v82, 0) )
          break;
        if ( *(_WORD **)ptr == v92 )
        {
          v57 += 16;
          if ( v56 == v57 )
            goto LABEL_62;
        }
        else
        {
          free(*(void **)ptr);
          v57 += 16;
          if ( v56 == v57 )
            goto LABEL_62;
        }
      }
      v60 = v68;
      sub_10DC5D0(v68, (__int64)"-mlink-builtin-bitcode");
      v84 = 261;
      v82 = *(__m128 *)ptr;
      v61 = sub_10DA6C0(v64, (__int64)&v82);
      sub_10DC5D0(v60, v61);
      v40 = *(void **)ptr;
      if ( *(_WORD **)ptr != v92 )
        goto LABEL_29;
    }
  }
  else
  {
    v63.m128i_i64[0] = (__int64)ptr;
    v31 = v82.m128_i64[1];
    v32 = *(_QWORD *)ptr;
    do
    {
      v33 = *(_QWORD *)v29;
      v34 = (_QWORD *)(v29 + 8);
      v35 = *(_QWORD *)(*(_QWORD *)v29 + 16LL);
      if ( !v35 )
        v35 = *(_QWORD *)v29;
      *(_BYTE *)(v35 + 44) |= 1u;
      if ( v34 == (_QWORD *)v31 )
      {
LABEL_21:
        v29 = v31;
      }
      else if ( v30 )
      {
        while ( !*v34 || !(unsigned __int8)sub_21B9810(*v34, v30) )
        {
          if ( (_QWORD *)v31 == ++v34 )
            goto LABEL_21;
        }
        v29 = (__int64)v34;
      }
      else
      {
        v29 = (__int64)&v34[((unsigned __int64)(v66 - v29) >> 3) + 1];
      }
    }
    while ( v32 != v29 );
    v36 = *(const char ***)(v33 + 48);
    v37 = (_QWORD *)v63.m128i_i64[0];
    v38 = nullptr;
    v39 = (char *)*v36;
    if ( *v36 )
      v38 = &v39[j__strlen(*v36)];
    *(_QWORD *)ptr = v37 + 3;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(v37, v39, v38);
    v81 = 261;
    s = *(__m128i *)ptr;
    if ( !(unsigned int)sub_228C1E0(&s, 0) )
    {
      v84 = 261;
      v82 = *(__m128 *)ptr;
      if ( !(unsigned int)sub_228B230(&v82, v76) )
      {
        if ( LOBYTE(v76[0]) )
        {
          v84 = 257;
          v81 = 257;
          v77 = 257;
          v75 = 260;
          v74[0] = v70;
          sub_228A3B0(v37, v74, v76, &s, &v82);
        }
      }
    }
    v84 = 261;
    v82 = *(__m128 *)ptr;
    if ( (unsigned int)sub_228C1E0(&v82, 0) )
    {
      sub_FC70B0((__int64)&v82, *(_QWORD *)v63.m128i_i64[1], 0, 449);
      sub_AEC220((unsigned __int8 **)&v82, *(_BYTE **)ptr, *(signed __int64 *)&ptr[8]);
      sub_AEA040((__int64)&v82);
    }
    else
    {
      v41 = v68;
      sub_10DC5D0(v68, (__int64)"-mlink-builtin-bitcode");
      v82 = *(__m128 *)ptr;
      v84 = 261;
      v42 = sub_10DA6C0(v64, (__int64)&v82);
      sub_10DC5D0(v41, v42);
    }
    v40 = *(void **)ptr;
    if ( *(_QWORD **)ptr != v37 + 3 )
LABEL_29:
      free(v40);
  }
  if ( v70[0] != &v71 )
    operator delete(v70[0]);
  if ( v88 != v90 )
    free(v88);
  if ( v73 && v72[0] != v67 + 2 )
    operator delete(v72[0]);
  if ( v85 != v87 )
    free(v85);
}
