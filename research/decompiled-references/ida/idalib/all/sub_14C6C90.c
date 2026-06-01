char __fastcall sub_14C6C90(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  char result; // al
  char v7; // [rsp+Fh] [rbp-29h]
  _BYTE v8[25]; // [rsp+1Fh] [rbp-19h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
  {
    v7 = sub_15612F0(a1, 0, v8);
    if ( v7 )
      goto LABEL_3;
    return sub_14BDD40(a1, a2, nullptr, 0, 0, a4);
  }
  v8[0] = 0;
  v7 = sub_147F1B0(a1);
  if ( !v7 )
    return sub_14BDD40(a1, a2, nullptr, 0, 0, a4);
LABEL_3:
  sub_148B330(a1, *(_QWORD *)a3, 0, 3u, 0, a4, a5);
  *(_QWORD *)(a3 + 88) = *(_QWORD *)(*(_QWORD *)a3 + 160LL);
  sub_147E3E0(a1, a3);
  result = v7;
  if ( (*(_BYTE *)(a3 + 720) & 1) == 0 )
    return ((**(_DWORD **)a3 >> 12) & 0x7F) == 69;
  return result;
}
