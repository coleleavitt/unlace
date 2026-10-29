unsigned __int64 __fastcall sub_C747E0(
        _QWORD *a1,
        char a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned __int64 a9,
        char a10)
{
  char v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  char v17; // al
  char v18; // r12
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]

  v13 = a10;
  v14 = 8 * ((unsigned int)(HIDWORD(a9) != 0) + (_DWORD)a5 + 1) + 32;
  v15 = a1[294];
  a1[304] += v14;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v14 + v16 && v15 )
  {
    a1[294] = v14 + v16;
  }
  else
  {
    v22 = a6;
    v21 = a5;
    v20 = sub_962430((__int64)(a1 + 294), v14, v14, 3, a5, a6);
    v13 = a10;
    a6 = v22;
    v16 = v20;
    a5 = v21;
  }
  sub_BD5A80(v16, 0x5Bu, a3, 0, 0, a6, a4, a5, a7, a8, (HIDWORD(a9) << 32) | (unsigned int)a9, 0, v13);
  v17 = 2 * (a2 & 0x3F);
  v18 = *(_BYTE *)(v16 + 3);
  *(_DWORD *)(v16 + 24) = 0;
  *(_BYTE *)(v16 + 3) = v17 | v18 & 0x81;
  *(_DWORD *)(v16 + 24) = sub_C70820(v16);
  return v16;
}

