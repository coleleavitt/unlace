__int64 __fastcall sub_A51DB0(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp

  if ( (*(_QWORD *)(a1 + 22720) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v2 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    v3 = v2 & 0xFFFFFFFFFFFFFFF0LL;
    sub_F3AE10(v2, 0, 0, 0, 0, 0, 0, 0);
    *(_QWORD *)(a1 + 22720) = v3;
  }
  return *(_QWORD *)(a1 + 22720);
}

