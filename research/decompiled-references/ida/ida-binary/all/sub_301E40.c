char __fastcall sub_301E40(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v4; // rdx

  if ( a3 )
  {
    LOBYTE(v3) = a2 == *(_QWORD *)(a1 + 704);
  }
  else
  {
    LOBYTE(v3) = 1;
    if ( (*(_QWORD *)(a2 + 8) & 1) != 0 )
    {
      if ( dword_8CC5F0 <= 0 || (LOBYTE(v3) = 0, (*(_BYTE *)(dbg + 32) & 0x40) == 0) )
      {
        v4 = *(_QWORD *)(a2 + 8) & 2LL;
        LOBYTE(v3) = 1;
        if ( (_DWORD)v4 )
          return (unsigned int)sub_23BE00(a1, a2, v4) ^ 1;
      }
    }
  }
  return v3;
}
