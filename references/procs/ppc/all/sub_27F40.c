__int64 __fastcall sub_27F40(__int64 a1, unsigned int a2, unsigned int a3)
{
  int *v4; // rdx
  unsigned __int8 v5; // al
  unsigned __int8 v6; // cl
  char *v7; // rdx
  int v8; // eax
  unsigned int v9; // r11d
  char *v10; // rsi
  unsigned __int16 v11; // dx
  __int64 result; // rax
  unsigned int v13; // r11d
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  unsigned __int8 v16; // cl

  *(_BYTE *)(a1 + 121) = 5;
  v4 = (int *)&unk_60560;
  *(_BYTE *)(a1 + 125) = 0;
  *(_BYTE *)(a1 + 114) = 1;
  *(_BYTE *)(a1 + 81) = 4;
  *(_QWORD *)(a1 + 128) = (a2 >> 20) & 1;
  v5 = 0;
  do
  {
    v6 = _bittest((const int *)&a3, 31 - *v4);
    v4 += 2;
    v5 = v6 | (2 * v5) & 0x1F;
  }
  while ( &dword_60588 != v4 );
  v7 = (char *)&unk_60440;
  *(_WORD *)(a1 + 86) = v5;
  v8 = 0;
  do
  {
    v9 = a2 >> (31 - *v7);
    v7 += 8;
    v8 = (int)((v9 & 1 | (2 * v8)) << 14) >> 14;
  }
  while ( &unk_604D0 != (_UNKNOWN *)v7 );
  v10 = (char *)&unk_60340;
  v11 = 0;
  result = (__int64)v8 << 16;
  do
  {
    v13 = a3 >> (31 - *v10);
    v10 += 8;
    v11 = v13 & 1 | (2 * v11);
  }
  while ( &unk_603C0 != (_UNKNOWN *)v10 );
  *(_BYTE *)(a1 + 74) = 0;
  v14 = result | v11;
  *(_BYTE *)(a1 + 41) = 1;
  LOBYTE(result) = 0;
  *(_BYTE *)(a1 + 45) = 2;
  *(_QWORD *)(a1 + 96) = v14;
  v15 = &unk_60100;
  do
  {
    v16 = _bittest((const int *)&a3, 31 - *v15);
    v15 += 2;
    LOBYTE(result) = v16 | (2 * result) & 0x1F;
  }
  while ( v15 != (_DWORD *)&unk_60128 );
  result = (unsigned __int8)result;
  *(_BYTE *)(a1 + 45) = 7;
  *(_WORD *)(a1 + 46) = (unsigned __int8)result;
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_80C7A;
  *(_BYTE *)(a1 + 85) = 0;
  return result;
}
