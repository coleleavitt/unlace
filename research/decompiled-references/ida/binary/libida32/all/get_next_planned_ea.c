__int64 __fastcall get_next_planned_ea(int a1)
{
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  else
    return peek_auto_queue((unsigned int)(a1 + 1), 20);
}

