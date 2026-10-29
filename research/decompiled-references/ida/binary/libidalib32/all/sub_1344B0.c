__int64 sub_1344B0()
{
  int v0; // edx
  __int64 result; // rax
  int visea; // eax

  if ( (BYTE10(xmmword_244090) & 1) == 0 )
  {
    visea = prev_visea();
    if ( visea != -1 )
      return (unsigned int)(visea + 1);
    return 0xFFFFFFFFLL;
  }
  v0 = next_visea();
  result = (unsigned int)(v0 - 1);
  if ( v0 == -1 )
    return 0xFFFFFFFFLL;
  return result;
}

