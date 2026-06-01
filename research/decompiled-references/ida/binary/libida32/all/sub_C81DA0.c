__int64 __fastcall sub_C81DA0(_QWORD *a1, unsigned int a2, _QWORD *a3, _BYTE *a4, __int64 *a5)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  int v18; // eax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  unsigned int v22; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 v23; // [rsp+17h] [rbp-41h] BYREF
  _QWORD v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = (__int64)(a1 + 55);
  v22 = a2;
  v23 = 1;
  sub_C7BEC0(a1 + 55, &v22, &v23);
  if ( (*a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v24[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v24, a5);
  }
  v10 = a1[56];
  v11 = a1[55];
  v12 = a1[56] - v11;
  if ( v12 + 4 > 0xFFFFFFFF )
  {
    v23 = 0;
    result = 0;
    if ( v12 + 1 > 0xFFFFFFFF )
      return result;
    goto LABEL_11;
  }
  v14 = a1[47];
  v15 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = v15 + 8;
  if ( v12 < v15 + 8 )
  {
    sub_C7BD20(v8, v16 - v12);
  }
  else if ( v12 > v15 + 8 )
  {
    v17 = v11 + v16;
    if ( v10 != v17 )
      a1[56] = v17;
  }
  v18 = sub_E099F0(v14, *a3);
  v10 = a1[56];
  v11 = a1[55];
  *(_DWORD *)(v11 + v15) = v18;
  result = 0;
  v12 = v10 - v11;
  if ( (unsigned __int64)(v10 - v11 + 1) <= 0xFFFFFFFF )
  {
LABEL_11:
    v19 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v20 = v19 + 8;
    if ( v19 + 8 > v12 )
    {
      sub_C7BD20(v8, v20 - v12);
      *(_BYTE *)(a1[55] + v19) = *a4;
      return v23;
    }
    else
    {
      if ( v19 + 8 < v12 )
      {
        v21 = v11 + v20;
        if ( v10 != v21 )
          a1[56] = v21;
      }
      *(_BYTE *)(v11 + v19) = *a4;
      return v23;
    }
  }
  return result;
}

