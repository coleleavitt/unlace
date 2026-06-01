bool __fastcall is_diff_merge_mode(__int64 a1, __int64 a2)
{
  char merge_state; // dl
  bool result; // al

  merge_state = get_merge_state(a1, a2);
  result = 0;
  if ( (merge_state & 3) != 0 )
  {
    result = 1;
    if ( (unsigned __int8)(word_2CA1890 - 4) > 1u )
      return HIBYTE(word_2CA1890) == 4;
  }
  return result;
}

