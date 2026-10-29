__int64 __fastcall sub_BEB390(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // al

  v6 = (_WORD *)sub_ECAC60(40, a1, 8);
  v11 = a1[2330];
  v12 = (__int64)v6;
  *v6 = *v6 & 0xFE00 | 0x4B;
  if ( unk_2CAD564 )
    sub_EC5E10(75);
  *(_WORD *)(v12 + 1) &= 0xF801u;
  v13 = 0;
  *(_QWORD *)(v12 + 8) = v11;
  *(_QWORD *)(v12 + 16) = a2;
  *(_QWORD *)(v12 + 24) = a3;
  if ( a4 )
    v13 = sub_A31CC0(a1, a4, v7, v8, v9, v10);
  *(_QWORD *)(v12 + 32) = v13;
  v14 = sub_B41DC0(v12, a4 == 0);
  *(_BYTE *)(v12 + 1) = (v14 << 6) | *(_BYTE *)(v12 + 1) & 0x3F;
  *(_BYTE *)(v12 + 2) = *(_BYTE *)(v12 + 2) & 0xF8 | (v14 >> 2) & 7;
  return v12;
}

