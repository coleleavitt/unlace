__int64 __fastcall sub_3E2E80(__int64 a1, __int64 a2)
{
  __int64 not_tail; // rax

  switch_dbctx(*(int *)(a1 + 8));
  not_tail = prev_not_tail(a2);
  return del_cref(not_tail, a2, 0);
}
