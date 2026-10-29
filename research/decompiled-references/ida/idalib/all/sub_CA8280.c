__int64 __fastcall sub_CA8280(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int8 v12; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v13; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v12 = 1;
  v13 = 909;
  sub_C9FC00(a1 + 55, &v13, &v12);
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v14[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v14, a3);
  }
  v5 = a1[55];
  result = 0;
  v7 = a1[56] - v5;
  if ( v7 + 4 <= 0xFFFFFFFF )
  {
    v8 = a1[47];
    v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9 + 8;
    if ( v7 < v9 + 8 )
    {
      sub_C9FA60((__int64)(a1 + 55), v10 - v7);
    }
    else if ( v7 > v9 + 8 )
    {
      v11 = v10 + v5;
      if ( a1[56] != v11 )
        a1[56] = v11;
    }
    *(_DWORD *)(a1[55] + v9) = sub_E2D730(v8, a2);
    return v12;
  }
  return result;
}
