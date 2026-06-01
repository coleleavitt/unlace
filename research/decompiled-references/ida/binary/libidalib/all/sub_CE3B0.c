__int64 __fastcall sub_CE3B0(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rdi

  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 1) == 0 )
      return 0;
    v4 = qword_252758;
    if ( qword_252758 )
    {
      *(_DWORD *)qword_252758 = a2;
      v4[4] = a3;
      *((_QWORD *)v4 + 3) = a1;
      return sub_CDCF0((__int64)v4, 10);
    }
  }
  return 0xFFFFFFFFLL;
}

