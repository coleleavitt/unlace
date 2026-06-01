unsigned __int64 __fastcall sub_7A8050(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  signed __int64 v5; // r14
  int v6; // r12d
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  bool v15; // al
  int v17; // [rsp+14h] [rbp-44h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v5 = 8 * a5;
  v6 = a5;
  v8 = sub_79A610(64, a1, a2, 8 * a5);
  if ( a3 )
  {
    v9 = *(_QWORD *)(a3 + 40);
    v10 = *(_DWORD *)(a3 + 24);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  *(_QWORD *)v8 = off_49F5208;
  if ( !a2
    || (v17 = v10, v11 = sub_79A2E0(a2), v10 = v17, v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && (v18 = *(_QWORD *)(v11 + 8) & 7LL, v15 = sub_7946A0(v11), v10 = v17, v12 = v18, !v15) )
  {
    v12 = 0;
  }
  *(_DWORD *)(v8 + 24) = v10;
  *(_QWORD *)(v8 + 8) = v12;
  *(_QWORD *)(v8 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v8 + 28) = 24629;
  v13 = sub_799DF0(0x35u);
  *(_BYTE *)(v8 + 32) &= 0xF8u;
  *(_WORD *)(v8 + 30) = v13 & 0x3FFF | *(_WORD *)(v8 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(53);
  *(_QWORD *)(v8 + 40) = v9;
  *(_QWORD *)(v8 + 48) = a3;
  *(_DWORD *)(v8 + 56) = v6;
  *(_QWORD *)v8 = &off_49F5A20;
  if ( v5 <= 8 )
  {
    if ( v5 == 8 )
      *(_QWORD *)(v8 + 64) = *a4;
  }
  else
  {
    memmove((void *)(v8 + 64), a4, v5);
  }
  return v8;
}

