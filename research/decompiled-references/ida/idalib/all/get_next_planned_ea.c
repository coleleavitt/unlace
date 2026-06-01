unsigned __int64 __fastcall get_next_planned_ea(__int64 a1)
{
  if ( a1 == -1 )
    return -1;
  else
    return peek_auto_queue(a1 + 1, 20);
}
