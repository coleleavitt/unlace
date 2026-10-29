__m128i *__fastcall sub_6544C0(__m128i *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rsi
  __m128i *(__fastcall *v5)(__m128i *, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rax

  sub_654200(a2, 0);
  v4 = *(_QWORD **)(a2 + 2976);
  v5 = *(__m128i *(__fastcall **)(__m128i *, __int64, __int64, __int64, __int64))(*v4 + 144LL);
  if ( v5 == sub_39A270 )
  {
    v6 = v4[1];
    v7 = sub_15DE060(v6, *(_QWORD *)(v6 + 864), sub_39A270, v2, v3);
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)v6);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    return a1;
  }
  else
  {
    ((void (__fastcall *)(__m128i *))v5)(a1);
    return a1;
  }
}

