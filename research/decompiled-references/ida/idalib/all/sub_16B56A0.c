__int64 __fastcall sub_16B56A0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  unsigned int v6; // esi
  unsigned int v7; // edx

  v2 = a1;
  v3 = a2;
  v4 = HIDWORD(a2);
  if ( BYTE4(a1) )
  {
    if ( BYTE4(a2) )
    {
      if ( (unsigned int)a1 < (unsigned int)a2 )
        v2 = a2;
      return v2 | 0x100000000LL;
    }
    else
    {
      if ( (unsigned int)a1 < (int)a2 - 1 )
        v2 = a2 - 1;
      return v2 + 1;
    }
  }
  else
  {
    v6 = a2 - 1;
    v7 = a1 - 1;
    if ( !(_BYTE)v4 )
      v3 = v6;
    if ( v7 < v3 )
      v7 = v3;
    return v7 + 1;
  }
}
