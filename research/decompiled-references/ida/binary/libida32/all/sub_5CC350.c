__int64 __fastcall sub_5CC350(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  sub_5CC290(a1);
  v1 = sub_5CB650(a1);
  v2 = *(_DWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 120) = v1;
  *(__m128i *)(a1 + 104) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1);
  *(_DWORD *)(v1 + 188) = v2;
  return 0;
}

