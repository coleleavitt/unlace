unsigned __int64 __fastcall sub_C0F470(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 *src,
        __int64 a6,
        int a7,
        char *a8,
        __int64 a9,
        int a10)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v17; // rax
  int v18; // [rsp+Ch] [rbp-4Ch]
  __int64 *v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]

  v13 = 8 * (a9 + a6) + 48;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v15 && v14 )
  {
    a1[294] = v13 + v15;
  }
  else
  {
    v20 = a6;
    v19 = src;
    v18 = a2;
    v17 = sub_986170((__int64)(a1 + 294), v13, v13, 3, (__int64)src, a6);
    a6 = v20;
    src = v19;
    v15 = v17;
    a2 = v18;
  }
  sub_C0F1C0(v15, (__int64)a1, a2, a3, a4, a7, src, a6, a8, a9, a10);
  return v15;
}
