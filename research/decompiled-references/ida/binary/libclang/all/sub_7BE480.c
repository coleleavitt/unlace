unsigned __int64 __fastcall sub_7BE480(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  unsigned __int64 v11; // rax

  v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 )
  {
    sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v4 = *(_QWORD *)(a1 + 104);
  }
  if ( v4 <= 7 )
    return 0;
  v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v5 || (*(_BYTE *)(v5 + 8) & 6) != 0 )
    return 0;
  result = sub_7BD3E0(a1, a2, a3);
  if ( result )
    return result;
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    if ( v7 <= 7 )
      return 0;
    goto LABEL_10;
  }
  sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 > 7 )
  {
LABEL_10:
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = *(_QWORD **)(v8 + 8);
    v10 = &v9[*(unsigned int *)(v8 + 16)];
    goto LABEL_11;
  }
  if ( v7 )
    return 0;
  sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v11 = *(_QWORD *)(a1 + 104);
  if ( v11 <= 7 )
    return 0;
  v10 = nullptr;
  v9 = *(_QWORD **)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_11:
  if ( v10 == v9 )
    return 0;
  while ( 1 )
  {
    result = sub_7BE480(*v9, a2, a3);
    if ( result )
      break;
    if ( v10 == ++v9 )
      return 0;
  }
  return result;
}

