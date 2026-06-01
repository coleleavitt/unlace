bool __fastcall sub_4811A0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // rdi
  _QWORD *v10; // rbx
  bool result; // al
  __int128 v12; // rdi
  __int128 v13; // rdi

  v4 = *a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = (_QWORD *)sub_3C76B0(*(_QWORD *)(v5 + 1672), v4);
  v7 = switch_dbctx(*(int *)(a3 + 8));
  v8 = sub_3C76B0(*(_QWORD *)(v7 + 1672), v4);
  *(_QWORD *)&v9 = v6[2];
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(v8 + 16);
  v10 = (_QWORD *)v8;
  result = *((_QWORD *)&v9 + 1) != 0 && (_QWORD)v9 != 0;
  if ( result )
  {
    if ( strcmp((const char *)v9, *((const char **)&v9 + 1)) )
      return 0;
  }
  else if ( v9 != 0 )
  {
    return result;
  }
  *(_QWORD *)&v12 = v6[3];
  *((_QWORD *)&v12 + 1) = v10[3];
  result = *((_QWORD *)&v12 + 1) != 0 && (_QWORD)v12 != 0;
  if ( result )
  {
    if ( strcmp((const char *)v12, *((const char **)&v12 + 1)) )
      return 0;
    goto LABEL_5;
  }
  if ( v12 == 0 )
  {
LABEL_5:
    *(_QWORD *)&v13 = v6[4];
    *((_QWORD *)&v13 + 1) = v10[4];
    result = *((_QWORD *)&v13 + 1) != 0 && (_QWORD)v13 != 0;
    if ( !result )
    {
      if ( v13 != 0 )
        return result;
      return ((v10[5] ^ v6[5]) & 0xFFFFFFFF000000FFLL) == 0;
    }
    if ( !strcmp((const char *)v13, *((const char **)&v13 + 1)) )
      return ((v10[5] ^ v6[5]) & 0xFFFFFFFF000000FFLL) == 0;
    return 0;
  }
  return result;
}
