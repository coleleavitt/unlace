unsigned __int64 __fastcall sub_BE7DB0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        void *src,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const void *v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int16 v17; // ax
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  int v25; // [rsp+14h] [rbp-44h]
  int v26; // [rsp+14h] [rbp-44h]
  const void *v27; // [rsp+18h] [rbp-40h]

  v13 = src;
  v14 = 8 * (2 * a8 + 1) + 32;
  v15 = a1[294];
  a1[304] += v14;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v14 + v16 && v15 )
  {
    a1[294] = v14 + v16;
  }
  else
  {
    v26 = a5;
    v24 = a2;
    v22 = sub_962430((__int64)(a1 + 294), v14, v14, 3, a5, a2);
    v13 = src;
    LODWORD(a5) = v26;
    v16 = v22;
    a2 = v24;
  }
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x2C;
  if ( unk_2CAD564 )
  {
    v27 = v13;
    v25 = a5;
    v23 = a2;
    sub_EC5E10(44);
    v13 = v27;
    LODWORD(a5) = v25;
    a2 = v23;
  }
  v17 = *(_WORD *)(v16 + 1);
  *(_DWORD *)(v16 + 24) = a8;
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 16) = a4;
  *(_DWORD *)(v16 + 20) = a5;
  *(_WORD *)(v16 + 1) = v17 & 0xF801 | 2;
  *(_QWORD *)(v16 + 8LL * (unsigned int)a8 + 32) = a3;
  if ( 8 * a8 )
    memmove((void *)(v16 + 32), v13, 8 * a8);
  v18 = sub_B3FE40(v16);
  *(_BYTE *)(v16 + 1) = (v18 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v18 >> 2) & 7;
  v19 = v16 + 8LL * (unsigned int)(*(_DWORD *)(v16 + 24) + 1) + 32;
  if ( 8 * a10 > 0 )
  {
    v20 = 0;
    do
    {
      *(_QWORD *)(v19 + 8 * v20) = *(_QWORD *)(a9 + 8 * v20);
      ++v20;
    }
    while ( ((8 * a10) >> 3) - v20 > 0 );
  }
  return v16;
}

