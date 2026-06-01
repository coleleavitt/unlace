__int64 __fastcall next_head(__int64 a1, unsigned int a2)
{
  unsigned int not_tail; // eax
  unsigned int v3; // ebx

  not_tail = next_not_tail(a1);
  if ( not_tail >= a2 )
    return 0xFFFFFFFFLL;
  v3 = not_tail;
  if ( (get_flags_ex(not_tail, 4) & 0x400) != 0 )
    return v3;
  else
    return next_that(v3, a2, sub_3B3450, 0);
}

