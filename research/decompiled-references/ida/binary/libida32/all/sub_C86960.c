__int64 __fastcall sub_C86960(_QWORD *a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int8 v22; // [rsp+3h] [rbp-45h] BYREF
  unsigned int v23; // [rsp+4h] [rbp-44h] BYREF
  _QWORD v24[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = (__int64)(a1 + 55);
  v22 = 1;
  v23 = 167;
  sub_C7BEC0(a1 + 55, &v23, &v22);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v24[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v24, a4);
  }
  v8 = a1[55];
  v9 = a1[56] - v8;
  if ( v9 + 4 > 0xFFFFFFFF )
    return 0;
  v11 = a1[47];
  v12 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v12 + 8;
  if ( v9 < v12 + 8 )
  {
    sub_C7BD20(v7, v13 - v9);
  }
  else if ( v9 > v12 + 8 )
  {
    v21 = v13 + v8;
    if ( a1[56] != v21 )
      a1[56] = v21;
  }
  v14 = sub_E099F0(v11, a2);
  v15 = a1[55];
  v16 = a1[56];
  *(_DWORD *)(v15 + v12) = v14;
  v17 = v16 - v15;
  if ( (unsigned __int64)(v16 - v15 + 4) > 0xFFFFFFFF )
    return 0;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v18 + 8;
  if ( v17 < v18 + 8 )
  {
    sub_C7BD20(v7, v19 - v17);
    result = v22;
    *(_DWORD *)(a1[55] + v18) = a3;
  }
  else
  {
    if ( v17 > v18 + 8 )
    {
      v20 = v15 + v19;
      if ( v16 != v20 )
        a1[56] = v20;
    }
    *(_DWORD *)(v15 + v18) = a3;
    return v22;
  }
  return result;
}

