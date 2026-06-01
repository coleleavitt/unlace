__int64 __fastcall sub_D97980(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rax
  __m128i v5; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v6[72]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  v5 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v1, 16));
  sub_DFDA50(v1, 16);
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v6);
  sub_DFDA50(v2, 48);
  *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_load_si128(&v5);
  v3 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v3, v6);
  sub_DFF560(v6);
  return 1;
}

