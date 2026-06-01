__int64 __fastcall sub_4C5780(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r12
  __int64 v6; // rbp
  __m128i v8; // xmm0
  unsigned int *v9; // r12

  v4 = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a2 + 8) + 136LL))(*(_QWORD *)(a2 + 8), a2, a3);
  if ( v6 )
    return v6;
  v6 = sub_186B270(0x30u);
  *(_OWORD *)(v6 + 16) = 0;
  v8 = _mm_loadl_epi64((const __m128i *)off_1C4F2D8);
  *(_DWORD *)(v6 + 32) = v4;
  *(_QWORD *)(v6 + 40) = 0;
  *(__m128i *)v6 = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_1C4F068);
  if ( !(_DWORD)v4 )
    return v6;
  v9 = &a4[v4];
  do
    sub_4C54F0((_QWORD *)(v6 + 40), a4++);
  while ( a4 != v9 );
  return v6;
}

