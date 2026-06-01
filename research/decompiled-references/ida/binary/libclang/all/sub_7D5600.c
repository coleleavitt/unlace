unsigned __int64 __fastcall sub_7D5600(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // ax
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rsi
  bool v27; // al
  __int64 v28; // [rsp+0h] [rbp-58h]

  v14 = sub_B07C80(*(_QWORD *)(*(_QWORD *)a9 & 0xFFFFFFFFFFFFFFF0LL));
  v15 = 0;
  if ( v14 && *(_BYTE *)(v14 + 16) == 16 )
    v15 = 8LL * (*(_QWORD *)(v14 + 32) != 0);
  v16 = sub_79A610(88, a1, a2, v15 + 16 * a11);
  *(_QWORD *)v16 = off_49F5208;
  if ( !a2
    || (v17 = sub_79A2E0(a2), v18 = *(_QWORD *)(v17 + 8) & 7LL, (*(_QWORD *)(v17 + 8) & 7) == 0)
    || *(char *)(v17 + 29) < 0 && (v28 = *(_QWORD *)(v17 + 8) & 7LL, v27 = sub_7946A0(v17), v18 = v28, !v27) )
  {
    v18 = 0;
  }
  *(_QWORD *)(v16 + 8) = v18;
  *(_QWORD *)(v16 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v16 + 24) = a4;
  *(_WORD *)(v16 + 28) = 24621;
  v19 = sub_799DF0(0x2Du);
  *(_BYTE *)(v16 + 32) &= 0xF8u;
  *(_WORD *)(v16 + 30) = v19 & 0x3FFF | *(_WORD *)(v16 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(45);
  *(_DWORD *)(v16 + 84) = a11;
  *(_QWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 40) = a7;
  *(_QWORD *)(v16 + 48) = a8;
  *(_QWORD *)(v16 + 56) = a9 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v16 + 64) = a3;
  *(_QWORD *)v16 = &off_49F6780;
  *(_DWORD *)(v16 + 68) = a5 & 0xFFFFF | (a6 << 20);
  *(_WORD *)(v16 + 80) = 257;
  if ( a11 && a13 && (_DWORD)a11 )
  {
    v20 = 0;
    do
    {
      v21 = v20++;
      v22 = v21;
      v23 = *(_QWORD *)(a10 + 8 * v21);
      v24 = *(_QWORD *)(a12 + 8 * v21);
      v25 = (_QWORD *)(v16 + 16 * v22 + 88);
      *v25 = v23;
      v25[1] = v24;
    }
    while ( v20 != *(_DWORD *)(v16 + 84) );
  }
  return v16;
}

