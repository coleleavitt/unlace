__int64 sub_D0DA0()
{
  __int64 result; // rax
  _DWORD *v1; // rdi
  __int64 v2; // rdx

  sub_C14A0();
  result = 0;
  if ( dbg )
  {
    if ( dword_25274C < 0 )
    {
      if ( dword_252588 )
      {
        v1 = (_DWORD *)qword_252590;
        v2 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
        if ( qword_252590 != v2 )
        {
          while ( dword_252588 != *v1 )
          {
            v1 += 64;
            if ( (_DWORD *)v2 == v1 )
              return result;
          }
          if ( v1 )
            return sub_CFA40((__int64)v1, -1);
          else
            return 0;
        }
      }
    }
  }
  return result;
}

