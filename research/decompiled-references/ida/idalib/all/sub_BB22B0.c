unsigned __int64 __fastcall sub_BB22B0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // rax
  char v19; // al
  __int64 v22; // [rsp+18h] [rbp-40h]

  v11 = sub_EF52D0((unsigned int)a8, 0, 1);
  v12 = sub_B902D0(120, a1, a2, v11);
  *(_QWORD *)v12 = off_2C02B30;
  if ( a2
    && (v13 = sub_B8C1B0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) != 0)
    && (*(char *)(v13 + 29) >= 0 || (v22 = *(_QWORD *)(v13 + 8) & 7LL, v19 = sub_B8C610(v13), v14 = v22, v19)) )
  {
    v15 = v14;
  }
  else
  {
    v15 = 0;
  }
  *(_QWORD *)(v12 + 8) = v15;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v12 + 24) = a3;
  *(_WORD *)(v12 + 28) = 24603;
  v16 = sub_B8C0C0(27);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v16 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(27);
  *(_QWORD *)(v12 + 40) = a4;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 48) = a5;
  *(_QWORD *)v12 = &off_2C04040;
  sub_B8E080(v12 + 64, 27);
  *(_QWORD *)(v12 + 96) = 0;
  *(_QWORD *)v12 = &off_2C04268;
  *(_QWORD *)(v12 + 104) = a6;
  *(_QWORD *)(v12 + 112) = a9;
  v17 = sub_EF5330(v12 + 120, a7, a8, 0, 1);
  *(_QWORD *)(v12 + 56) = v17;
  sub_EF5300(v17, a7, a8);
  return v12;
}
