unsigned __int64 __fastcall sub_7A8890(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  bool v16; // al
  __int64 v17; // [rsp+8h] [rbp-40h]

  v11 = sub_79A610(64, a1, a2, 0);
  *(_QWORD *)v11 = off_49F5208;
  if ( !a2
    || (v12 = sub_79A2E0(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) == 0)
    || *(char *)(v12 + 29) < 0 && (v17 = *(_QWORD *)(v12 + 8) & 7LL, v16 = sub_7946A0(v12), v13 = v17, !v16) )
  {
    v13 = 0;
  }
  *(_QWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 24) = a3;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v11 + 28) = 24585;
  v14 = sub_799DF0(9u);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v14 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(9);
  *(_QWORD *)(v11 + 48) = a5;
  *(_DWORD *)(v11 + 56) = a6;
  *(_QWORD *)v11 = &off_49F5C00;
  *(_QWORD *)(v11 + 40) = (2LL * a7) | a4 & 0xFFFFFFFFFFFFFFFDLL;
  return v11;
}

