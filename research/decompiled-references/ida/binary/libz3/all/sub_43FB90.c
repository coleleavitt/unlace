_QWORD *__fastcall sub_43FB90(__int64 a1, char a2, char a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v12[14]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (_QWORD *)sub_186B270(0x140u);
  v6 = *(_QWORD *)(a1 + 152);
  v5[1] = a1;
  v7 = v5;
  *v5 = &off_1C4E8B0;
  v8 = *(_QWORD *)(v6 + 856);
  v7[2] = v6;
  v7[3] = v8;
  v7[4] = v6;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  *((_BYTE *)v7 + 80) = a2;
  v7[5] = 0;
  v7[6] = 0;
  v7[9] = 0;
  *((_BYTE *)v7 + 81) = a3;
  v7[11] = off_1C4E888;
  v7[12] = v6;
  *(_OWORD *)(v7 + 7) = 0;
  sub_1684300(v12, v6);
  v9 = v12[0];
  v7[17] = 0;
  v7[14] = v7 + 11;
  *((_DWORD *)v7 + 26) = v9;
  v10 = v7[2];
  v7[18] = 0;
  v7[29] = v10;
  v7[32] = v10;
  v7[38] = v10;
  v7[15] = &off_1C62200;
  v7[20] = 0;
  v7[21] = 0;
  v7[22] = &off_1C62200;
  v7[24] = 0;
  v7[25] = 0;
  v7[27] = 0;
  v7[28] = 0;
  v7[30] = 0;
  *((_BYTE *)v7 + 248) = 1;
  v7[33] = 0;
  v7[34] = 0;
  v7[35] = 0;
  v7[36] = 0;
  v7[37] = 0;
  v7[39] = 0;
  return v7;
}

