unsigned __int64 __fastcall sub_C09F10(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned __int64 a9)
{
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h]
  char v18; // [rsp+Ch] [rbp-3Ch]

  v12 = a1[294];
  v13 = 8 * (unsigned int)(HIDWORD(a9) != 0) + 32LL;
  v14 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a1[304] += v13;
  if ( a1[295] >= v13 + v14 && v12 )
  {
    a1[294] = v13 + v14;
  }
  else
  {
    v17 = a5;
    v18 = a6;
    v16 = sub_986170((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    LOBYTE(a6) = v18;
    a5 = v17;
    v14 = v16;
  }
  sub_C03440(v14, (__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return v14;
}
