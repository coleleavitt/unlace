unsigned __int64 __fastcall sub_C0D0A0(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h]
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]

  v10 = 8 * a5 + 40;
  v12 = a1[294];
  a1[304] += v10;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v13 && v12 )
  {
    a1[294] = v10 + v13;
  }
  else
  {
    v16 = a5;
    v17 = a6;
    v15 = sub_986170((__int64)(a1 + 294), v10, 8 * a5 + 40, 3, a5, a6);
    a6 = v17;
    a5 = v16;
    v13 = v15;
  }
  sub_C0CBF0(v13, a1, a1[2329], a2, a3, a6, a7, a4, a5, a8);
  return v13;
}
