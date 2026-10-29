__int64 __fastcall sub_CA7DB0(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4, __int64 *a5)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int8 v21; // [rsp+17h] [rbp-31h] BYREF
  _QWORD v22[6]; // [rsp+18h] [rbp-30h] BYREF

  v8 = (__int64)(a1 + 55);
  v20 = a2;
  v21 = 1;
  sub_C9FC00(a1 + 55, &v20, &v21);
  if ( (*a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v22[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v22, a5);
  }
  v10 = a1[56];
  v11 = a1[55];
  v12 = a1[56] - v11;
  if ( v12 + 8 > 0xFFFFFFFF )
  {
    v21 = 0;
    result = 0;
    if ( v12 + 4 > 0xFFFFFFFF )
      return result;
    goto LABEL_12;
  }
  v14 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v14 + 8;
  if ( v12 < v14 + 8 )
  {
    sub_C9FA60(v8, v15 - v12);
    v10 = a1[56];
    v11 = a1[55];
    v12 = v10 - v11;
    *(_QWORD *)(v11 + v14) = *a3;
  }
  else
  {
    if ( v12 > v14 + 8 && v10 != v11 + v15 )
    {
      a1[56] = v11 + v15;
      v12 = v14 + 8;
      v10 = v11 + v15;
    }
    *(_QWORD *)(v11 + v14) = *a3;
  }
  result = 0;
  if ( v12 + 4 <= 0xFFFFFFFF )
  {
LABEL_12:
    v16 = a1[47];
    v17 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17 + 8;
    if ( v17 + 8 > v12 )
    {
      sub_C9FA60(v8, v18 - v12);
    }
    else if ( v17 + 8 < v12 )
    {
      v19 = v18 + v11;
      if ( v19 != v10 )
        a1[56] = v19;
    }
    *(_DWORD *)(a1[55] + v17) = sub_E2D730(v16, *a4);
    return v21;
  }
  return result;
}
