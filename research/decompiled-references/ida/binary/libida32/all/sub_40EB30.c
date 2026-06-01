unsigned __int64 __fastcall sub_40EB30(int *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rbp
  __int64 v4; // rdi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 80LL);
  if ( (char *)v2 != (char *)sub_40EAD0 )
    return v2();
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1448);
  v4 = *(_QWORD *)(switch_dbctx(a1[2]) + 1448);
  *(__m128i *)(v4 + 8) = _mm_loadu_si128((const __m128i *)(v3 + 8));
  *(__m128i *)(v4 + 24) = _mm_loadu_si128((const __m128i *)(v3 + 24));
  *(__m128i *)(v4 + 40) = _mm_loadu_si128((const __m128i *)(v3 + 40));
  *(__m128i *)(v4 + 56) = _mm_loadu_si128((const __m128i *)(v3 + 56));
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v3 + 72);
  return sub_40E9E0(v4);
}

