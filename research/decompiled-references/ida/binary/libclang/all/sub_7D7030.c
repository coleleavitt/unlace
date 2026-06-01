unsigned __int64 __fastcall sub_7D7030(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  _QWORD *v9; // r13
  signed __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int16 v18; // ax
  bool v20; // al
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-48h]
  signed __int64 v23; // [rsp+0h] [rbp-48h]
  _QWORD *v24; // [rsp+8h] [rbp-40h]

  v9 = nullptr;
  if ( a5 )
  {
    v12 = 8 * a5;
    v13 = -1;
    v14 = a1[274];
    if ( a5 <= 0xFFFFFFFFFFFFFFFLL )
      v13 = v12;
    a1[284] += v13;
    v9 = (_QWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[275] >= (unsigned __int64)v9 + v13 && v14 )
    {
      a1[274] = (char *)v9 + v13;
    }
    else
    {
      v24 = a4;
      v23 = v12;
      v21 = sub_7CF9B0((__int64)(a1 + 274), v13, 3);
      a4 = v24;
      v12 = v23;
      v9 = (_QWORD *)v21;
    }
    if ( v12 <= 8 )
    {
      if ( v12 == 8 )
        *v9 = *a4;
    }
    else
    {
      memmove(v9, a4, v12);
    }
  }
  v15 = sub_79A610(64, a1, a2, 0);
  *(_QWORD *)v15 = off_49F5208;
  if ( !a2
    || (v16 = sub_79A2E0(a2), v17 = *(_QWORD *)(v16 + 8) & 7LL, (*(_QWORD *)(v16 + 8) & 7) == 0)
    || *(char *)(v16 + 29) < 0 && (v22 = *(_QWORD *)(v16 + 8) & 7LL, v20 = sub_7946A0(v16), v17 = v22, !v20) )
  {
    v17 = 0;
  }
  *(_QWORD *)(v15 + 8) = v17;
  *(_QWORD *)(v15 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v15 + 24) = a3;
  *(_WORD *)(v15 + 28) = 24658;
  v18 = sub_799DF0(0x52u);
  *(_BYTE *)(v15 + 32) &= 0xF8u;
  *(_WORD *)(v15 + 30) = v18 & 0x3FFF | *(_WORD *)(v15 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(82);
  *(_DWORD *)(v15 + 36) = a5;
  *(_QWORD *)(v15 + 40) = v9;
  *(_QWORD *)(v15 + 48) = a6;
  *(_QWORD *)v15 = &off_49F6970;
  *(_DWORD *)(v15 + 56) = a7;
  return v15;
}

