__int64 __fastcall sub_785840(__int64 a1, __int64 a2, int a3, __int64 a4, const void *a5, __int64 a6)
{
  size_t v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  char v15; // al
  __int64 v16; // [rsp+8h] [rbp-40h]

  v9 = 4 * a6;
  v10 = sub_79A610(56, a1, a2, 4 * a6);
  *(_QWORD *)v10 = off_49F5208;
  if ( !a2
    || (v11 = sub_79A2E0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && (v16 = *(_QWORD *)(v11 + 8) & 7LL, v15 = sub_7946A0(v11), v12 = v16, !v15) )
  {
    v12 = 0;
  }
  *(_QWORD *)(v10 + 8) = v12;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v10 + 24) = a3;
  *(_WORD *)(v10 + 28) = 24656;
  v13 = sub_799DF0(80);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v13 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(80);
  *(_QWORD *)(v10 + 40) = a4;
  *(_QWORD *)(v10 + 48) = 4;
  *(_QWORD *)v10 = &off_47DA750;
  if ( v9 )
    memmove((void *)(v10 + 56), a5, v9);
  return v10;
}

