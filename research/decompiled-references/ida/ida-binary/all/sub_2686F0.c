char sub_2686F0()
{
  int v0; // eax

  if ( (get_merge_state() & 3) != 0 )
    return (unsigned int)is_diff_merge_mode() + 3;
  else
    LOBYTE(v0) = 1 - ((dword_8CC5F0 == 0) - 1);
  return v0;
}
