__int64 *__fastcall sub_40A7D0(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v3 = sub_3FCD00(*(_QWORD **)(a2 + 264), *(_DWORD *)(a2 + 272), a3);
  if ( v3 )
  {
    sub_40A2F0(a1, (_QWORD *)v3[1]);
    return a1;
  }
  v6 = *(_QWORD *)(v4 + 152);
  v7 = *(_QWORD *)(v6 + 864);
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v6);
  if ( !v7 )
    return a1;
  ++*(_DWORD *)(v7 + 8);
  return a1;
}

