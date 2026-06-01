__int64 __fastcall set_error_data(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 > 3 )
  {
    if ( !under_debugger )
      interr(480);
    BUG();
  }
  result = __tls_get_addr(&stru_2C77838);
  *(_QWORD *)(result + 8LL * (int)a1 + 8) = a2;
  return result;
}
