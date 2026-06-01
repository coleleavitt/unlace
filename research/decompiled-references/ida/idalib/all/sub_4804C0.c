__int64 __fastcall sub_4804C0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbp

  v2 = sub_3C75F0(a1[1], *a2);
  switch_dbctx(*(int *)(*(_QWORD *)*a1 + 88LL));
  sub_3C7500(*a1, *(_QWORD *)v2, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
  return 0;
}
