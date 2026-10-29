__int64 __fastcall sub_460040(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v3; // r13
  char merge_state; // al
  __int64 v7; // rdi

  if ( a2 )
  {
    v3 = qword_2CCB7C0;
    *(_QWORD *)(v3 + 1056) = get_eah();
    set_merge_state((8 * (a3 == 0)) | 1u);
    sub_631C90(**(_QWORD **)(a1 + 1672), 3, 4);
    sub_4573C0(a2, a1 + 928);
  }
  merge_state = get_merge_state(a1, 0);
  v7 = 4;
  if ( (merge_state & 3) == 0 )
    v7 = get_merge_state(4, 0) & 4;
  set_merge_state(v7);
  return 0;
}
