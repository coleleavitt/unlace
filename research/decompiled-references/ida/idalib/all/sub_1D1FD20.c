__int64 __fastcall sub_1D1FD20(_QWORD *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rbp
  unsigned __int8 v8; // al

  v4 = a2;
  v5 = (unsigned __int64)sub_1D1AC70(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v7 = v5;
  if ( *(_DWORD *)(*a1 + 12632LL) || v5 != *(_QWORD *)(a2 + 8) )
  {
    v4 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248LL), 8u);
    *(_WORD *)v4 = *(_WORD *)v4 & 0xFE00 | 0x36;
    if ( unk_2CD7484 )
      sub_EE9B50(54);
    *(_WORD *)(v4 + 1) &= 0xF801u;
    *(_QWORD *)(v4 + 8) = v7;
    v8 = sub_B63130(v4);
    *(_BYTE *)(v4 + 1) = (v8 << 6) | *(_BYTE *)(v4 + 1) & 0x3F;
    *(_BYTE *)(v4 + 2) = *(_BYTE *)(v4 + 2) & 0xF8 | (v8 >> 2) & 7;
  }
  return v4;
}
