__int64 __fastcall sub_60D400(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rdx

  if ( a2 == 4 )
    return (unsigned int)unpack_dd(a1);
  if ( a2 > 4 )
  {
    if ( a2 != 8 )
      goto LABEL_12;
    return unpack_dq(a1, a1[1]);
  }
  else
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
        return (unsigned __int16)unpack_dw(a1, a1[1]);
LABEL_12:
      if ( !under_debugger )
        interr(1763);
      BUG();
    }
    v3 = (unsigned __int8 *)*a1;
    result = 0;
    if ( *a1 < a1[1] )
      result = *v3++;
    *a1 = v3;
  }
  return result;
}

