__int64 __fastcall sub_CF1060(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  const __m128i *v7; // r12
  _BYTE v8[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DA4BF0(a1, a2, v4, 2) || !(unsigned __int8)sub_DA5070(a1, a2, v4, 2) )
    return 0;
  sub_DFF4E0(v8, *(_QWORD *)(v4 + 32), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_DA8420(a1, a2, v8, 0);
  if ( (_BYTE)v6 )
  {
    v7 = (const __m128i *)sub_CEA540((__int64)v8);
    *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128(v7);
  }
  sub_DFF560(v8);
  return v6;
}

