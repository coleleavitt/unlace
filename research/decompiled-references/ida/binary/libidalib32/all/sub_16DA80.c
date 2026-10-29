__int64 __fastcall sub_16DA80(__int64 a1, __int64 *a2, _DWORD *a3, _BYTE *a4, __int64 a5, _QWORD *a6)
{
  void *v6; // r14
  __int64 v10; // r15
  size_t v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // rax

  v6 = nullptr;
  v10 = *a6 + 24LL * *(int *)(a1 + 12);
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
  {
    v6 = (void *)qalloc_or_throw();
    memcpy(v6, *(const void **)v10, v11);
  }
  v12 = a2[1];
  v13 = *a2;
  if ( a2[2] < (unsigned __int64)(v12 + 1) )
  {
    v16 = qvector_reserve();
    *a2 = v16;
    v12 = a2[1];
    v13 = v16;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = v6;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  ++a2[1];
  *a3 = 0;
  *a4 = 1;
  return 1;
}

