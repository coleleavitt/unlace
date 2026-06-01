__int64 __fastcall sub_81EFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int8 v10; // al

  v6 = (_WORD *)sub_AC40C0(40, a1, 8);
  v7 = *(_QWORD *)(a1 + 18480);
  v8 = (__int64)v6;
  *v6 = *v6 & 0xFE00 | 0x4C;
  if ( byte_4AD234C )
    sub_AC4570(76);
  *(_WORD *)(v8 + 1) &= 0xF801u;
  v9 = 0;
  *(_QWORD *)(v8 + 8) = v7;
  *(_QWORD *)(v8 + 16) = a2;
  *(_QWORD *)(v8 + 24) = a3;
  if ( a4 )
    v9 = sub_B4D570(a1, a4);
  *(_QWORD *)(v8 + 32) = v9;
  v10 = sub_76D370(v8, a4 == 0);
  *(_BYTE *)(v8 + 1) = (v10 << 6) | *(_BYTE *)(v8 + 1) & 0x3F;
  *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 + 2) & 0xF8 | (v10 >> 2) & 7;
  return v8;
}

