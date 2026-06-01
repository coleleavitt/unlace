__int64 sub_106650()
{
  char merge_state; // dl
  __int64 result; // rax

  if ( !dbg || (*(_BYTE *)(dbg + 37LL) & 8) == 0 && dword_245170 == -1 )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}

