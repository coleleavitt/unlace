void __fastcall auto_mark_range(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _QWORD *v4; // r13

  v4 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( (get_merge_state() & 2) == 0 )
    sub_3A5F70(v4, a1, a2, a3);
}
