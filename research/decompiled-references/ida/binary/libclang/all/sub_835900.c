__int64 __fastcall sub_835900(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned int v4; // r12d
  unsigned __int8 **v6; // rax
  __int64 v7; // rsi
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 2) & 1) != 0 )
    return 1;
  if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
    return 1;
  v4 = sub_B19540(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(a1 + 16));
  if ( (_BYTE)v4 )
    return 1;
  if ( a3 && (v8[0] = _mm_loadu_si128(a3), (unsigned __int8)sub_69F550((_QWORD *)(a1 + 840), v8)) )
  {
    return 1;
  }
  else if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
  {
    v6 = (unsigned __int8 **)sub_A2E130(a1, a2, 2256, 0);
    v7 = *(_QWORD *)(a2 + 8);
    if ( v6 )
      sub_8356A0(v6, v7, 8u);
  }
  else
  {
    sub_A2E130(a1, a2, 110, 0);
  }
  return v4;
}

