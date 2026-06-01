__int64 __fastcall sub_531740(char a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( (int)a2 < 0 )
    return 0;
  if ( a2 == 8 )
  {
    if ( (a3 & 1) == 0 || !(unsigned __int8)getinf_flag(67, 1) )
      return 8;
    return 4;
  }
  result = (unsigned int)a2;
  if ( ((unsigned int)a2 & ((_DWORD)a2 - 1)) != 0 )
  {
    if ( (a1 & 0x3F) == 0x29 && (getinf(57) & 0xF) == 2 )
    {
      if ( a2 != 10 )
      {
        if ( !under_debugger )
          interr(1114);
        BUG();
      }
      return 8;
    }
    result = 2 - (unsigned int)(a2 & 1);
    if ( (a2 & 3) == 0 )
      return 4;
  }
  return result;
}
