__int64 __fastcall cryptex_graft_failure_exists(__int64 a1, __int64 a2)
{
  __int64 v4; // x0

  v4 = configuration();
  if ( (_DWORD)a2 == 37 && *(_BYTE *)(v4 + 7034) )
  {
    a2 = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  return a2;
}
