__int64 __fastcall sub_DE32C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  const __m128i *v5; // r12

  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DCC160(a1, a2, v2, 0);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_DWORD *)(v2 + 24) )
    return 0;
  v5 = (const __m128i *)sub_D0E230(v2);
  *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128(v5);
  return v3;
}
