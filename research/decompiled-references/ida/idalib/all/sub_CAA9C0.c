__int64 __fastcall sub_CAA9C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int8 v19; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v20; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = (__int64)(a1 + 55);
  v19 = 1;
  v20 = 1208;
  sub_C9FC00(a1 + 55, &v20, &v19);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v21[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v21, a4);
  }
  v9 = a1[56];
  v10 = a1[55];
  v11 = a1[56] - v10;
  if ( v11 + 8 > 0xFFFFFFFF )
  {
    v19 = 0;
    result = 0;
    if ( v11 + 4 > 0xFFFFFFFF )
      return result;
    goto LABEL_12;
  }
  v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v13 + 8;
  if ( v11 < v13 + 8 )
  {
    sub_C9FA60(v7, v14 - v11);
    v9 = a1[56];
    v10 = a1[55];
    *(_QWORD *)(v10 + v13) = a2;
    v11 = v9 - v10;
  }
  else
  {
    if ( v11 > v13 + 8 && v9 != v10 + v14 )
    {
      a1[56] = v10 + v14;
      v11 = v13 + 8;
      v9 = v10 + v14;
    }
    *(_QWORD *)(v10 + v13) = a2;
  }
  result = 0;
  if ( v11 + 4 <= 0xFFFFFFFF )
  {
LABEL_12:
    v15 = a1[47];
    v16 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v16 + 8;
    if ( v16 + 8 > v11 )
    {
      sub_C9FA60(v7, v17 - v11);
    }
    else if ( v16 + 8 < v11 )
    {
      v18 = v17 + v10;
      if ( v18 != v9 )
        a1[56] = v18;
    }
    *(_DWORD *)(a1[55] + v16) = sub_E2D730(v15, a3);
    return v19;
  }
  return result;
}
