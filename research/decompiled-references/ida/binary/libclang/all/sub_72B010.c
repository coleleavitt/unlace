__int64 __fastcall sub_72B010(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 0x16 )
    return sub_26240F0(a2, "__arm_locally_streaming", 23);
  *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E6C0);
  *(_QWORD *)(v2 + 15) = 0x676E696D61657274LL;
  *(_QWORD *)(a2 + 32) += 23LL;
  return 0x676E696D61657274LL;
}

