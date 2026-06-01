__int64 __fastcall sub_4829D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax

  v4 = switch_dbctx(*(int *)(a2 + 8));
  v5 = sub_50F370(v4);
  v6 = sub_480420(*(_QWORD **)v5, *(_QWORD *)v5 + 16LL * *(_QWORD *)(v5 + 8), a3);
  if ( v7 == v6 || a3 != *v6 || (v8 = v6[1], v8 == -1) )
    sub_47FC80();
  v9 = switch_dbctx(*(int *)(a1 + 8));
  return sub_50FE00(*(_QWORD *)(v9 + 1672), a3, v8);
}
