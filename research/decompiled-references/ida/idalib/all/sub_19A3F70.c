__int64 __fastcall sub_19A3F70(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  char v9; // dl
  _QWORD v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v10[0] = a2;
  sub_1906AD0(a1);
  if ( !*(_BYTE *)(a1 + 4512) )
    return v10[0];
  v3 = sub_EEF560(*(_QWORD **)(a1 + 248), v10, 1, 0, 0, 0);
  v4 = *(_QWORD **)(a1 + 248);
  v5 = v3;
  v6 = v4[2329];
  v7 = sub_EEE9A0(32, v4, 8u);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0xA;
  if ( unk_2CD7484 )
    sub_EE9B50(10);
  *(_WORD *)(v7 + 1) &= 0xF801u;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)(v7 + 16) = v5;
  *(_QWORD *)(v7 + 24) = 0;
  v8 = sub_B62D20(v7, 0);
  v9 = *(_BYTE *)(v7 + 1);
  *(_DWORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 1) = (v8 << 6) | v9 & 0x3F;
  *(_BYTE *)(v7 + 2) = *(_BYTE *)(v7 + 2) & 0xF8 | (v8 >> 2) & 7;
  return sub_19A3EF0(a1, v7);
}
