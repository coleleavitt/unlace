__int64 __fastcall sub_791E90(__int64 a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a1 + 96) + a2;
  if ( v2 < 0 || (unsigned __int64)v2 >= *(_QWORD *)(a1 + 32) )
  {
    if ( !under_debugger )
      interr(287);
    BUG();
  }
  return *(_QWORD *)(a1 + 24) + 32LL * v2;
}
