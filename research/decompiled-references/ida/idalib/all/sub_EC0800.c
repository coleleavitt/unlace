unsigned __int64 __fastcall sub_EC0800(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v7 = 8 * a6 + 24;
  v10 = a1[294];
  a1[304] += v7;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v11 && v10 )
  {
    a1[294] = v7 + v11;
  }
  else
  {
    v14 = a5;
    v15 = a6;
    v13 = sub_986170((__int64)(a1 + 294), v7, 8 * a6 + 24, 3, a5, a6);
    a6 = v15;
    a5 = v14;
    v11 = v13;
  }
  *(_DWORD *)v11 = a2;
  *(_DWORD *)(v11 + 4) = a4;
  *(_DWORD *)(v11 + 12) = a3;
  *(_DWORD *)(v11 + 8) = 32;
  *(_DWORD *)(v11 + 16) = a6;
  v16[0] = a5;
  v16[1] = a6;
  sub_EB8020((__int64)v16, (char *)(v11 + 24));
  return v11;
}
