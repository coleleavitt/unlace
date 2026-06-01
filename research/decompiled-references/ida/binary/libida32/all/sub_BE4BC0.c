unsigned __int64 __fastcall sub_BE4BC0(_QWORD *a1, int a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  char v8; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  unsigned __int8 v15; // al
  __int64 v17; // rax
  char v18; // [rsp+Fh] [rbp-39h]
  bool v19; // [rsp+Fh] [rbp-39h]

  v8 = a5;
  LOBYTE(a5) = a6 != 0;
  v11 = 8LL * (a6 != 0) + 16;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v19 = a6 != 0;
    v17 = sub_962430((__int64)(a1 + 294), v11, 8LL * (a6 != 0) + 16, 3, a5, a6);
    LOBYTE(a5) = v19;
    v13 = v17;
  }
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x12;
  if ( unk_2CAD564 )
  {
    v18 = a5;
    sub_EC5E10(18);
    LOBYTE(a5) = v18;
  }
  v14 = *(_WORD *)(v13 + 1);
  *(_QWORD *)(v13 + 8) = a3;
  *(_DWORD *)(v13 + 4) = a2;
  *(_WORD *)(v13 + 1) = v14 & 0xF801 | 2;
  LOBYTE(v14) = *(_BYTE *)(v13 + 3);
  *(_BYTE *)(v13 + 2) = ((_BYTE)a5 << 7) | (8 * (a4 & 0xF));
  *(_BYTE *)(v13 + 3) = v14 & 0xFE | v8 & 1;
  if ( a6 )
    *(_QWORD *)(v13 + 16) = a6;
  v15 = sub_B405E0(v13);
  *(_BYTE *)(v13 + 1) = (v15 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v15 >> 2) & 7;
  return v13;
}

