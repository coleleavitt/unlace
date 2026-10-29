_BOOL8 __fastcall sub_46E9F0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // edx
  _DWORD *v14; // r9

  v3 = -1;
  v6 = switch_dbctx(*(int *)(a1 + 8));
  v7 = sub_4F7C00(v6);
  v8 = sub_46BE60(*(_DWORD **)v7, *(_QWORD *)v7 + 8LL * *(_QWORD *)(v7 + 8), a3);
  if ( v9 != v8 && a3 == *v8 )
    v3 = v8[1];
  v10 = switch_dbctx(*(int *)(a2 + 8));
  v11 = sub_4F7C00(v10);
  v12 = sub_46BE60(*(_DWORD **)v11, *(_QWORD *)v11 + 8LL * *(_QWORD *)(v11 + 8), a3);
  v13 = -1;
  if ( v14 != v12 && a3 == *v12 )
    v13 = v12[1];
  return v13 != v3;
}

