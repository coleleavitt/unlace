unsigned __int64 __fastcall sub_C0B630(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+14h] [rbp-44h]

  v13 = a7;
  v14 = 32 * (a10 + 1) + 8 * ((44 * a8 != 0) + ((44 * a8 - (unsigned __int64)(44 * a8 != 0)) >> 3));
  v15 = a1[294];
  a1[304] += v14;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v14 + v16 && v15 )
  {
    a1[294] = v14 + v16;
  }
  else
  {
    v20 = a5;
    v19 = a2;
    v18 = sub_986170((__int64)(a1 + 294), v14, v14, 3, a5, (__int64)a7);
    v13 = a7;
    LODWORD(a5) = v20;
    v16 = v18;
    a2 = v19;
  }
  sub_C03E70(v16, a2, a3, a4, a5, (__int64)v13, v13, a8, a9);
  return v16;
}
