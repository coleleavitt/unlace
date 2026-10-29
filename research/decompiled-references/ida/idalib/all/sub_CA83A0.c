__int64 __fastcall sub_CA83A0(_QWORD *a1, int a2, char a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // rbp
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int8 v23; // [rsp+3h] [rbp-45h] BYREF
  unsigned int v24; // [rsp+4h] [rbp-44h] BYREF
  _QWORD v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v9 = (__int64)(a1 + 55);
  v23 = 1;
  v24 = 883;
  sub_C9FC00(a1 + 55, &v24, &v23);
  if ( (*a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v25[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v25, a5);
  }
  v11 = a1[56];
  v12 = a1[55];
  v13 = a1[56] - v12;
  if ( v13 + 4 <= 0xFFFFFFFF )
  {
    v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v15 + 8;
    if ( v13 < v15 + 8 )
    {
      sub_C9FA60(v9, v16 - v13);
      v11 = a1[56];
      v12 = a1[55];
      *(_DWORD *)(v12 + v15) = a2;
      v13 = v11 - v12;
    }
    else
    {
      if ( v13 > v15 + 8 && v11 != v12 + v16 )
      {
        a1[56] = v12 + v16;
        v13 = v15 + 8;
        v11 = v12 + v16;
      }
      *(_DWORD *)(v12 + v15) = a2;
    }
    if ( v13 + 1 > 0xFFFFFFFF )
    {
LABEL_5:
      v23 = 0;
      result = 0;
      if ( v13 + 4 > 0xFFFFFFFF )
        return result;
      goto LABEL_19;
    }
  }
  else
  {
    v23 = 0;
    if ( v13 + 1 > 0xFFFFFFFF )
      goto LABEL_5;
  }
  v17 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v18 = v17 + 8;
  if ( v17 + 8 > v13 )
  {
    sub_C9FA60(v9, v18 - v13);
    v11 = a1[56];
    v12 = a1[55];
    *(_BYTE *)(v12 + v17) = a3;
    v13 = v11 - v12;
  }
  else
  {
    if ( v17 + 8 < v13 && v12 + v18 != v11 )
    {
      a1[56] = v12 + v18;
      v13 = v17 + 8;
      v11 = v12 + v18;
    }
    *(_BYTE *)(v12 + v17) = a3;
  }
  result = 0;
  if ( v13 + 4 <= 0xFFFFFFFF )
  {
LABEL_19:
    v19 = a1[47];
    v20 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v21 = v20 + 8;
    if ( v20 + 8 > v13 )
    {
      sub_C9FA60(v9, v21 - v13);
    }
    else if ( v20 + 8 < v13 )
    {
      v22 = v21 + v12;
      if ( v22 != v11 )
        a1[56] = v22;
    }
    *(_DWORD *)(a1[55] + v20) = sub_E2D730(v19, a4);
    return v23;
  }
  return result;
}
