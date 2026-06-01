__int64 sub_134990()
{
  __int64 v0; // rdx
  __int64 result; // rax
  __int64 visea; // rax

  if ( (BYTE2(xmmword_2450C0) & 1) == 0 )
  {
    visea = prev_visea();
    if ( visea != -1 )
      return visea + 1;
    return -1;
  }
  v0 = next_visea();
  result = v0 - 1;
  if ( v0 == -1 )
    return -1;
  return result;
}

