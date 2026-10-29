bool __fastcall sub_480990(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // rdi

  v4 = *a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = sub_3C75F0(*(_QWORD *)(v5 + 1672), v4);
  v7 = switch_dbctx(*(int *)(a3 + 8));
  v8 = sub_3C75F0(*(_QWORD *)(v7 + 1672), v4);
  *(_QWORD *)&v9 = *(_QWORD *)(v6 + 16);
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(v8 + 16);
  if ( (_QWORD)v9 && *((_QWORD *)&v9 + 1) )
    return strcmp((const char *)v9, *((const char **)&v9 + 1)) == 0;
  else
    return v9 == 0;
}
