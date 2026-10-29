__int64 __fastcall sub_CA7970(_QWORD *a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r12
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r9
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  bool v19; // cf
  __int64 v20; // rsi
  unsigned __int8 v21; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v22; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (__int64)(a1 + 55);
  v21 = 1;
  v22 = 166;
  sub_C9FC00(a1 + 55, &v22, &v21);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v23[0] = a1[56] - a1[55];
    sub_C9FE10((__int64)(a1 + 58), v23, a4);
  }
  v9 = a1[56];
  v10 = a1[55];
  v11 = a1[56] - v10;
  if ( v11 + 4 > 0xFFFFFFFF )
    return 0;
  v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v13 + 8;
  if ( v11 < v13 + 8 )
  {
    sub_C9FA60(v6, v14 - v11);
    v9 = a1[56];
    v10 = a1[55];
    v11 = v9 - v10;
    v15 = v9 - v10 + 4;
LABEL_9:
    *(_DWORD *)(v10 + v13) = a2;
    v16 = a1[47];
    if ( v15 > 0xFFFFFFFF )
      return 0;
    v17 = ((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    v18 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v17 < v11;
    if ( v17 > v11 )
      goto LABEL_11;
LABEL_14:
    if ( v19 )
    {
      v20 = v10 + v17;
      if ( v20 != v9 )
        a1[56] = v20;
    }
    goto LABEL_12;
  }
  if ( v11 > v13 + 8 && v9 != v10 + v14 )
  {
    a1[56] = v10 + v14;
    v15 = v13 + 12;
    v11 = v13 + 8;
    v9 = v10 + v14;
    goto LABEL_9;
  }
  *(_DWORD *)(v10 + v13) = a2;
  v16 = a1[47];
  v17 = ((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
  v18 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v17 < v11;
  if ( v17 <= v11 )
    goto LABEL_14;
LABEL_11:
  sub_C9FA60(v6, v17 - v11);
LABEL_12:
  *(_DWORD *)(a1[55] + v18) = sub_E2D730(v16, a3);
  return v21;
}
