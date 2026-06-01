__int64 __fastcall sub_C94CE0(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned __int8 v7; // al

  v4 = (_WORD *)sub_EEE9A0(32, a1, 8);
  v5 = *(_QWORD *)(a3 + 8);
  v6 = (__int64)v4;
  *v4 = *v4 & 0xFE00 | 0x74;
  if ( unk_2CD7484 )
    sub_EE9B50(116);
  *(_WORD *)(v6 + 1) &= 0xF801u;
  *(_QWORD *)(v6 + 8) = v5;
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 24) = a3;
  v7 = sub_B635E0(v6);
  *(_BYTE *)(v6 + 1) = (v7 << 6) | *(_BYTE *)(v6 + 1) & 0x3F;
  *(_BYTE *)(v6 + 2) = *(_BYTE *)(v6 + 2) & 0xF8 | (v7 >> 2) & 7;
  return v6;
}
