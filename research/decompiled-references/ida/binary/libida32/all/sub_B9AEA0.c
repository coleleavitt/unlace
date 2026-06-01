unsigned __int64 __fastcall sub_B9AEA0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int16 a5,
        char a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // ax
  char v18; // r12
  int v19; // eax
  char v21; // al
  __int64 v22; // [rsp+8h] [rbp-40h]

  v13 = sub_B6C590(88, a1, a2, 0);
  *(_QWORD *)v13 = off_2BD8B30;
  if ( a2
    && (v14 = sub_B68470(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) != 0)
    && (*(char *)(v14 + 29) >= 0 || (v22 = *(_QWORD *)(v14 + 8) & 7LL, v21 = sub_B688D0(v14), v15 = v22, v21)) )
  {
    v16 = v15;
  }
  else
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 24) = a3;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v13 + 28) = 24644;
  v17 = sub_B68380(68);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(68);
  v18 = *(_BYTE *)(v13 + 80);
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 40) = a7;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 56) = a9;
  v19 = *(_DWORD *)(v13 + 64);
  *(_DWORD *)(v13 + 84) = 0;
  *(_DWORD *)(v13 + 64) = v19 & 0xFFF00000 | a4 & 0xFFFFF;
  *(_QWORD *)v13 = &off_2BDA620;
  *(_WORD *)(v13 + 66) = (16 * a5) | ((v19 & 0xFFF00000 | a4 & 0xFFFFF) >> 16) & 0xF;
  *(_BYTE *)(v13 + 80) = (2 * (a6 & 1)) & 0xFB | a8 & 1 | v18 & 0xF8;
  return v13;
}

