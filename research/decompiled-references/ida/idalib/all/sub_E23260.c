void __fastcall sub_E23260(__int64 a1, __int64 a2)
{
  double v2; // rax
  __m128i v3; // xmm1

  v2 = *(double *)a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  *(_OWORD *)(a1 + 8) = 0;
  *(double *)a1 = v2;
  LODWORD(v2) = *(_DWORD *)(a2 + 24);
  *(__m128i *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 24) = LODWORD(v2);
  if ( !LODWORD(v2) )
  {
    if ( *(_QWORD *)(a1 + 32) )
      sub_E1E440(*(_QWORD *)(a1 + 32), (double *)a2, a1);
  }
}
