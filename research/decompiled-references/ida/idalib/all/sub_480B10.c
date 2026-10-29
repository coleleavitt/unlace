__int64 __fastcall sub_480B10(_QWORD *a1, __int64 *a2)
{
  int *v3; // rdi
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax

  v3 = (int *)a1[1];
  v4 = *a2;
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 168LL);
  if ( v5 == sub_47F2D0 )
  {
    v6 = switch_dbctx(v3[2]);
    v7 = (_QWORD *)sub_505D70(*(_QWORD *)(v6 + 1672) + 2872LL, v4);
  }
  else
  {
    v7 = (_QWORD *)v5((__int64)v3, *a2);
  }
  v8 = switch_dbctx(*(int *)(*a1 + 8LL));
  sub_642860(*(_QWORD *)(v8 + 1672), *v7, v7[1], v7[2]);
  return 0;
}
