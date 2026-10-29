bool __fastcall sub_46C3A0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // rdi

  v4 = *a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = sub_3C24E0(*(_QWORD *)(v5 + 1480), v4);
  v7 = switch_dbctx(*(int *)(a3 + 8));
  v8 = sub_3C24E0(*(_QWORD *)(v7 + 1480), v4);
  *(_QWORD *)&v9 = *(_QWORD *)(v6 + 8);
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(v8 + 8);
  if ( (_QWORD)v9 && *((_QWORD *)&v9 + 1) )
    return strcmp((const char *)v9, *((const char **)&v9 + 1)) == 0;
  else
    return v9 == 0;
}

