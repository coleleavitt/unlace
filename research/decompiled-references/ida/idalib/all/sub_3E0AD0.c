_BOOL8 __fastcall sub_3E0AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 not_tail; // rbp

  switch_dbctx(*(int *)(a2 + 8));
  not_tail = prev_not_tail(a3);
  switch_dbctx(*(int *)(a1 + 8));
  return prev_not_tail(a3) != not_tail;
}
