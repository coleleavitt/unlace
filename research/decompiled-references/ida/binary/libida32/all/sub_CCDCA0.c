__int64 __fastcall sub_CCDCA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i v6; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v7[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v2, 48);
  sub_DFF520(v7);
  sub_DFDA50(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  v6 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v3, 16));
  sub_DFDA50(v3, 16);
  v4 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v4, v7);
  *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v6);
  sub_DFF560(v7);
  return 1;
}

