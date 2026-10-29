__int64 __fastcall sub_480470(__int64 *a1, __int64 *a2)
{
  unsigned __int64 *v2; // rbp

  v2 = (unsigned __int64 *)sub_454000(a1[1], *a2);
  switch_dbctx(*(int *)(*(_QWORD *)*a1 + 88LL));
  sub_453CE0((_QWORD *)*a1, *v2, v2[2], v2[1] - *v2);
  return 0;
}
