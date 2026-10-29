__int64 __fastcall sub_C859F0(_QWORD *a1, unsigned int a2, _QWORD *a3, unsigned int *a4, __int64 *a5)
{
  __int64 *v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-58h]
  unsigned int v17; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 v18; // [rsp+17h] [rbp-41h] BYREF
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = a1 + 55;
  v17 = a2;
  v18 = 1;
  sub_C7BEC0(a1 + 55, &v17, &v18);
  if ( (*a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v19[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v19, a5);
  }
  v9 = a1[55];
  v10 = a1[56] - v9;
  if ( v10 + 4 <= 0xFFFFFFFF )
  {
    v12 = a1[47];
    v13 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v14 = v13 + 8;
    if ( v10 < v13 + 8 )
    {
      v16 = a1[47];
      sub_C7BD20((__int64)v8, v14 - v10);
      v12 = v16;
    }
    else if ( v10 > v13 + 8 )
    {
      v15 = v14 + v9;
      if ( a1[56] != v15 )
        a1[56] = v15;
    }
    *(_DWORD *)(a1[55] + v13) = sub_E099F0(v12, *a3);
  }
  else
  {
    v18 = 0;
  }
  sub_C7BE40(v8, a4, &v18);
  return v18;
}

