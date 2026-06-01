unsigned __int64 __fastcall sub_C753E0(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int64 a9)
{
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h]
  char v18; // [rsp+Ch] [rbp-3Ch]

  v12 = 8 * ((unsigned int)(HIDWORD(a9) != 0) + (_DWORD)a4 + 1) + 32;
  v13 = a1[294];
  a1[304] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v12 + v14 && v13 )
  {
    a1[294] = v12 + v14;
  }
  else
  {
    v17 = a5;
    v18 = a6;
    v16 = sub_962430((__int64)(a1 + 294), v12, v12, 3, a5, a6);
    LOBYTE(a6) = v18;
    a5 = v17;
    v14 = v16;
  }
  sub_BD5A80(v14, 0x5Au, a2, 0, 0, a5, a3, a4, a6, a7, (HIDWORD(a9) << 32) | (unsigned int)a9, 0, 0);
  *(_DWORD *)(v14 + 24) = a8;
  return v14;
}

