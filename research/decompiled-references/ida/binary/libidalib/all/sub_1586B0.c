__int64 __fastcall sub_1586B0(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 0;
  qfputs();
  if ( !ferror(*(FILE **)(a1 + 8)) )
    return 0;
  set_qerrno();
  return 1;
}

