/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417760
// Address: 0x0000000000417760

//----- (0000000000417760) ----------------------------------------------------
void __fastcall sub_417760(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        char a11,
        __m128i **a12)
{
  void *v14; // r14
  void **v15; // rax
  unsigned __int64 v16; // rdx
  void **v17; // rbp
  __m128i si128; // xmm0
  void *v19; // rdi
  void *v20; // r14
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  size_t v26; // r13
  size_t v27; // r13
  __m128i v28[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a11 )
    goto LABEL_14;
  if ( *(_QWORD *)(a1 + 1152) )
    sub_416E40((_QWORD *)a1, nullptr, a2, a3, a4, a5, a6, a7, a8, a9);
  v14 = nullptr;
  v15 = (void **)sub_4570D0(a1);
  v16 = *(_QWORD *)(a1 + 1024);
  v17 = v15;
  si128 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( !v16 )
  {
    v19 = *v15;
    if ( !*v15 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v26 = 8 * v16;
  v28[0] = si128;
  v14 = sub_4814F0(8 * v16);
  memcpy(v14, *(const void **)(a1 + 1016), v26);
  v19 = *v17;
  si128 = _mm_load_si128(v28);
  if ( *v17 )
  {
LABEL_6:
    v17[1] = nullptr;
    v28[0] = si128;
    j__free(v19);
    si128 = _mm_load_si128(v28);
  }
LABEL_7:
  *v17 = v14;
  v20 = nullptr;
  *(__m128i *)(v17 + 1) = si128;
  v21 = *(_QWORD *)(a1 + 1048);
  v22 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  if ( v21 )
  {
    v27 = 8 * v21;
    v28[0] = v22;
    v20 = sub_4814F0(8 * v21);
    memcpy(v20, *(const void **)(a1 + 1040), v27);
    v23 = v17[3];
    v22 = _mm_load_si128(v28);
    if ( !v23 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v23 = v17[3];
  if ( v23 )
  {
LABEL_9:
    v17[4] = nullptr;
    v28[0] = v22;
    j__free(v23);
    v22 = _mm_load_si128(v28);
  }
LABEL_10:
  v17[3] = v20;
  *((__m128i *)v17 + 2) = v22;
  v24 = *(void **)(a1 + 1016);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 1024) = 0;
    j__free(v24);
    *(_QWORD *)(a1 + 1016) = 0;
    *(_QWORD *)(a1 + 1032) = 0;
  }
  v25 = *(void **)(a1 + 1040);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 1048) = 0;
    j__free(v25);
    *(_QWORD *)(a1 + 1040) = 0;
    *(_QWORD *)(a1 + 1056) = 0;
  }
LABEL_14:
  if ( a12 )
    sub_417480(a1, a12);
}
