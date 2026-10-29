__int64 __fastcall sub_15AE4D0(__int64 a1, char a2)
{
  __int64 result; // rax
  int v3; // r10d

  result = 0;
  v3 = *(_DWORD *)a1 & 0x7F000;
  if ( v3 != 282624 )
  {
    if ( v3 )
    {
      return ((__int64 (*)(void))((char *)dword_261C2D0 + dword_261C2D0[(*(_DWORD *)a1 >> 12) & 0x7F]))();
    }
    else if ( a2 )
    {
      *(_BYTE *)(a1 + 2) |= 0x80u;
    }
  }
  return result;
}
