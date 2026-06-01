__int64 __fastcall sub_CA9950(_QWORD *a1, unsigned int a2, unsigned int *a3, _QWORD *a4, __int64 *a5)
{
  __int64 *v8; // rbp
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 v17; // [rsp+17h] [rbp-41h] BYREF
  _QWORD v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = a1 + 55;
  v16 = a2;
  v17 = 1;
  sub_C9FC00(a1 + 55, &v16, &v17);
  if ( (*a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v18[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v18, a5);
  }
  sub_C9FB80(v8, a3, &v17);
  v9 = a1[55];
  result = 0;
  v11 = a1[56] - v9;
  if ( v11 + 4 <= 0xFFFFFFFF )
  {
    v12 = a1[47];
    v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v14 = v13 + 8;
    if ( v11 < v13 + 8 )
    {
      sub_C9FA60((__int64)v8, v14 - v11);
    }
    else if ( v11 > v13 + 8 )
    {
      v15 = v14 + v9;
      if ( a1[56] != v15 )
        a1[56] = v15;
    }
    *(_DWORD *)(a1[55] + v13) = sub_E2D730(v12, *a4);
    return v17;
  }
  return result;
}
