__int64 __fastcall sub_79B7D0(__int64 a1)
{
  unsigned __int8 v1; // dl

  v1 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( v1 == 8 )
    return a1 - 40;
  else
    return ((__int64 (*)(void))((char *)dword_3C91E5C + dword_3C91E5C[v1]))();
}

