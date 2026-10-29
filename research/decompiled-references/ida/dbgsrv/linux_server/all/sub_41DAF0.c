/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41DAF0
// Address: 0x000000000041DAF0

//----- (000000000041DAF0) ----------------------------------------------------
__int64 __fastcall sub_41DAF0(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r13
  __m128 v11; // xmm0
  bool v12; // cc
  bool v14; // zf
  const char *v15; // r12
  int v16; // eax
  unsigned __int8 *v17; // rdx
  void *v18; // r15
  size_t v19; // rax
  size_t v20; // r12
  const char *v21; // rcx
  const char *v22; // rax
  const char *v23; // rbp
  size_t v24; // rax
  size_t v25; // r12
  void *v26; // rdi
  unsigned __int64 v27; // r14
  const char *v28; // rdx
  const char *v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // r15
  int v32; // r14d
  const char *v33; // rdi
  unsigned __int64 *v34; // r13
  unsigned __int64 v35; // rdx
  const char *v36; // r8
  const char *v37; // rax
  double v38; // xmm4_8
  double v39; // xmm5_8
  const char *v40; // rsi
  __off64_t v41; // rax
  double v42; // xmm4_8
  double v43; // xmm5_8
  const char *v44; // rdx
  const char **v45; // r15
  const char *v46; // rbp
  double v47; // xmm4_8
  double v48; // xmm5_8
  unsigned int v49; // ebx
  double v51; // xmm4_8
  double v52; // xmm5_8
  void *v53; // rdi
  unsigned __int64 v54; // r15
  void *v55; // rax
  void *dest; // [rsp+10h] [rbp-1098h] BYREF
  __m128i v57; // [rsp+18h] [rbp-1090h] BYREF
  __int64 (__fastcall **v58)(); // [rsp+30h] [rbp-1078h] BYREF
  int v59; // [rsp+38h] [rbp-1070h]
  void *v60; // [rsp+40h] [rbp-1068h]
  __m128i v61; // [rsp+48h] [rbp-1060h] BYREF
  char s[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v63; // [rsp+1068h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 992);
  if ( v10 )
    return 1;
  v11 = 0;
  v12 = *(_QWORD *)(a1 + 1424) <= 1u;
  dest = nullptr;
  v57 = 0;
  if ( v12 )
  {
    v61 = 0;
    v14 = *(_QWORD *)(a1 + 1448) == 0;
    v15 = s1;
    v59 = 2;
    v58 = &off_4C2188;
    v60 = nullptr;
    if ( !v14 )
      v15 = *(const char **)(a1 + 1440);
    v16 = sub_42BC30(v15, &v58, 0, 0.0, a4, a5, a6, a7, a8, a9, a10);
    if ( v16 )
    {
      if ( v16 == 2 )
      {
        v17 = (unsigned __int8 *)s1;
        if ( v61.m128i_i64[0] )
          v17 = (unsigned __int8 *)v60;
        sub_4806D0((unsigned __int8 *)s, 4096, v17);
        v11 = (__m128)_mm_loadu_si128(&v57);
        a4 = (__m128)_mm_loadu_si128(&v61);
        v18 = dest;
        v61 = (__m128i)v11;
        dest = v60;
        v60 = v18;
        v57 = (__m128i)a4;
        v19 = strlen(s);
        v20 = v19;
        if ( v19 )
        {
          v53 = *(void **)(a1 + 1416);
          v54 = v19 + 1;
          if ( *(_QWORD *)(a1 + 1432) < v19 + 1 )
          {
            v55 = sub_481540(a1 + 1416, *(void **)(a1 + 1416), v54, 1u);
            *(_QWORD *)(a1 + 1416) = v55;
            v53 = v55;
          }
          *(_QWORD *)(a1 + 1424) = v54;
          memmove(v53, s, v20);
          *(_BYTE *)(*(_QWORD *)(a1 + 1416) + v20) = 0;
          v18 = v60;
        }
        else
        {
          *(_QWORD *)(a1 + 1424) = 0;
        }
        v58 = &off_4C2188;
        if ( v18 )
        {
          v61.m128i_i64[0] = 0;
          j__free(v18);
        }
LABEL_13:
        if ( v57.m128i_i64[0] )
          v21 = (const char *)dest;
        else
          v21 = s1;
        goto LABEL_21;
      }
      sub_411BD0(a1, "%s: could not read symbols on remote computer", v15);
    }
    else if ( !*(_BYTE *)(a1 + 1008) )
    {
      *(_BYTE *)(a1 + 1008) = 1;
      sub_411BD0(
        a1,
        "AUTOHIDE DATABASE\n%s:\nCould not find the elf interpreter name,\nshared object events will not be reported",
        v15);
    }
    v58 = &off_4C2188;
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      j__free(v60);
    }
LABEL_57:
    v49 = 0;
    goto LABEL_49;
  }
  v22 = sub_480610(*(_BYTE **)(a1 + 1416));
  v23 = v22;
  if ( v22 )
  {
    v24 = strlen(v22);
    v25 = v24;
    if ( v24 )
    {
      v26 = dest;
      v27 = v24 + 1;
      if ( v57.m128i_i64[1] < v24 + 1 )
      {
        dest = sub_481540((__int64)&dest, dest, v27, 1u);
        v26 = dest;
      }
      v57.m128i_i64[0] = v27;
      memmove(v26, v23, v25);
      *((_BYTE *)dest + v25) = 0;
      goto LABEL_13;
    }
  }
  v57.m128i_i64[0] = 0;
  v21 = s1;
LABEL_21:
  v28 = s1;
  if ( *(_QWORD *)(a1 + 1424) )
    v28 = *(const char **)(a1 + 1416);
  sub_4563D0(a1, "INTERP: %s, SONAME: %s\n", v28, v21);
  v29 = s1;
  if ( *(_QWORD *)(a1 + 1424) )
    v29 = *(const char **)(a1 + 1416);
  v30 = a2[1];
  if ( v30 )
  {
    v31 = *a2;
    v32 = 0;
    while ( 1 )
    {
      v33 = s1;
      v34 = (unsigned __int64 *)(v31 + 80 * v10);
      if ( v34[3] )
        v33 = (const char *)v34[2];
      if ( !strcmp(v33, v29) )
        break;
      v10 = ++v32;
      if ( v32 >= v30 )
        goto LABEL_63;
    }
    if ( v34 )
    {
      v35 = sub_414B50(a1, a2, v34);
      v36 = s1;
      if ( v57.m128i_i64[0] )
        v36 = (const char *)dest;
      v37 = s1;
      if ( *(_QWORD *)(a1 + 1424) )
        v37 = *(const char **)(a1 + 1416);
      sub_41B880(a1, (const char *)*v34, v35, v37, v36, *(double *)v11.m128_u64);
      v40 = s1;
      if ( v57.m128i_i64[0] )
        v40 = (const char *)dest;
      if ( *(_QWORD *)(a1 + 1152) )
        sub_416E40((_QWORD *)a1, v40, v11, a4, a5, a6, v38, v39, a9, a10);
      v41 = sub_413B90(a1, "_r_debug");
      if ( v41 != -1
        && (unsigned int)sub_41D160(
                           a1,
                           0xFFFFFFFF,
                           v41,
                           (unsigned __int64 *)&v58,
                           40,
                           0,
                           v11,
                           a4,
                           a5,
                           a6,
                           v42,
                           v43,
                           a9,
                           a10) == 40
        && v60
        && !(unsigned __int8)sub_41D540(a1, a1 + 992, (__off64_t)v60, v11, a4, a5, a6, v51, v52, a9, a10) )
      {
        sub_4563D0(a1, "%a: could not set shlib bpt\n", *(double *)v11.m128_u64);
      }
      v44 = *(const char **)(a1 + 992);
      if ( v44 )
        goto LABEL_48;
      v45 = (const char **)&off_4C2260;
      do
      {
        while ( 1 )
        {
          v46 = (const char *)sub_413B90(a1, *v45);
          if ( (unsigned __int64)(v46 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            break;
          if ( off_4C2290 == (__int64 (__fastcall **)())++v45 )
            goto LABEL_47;
        }
        if ( (unsigned __int8)sub_41D540(a1, a1 + 992, (__off64_t)v46, v11, a4, a5, a6, v47, v48, a9, a10) )
          break;
        sub_4563D0(a1, "%a: could not set shlib bpt (name=%s)\n", *(double *)v11.m128_u64, v46);
        ++v45;
      }
      while ( off_4C2290 != (__int64 (__fastcall **)())v45 );
LABEL_47:
      v44 = *(const char **)(a1 + 992);
      if ( v44 )
      {
LABEL_48:
        sub_4563D0(a1, "%a: added shlib bpt (%s)\n", *(double *)v11.m128_u64, v44);
        v49 = 1;
        goto LABEL_49;
      }
      goto LABEL_57;
    }
  }
LABEL_63:
  sub_411BD0(a1, "%s: could not find in process memory", v29);
  v49 = 0;
LABEL_49:
  if ( dest )
  {
    v57.m128i_i64[0] = 0;
    j__free(dest);
  }
  return v49;
}
// 41DDB6: variable 'v38' is possibly undefined
// 41DDB6: variable 'v39' is possibly undefined
// 41DE31: variable 'v47' is possibly undefined
// 41DE31: variable 'v48' is possibly undefined
// 41DF61: variable 'v42' is possibly undefined
// 41DF61: variable 'v43' is possibly undefined
// 41DF87: variable 'v51' is possibly undefined
// 41DF87: variable 'v52' is possibly undefined
// 4C2188: using guessed type __int64 (__fastcall *off_4C2188)();
// 4C2260: using guessed type _UNKNOWN *off_4C2260;
// 4C2290: using guessed type __int64 (__fastcall *off_4C2290[2])();
