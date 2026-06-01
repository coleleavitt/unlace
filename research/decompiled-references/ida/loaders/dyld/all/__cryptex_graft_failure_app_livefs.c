__int64 __fastcall _cryptex_graft_failure_app_livefs(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x8

  v3 = *(_QWORD *)(arguments() + 16);
  if ( v3 < 2 )
    return 0;
  if ( v3 != 2 )
    dyld_halt("unreachable");
  return a2;
}
