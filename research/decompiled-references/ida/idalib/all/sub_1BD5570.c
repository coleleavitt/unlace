__int64 __fastcall sub_1BD5570(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  char v14; // r9
  char v15; // r13
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r13
  char v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // [rsp+0h] [rbp-6Ch]
  unsigned int v26; // [rsp+0h] [rbp-6Ch]
  unsigned int v27; // [rsp+0h] [rbp-6Ch]
  void *v28; // [rsp+14h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+1Ch] [rbp-50h]
  void *v30; // [rsp+24h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+2Ch] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 232);
  v5 = *(_DWORD *)a4 & 0x7FFFFFFF;
  v6 = *(_DWORD *)a3 & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v4 + 1) & 0x10) == 0 || (*(_BYTE *)(v4 + 12) & 0x40) != 0 )
    goto LABEL_3;
  if ( !v6 || (v14 = 0, v6 == 2) )
    v14 = *(_BYTE *)(a3 + 20) & 1;
  if ( (_DWORD)v5 )
  {
    v22 = 0;
    if ( (_DWORD)v5 == 2 )
      v22 = *(_BYTE *)(a4 + 20) & 1;
    if ( v22 == v14 || (v6 == 5) != ((_DWORD)v5 == 5) )
    {
LABEL_3:
      v7 = dword_265F660[v6];
      v8 = dword_265F660[(unsigned int)v5];
      if ( v7 >= v8 )
        goto LABEL_4;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_48;
  }
  if ( v14 != (*(_BYTE *)(a4 + 20) & 1) )
  {
    if ( v6 == 5 )
    {
      v7 = 3;
      v8 = 0;
      goto LABEL_4;
    }
LABEL_48:
    if ( v14 )
      return 1;
    return 0xFFFFFFFFLL;
  }
  v7 = dword_265F660[v6];
  v8 = 0;
LABEL_4:
  if ( v8 < v7 )
    return 1;
  if ( (_DWORD)v5 != v6 || (_DWORD)v5 == 5 )
    return 0;
  v12 = *(_QWORD *)(a3 + 8);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v15 = sub_1844E60(a1, v12, nullptr);
    v16 = 0;
    if ( (*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_22;
  }
  else
  {
    if ( (*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_9;
    v15 = 0;
  }
  v16 = sub_1844E60(a1, *(_QWORD *)(a4 + 8), nullptr);
LABEL_22:
  if ( v16 != v15 )
  {
    if ( v15 )
      return 0xFFFFFFFFLL;
    return 1;
  }
  v17 = *(_QWORD *)(a3 + 8);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0
    || (*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0
    || (v18 = sub_A72040(*(_QWORD **)(a1 + 248), v17), (v19 = v18) == 0)
    || (unsigned int)*(unsigned __int8 *)(v18 + 16) - 2 > 1
    || (v20 = sub_A72040(*(_QWORD **)(a1 + 248), *(_QWORD *)(a4 + 8)), (v21 = v20) == 0)
    || (unsigned int)*(unsigned __int8 *)(v20 + 16) - 2 > 1
    || !sub_1BC70C0(*(_QWORD *)(v19 + 32), *(_QWORD *)(v20 + 32)) )
  {
LABEL_50:
    v6 = *(_DWORD *)a3 & 0x7FFFFFFF;
LABEL_9:
    if ( !v6 )
      return sub_1BD4320(a1, a2, a3 + 16, a4 + 16, v5);
    if ( v6 != 2 )
      return 0;
    v23 = *(_QWORD *)(a3 + 136);
    v24 = *(_QWORD *)(a4 + 136);
    if ( v23 == v24 )
      return sub_1BD4320(a1, a2, a3 + 80, a4 + 80, v5);
    else
      return sub_1BCCF50(a1, v23, v24);
  }
  sub_A5DAD0((__int64)&v30, v21);
  sub_A5DAD0((__int64)&v28, v19);
  if ( v29 <= 0x40 )
  {
    v25 = v28 == v30;
  }
  else
  {
    v25 = sub_2205D70(&v28, &v30);
    if ( v28 )
      operator delete[](v28);
  }
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  if ( v25 )
  {
    if ( *(_BYTE *)(a4 + 3) >> 7 != *(_BYTE *)(a3 + 3) >> 7 )
    {
      if ( *(char *)(a4 + 3) < 0 )
        return 0xFFFFFFFFLL;
      return 1;
    }
    goto LABEL_50;
  }
  sub_A5DAD0((__int64)&v28, v19);
  sub_A5DAD0((__int64)&v30, v21);
  result = ((int)sub_2205DB0(&v28, &v30) >> 31) | 1u;
  if ( v31 > 0x40 && v30 )
  {
    v26 = result;
    operator delete[](v30);
    result = v26;
  }
  if ( v29 > 0x40 && v28 )
  {
    v27 = result;
    operator delete[](v28);
    return v27;
  }
  return result;
}
