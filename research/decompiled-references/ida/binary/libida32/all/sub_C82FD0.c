__int64 __fastcall sub_C82FD0(_QWORD *a1, unsigned int a2, _BYTE *a3, unsigned int *a4, _QWORD *a5, __int64 *a6)
{
  __int64 *v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+0h] [rbp-58h]
  unsigned int v24; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 v25; // [rsp+17h] [rbp-41h] BYREF
  _QWORD v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a1 + 55;
  v24 = a2;
  v25 = 1;
  sub_C7BEC0(a1 + 55, &v24, &v25);
  if ( (*a6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v26[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v26, a6);
  }
  v10 = a1[55];
  v11 = a1[56] - v10;
  if ( v11 + 1 <= 0xFFFFFFFF )
  {
    v15 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v15 + 8;
    if ( v11 < v15 + 8 )
    {
      v23 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      sub_C7BD20((__int64)v9, v16 - v11);
      *(_BYTE *)(a1[55] + v23) = *a3;
    }
    else
    {
      if ( v11 > v15 + 8 )
      {
        v17 = v10 + v16;
        if ( a1[56] != v17 )
          a1[56] = v17;
      }
      *(_BYTE *)(v10 + v15) = *a3;
    }
  }
  else
  {
    v25 = 0;
  }
  sub_C7BE40(v9, a4, &v25);
  v12 = a1[55];
  result = 0;
  v14 = a1[56] - v12;
  if ( v14 + 4 <= 0xFFFFFFFF )
  {
    v18 = a1[47];
    v19 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v20 = v19 + 8;
    if ( v14 < v19 + 8 )
    {
      sub_C7BD20((__int64)v9, v20 - v14);
    }
    else if ( v14 > v19 + 8 )
    {
      v21 = v20 + v12;
      if ( a1[56] != v21 )
        a1[56] = v21;
    }
    *(_DWORD *)(a1[55] + v19) = sub_E099F0(v18, *a5);
    return v25;
  }
  return result;
}

