_BOOL8 __fastcall sub_483170(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r9

  v3 = -1;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = sub_50F370(v5);
  v7 = sub_480420(*(_QWORD **)v6, *(_QWORD *)v6 + 16LL * *(_QWORD *)(v6 + 8), a3);
  if ( v8 != v7 && a3 == *v7 )
    v3 = v7[1];
  v9 = switch_dbctx(*(int *)(a2 + 8));
  v10 = sub_50F370(v9);
  v11 = sub_480420(*(_QWORD **)v10, *(_QWORD *)v10 + 16LL * *(_QWORD *)(v10 + 8), a3);
  if ( v12 != v11 && a3 == *v11 )
    return v11[1] != v3;
  else
    return v3 != -1;
}
