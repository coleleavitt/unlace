unsigned __int64 __fastcall sub_421FD0(_QWORD **a1, _BYTE *a2, __int64 a3)
{
  void *v3; // r12
  __m128i v4; // xmm0
  _QWORD *v5; // rbp
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  void **v15; // rbp
  void **v16; // rbx
  void *v17; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm0
  void **v20; // rbp
  void *v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-78h] BYREF
  bool v23; // [rsp+1Eh] [rbp-5Ah] BYREF
  bool v24; // [rsp+1Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v26; // [rsp+28h] [rbp-50h]
  void *v27[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]

  v3 = *(void **)a3;
  v4 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v29 = __readfsqword(0x28u);
  v5 = *a1;
  *(_QWORD *)a3 = 0;
  *(_OWORD *)(a3 + 8) = 0;
  v6 = *a2 == 0;
  ptr = v3;
  v26 = v4;
  if ( v6 )
  {
    free_result_vec(&ptr);
    v12 = *v5;
    *(_BYTE *)(*v5 + 40LL) = 1;
    if ( _InterlockedSub64((volatile signed __int64 *)(v12 + 32), 1u) )
      goto LABEL_5;
    v13 = *(_QWORD *)(v12 + 64);
    v14 = _mm_loadu_si128((const __m128i *)(v12 + 48));
    *(_QWORD *)(v12 + 64) = 0;
    v28 = v13;
    *(__m128i *)v27 = v14;
    *(_OWORD *)(v12 + 48) = 0;
    v24 = *(_BYTE *)(v12 + 40) == 0;
    if ( !*(_QWORD *)(v12 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, bool *, void **))(v12 + 24))(v12, &v24, v27);
    v15 = (void **)v27[1];
    v16 = (void **)v27[0];
    if ( v27[1] == v27[0] )
      goto LABEL_15;
    do
    {
      v17 = *v16;
      if ( *v16 )
      {
        v16[1] = nullptr;
        qfree(v17);
      }
      v16 += 3;
    }
    while ( v15 != v16 );
    goto LABEL_14;
  }
  v7 = *v5;
  v8 = v5[2];
  v26 = 0;
  ptr = nullptr;
  v9 = *(_QWORD *)(v7 + 48) + 24 * v8;
  v10 = *(void **)v9;
  if ( *(_QWORD *)v9 )
  {
    *(_QWORD *)(v9 + 8) = 0;
    v22 = v4;
    qfree(v10);
    v4 = _mm_load_si128(&v22);
  }
  *(_QWORD *)v9 = v3;
  *(__m128i *)(v9 + 8) = v4;
  if ( !_InterlockedSub64((volatile signed __int64 *)(v7 + 32), 1u) )
  {
    v18 = *(_QWORD *)(v7 + 64);
    v19 = _mm_loadu_si128((const __m128i *)(v7 + 48));
    *(_QWORD *)(v7 + 64) = 0;
    v28 = v18;
    *(__m128i *)v27 = v19;
    *(_OWORD *)(v7 + 48) = 0;
    v23 = *(_BYTE *)(v7 + 40) == 0;
    if ( !*(_QWORD *)(v7 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, bool *, void **))(v7 + 24))(v7, &v23, v27);
    v20 = (void **)v27[1];
    v16 = (void **)v27[0];
    if ( v27[1] == v27[0] )
      goto LABEL_15;
    do
    {
      v21 = *v16;
      if ( *v16 )
      {
        v16[1] = nullptr;
        qfree(v21);
      }
      v16 += 3;
    }
    while ( v20 != v16 );
LABEL_14:
    v16 = (void **)v27[0];
LABEL_15:
    if ( v16 )
      operator delete(v16, v28 - (_QWORD)v16);
  }
LABEL_5:
  if ( ptr )
  {
    v26.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v29 - __readfsqword(0x28u);
}

