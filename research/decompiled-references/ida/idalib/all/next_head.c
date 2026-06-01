__int64 __fastcall next_head(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 not_tail; // rax
  unsigned __int64 v3; // rbx

  not_tail = next_not_tail(a1);
  if ( not_tail >= a2 )
    return -1;
  v3 = not_tail;
  if ( (get_flags_ex(not_tail, 4) & 0x400) != 0 )
    return v3;
  else
    return next_that(v3, a2, sub_3B7CE0, 0);
}
