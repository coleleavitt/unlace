__int64 __fastcall get_error_string(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !under_debugger )
      interr(483);
    BUG();
  }
  return *(_QWORD *)(24LL * (int)a1 + __tls_get_addr() + 40);
}

