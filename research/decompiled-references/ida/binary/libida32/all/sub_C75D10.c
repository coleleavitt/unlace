unsigned __int64 __fastcall sub_C75D10(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  int v9; // eax
  _QWORD *v10; // r10
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-50h]
  char v19; // [rsp+14h] [rbp-44h]

  v9 = a4;
  v10 = a3;
  if ( a9 > (unsigned int)a4 )
    v9 = a9;
  v13 = 8 * ((unsigned int)(HIDWORD(a8) != 0) + v9 + 1) + 32;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v15 && v14 )
  {
    a1[294] = v13 + v15;
  }
  else
  {
    v19 = a6;
    v18 = a5;
    v17 = sub_962430((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    v10 = a3;
    LOBYTE(a6) = v19;
    v15 = v17;
    a5 = v18;
  }
  sub_BD5A80(v15, 0x5Cu, a2, 0, 0, a5, v10, a4, a6, a7, (unsigned int)a8 | (HIDWORD(a8) << 32), a9, 0);
  return v15;
}

