__int64 __fastcall sub_C72610(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  __int16 v10; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // cl
  __int64 v15; // rsi
  bool v16; // zf
  char v17; // al
  unsigned __int8 v18; // al
  __int64 v19; // rax
  char v21; // [rsp+7h] [rbp-41h]

  v7 = 8 * a5;
  v8 = 8 * a5 + 24;
  v10 = a5;
  v12 = a1[294];
  a1[304] += v8;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= (unsigned __int64)(v8 + v13) && v12 )
    a1[294] = v8 + v13;
  else
    v13 = sub_962430((__int64)(a1 + 294), v8, 8 * a5 + 24, 3, a5, a6);
  v14 = *(_BYTE *)(a2 + 1);
  v15 = *(_QWORD *)(a2 + 8);
  v16 = unk_2CAD564 == 0;
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x3C;
  if ( !v16 )
  {
    v21 = v14;
    sub_EC5E10(60);
    v14 = v21;
  }
  v17 = *(_BYTE *)(v13 + 1);
  *(_BYTE *)(v13 + 2) &= 0xF8u;
  *(_QWORD *)(v13 + 8) = v15;
  *(_QWORD *)(v13 + 16) = a2;
  *(_BYTE *)(v13 + 1) = v14 & 0x3E | v17 & 1;
  v18 = sub_B3E610(v13);
  *(_BYTE *)(v13 + 1) = (v18 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = (8 * (a3 & 1)) | (v18 >> 2) & 7 | *(_BYTE *)(v13 + 2) & 0xF0;
  *(_WORD *)(v13 + 2) = *(_WORD *)(v13 + 2) & 0xF | (16 * v10);
  if ( v7 > 0 )
  {
    v19 = 0;
    do
    {
      *(_QWORD *)(v13 + 8 * v19 + 24) = *(_QWORD *)(a4 + 8 * v19);
      ++v19;
    }
    while ( (v7 >> 3) - v19 > 0 );
  }
  return v13;
}

