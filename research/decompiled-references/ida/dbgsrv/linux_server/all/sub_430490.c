/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430490
// Address: 0x0000000000430490

//----- (0000000000430490) ----------------------------------------------------
__int64 __fastcall sub_430490(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD *v9; // r14
  __int64 v10; // rbx
  void **v12; // rbp
  __int64 v13; // r15
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  const char *v17; // rbp
  size_t v18; // rax
  __int64 v19; // r15
  size_t v20; // rbx
  unsigned __int64 v21; // rcx
  char *v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  char *v25; // rbx
  void *v26; // rax
  double v27; // xmm4_8
  double v28; // xmm5_8
  __m128i v30; // xmm1
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // rdx
  char *v34; // rsi
  __m128i v35; // xmm0
  void *v36; // rax
  char *v37; // rbx
  double v38; // xmm4_8
  double v39; // xmm5_8
  char *v40; // rax
  void **v41; // [rsp+8h] [rbp-C0h]
  void *v42; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v43; // [rsp+18h] [rbp-B0h] BYREF
  unsigned __int8 v44[8]; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+30h] [rbp-98h]
  __int64 v46; // [rsp+40h] [rbp-88h]
  void *ptr; // [rsp+50h] [rbp-78h]
  __m128i v48; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int8 v49[8]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v50; // [rsp+70h] [rbp-58h]
  __int64 v51; // [rsp+80h] [rbp-48h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v9 = (_QWORD *)a1[13];
  v10 = a1[6];
  v52 = __readfsqword(0x28u);
  v41 = (void **)v9[11];
  v12 = &v41[7 * v9[12]];
  if ( v12 != v41 )
  {
    v13 = v9[11];
    while ( 1 )
    {
      v16 = *(_QWORD *)(v13 + 8);
      if ( !v10 )
        break;
      v14 = (const char *)a1[5];
      v15 = s1;
      if ( v16 )
        goto LABEL_9;
LABEL_4:
      if ( !strcmp(v15, v14) )
        return 0;
      v13 += 56;
      if ( v12 == (void **)v13 )
        goto LABEL_10;
    }
    if ( !v16 )
      return 0;
    v14 = s1;
LABEL_9:
    v15 = *(const char **)v13;
    goto LABEL_4;
  }
LABEL_10:
  v17 = s1;
  if ( v10 )
    v17 = (const char *)a1[5];
  v42 = nullptr;
  v43 = 0;
  if ( v17 )
  {
    v18 = strlen(v17);
    v19 = v18 + 1;
    v20 = v18;
    v42 = sub_481540((__int64)&v42, nullptr, v18 + 1, 1u);
    v43.m128i_i64[0] = v19;
    memmove(v42, v17, v20);
    *((_BYTE *)v42 + v20) = 0;
    v41 = (void **)v9[11];
  }
  v44[0] = 2;
  v46 = 0;
  v21 = v9[13];
  v45 = 0;
  v22 = (char *)v41;
  if ( &v42 < v41 || &v42 >= &v41[7 * v21] )
  {
    v23 = v9[12];
    if ( v21 < v23 + 1 )
    {
      v22 = (char *)sub_481540((__int64)(v9 + 11), v41, v23 + 1, 0x38u);
      v9[11] = v22;
      v23 = v9[12];
    }
    v24 = _mm_loadu_si128(&v43);
    v25 = &v22[56 * v23];
    v26 = v42;
    v42 = nullptr;
    *(__m128i *)(v25 + 8) = v24;
    *(_QWORD *)v25 = v26;
    v25[24] = 2;
    *((_QWORD *)v25 + 6) = 0;
    v43 = 0;
    *((_OWORD *)v25 + 2) = 0;
    sub_4418C0((unsigned __int8 *)v25 + 24, v44, 0.0, a3, a4, a5, a6, a7, a8, a9);
  }
  else
  {
    v30 = _mm_loadu_si128(&v43);
    v49[0] = 2;
    v48 = v30;
    a3 = 0;
    ptr = v42;
    v42 = nullptr;
    v51 = 0;
    v43 = 0;
    v50 = 0;
    sub_4418C0(v49, v44, 0.0, (__m128)0LL, a4, a5, a6, a7, a8, a9);
    v33 = v9[12];
    v34 = (char *)v9[11];
    if ( v9[13] < (unsigned __int64)(v33 + 1) )
    {
      v40 = (char *)sub_481540((__int64)(v9 + 11), v34, v33 + 1, 0x38u);
      v9[11] = v40;
      v33 = v9[12];
      v34 = v40;
    }
    v35 = _mm_loadu_si128(&v48);
    v36 = ptr;
    ptr = nullptr;
    v37 = &v34[56 * v33];
    *(__m128i *)(v37 + 8) = v35;
    *(_QWORD *)v37 = v36;
    v37[24] = 2;
    *((_QWORD *)v37 + 6) = 0;
    v48 = 0;
    *((_OWORD *)v37 + 2) = 0;
    sub_4418C0((unsigned __int8 *)v37 + 24, v49, 0.0, (__m128)0LL, a4, a5, v31, v32, a8, a9);
    sub_441540((__int64)v49, 0.0, (__m128)0LL, a4, a5, v38, v39, a8, a9);
    if ( ptr )
    {
      v48.m128i_i64[0] = 0;
      j__free(ptr);
    }
  }
  ++v9[12];
  sub_441540((__int64)v44, 0.0, a3, a4, a5, v27, v28, a8, a9);
  if ( v42 )
  {
    v43.m128i_i64[0] = 0;
    j__free(v42);
  }
  return 0;
}
// 430641: variable 'a6' is possibly undefined
// 430641: variable 'a7' is possibly undefined
// 43064E: variable 'v27' is possibly undefined
// 43064E: variable 'v28' is possibly undefined
// 430773: variable 'v31' is possibly undefined
// 430773: variable 'v32' is possibly undefined
// 43077B: variable 'v38' is possibly undefined
// 43077B: variable 'v39' is possibly undefined
