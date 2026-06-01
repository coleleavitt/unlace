/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F010
// Address: 0x000000000042F010

//----- (000000000042F010) ----------------------------------------------------
__int64 __fastcall sub_42F010(_QWORD *a1)
{
  const char *v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  int v6; // r15d
  __int64 v7; // rax
  const char *v8; // rdi
  __int64 v9; // rax
  size_t v11; // r14
  unsigned __int64 v12; // rax
  void **v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  void *v16; // r14
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  void **v19; // rax
  void *v20; // rdi
  __m128i v21; // xmm0
  void **v22; // rax
  void **v23; // rax
  void **v24; // rax
  __m128i v25; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v27; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v1 = s1;
  v2 = a1[6] == 0;
  v28 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = (const char *)a1[5];
  v4 = a1[18];
  if ( v4 )
  {
    v5 = a1[17];
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = s1;
      v9 = v5 + 24 * v7;
      if ( *(_QWORD *)(v9 + 8) )
        v8 = *(const char **)v9;
      if ( !strcmp(v8, v1) )
        goto LABEL_9;
      v7 = ++v6;
    }
    while ( v6 < v4 );
  }
  ptr = nullptr;
  v27 = 0;
  if ( v1 )
  {
    v11 = strlen(v1);
    v25.m128i_i64[0] = v11 + 1;
    ptr = sub_481540((__int64)&ptr, nullptr, v11 + 1, 1u);
    v27.m128i_i64[0] = v11 + 1;
    memmove(ptr, v1, v11);
    *((_BYTE *)ptr + v11) = 0;
    v12 = a1[18];
  }
  else
  {
    v12 = v4;
  }
  v13 = (void **)a1[17];
  v14 = a1[19];
  v15 = v12 + 1;
  if ( &ptr < v13 || &ptr >= &v13[3 * v14] )
  {
    if ( v14 < v15 )
    {
      v23 = (void **)sub_481540((__int64)(a1 + 17), v13, v12 + 1, 0x18u);
      a1[17] = v23;
      v13 = v23;
      v12 = a1[18];
    }
    v21 = _mm_loadu_si128(&v27);
    v22 = &v13[3 * v12];
    *v22 = ptr;
    *(__m128i *)(v22 + 1) = v21;
    ++a1[18];
  }
  else
  {
    v16 = ptr;
    v17 = _mm_loadl_epi64(&v27);
    ptr = nullptr;
    v18 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
    v27 = 0;
    if ( v14 < v15 )
    {
      v25.m128i_i64[1] = v18.m128i_i64[0];
      v25.m128i_i64[0] = v17.m128i_i64[0];
      v24 = (void **)sub_481540((__int64)(a1 + 17), v13, v12 + 1, 0x18u);
      a1[17] = v24;
      v13 = v24;
      v18 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
      v12 = a1[18];
      v17 = _mm_loadl_epi64(&v25);
    }
    v19 = &v13[3 * v12];
    *v19 = v16;
    v20 = ptr;
    *(__m128i *)(v19 + 1) = _mm_unpacklo_epi64(v17, v18);
    ++a1[18];
    if ( v20 )
    {
      v27.m128i_i64[0] = 0;
      j__free(v20);
    }
  }
  if ( v4 == -1 )
  {
LABEL_9:
    sub_479F30(0, v1);
    return sub_479EB0(0x34u);
  }
  return 0;
}
