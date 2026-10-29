__int64 sub_326FD0()
{
  __int64 v0; // rdx
  __int64 result; // rax
  __int64 visea; // rax

  if ( (BYTE2(xmmword_8BCDC0) & 1) == 0 )
  {
    visea = prev_visea(xmmword_8CC810);
    if ( visea != -1 )
      return visea + 1;
    return -1;
  }
  v0 = next_visea(xmmword_8CC810);
  result = v0 - 1;
  if ( v0 == -1 )
    return -1;
  return result;
}
