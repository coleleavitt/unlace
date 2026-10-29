__int64 __fastcall sub_77B010(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 result; // rax
  char v19; // al
  __int64 v20; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_49F5208;
  if ( !a4
    || (v14 = sub_79A2E0(a4), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) == 0)
    || *(char *)(v14 + 29) < 0 && (v20 = *(_QWORD *)(v14 + 8) & 7LL, v19 = sub_7946A0(v14), v15 = v20, !v19) )
  {
    v15 = 0;
  }
  *(_QWORD *)(a1 + 8) = v15;
  LOBYTE(v16) = a2 & 0x7F;
  *(_QWORD *)(a1 + 16) = a4 & 0xFFFFFFFFFFFFFFFBLL;
  HIBYTE(v16) = 96;
  *(_DWORD *)(a1 + 24) = a6;
  *(_WORD *)(a1 + 28) = v16;
  v17 = sub_799DF0(a2);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v17 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(a2);
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 40) = a7;
  *(_QWORD *)(a1 + 72) = a3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 48) = a8;
  *(_QWORD *)(a1 + 80) = a1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 56) = a9 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)a1 = &off_47D9C48;
  result = a10 & 7;
  *(_BYTE *)(a1 + 96) = result;
  return result;
}

