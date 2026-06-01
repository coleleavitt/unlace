bool __fastcall sub_480DD0(int *a1, __int64 *a2, int *a3)
{
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *a2;
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL);
  if ( v5 != sub_47F2D0 )
  {
    v7 = v5((__int64)a1, *a2);
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 168LL);
    if ( v8 == sub_47F2D0 )
      goto LABEL_3;
LABEL_6:
    v10 = v8((__int64)a3, v4);
    return *(_QWORD *)(v7 + 16) == *(_QWORD *)(v10 + 16);
  }
  v6 = switch_dbctx(a1[2]);
  v7 = sub_505D70(*(_QWORD *)(v6 + 1672) + 2872LL, v4);
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 168LL);
  if ( v8 != sub_47F2D0 )
    goto LABEL_6;
LABEL_3:
  v9 = switch_dbctx(a3[2]);
  v10 = sub_505D70(*(_QWORD *)(v9 + 1672) + 2872LL, v4);
  return *(_QWORD *)(v7 + 16) == *(_QWORD *)(v10 + 16);
}
