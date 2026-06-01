__int64 __fastcall sub_3DD2B0(__int64 a1, unsigned int a2)
{
  unsigned int not_tail; // eax

  switch_dbctx(*(int *)(a1 + 8));
  not_tail = prev_not_tail(a2);
  return del_cref(not_tail, a2, 0);
}

