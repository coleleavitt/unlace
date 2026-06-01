// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_CAFC0(int a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  result = xmmword_2521D8;
  if ( a1 >= (unsigned __int64)xmmword_2521D8 )
  {
    if ( under_debugger )
      BUG();
    interr();
    *(unsigned __int64 *)((char *)&stru_9C78.st_value + 1) = (unsigned __int64)&off_230708;
    sub_CAFC0(6941);
    *(_QWORD *)((char *)&stru_9D08.st_name + 1) = 0;
    qfree();
    return sub_C8250(40065);
  }
  else
  {
    v2 = (_QWORD *)(qword_2521D0 + 24LL * a1);
    if ( !*v2 || (v2[1] = 0, qfree(), *v2 = 0, result = xmmword_2521D8, v2[2] = 0, result) )
    {
      do
      {
        if ( *(_QWORD *)(qword_2521D0 + 24 * result - 16) )
          break;
        *(_QWORD *)&xmmword_2521D8 = result - 1;
        v3 = (_QWORD *)(qword_2521D0 + 24 * (result - 1));
        if ( *v3 )
        {
          v3[1] = 0;
          qfree();
        }
        result = xmmword_2521D8;
      }
      while ( (_QWORD)xmmword_2521D8 );
    }
  }
  return result;
}

