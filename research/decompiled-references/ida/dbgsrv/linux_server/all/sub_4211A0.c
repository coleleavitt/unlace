/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4211A0
// Address: 0x00000000004211A0

//----- (00000000004211A0) ----------------------------------------------------
__int64 __fastcall sub_4211A0(
        __int64 a1,
        __int64 *a2,
        __int32 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  FILE *v12; // rdi
  __m128 v14; // xmm0
  char v15; // r15
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char **v18; // r14
  const char *v19; // r12
  const char **v20; // r15
  const char *v21; // rsi
  unsigned __int64 v22; // rsi
  _QWORD *v23; // rdi
  int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // ecx
  char *v28; // r15
  unsigned __int64 v29; // rax
  void *v30; // rax
  __int32 v31; // eax
  bool v32; // cc
  char *v33; // rax
  size_t v34; // r15
  void *v35; // r12
  __int64 v36; // rax
  char *v37; // rsi
  __m128i v38; // xmm0
  char *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r12
  unsigned __int64 v42; // r14
  size_t v43; // r10
  const char *v44; // rdx
  double v45; // xmm4_8
  double v46; // xmm5_8
  char v47; // r14
  const char *v48; // rdx
  double v49; // xmm4_8
  double v50; // xmm5_8
  char *v51; // rax
  int v52; // edx
  __int64 v53; // rax
  __int8 i; // cl
  char *v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rbx
  char *v58; // rax
  void *v59; // rdi
  const void *v61; // r11
  void *v62; // rdi
  void *v63; // rsi
  unsigned __int64 v64; // rdx
  void *v65; // rax
  __int64 v66; // [rsp+0h] [rbp-D8h]
  __m128i n; // [rsp+8h] [rbp-D0h] BYREF
  const void *v68; // [rsp+18h] [rbp-C0h]
  void *v69; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v70; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v71; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v72; // [rsp+48h] [rbp-90h]
  char s[16]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int8 v74; // [rsp+70h] [rbp-68h]
  void *ptr; // [rsp+78h] [rbp-60h]
  __m128 v76; // [rsp+80h] [rbp-58h]
  unsigned __int64 v77; // [rsp+98h] [rbp-40h]

  n.m128i_i32[3] = a3;
  v77 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1349) )
    return 4294967291LL;
  v12 = *(FILE **)(a1 + 1400);
  if ( !v12 )
    return 4294967291LL;
  if ( (_BYTE)a3 )
  {
    sub_41C660(a1, 0, 1, a4, a5, a6, a7, a8, a9, a10, a11);
    v12 = *(FILE **)(a1 + 1400);
  }
  rewind(v12);
  v14 = 0;
  ptr = nullptr;
  v69 = nullptr;
  n.m128i_i32[2] = 1;
  v76 = 0;
  v70 = 0;
  while ( 1 )
  {
    v15 = sub_414C50(a1, (__int64)&v71, *(double *)v14.m128_u64, *(double *)a5.m128_u64, *(double *)a6.m128_u64);
    if ( !v15 )
      break;
    if ( v71 < v72 )
    {
      if ( *(_QWORD *)(a1 + 1424) > 1u )
        goto LABEL_17;
      n.m128i_i64[0] = v76.m128_u64[0];
      if ( v76.m128_u64[0] <= 1 )
        goto LABEL_17;
      v18 = (const char **)v69;
      v19 = (const char *)ptr;
      v20 = (const char **)((char *)v69 + 24 * v70);
      if ( v69 != v20 )
      {
        while ( 1 )
        {
          v21 = s1;
          if ( v18[1] )
            v21 = *v18;
          if ( !strcmp(v19, v21) )
            break;
          v18 += 3;
          if ( v20 == v18 )
            goto LABEL_31;
        }
        if ( v18 != v20 )
        {
LABEL_17:
          v22 = a2[1];
          v23 = (_QWORD *)*a2;
          if ( !v22 )
            goto LABEL_38;
          goto LABEL_18;
        }
      }
LABEL_31:
      v33 = strstr(v19, "ld-");
      if ( !v33 || v33 - v19 == -1 || v33 != v19 && *(v33 - 1) != 47 )
        goto LABEL_17;
      v34 = n.m128i_i64[0];
      v35 = sub_4814F0(n.m128i_i64[0]);
      memcpy(v35, ptr, v34);
      v36 = v70;
      v37 = (char *)v69;
      if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
      {
        v69 = sub_481540((__int64)&v69, v69, v70 + 1, 0x18u);
        v37 = (char *)v69;
        v36 = v70;
      }
      v38 = _mm_loadl_epi64(&n);
      v39 = &v37[24 * v36];
      v14 = (__m128)_mm_unpacklo_epi64(v38, v38);
      *(_QWORD *)v39 = v35;
      *(__m128 *)(v39 + 8) = v14;
      v22 = a2[1];
      v23 = (_QWORD *)*a2;
      *(_QWORD *)&v70 = v70 + 1;
      if ( !v22 )
      {
LABEL_38:
        v26 = 1;
        if ( a2[2] )
          goto LABEL_23;
        goto LABEL_39;
      }
LABEL_18:
      v24 = 0;
      v25 = 0;
      do
      {
        if ( v23[10 * v25] == v71 )
          break;
        v25 = ++v24;
      }
      while ( v24 < v22 );
      v26 = v22 + 1;
      if ( v22 == v25 )
      {
        if ( a2[2] >= v26 )
          goto LABEL_23;
LABEL_39:
        v40 = sub_481540((__int64)a2, v23, v26, 0x50u);
        *a2 = (__int64)v40;
        v22 = a2[1];
        v23 = v40;
LABEL_23:
        v27 = n.m128i_i32[2];
        v28 = (char *)&v23[10 * v22];
        *(_OWORD *)v28 = 0;
        v29 = v71;
        *(_OWORD *)(v28 + 24) = 0;
        *((_QWORD *)v28 + 2) = 0;
        *((_OWORD *)v28 + 3) = 0;
        *((_QWORD *)v28 + 5) = 0;
        *((_WORD *)v28 + 36) = 0;
        *((_QWORD *)v28 + 8) = 0;
        ++a2[1];
        v14 = (__m128)_mm_loadu_si128((const __m128i *)(v28 + 24));
        *(_QWORD *)v28 = v29;
        *((_QWORD *)v28 + 1) = v72;
        v30 = *((void **)v28 + 2);
        *((_QWORD *)v28 + 2) = ptr;
        *(__m128 *)(v28 + 24) = v76;
        ptr = v30;
        v31 = v74;
        v76 = v14;
        v32 = v27 < v74;
        v28[72] = v74;
        if ( !v32 )
          v31 = v27;
        n.m128i_i32[2] = v31;
        if ( strchr(s, 114) )
          v28[73] |= 4u;
        if ( strchr(s, 119) )
          v28[73] |= 2u;
        if ( strchr(s, 120) )
          v28[73] |= 1u;
      }
    }
  }
  if ( !(_QWORD)v70 )
    goto LABEL_55;
  v41 = 0;
  v66 = a1 + 1416;
  while ( 2 )
  {
    v51 = (char *)v69 + 24 * v41;
    if ( (char *)v66 == v51 )
    {
LABEL_51:
      if ( *(_QWORD *)(a1 + 1424) )
        v44 = *(const char **)(a1 + 1416);
      else
        v44 = s1;
    }
    else
    {
      v42 = *((_QWORD *)v51 + 1);
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v42 != 1 )
        {
          v61 = *(const void **)v51;
          v62 = *(void **)(a1 + 1416);
          if ( *(_QWORD *)(a1 + 1432) < v42 )
          {
            v63 = *(void **)(a1 + 1416);
            v64 = *((_QWORD *)v51 + 1);
            v68 = *(const void **)v51;
            n.m128i_i64[0] = v42 - 1;
            v65 = sub_481540(v66, v63, v64, 1u);
            *(_QWORD *)(a1 + 1416) = v65;
            v61 = v68;
            v62 = v65;
            v43 = n.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 1424) = v42;
          memmove(v62, v61, v43);
          *(_BYTE *)(*(_QWORD *)(a1 + 1416) + v42 - 1) = 0;
          goto LABEL_51;
        }
      }
      *(_QWORD *)(a1 + 1424) = 0;
      v44 = s1;
    }
    sub_4563D0(a1, "trying potential interpreter %s\n", v44);
    v47 = sub_41DAF0(a1, a2, *(double *)v14.m128_u64, a5, a6, a7, v45, v46, a10, a11);
    if ( v47 )
    {
      v48 = s1;
      if ( *(_QWORD *)(a1 + 1424) )
        v48 = *(const char **)(a1 + 1416);
      sub_411B10(a1, "Found a valid interpeter in %s, will report shared library events!\n", v48);
      sub_420860(a1, a2, *(double *)v14.m128_u64, a5, a6, a7, v49, v50, a10, a11);
      v15 = v47;
    }
    if ( ++v41 < (unsigned __int64)v70 )
      continue;
    break;
  }
  if ( !v15 )
    *(_QWORD *)(a1 + 1424) = 0;
LABEL_55:
  v52 = 0;
  v53 = 0;
  for ( i = n.m128i_i8[8]; v52 < (unsigned __int64)a2[1]; v53 = v52 )
  {
    ++v52;
    *(_BYTE *)(*a2 + 80 * v53 + 72) = i;
  }
  if ( n.m128i_i8[12] )
    sub_41CFB0(a1, 0, 1, v14, a5, a6, a7, v16, v17, a10, a11);
  v55 = (char *)v69;
  if ( v69 )
  {
    v56 = v70;
    if ( (_QWORD)v70 )
    {
      v57 = 0;
      do
      {
        v58 = &v55[24 * v57];
        v59 = *(void **)v58;
        if ( *(_QWORD *)v58 )
        {
          *((_QWORD *)v58 + 1) = 0;
          j__free(v59);
          v55 = (char *)v69;
        }
        ++v57;
      }
      while ( v56 != v57 );
    }
    *(_QWORD *)&v70 = 0;
    j__free(v55);
  }
  if ( ptr )
  {
    v76.m128_u64[0] = 0;
    j__free(ptr);
  }
  return 1;
}
// 421570: variable 'v45' is possibly undefined
// 421570: variable 'v46' is possibly undefined
// 4215A7: variable 'v49' is possibly undefined
// 4215A7: variable 'v50' is possibly undefined
// 4216F2: variable 'v16' is possibly undefined
// 4216F2: variable 'v17' is possibly undefined
