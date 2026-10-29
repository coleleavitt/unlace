__int64 __fastcall sub_170800(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  sub_1705C0((char **)(a1 + 248), *(_DWORD *)(a1 + 208), *(_DWORD *)(a1 + 212), nullptr, 0, 1);
  return 1;
}

