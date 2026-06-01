__int64 __fastcall sub_DBF760(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebp
  const __m128i *v5; // r13
  _DWORD v6[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v6);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, (__int64)v6, 0);
  if ( (_BYTE)v3 )
  {
    if ( v6[6] )
    {
      v3 = 0;
    }
    else
    {
      v5 = (const __m128i *)sub_CEA4A0((__int64)v6);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128(v5);
    }
  }
  sub_DFF560(v6);
  return v3;
}

