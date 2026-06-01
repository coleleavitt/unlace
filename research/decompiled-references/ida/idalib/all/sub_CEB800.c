__int64 __fastcall sub_CEB800(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r13
  void (__fastcall *v9)(__int64); // rax
  __int64 v10; // r14
  __int64 v11; // r13
  void (__fastcall *v12)(__int64); // rax
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v15; // rdx

  v6 = *(_QWORD *)(a4 + 32);
  v7 = *(_QWORD *)(v6 + 280);
  v8 = v7 + 24LL * *(unsigned int *)(v6 + 288);
  if ( v7 != v8 )
  {
    do
    {
      *(__m128i *)(a3 + *(unsigned int *)(v7 + 8) - 16) = _mm_loadu_si128((const __m128i *)(a2
                                                                                          + *(unsigned int *)(v7 + 8)
                                                                                          - 16));
      v9 = *(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 80LL);
      if ( v9 )
        v9(a1);
      v7 += 24;
    }
    while ( v7 != v8 );
    v6 = *(_QWORD *)(a4 + 32);
  }
  v10 = *(_QWORD *)(v6 + 8);
  v11 = v10 + 32LL * *(unsigned int *)(v6 + 16);
  if ( v10 != v11 )
  {
    do
    {
      *(__m128i *)(a3 + *(unsigned int *)(v10 + 8) - 16) = _mm_loadu_si128((const __m128i *)(a2
                                                                                           + *(unsigned int *)(v10 + 8)
                                                                                           - 16));
      v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 16) + 80LL);
      if ( v12 )
        v12(a1);
      v10 += 32;
    }
    while ( v10 != v11 );
    v6 = *(_QWORD *)(a4 + 32);
  }
  result = *(_QWORD *)(v6 + 488);
  for ( i = result + 32LL * *(unsigned int *)(v6 + 496);
        result != i;
        *(__m128i *)(a3 + v15 - 16) = _mm_loadu_si128((const __m128i *)(a2 + v15 - 16)) )
  {
    v15 = *(unsigned int *)(result + 8);
    result += 32;
  }
  return result;
}
