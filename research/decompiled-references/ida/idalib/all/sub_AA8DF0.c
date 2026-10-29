bool __fastcall sub_AA8DF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rdx
  __int64 v9; // r14
  __int64 *v10; // rbp
  char v11; // al
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  _QWORD v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) != 13 )
    return 0;
  v7 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *v7;
  v10 = v7;
  if ( (unsigned int)*(unsigned __int8 *)(*v7 + 16) - 57 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      return 0;
    v9 = sub_F63050(*v7, a2, v7, a4);
    if ( !v9 )
      return 0;
  }
  v11 = (*(_BYTE *)(v9 + 18) >> 3) & 0xF;
  switch ( v11 )
  {
    case 9:
      sub_A649E0((__int64)v23, (_QWORD *)*a1, v6);
      if ( (unsigned __int8)sub_F58410(*v4) )
      {
        v15 = *a1;
        if ( v23[0] == *(_QWORD *)(*a1 + 18640) )
        {
          v16 = sub_A97D20(v15, *v10);
          return v16 == sub_AA8D40((_QWORD *)*a1, v6);
        }
      }
      return 0;
    case 10:
      sub_A649E0((__int64)v23, (_QWORD *)*a1, v6);
      if ( (unsigned __int8)sub_F58410(*v4) )
      {
        v17 = *a1;
        if ( v23[0] == *(_QWORD *)(*a1 + 18640) )
        {
          v18 = sub_A97D20(v17, *v10);
          return 8 * sub_AA8D40((_QWORD *)*a1, v6) == v18;
        }
      }
      return 0;
    case 11:
      sub_A649E0((__int64)v23, (_QWORD *)*a1, v6);
      if ( (unsigned __int8)sub_F58410(*v4) )
      {
        v13 = *a1;
        if ( v23[0] == *(_QWORD *)(*a1 + 18640) )
        {
          v14 = sub_A97D20(v13, *v10);
          return 4 * sub_AA8D40((_QWORD *)*a1, v6) == v14;
        }
      }
      return 0;
  }
  if ( v11 != 12 )
  {
    if ( ((*(_BYTE *)(v9 + 18) >> 3) & 7) == 0 )
    {
      if ( (unsigned __int8)sub_F58410(*v4) )
      {
        v19 = sub_A97D20(*a1, *v10);
        if ( v19 == sub_AA8D40((_QWORD *)*a1, v6) )
        {
          sub_A649E0((__int64)v23, (_QWORD *)*a1, v6);
          v20 = *(_QWORD *)&byte_8[*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL];
          return (v20 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v20 | (unsigned __int8)*(_QWORD *)(v9 + 32)) & 7) == (*(_QWORD *)&byte_8[v23[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v23[0] & 0xFFFFFFFFFFFFFFF0LL] | LOBYTE(v23[0])) & 7);
        }
      }
    }
    return 0;
  }
  sub_A649E0((__int64)v23, (_QWORD *)*a1, v6);
  if ( !(unsigned __int8)sub_F58410(*v4) )
    return 0;
  v21 = *a1;
  if ( v23[0] != *(_QWORD *)(*a1 + 18640) )
    return 0;
  v22 = sub_A97D20(v21, *v10);
  return 2 * sub_AA8D40((_QWORD *)*a1, v6) == v22;
}
