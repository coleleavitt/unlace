__int64 __fastcall sub_FAF20(__int64 a1, int a2)
{
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( a2 == 2 )
        return linearray_t_ending();
      return linearray_t_beginning();
    }
    return 0;
  }
  sub_8F660((__int64)"Coherency check failed: b == b_bottom || b == b_top\n");
  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  return linearray_t_beginning();
}

