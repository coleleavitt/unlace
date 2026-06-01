__int64 __fastcall sub_C86110(_QWORD *a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  unsigned __int8 v21; // [rsp+3h] [rbp-45h] BYREF
  unsigned int v22; // [rsp+4h] [rbp-44h] BYREF
  _QWORD v23[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = (__int64)(a1 + 55);
  v21 = 1;
  v22 = 1085;
  sub_C7BEC0(a1 + 55, &v22, &v21);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v23[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v23, a4);
  }
  v9 = a1[56];
  v10 = a1[55];
  v11 = a1[56] - v10;
  if ( v11 + 4 > 0xFFFFFFFF )
  {
    v21 = 0;
    result = 0;
    if ( v11 + 1 > 0xFFFFFFFF )
      return result;
    goto LABEL_11;
  }
  v13 = a1[47];
  v14 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v14 + 8;
  if ( v11 < v14 + 8 )
  {
    sub_C7BD20(v7, v15 - v11);
  }
  else if ( v11 > v14 + 8 )
  {
    v16 = v10 + v15;
    if ( v9 != v16 )
      a1[56] = v16;
  }
  v17 = sub_E099F0(v13, a2);
  v9 = a1[56];
  v10 = a1[55];
  *(_DWORD *)(v10 + v14) = v17;
  result = 0;
  v11 = v9 - v10;
  if ( (unsigned __int64)(v9 - v10 + 1) <= 0xFFFFFFFF )
  {
LABEL_11:
    v18 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v18 + 8;
    if ( v18 + 8 > v11 )
    {
      sub_C7BD20(v7, v19 - v11);
      *(_BYTE *)(a1[55] + v18) = a3;
      return v21;
    }
    else
    {
      if ( v18 + 8 < v11 )
      {
        v20 = v10 + v19;
        if ( v9 != v20 )
          a1[56] = v20;
      }
      *(_BYTE *)(v10 + v18) = a3;
      return v21;
    }
  }
  return result;
}

