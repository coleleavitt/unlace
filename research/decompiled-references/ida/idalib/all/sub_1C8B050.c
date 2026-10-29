__int64 __fastcall sub_1C8B050(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int8 v8; // al

  v4 = (unsigned __int64)sub_1C8ABA0(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v6 = v4;
  v7 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x36;
  if ( unk_2CD7484 )
    sub_EE9B50(54);
  *(_WORD *)(v7 + 1) &= 0xF801u;
  *(_QWORD *)(v7 + 8) = v6;
  v8 = sub_B63130(v7);
  *(_BYTE *)(v7 + 1) = (v8 << 6) | *(_BYTE *)(v7 + 1) & 0x3F;
  *(_BYTE *)(v7 + 2) = *(_BYTE *)(v7 + 2) & 0xF8 | (v8 >> 2) & 7;
  return v7;
}
