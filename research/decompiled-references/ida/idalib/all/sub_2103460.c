bool __fastcall sub_2103460(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  size_t v4; // r13
  size_t v5; // rdx
  int v6; // eax
  const void *v8; // rsi
  size_t v9; // rdx
  int v10; // eax
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( sub_9C4B50(a1, a2) < 0 )
    return 1;
  if ( sub_9C4B50(a2, a1) < 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a2 + 40);
  v5 = v3;
  if ( v4 <= v3 )
    v5 = *(_QWORD *)(a2 + 40);
  if ( v5 && (v6 = memcmp(*(const void **)(a1 + 32), *(const void **)(a2 + 32), v5)) != 0 )
  {
    if ( v6 < 0 )
      return 1;
  }
  else if ( v4 != v3 && v4 > v3 )
  {
    return 1;
  }
  v8 = *(const void **)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 40);
  v11[0] = _mm_loadu_si128((const __m128i *)(a2 + 32));
  if ( (int)sub_9C4B00((__int64)v11, v8, v9) < 0 )
    return 0;
  v10 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a1 + 48) < v10 )
    return 1;
  if ( *(_DWORD *)(a1 + 48) != v10 )
    return 0;
  return *(_DWORD *)(a1 + 52) < *(_DWORD *)(a2 + 52);
}
