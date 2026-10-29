__int64 __fastcall sub_1A0A760(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rbx
  unsigned __int8 v7; // al

  if ( *(_QWORD *)a2 )
    return *(_QWORD *)a2;
  v4 = *(_QWORD **)(a1 + 248);
  v5 = v4[2329];
  v6 = sub_EEE9A0(16, v4, 8u);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x2D;
  if ( unk_2CD7484 )
    sub_EE9B50(45);
  *(_WORD *)(v6 + 1) &= 0xF801u;
  *(_QWORD *)(v6 + 8) = v5;
  v7 = sub_B63070(v6);
  *(_BYTE *)(v6 + 1) = (v7 << 6) | *(_BYTE *)(v6 + 1) & 0x3F;
  *(_BYTE *)(v6 + 2) = *(_BYTE *)(v6 + 2) & 0xF8 | (v7 >> 2) & 7;
  *(_QWORD *)a2 = v6;
  return v6;
}
