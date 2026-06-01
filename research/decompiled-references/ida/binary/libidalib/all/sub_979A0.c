// write access to const memory has been detected, the output may be wrong!
__int64 sub_979A0()
{
  __int64 i; // rbx

  if ( under_debugger )
    BUG();
  interr();
  for ( i = 0; i != 0xBF00000000LL; ++i )
  {
    if ( *(_QWORD *)(24 * i + 0x1BAE84000B0022LL) )
    {
      *(_QWORD *)(24 * i + 0x1BAE84000B002ALL) = 0;
      qfree();
    }
  }
  *(unsigned __int64 *)((char *)&stru_9DB0.st_value + 4) = 0;
  return qfree();
}

