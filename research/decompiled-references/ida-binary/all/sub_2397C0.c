__int64 __fastcall sub_2397C0(int a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rdi

  result = xmmword_8CC058;
  if ( a1 >= (unsigned __int64)xmmword_8CC058 )
  {
    if ( under_debugger )
      BUG();
    interr(40065, a2, a3, a4, a5);
    return srcdbg_step();
  }
  else
  {
    v6 = (__int64 *)(qword_8CC050 + 24LL * a1);
    v7 = *v6;
    if ( !*v6 || (v6[1] = 0, qfree(v7, a2), *v6 = 0, result = xmmword_8CC058, v6[2] = 0, result) )
    {
      do
      {
        if ( *(_QWORD *)(qword_8CC050 + 24 * result - 16) )
          break;
        *(_QWORD *)&xmmword_8CC058 = result - 1;
        v8 = (__int64 *)(qword_8CC050 + 24 * (result - 1));
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
        }
        result = xmmword_8CC058;
      }
      while ( (_QWORD)xmmword_8CC058 );
    }
  }
  return result;
}
