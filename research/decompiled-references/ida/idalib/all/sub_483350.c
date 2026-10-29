__int64 __fastcall sub_483350(int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, unsigned __int64); // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)a1 + 80LL);
  if ( v4 != sub_4829D0 )
    return v4((__int64)a1, a2, a3);
  v5 = switch_dbctx(*(int *)(a2 + 8));
  v6 = sub_50F370(v5);
  v7 = sub_480420(*(_QWORD **)v6, *(_QWORD *)v6 + 16LL * *(_QWORD *)(v6 + 8), a3);
  if ( v8 == v7 || a3 != *v7 || (v9 = v7[1], v9 == -1) )
    sub_47FC80();
  v10 = switch_dbctx(a1[2]);
  return sub_50FE00(*(_QWORD *)(v10 + 1672), a3, v9);
}
