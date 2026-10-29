__int64 __fastcall sub_3D8C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  const __m128i *v4; // rsi
  unsigned int v5; // eax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 76) )
  {
    v4 = (const __m128i *)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 64));
    if ( !v4 )
      return 0;
    if ( v4 != *(const __m128i **)(a1 + 48) )
      sub_31300((const __m128i **)(a1 + 40), v4);
    *(_DWORD *)(a1 + 72) = 0;
    v5 = sub_3D6D0((_QWORD *)a1, (unsigned __int64)v4);
    *(_DWORD *)(a1 + 76) = v5;
    if ( !v5 )
      return 0;
    *(_QWORD *)(a1 + 64) += v5;
    v3 = *(unsigned int *)(a1 + 72);
    if ( (unsigned int)v3 >= v5 )
      return 0;
  }
  *a2 = *(_QWORD *)(a1 + 40) + 24 * v3;
  ++*(_DWORD *)(a1 + 72);
  return 1;
}

