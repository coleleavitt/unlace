unsigned __int64 __fastcall sub_EEF560(
        _QWORD *a1,
        const void *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  int v7; // r13d
  int v8; // r12d
  bool v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  char v14; // al
  _DWORD *v15; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v10 = HIDWORD(a4) != 0;
  v18 = HIDWORD(a4);
  v11 = 8 * (a3 + v10) + 16;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
    a1[294] = v11 + v13;
  else
    v13 = sub_986170((__int64)(a1 + 294), v11, v11, 3, a5, a6);
  sub_EE9650((_WORD *)v13, 249);
  v14 = *(_BYTE *)(v13 + 1);
  *(_DWORD *)(v13 + 8) = v6;
  *(_DWORD *)(v13 + 12) = v7;
  *(_DWORD *)(v13 + 4) = a3;
  *(_BYTE *)(v13 + 1) = (2 * v10) | v14 & 0xFD;
  if ( 8 * a3 )
    memmove((void *)(v13 + 16), a2, 8 * a3);
  if ( (*(_WORD *)v13 & 0x200) != 0 )
  {
    v15 = (_DWORD *)(v13 + 8LL * (unsigned int)a3 + 16);
    *v15 = v8;
    v15[1] = v18;
  }
  return v13;
}
