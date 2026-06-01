unsigned __int64 __fastcall sub_C74080(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r10
  bool v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  char v14; // r15
  char v15; // al
  __int64 v16; // rax
  char v17; // dl
  char v18; // r15
  char v19; // bp
  __int16 v20; // dx
  unsigned __int8 v21; // al
  __int64 v23; // rax
  __int64 v25; // [rsp+8h] [rbp-50h]
  _QWORD v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a1;
  v10 = a5 != 0;
  v11 = 8LL * (a5 != 0) + 32;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v23 = sub_962430((__int64)(a1 + 294), v11, 8LL * (a5 != 0) + 32, 3, a5, a6);
    v6 = a1;
    v13 = v23;
  }
  v14 = 1;
  v26[0] = *(_QWORD *)(a3 + 48);
  v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL);
  if ( v15 != 43 )
    v14 = 2 * (v15 == 44);
  v16 = sub_F43C30(v26, v6);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x6F;
  if ( unk_2CAD564 )
  {
    v25 = v16;
    sub_EC5E10(111);
    v16 = v25;
  }
  v17 = 2 * v14;
  v18 = *(_BYTE *)(v13 + 1);
  v19 = 8 * v10;
  *(_QWORD *)(v13 + 8) = v16;
  *(_QWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 24) = a4;
  *(_DWORD *)(v13 + 4) = a2;
  *(_BYTE *)(v13 + 1) = v17 | v18 & 0xF9;
  v20 = *(_WORD *)(v13 + 1) & 0xF807;
  *(_WORD *)(v13 + 1) = v20;
  *(_BYTE *)(v13 + 2) = v19 | HIBYTE(v20) & 0xF7;
  if ( (v19 & 8) != 0 )
    *(_QWORD *)(v13 + 32) = a5;
  v21 = sub_B41800(v13);
  *(_BYTE *)(v13 + 1) = (v21 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v21 >> 2) & 7;
  return v13;
}

