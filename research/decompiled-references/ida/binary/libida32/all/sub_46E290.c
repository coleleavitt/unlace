__int64 __fastcall sub_46E290(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // r9
  unsigned int v9; // r12d
  __int64 v10; // rax

  v5 = switch_dbctx(*(int *)(a2 + 8));
  v6 = sub_4F7C00(v5);
  v7 = sub_46BE60(*(_DWORD **)v6, *(_QWORD *)v6 + 8LL * *(_QWORD *)(v6 + 8), a3);
  if ( v8 == v7 || a3 != *v7 || (v9 = v7[1], v9 == -1) )
    sub_46B6D0();
  v10 = switch_dbctx(*(int *)(a1 + 8));
  return sub_4F8530(*(_QWORD *)(v10 + 1480), a3, v9);
}

