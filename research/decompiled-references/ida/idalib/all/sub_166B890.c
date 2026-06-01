_DWORD *__fastcall sub_166B890(__int64 a1, unsigned int a2, int a3)
{
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // rsi
  _DWORD *result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // [rsp+8h] [rbp-D0h] BYREF
  int v15; // [rsp+Ch] [rbp-CCh] BYREF
  unsigned int v16[50]; // [rsp+10h] [rbp-C8h] BYREF

  v5 = *(_DWORD *)(a1 + 1952);
  v6 = *(_DWORD *)(a1 + 1956);
  if ( v5 == *(_DWORD *)(a1 + 1944) && *(_DWORD *)(a1 + 1948) == v6 )
  {
    v6 = 0;
    v5 = 0;
    if ( a3 == 1 )
      goto LABEL_12;
  }
  else if ( a3 == 1 )
  {
LABEL_12:
    v7 = v5 & 0xFFFE7FFF;
    v8 = v6 | 0x18000;
    BYTE1(v7) = ((unsigned __int16)(v5 & 0x7FFF) >> 8) | 0x80;
    goto LABEL_5;
  }
  if ( a3 )
  {
    v8 = v6 | 0x18000;
    v7 = v5 & 0xFFFE7FFF | 0x10000;
  }
  else
  {
    v7 = v5 & 0xFFFE7FFF;
    v8 = v6 | 0x18000;
  }
LABEL_5:
  v9 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v9 + 46) & 8) == 0 )
  {
    if ( (*(_BYTE *)(v9 + 45) & 0x40) == 0 )
      goto LABEL_7;
LABEL_14:
    sub_168B9F0(v16, a1 + 8, a2, 4977, 0);
    v14 = 0;
    v12 = sub_1587D10((__int64)v16, &v14);
    v15 = 1;
    sub_1587D10(v12, &v15);
    sub_15F7200(v16);
    v9 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v9 + 46) & 4) == 0 )
      goto LABEL_8;
LABEL_15:
    sub_168B9F0(v16, a1 + 8, a2, 4977, 0);
    v14 = 0;
    v13 = sub_1587D10((__int64)v16, &v14);
    v15 = 2;
    sub_1587D10(v13, &v15);
    sub_15F7200(v16);
    v9 = *(_QWORD *)(a1 + 232);
    goto LABEL_8;
  }
  sub_168B9F0(v16, a1 + 8, a2, 4977, 0);
  v14 = 0;
  v11 = sub_1587D10((__int64)v16, &v14);
  v15 = 0;
  sub_1587D10(v11, &v15);
  sub_15F7200(v16);
  v9 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v9 + 45) & 0x40) != 0 )
    goto LABEL_14;
LABEL_7:
  if ( (*(_BYTE *)(v9 + 46) & 4) != 0 )
    goto LABEL_15;
LABEL_8:
  *(_DWORD *)(a1 + 1952) = v7;
  *(_DWORD *)(a1 + 1956) = v8;
  *(_DWORD *)(a1 + 1960) = a2;
  sub_BF6C80(v16, v9);
  *(_DWORD *)(a1 + 224) = v16[0] ^ v8 & (v16[0] ^ v7);
  result = *(_DWORD **)(a1 + 240);
  result[133] = a2;
  result[132] = a3;
  result[134] = a3;
  return result;
}
