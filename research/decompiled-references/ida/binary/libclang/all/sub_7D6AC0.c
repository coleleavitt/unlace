unsigned __int64 __fastcall sub_7D6AC0(_QWORD *a1, __int64 a2, int a3, char *a4, __int64 a5)
{
  int v6; // r14d
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // ax
  char *v13; // rbp
  bool v15; // al
  __int64 v16; // [rsp+8h] [rbp-40h]

  v6 = a5;
  v8 = 24 * a5;
  v9 = sub_79A610(40, a1, a2, 24 * a5);
  *(_QWORD *)v9 = off_49F5208;
  if ( !a2
    || (v10 = sub_79A2E0(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) == 0)
    || *(char *)(v10 + 29) < 0 && (v16 = *(_QWORD *)(v10 + 8) & 7LL, v15 = sub_7946A0(v10), v11 = v16, !v15) )
  {
    v11 = 0;
  }
  *(_QWORD *)(v9 + 8) = v11;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v9 + 24) = a3;
  *(_WORD *)(v9 + 28) = 24657;
  v12 = sub_799DF0(0x51u);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v12 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(81);
  v13 = &a4[v8];
  *(_DWORD *)(v9 + 36) = v6;
  *(_QWORD *)v9 = &off_49F65A8;
  if ( v13 != a4 )
    memmove((void *)(v9 + 40), a4, 8 * ((unsigned __int64)(v13 - a4 - 24) >> 3) + 24);
  return v9;
}

