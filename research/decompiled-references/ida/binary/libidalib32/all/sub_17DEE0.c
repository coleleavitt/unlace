__int64 sub_17DEE0()
{
  __int64 result; // rax

  if ( under_debugger )
    BUG();
  interr();
  result = 0xB00000000LL;
  if ( (MEMORY[0xB000006E0] & 4) == 0 )
  {
    sub_17DEE0(40852);
    return sub_17DF40();
  }
  return result;
}

