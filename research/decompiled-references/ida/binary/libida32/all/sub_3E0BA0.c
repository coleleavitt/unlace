__int64 __fastcall sub_3E0BA0(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  switch_dbctx(*(int *)(a2 + 8));
  prev_not_tail(a3);
  sub_3573A0((char **)a1);
  return a1;
}

