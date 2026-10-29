__int64 __fastcall sub_CA5530(__int64 a1, int a2, int a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  bool v18; // cf
  __int64 v19; // rsi
  unsigned __int8 v20; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v21; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = a1 + 440;
  v20 = 1;
  v21 = 323;
  sub_C9FC00((__int64 *)(a1 + 440), &v21, &v20);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v22[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v22, a4);
  }
  v9 = *(_QWORD *)(a1 + 448);
  v10 = *(_QWORD *)(a1 + 440);
  v11 = *(_QWORD *)(a1 + 448) - v10;
  if ( v11 + 4 > 0xFFFFFFFF )
    return 0;
  v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v13 + 8;
  if ( v11 < v13 + 8 )
  {
    sub_C9FA60(v7, v14 - v11);
    v9 = *(_QWORD *)(a1 + 448);
    v10 = *(_QWORD *)(a1 + 440);
    v11 = v9 - v10;
    v15 = v9 - v10 + 4;
LABEL_9:
    *(_DWORD *)(v10 + v13) = a2;
    if ( v15 > 0xFFFFFFFF )
      return 0;
    v16 = ((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    v17 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v16 < v11;
    if ( v16 > v11 )
      goto LABEL_11;
    goto LABEL_14;
  }
  if ( v11 > v13 + 8 && v9 != v10 + v14 )
  {
    *(_QWORD *)(a1 + 448) = v10 + v14;
    v15 = v13 + 12;
    v11 = v13 + 8;
    v9 = v10 + v14;
    goto LABEL_9;
  }
  *(_DWORD *)(v10 + v13) = a2;
  v16 = ((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
  v17 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v18 = v16 < v11;
  if ( v16 > v11 )
  {
LABEL_11:
    sub_C9FA60(v7, v16 - v11);
    v10 = *(_QWORD *)(a1 + 440);
LABEL_12:
    *(_DWORD *)(v10 + v17) = a3;
    return v20;
  }
LABEL_14:
  if ( !v18 )
    goto LABEL_12;
  v19 = v10 + v16;
  if ( v19 == v9 )
    goto LABEL_12;
  *(_QWORD *)(a1 + 448) = v19;
  result = v20;
  *(_DWORD *)(v10 + v17) = a3;
  return result;
}
