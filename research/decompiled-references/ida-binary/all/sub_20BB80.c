void __fastcall sub_20BB80(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  int v4; // eax
  size_t v5; // r12
  void *v6; // r13
  __m128i si128; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rax
  size_t v12; // r12
  void *v13; // rax
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 == a2 )
    return;
  v2 = (_DWORD *)a2;
  v4 = *(_DWORD *)a1;
  if ( *(int *)a2 < -1 )
  {
    if ( v4 >= -1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        qfree(v9, (const char *)a2);
      }
    }
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    goto LABEL_13;
  }
  if ( v4 < -1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    v12 = *(_QWORD *)(a2 + 16);
    if ( v12 )
    {
      v13 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 16));
      *(_QWORD *)(a1 + 24) = v12;
      *(_QWORD *)(a1 + 8) = v13;
      memcpy(v13, *(const void **)(a2 + 8), v12);
      *(_QWORD *)(a1 + 16) = v12;
    }
LABEL_13:
    *(_DWORD *)a1 = *(_DWORD *)a2;
    return;
  }
  v5 = *(_QWORD *)(a2 + 16);
  v6 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v14[0] = si128;
    v11 = (void *)qalloc_or_throw(v10);
    a2 = *(_QWORD *)(a2 + 8);
    v6 = v11;
    memcpy(v11, (const void *)a2, v5);
    si128 = _mm_load_si128(v14);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v14[0] = si128;
    qfree(v8, (const char *)a2);
    si128 = _mm_load_si128(v14);
  }
  *(_QWORD *)(a1 + 8) = v6;
  *(__m128i *)(a1 + 16) = si128;
  *(_DWORD *)a1 = *v2;
}
