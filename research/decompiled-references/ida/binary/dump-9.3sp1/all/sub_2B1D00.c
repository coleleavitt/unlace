__int64 __fastcall sub_2B1D00(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  bool (__fastcall *v9)(__int64); // rax
  void *v10; // r13
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  __int64 result; // rax
  __int64 v16; // rdx
  __m128i si128; // xmm0
  __int64 v18; // rdi
  size_t v19; // r12
  __m128i v20[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_13;
  v5 = 56 * a3;
  v6 = 56 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD170 )
  {
    if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(v6 + 40) )
      goto LABEL_13;
  }
  else if ( v7() )
  {
    goto LABEL_13;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD170 )
  {
    if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v8 + 40) )
      goto LABEL_7;
LABEL_13:
    sub_2ADE20();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_13;
LABEL_7:
  v10 = nullptr;
  switch_dbctx();
  v12 = (_QWORD *)(v5 + *(_QWORD *)(a1 + 40));
  v13 = *(_QWORD *)(a2 + 40) + v5;
  v14 = v12;
  result = *(_QWORD *)(v13 + 8);
  v14[1] = result;
  v16 = *(_QWORD *)(v13 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
  if ( v16 )
  {
    v19 = 4 * v16;
    v20[0] = si128;
    v10 = (void *)qalloc_or_throw(4 * v16, a2, v16, v11);
    result = (__int64)memcpy(v10, *(const void **)(v13 + 16), v19);
    si128 = _mm_load_si128(v20);
  }
  v18 = v14[2];
  if ( v18 )
  {
    v14[3] = 0;
    v20[0] = si128;
    result = qfree(v18);
    si128 = _mm_load_si128(v20);
  }
  v14[2] = v10;
  *(__m128i *)(v14 + 3) = si128;
  return result;
}
