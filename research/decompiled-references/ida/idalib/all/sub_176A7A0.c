__int64 __fastcall sub_176A7A0(_QWORD *a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbx
  void **v4; // rax
  void **v6; // rbp
  unsigned __int8 v7; // al

  v3 = a2;
  v4 = sub_176A2F0(a1, *(_QWORD *)(a2 + 8), a3);
  if ( ((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v6 = v4;
  if ( *(_DWORD *)(*a1 + 12632LL) || v4 != *(void ***)(a2 + 8) )
  {
    v3 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248LL), 8u);
    *(_WORD *)v3 = *(_WORD *)v3 & 0xFE00 | 0x36;
    if ( unk_2CD7484 )
      sub_EE9B50(54);
    *(_WORD *)(v3 + 1) &= 0xF801u;
    *(_QWORD *)(v3 + 8) = v6;
    v7 = sub_B63130(v3);
    *(_BYTE *)(v3 + 1) = (v7 << 6) | *(_BYTE *)(v3 + 1) & 0x3F;
    *(_BYTE *)(v3 + 2) = *(_BYTE *)(v3 + 2) & 0xF8 | (v7 >> 2) & 7;
  }
  return v3;
}
