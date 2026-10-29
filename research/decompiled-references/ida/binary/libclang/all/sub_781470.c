__int64 __fastcall sub_781470(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9,
        char a10)
{
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int16 v17; // ax
  char v19; // al
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  v14 = sub_79A610(80, a1, a2, 0);
  *(_QWORD *)v14 = off_49F5208;
  if ( !a2
    || (v15 = sub_79A2E0(a2), v16 = *(_QWORD *)(v15 + 8) & 7LL, (*(_QWORD *)(v15 + 8) & 7) == 0)
    || *(char *)(v15 + 29) < 0 && (v22 = *(_QWORD *)(v15 + 8) & 7LL, v19 = sub_7946A0(v15), v16 = v22, !v19) )
  {
    v16 = 0;
  }
  *(_QWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 24) = a4;
  *(_QWORD *)(v14 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v14 + 28) = 24623;
  v17 = sub_799DF0(47);
  *(_BYTE *)(v14 + 32) &= 0xF8u;
  *(_WORD *)(v14 + 30) = v17 & 0x3FFF | *(_WORD *)(v14 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(47);
  *(_DWORD *)(v14 + 64) = a3;
  *(_QWORD *)(v14 + 40) = a5;
  *(_QWORD *)(v14 + 48) = a6;
  *(_QWORD *)(v14 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v14 + 72) = 0;
  *(_QWORD *)v14 = &off_47D9DB0;
  *(_DWORD *)(v14 + 68) = (2 * a9) | (4 * a10) & 0xC;
  if ( a8 )
  {
    if ( (~*(_BYTE *)(v14 + 68) & 0xC) != 0 && (a10 & 3) != 0 )
    {
      v20 = sub_798D40(v14);
      v21 = (_QWORD *)sub_779170(v20 + 2192, 16, 3);
      *v21 = *(_QWORD *)(v14 + 72);
      v21[1] = a8;
      *(_QWORD *)(v14 + 72) = v21;
    }
    else
    {
      *(_QWORD *)(v14 + 72) = a8;
    }
    *(_BYTE *)(v14 + 68) |= 1u;
  }
  return v14;
}

