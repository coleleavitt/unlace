__int64 __fastcall sub_C84890(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int8 v23; // [rsp+3h] [rbp-45h] BYREF
  unsigned int v24; // [rsp+4h] [rbp-44h] BYREF
  _QWORD v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = (__int64)(a1 + 55);
  v23 = 1;
  v24 = 908;
  sub_C7BEC0(a1 + 55, &v24, &v23);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v25[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v25, a4);
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
    v22 = v13 + v8;
    if ( a1[56] != v22 )
      a1[56] = v22;
  }
  v14 = sub_E099F0(v11, a2);
  v15 = a1[55];
  v16 = a1[56];
  *(_DWORD *)(v15 + v12) = v14;
  v17 = a1[47];
  v18 = v16 - v15;
  if ( (unsigned __int64)(v16 - v15 + 4) > 0xFFFFFFFF )
    return 0;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v20 = v19 + 8;
  if ( v18 < v19 + 8 )
  {
    sub_C7BD20(v7, v20 - v18);
  }
  else if ( v18 > v19 + 8 )
  {
    v21 = v20 + v15;
    if ( v16 != v21 )
      a1[56] = v21;
  }
  *(_DWORD *)(a1[55] + v19) = sub_E099F0(v17, a3);
  return v23;
}

