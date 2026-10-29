__int64 __fastcall sub_CF2DF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  const __m128i *v6; // r13
  _DWORD v7[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+20h] [rbp-38h]

  sub_E05460(v7, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_CDA220((__int64)v7);
  if ( (unsigned __int8)sub_DA4950(a1, a2, v3)
    && (v7[6] || !v8 || !*(_BYTE *)(v8 + 25))
    && (v4 = sub_DA6240(a1, a2, v7), (_BYTE)v4) )
  {
    v6 = (const __m128i *)sub_CEA540((__int64)v7);
    *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128(v6);
  }
  else
  {
    v4 = 0;
  }
  sub_DFF560(v7);
  return v4;
}

