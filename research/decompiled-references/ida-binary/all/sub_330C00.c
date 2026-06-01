bool __fastcall sub_330C00(__int64 a1, char a2)
{
  __int64 v2; // rax

  LOBYTE(v2) = 0;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
  {
    if ( *(_BYTE *)(a1 + 1) )
    {
      LOBYTE(v2) = a2;
      if ( !a2 )
      {
        v2 = sub_1E73C0(0x2Fu, a1);
        if ( v2 )
        {
          if ( (_DWORD)v2 )
            LOBYTE(v2) = (_DWORD)v2 == 1;
          else
            LOBYTE(v2) = (*(_BYTE *)(a1 + 1) & 0xFD) != 1;
        }
        else
        {
          return *(_BYTE *)(a1 + 1) > 1u;
        }
      }
    }
  }
  return v2;
}
