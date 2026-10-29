__int64 sub_CF7E0()
{
  __int64 result; // rax
  _DWORD *v1; // rdi
  _DWORD *v2; // rdx

  sub_C0300();
  result = 0;
  if ( dbg )
  {
    if ( dword_2515A4 < 0 )
    {
      if ( dword_251408 )
      {
        v1 = (_DWORD *)qword_251410;
        v2 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
        if ( (_DWORD *)qword_251410 != v2 )
        {
          while ( dword_251408 != *v1 )
          {
            v1 += 58;
            if ( v2 == v1 )
              return result;
          }
          if ( v1 )
            return sub_CE480((__int64)v1, -1);
          else
            return 0;
        }
      }
    }
  }
  return result;
}

