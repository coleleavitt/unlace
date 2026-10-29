__int64 __fastcall sub_CA9FF0(_QWORD *a1, unsigned int a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int8 v14; // [rsp+17h] [rbp-31h] BYREF
  _QWORD v15[6]; // [rsp+18h] [rbp-30h] BYREF

  v13 = a2;
  v14 = 1;
  sub_C9FC00(a1 + 55, &v13, &v14);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v15[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v15, a4);
  }
  v6 = a1[55];
  result = 0;
  v8 = a1[56] - v6;
  if ( v8 + 4 <= 0xFFFFFFFF )
  {
    v9 = a1[47];
    v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v11 = v10 + 8;
    if ( v8 < v10 + 8 )
    {
      sub_C9FA60((__int64)(a1 + 55), v11 - v8);
    }
    else if ( v8 > v10 + 8 )
    {
      v12 = v11 + v6;
      if ( a1[56] != v12 )
        a1[56] = v12;
    }
    *(_DWORD *)(a1[55] + v10) = sub_E2D730(v9, *a3);
    return v14;
  }
  return result;
}
