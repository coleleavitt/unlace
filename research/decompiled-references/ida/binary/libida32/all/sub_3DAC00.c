_BOOL8 __fastcall sub_3DAC00(__int64 a1, __int64 a2, unsigned int a3)
{
  int not_tail; // ebp

  switch_dbctx(*(int *)(a2 + 8));
  not_tail = prev_not_tail(a3);
  switch_dbctx(*(int *)(a1 + 8));
  return (unsigned int)prev_not_tail(a3) != not_tail;
}

