unsigned __int64 __fastcall sub_C98A60(
        _QWORD *a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        const void *a5,
        __int64 a6,
        int a7,
        int *a8)
{
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+8h] [rbp-80h]
  _BYTE v19[56]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int8 v20; // [rsp+48h] [rbp-40h]

  v12 = 8 * a6 + 80;
  v13 = a1[294];
  a1[304] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v12 + v14 && v13 )
  {
    a1[294] = v12 + v14;
  }
  else
  {
    v18 = a6;
    v16 = sub_986170((__int64)(a1 + 294), v12, 8 * a6 + 80, 3, (__int64)a5, a6);
    a6 = v18;
    v14 = v16;
  }
  v17 = a6;
  sub_A53C40((__int64)v19, a8);
  v20 = 1;
  sub_C95E70(v14, a2, a3, a4, a5, v17, a7, v19);
  if ( v20 != 0xFF )
    funcs_C987CF[v20]();
  return v14;
}
