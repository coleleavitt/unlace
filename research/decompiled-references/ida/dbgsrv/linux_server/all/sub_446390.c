/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446390
// Address: 0x0000000000446390

//----- (0000000000446390) ----------------------------------------------------
__int64 __fastcall sub_446390(
        _QWORD *a1,
        const char *ptr,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        __m128i *a6,
        __m128 si128,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        __int64 a15)
{
  __int64 v15; // r13
  __int64 v18; // rax
  void *v19; // rsi
  unsigned __int8 *v20; // r13
  char *v21; // rdi
  double v22; // xmm4_8
  double v23; // xmm5_8
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rax
  char *v27; // rsi
  char *v28; // rax
  unsigned int v29; // ebp
  int v30; // r8d
  int v31; // r9d
  double v32; // xmm4_8
  double v33; // xmm5_8
  _BYTE *v34; // rsi
  __int64 v35; // r13
  _BYTE *v36; // rax
  double v37; // xmm4_8
  double v38; // xmm5_8
  double v39; // xmm4_8
  double v40; // xmm5_8
  double v41; // xmm4_8
  double v42; // xmm5_8
  const char *v43; // rdx
  double v44; // xmm4_8
  double v45; // xmm5_8
  double v46; // xmm4_8
  double v47; // xmm5_8
  __int64 v48; // r12
  unsigned __int64 v49; // rdx
  __int64 v50; // r14
  void *v51; // rsi
  double v52; // xmm4_8
  double v53; // xmm5_8
  const char *v54; // r13
  size_t v55; // rax
  __int64 v56; // r14
  size_t v57; // r8
  size_t v58; // r9
  void *v59; // rsi
  unsigned __int64 v60; // rdx
  double v61; // xmm4_8
  double v62; // xmm5_8
  double v63; // xmm4_8
  double v64; // xmm5_8
  double v65; // xmm4_8
  double v66; // xmm5_8
  void *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  double v71; // xmm4_8
  double v72; // xmm5_8
  __int64 v73; // rax
  _BYTE *v74; // rax
  __int64 v75; // r13
  __int64 v76; // r14
  unsigned __int64 v77; // rdx
  void *v78; // rsi
  __int64 v79; // r13
  void *v80; // rax
  const char *v81; // rdx
  void *v82; // rax
  __int64 v83; // rax
  void *v84; // rax
  unsigned __int64 v88; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v89; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v90; // [rsp+18h] [rbp-E0h]
  size_t v91; // [rsp+20h] [rbp-D8h]
  size_t v92; // [rsp+28h] [rbp-D0h]
  char v93; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v94; // [rsp+38h] [rbp-C0h]
  __int64 v95; // [rsp+48h] [rbp-B0h]
  char v96; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v97; // [rsp+58h] [rbp-A0h]
  __int64 v98; // [rsp+68h] [rbp-90h]
  char v99; // [rsp+70h] [rbp-88h] BYREF
  __int128 v100; // [rsp+78h] [rbp-80h]
  __int64 v101; // [rsp+88h] [rbp-70h]
  unsigned __int8 v102; // [rsp+90h] [rbp-68h] BYREF
  __int128 v103; // [rsp+98h] [rbp-60h]
  __int64 v104; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-40h]

  v15 = a4;
  v18 = a1[10];
  v19 = (void *)a1[9];
  v105 = __readfsqword(0x28u);
  if ( a1[11] < (unsigned __int64)(v18 + 1) )
  {
    v68 = sub_481540((__int64)(a1 + 9), v19, v18 + 1, 4u);
    a1[9] = v68;
    v19 = v68;
    v18 = a1[10];
  }
  *((_DWORD *)v19 + v18) = 0;
  ++a1[10];
  if ( (int)v15 > 0 )
  {
    v20 = &a5[32 * v15];
    do
    {
      v102 = 2;
      a8 = 0;
      v104 = 0;
      v103 = 0;
      sub_4418C0(&v102, a5, *(double *)si128.m128_u64, (__m128)0LL, a9, a10, a11, a12, a13, a14);
      v26 = a1[4];
      v27 = (char *)a1[3];
      if ( a1[5] < (unsigned __int64)(v26 + 1) )
      {
        v28 = (char *)sub_481540((__int64)(a1 + 3), v27, v26 + 1, 0x20u);
        a1[3] = v28;
        v27 = v28;
        v26 = a1[4];
      }
      a9 = 0;
      v21 = &v27[32 * v26];
      *v21 = 2;
      *((_QWORD *)v21 + 3) = 0;
      *(_OWORD *)(v21 + 8) = 0;
      sub_4418C0(
        (unsigned __int8 *)v21,
        &v102,
        *(double *)si128.m128_u64,
        (__m128)0LL,
        (__m128)0LL,
        a10,
        v24,
        v25,
        a13,
        a14);
      ++a1[4];
      a5 += 32;
      sub_441540((__int64)&v102, *(double *)si128.m128_u64, (__m128)0LL, (__m128)0LL, a10, v22, v23, a13, a14);
    }
    while ( v20 != a5 );
  }
  v29 = sub_4411E0(a1, a6, ptr, a3, *(double *)si128.m128_u64, a8, a9, a10, a11, a12, a13, a14);
  if ( !(_BYTE)v29 )
  {
    if ( a15 )
    {
      v34 = *(_BYTE **)a15;
      v35 = a1[3] + 32LL * a1[4] - 32;
      if ( *(_QWORD *)(a15 + 16) <= 0xDu )
      {
        v74 = sub_481540(a15, v34, 0xEu, 1u);
        *(_QWORD *)a15 = v74;
        v34 = v74;
      }
      *(_QWORD *)(a15 + 8) = 14;
      qmemcpy(v34, "Runtime error", 13);
      v36 = *(_BYTE **)a15;
      v93 = 2;
      v36[13] = 0;
      v95 = 0;
      v96 = 2;
      v98 = 0;
      v94 = 0;
      v97 = 0;
      sub_444A40((__m128i *)&v96, v35, "line", 0, 0.0, a8, a9, a10, v32, v33, a13, a14);
      sub_444A40((__m128i *)&v93, v35, "file", 0, 0.0, a8, a9, a10, v37, v38, a13, a14);
      if ( v96 == 2 && (__int64)v97 > 0 && v93 == 7 )
      {
        v81 = "<unknown>";
        if ( *((_QWORD *)&v94 + 1) )
        {
          v81 = (const char *)v94;
          if ( !*(_BYTE *)v94 )
            v81 = "<unknown>";
        }
        sub_42A760((void **)a15, " on %s:%d", v81, (_DWORD)v97);
      }
      else
      {
        v99 = 2;
        v101 = 0;
        v100 = 0;
        sub_444A40((__m128i *)&v99, v35, "func", 0, 0.0, a8, a9, a10, v39, v40, a13, a14);
        if ( v99 == 7 && *((_QWORD *)&v100 + 1) > 1u )
        {
          v102 = 2;
          v103 = 0;
          v104 = 0;
          sub_444A40((__m128i *)&v102, v35, "pc", 0, 0.0, a8, a9, a10, v41, v42, a13, a14);
          v43 = s1;
          if ( *((_QWORD *)&v100 + 1) )
            v43 = (const char *)v100;
          sub_42A760((void **)a15, " at %s+0x%a", v43, 0.0);
          sub_441540((__int64)&v102, 0.0, a8, a9, a10, v44, v45, a13, a14);
        }
        sub_441540((__int64)&v99, 0.0, a8, a9, a10, v41, v42, a13, a14);
      }
      v48 = *(_QWORD *)(a15 + 8);
      if ( v48 )
      {
        v50 = v48 + 1;
        v49 = v48 + 2;
        --v48;
      }
      else
      {
        v49 = 3;
        v50 = 2;
      }
      v51 = *(void **)a15;
      if ( *(_QWORD *)(a15 + 16) < v49 )
      {
        v88 = v49;
        v80 = sub_481540(a15, v51, v49, 1u);
        *(_QWORD *)a15 = v80;
        v49 = v88;
        v51 = v80;
      }
      *(_QWORD *)(a15 + 8) = v49;
      si128.m128_u64[0] = 0;
      *((_BYTE *)v51 + v50) = 0;
      *(_WORD *)(*(_QWORD *)a15 + v48) = 8250;
      v102 = 2;
      v104 = 0;
      v103 = 0;
      sub_444A40((__m128i *)&v102, v35, "description", 0, 0.0, a8, a9, a10, v46, v47, a13, a14);
      if ( v102 == 7 )
      {
        v54 = s1;
        if ( *((_QWORD *)&v103 + 1) )
          v54 = (const char *)v103;
        if ( v54 )
        {
          v55 = strlen(v54);
          v56 = *(_QWORD *)(a15 + 8);
          v57 = v55;
          v58 = v55;
          if ( v56 )
          {
            --v56;
            v58 = v55 + v56;
          }
          v59 = *(void **)a15;
          v60 = v58 + 1;
          if ( *(_QWORD *)(a15 + 16) < v58 + 1 )
          {
            v92 = v55;
            v91 = v58;
            v89 = v58 + 1;
            v82 = sub_481540(a15, v59, v60, 1u);
            v57 = v92;
            v58 = v91;
            *(_QWORD *)a15 = v82;
            v59 = v82;
            v60 = v89;
          }
          *(_QWORD *)(a15 + 8) = v60;
          *((_BYTE *)v59 + v58) = 0;
          memmove((void *)(v56 + *(_QWORD *)a15), v54, v57);
        }
      }
      else
      {
        v75 = *(_QWORD *)(a15 + 8);
        if ( v75 )
        {
          v76 = v75 + 18;
          v77 = v75 + 19;
          --v75;
        }
        else
        {
          v77 = 20;
          v76 = 19;
        }
        v78 = *(void **)a15;
        if ( *(_QWORD *)(a15 + 16) < v77 )
        {
          v90 = v77;
          v84 = sub_481540(a15, v78, v77, 1u);
          *(_QWORD *)a15 = v84;
          v77 = v90;
          v78 = v84;
        }
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_48F590);
        *(_QWORD *)(a15 + 8) = v77;
        *((_BYTE *)v78 + v76) = 0;
        v79 = *(_QWORD *)a15 + v75;
        *(__m128 *)v79 = si128;
        *(_DWORD *)(v79 + 15) = 1852795252;
      }
      sub_441540((__int64)&v102, *(double *)si128.m128_u64, a8, a9, a10, v52, v53, a13, a14);
      sub_441540((__int64)&v96, *(double *)si128.m128_u64, a8, a9, a10, v61, v62, a13, a14);
      sub_441540((__int64)&v93, *(double *)si128.m128_u64, a8, a9, a10, v63, v64, a13, a14);
    }
    if ( a6
      && !(unsigned int)sub_442230(
                          a6,
                          (__m128i *)(a1[3] + 32LL * a1[4] - 32),
                          *(double *)si128.m128_u64,
                          a8,
                          a9,
                          a10,
                          v32,
                          v33,
                          a13,
                          a14) )
    {
      v69 = a1[4];
      v70 = a1[3];
      v102 = 2;
      v103 = 0;
      v104 = 0;
      sub_4418C0(&v102, (unsigned __int8 *)(v70 + 32 * v69 - 32), 0.0, a8, a9, a10, v65, v66, a13, a14);
      v73 = a1[4];
      if ( v73 )
      {
        v83 = v73 - 1;
        a1[4] = v83;
        sub_441540(a1[3] + 32 * v83, 0.0, a8, a9, a10, v71, v72, a13, a14);
      }
      sub_441540((__int64)&v102, 0.0, a8, a9, a10, v71, v72, a13, a14);
    }
  }
  if ( *(_BYTE *)(a1[1] + 124LL) )
  {
    off_4C7FB0(24, 10, 0, (unsigned int)&off_4C7FB0, v30, v31);
    *(_BYTE *)(a1[1] + 124LL) = 0;
  }
  return v29;
}
// 446436: variable 'v24' is possibly undefined
// 446436: variable 'v25' is possibly undefined
// 446447: variable 'v22' is possibly undefined
// 446447: variable 'v23' is possibly undefined
// 44646F: variable 'a11' is possibly undefined
// 44646F: variable 'a12' is possibly undefined
// 446563: variable 'v32' is possibly undefined
// 446563: variable 'v33' is possibly undefined
// 44657E: variable 'v37' is possibly undefined
// 44657E: variable 'v38' is possibly undefined
// 4465CD: variable 'v39' is possibly undefined
// 4465CD: variable 'v40' is possibly undefined
// 44661B: variable 'v41' is possibly undefined
// 44661B: variable 'v42' is possibly undefined
// 446652: variable 'v44' is possibly undefined
// 446652: variable 'v45' is possibly undefined
// 4466D1: variable 'v46' is possibly undefined
// 4466D1: variable 'v47' is possibly undefined
// 446750: variable 'v52' is possibly undefined
// 446750: variable 'v53' is possibly undefined
// 44675A: variable 'v61' is possibly undefined
// 44675A: variable 'v62' is possibly undefined
// 446764: variable 'v63' is possibly undefined
// 446764: variable 'v64' is possibly undefined
// 446805: variable 'v30' is possibly undefined
// 446805: variable 'v31' is possibly undefined
// 44686C: variable 'v65' is possibly undefined
// 44686C: variable 'v66' is possibly undefined
// 4469AD: variable 'v71' is possibly undefined
// 4469AD: variable 'v72' is possibly undefined
// 48F590: using guessed type __int128 xmmword_48F590;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
