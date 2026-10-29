__int64 __fastcall sub_D0E2D0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r12
  const __m128i *v6; // r12

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v2;
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v5 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
  v2 = sub_DCC160(a1 + 384, v4, v5, 0);
  if ( !(_BYTE)v2 )
    return v2;
  if ( *(_DWORD *)(v5 + 24) )
    return 0;
  v6 = (const __m128i *)sub_D0E280(v5);
  *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v6);
  return v2;
}
