__int64 __fastcall get_error_data(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !under_debugger )
      interr(482);
    BUG();
  }
  return *(_QWORD *)(__tls_get_addr() + 8LL * (int)a1 + 8);
}

