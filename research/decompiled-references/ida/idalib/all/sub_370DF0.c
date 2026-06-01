__int64 __fastcall sub_370DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 not_tail; // rbp

  v2 = *(_QWORD *)(a1 + 8);
  if ( (get_flags_ex(v2, 4) & 0x600) == 0x200 )
  {
    not_tail = prev_not_tail(v2);
    *(_QWORD *)(a2 + 8) = not_tail;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = v2;
    return 0;
  }
}
