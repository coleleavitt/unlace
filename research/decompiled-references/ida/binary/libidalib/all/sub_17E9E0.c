__int64 sub_17E9E0()
{
  __int64 result; // rax

  if ( under_debugger )
    BUG();
  interr();
  result = 0x5100000000LL;
  if ( (MEMORY[0x51000006E0] & 4) == 0 )
  {
    sub_17E9E0(40852);
    return sub_17EA40();
  }
  return result;
}

