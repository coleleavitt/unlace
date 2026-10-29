unsigned __int64 __fastcall sub_78F1B0(void *a1, unsigned __int16 *a2, signed __int64 a3)
{
  unsigned __int64 result; // rax
  signed __int64 v4; // rbx

  if ( !a2 )
    return -1;
  result = *a2;
  if ( a1 )
  {
    v4 = a3;
    if ( a3 < 0 )
    {
      if ( !under_debugger )
        interr(1225);
      BUG();
    }
    if ( a3 >= result )
    {
      a3 = *a2;
      v4 = a3;
    }
    memcpy(a1, a2 + 1, a3);
    return v4;
  }
  return result;
}

