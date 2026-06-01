__int64 __fastcall sub_CCE10(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rdi

  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 1) == 0 )
      return 0;
    v4 = qword_2515B0;
    if ( qword_2515B0 )
    {
      *(_DWORD *)qword_2515B0 = a2;
      v4[2] = a3;
      *((_QWORD *)v4 + 2) = a1;
      return sub_CC780((__int64)v4, 10);
    }
  }
  return 0xFFFFFFFFLL;
}

