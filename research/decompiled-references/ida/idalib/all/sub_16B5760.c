unsigned __int64 __fastcall sub_16B5760(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  int v6; // esi
  unsigned int v7; // esi

  v2 = a1;
  v3 = a2;
  v4 = HIDWORD(a2);
  if ( BYTE4(a1) )
  {
    if ( BYTE4(a2) )
    {
      v5 = 1;
      v6 = 0;
    }
    else
    {
      v3 = a2 - 1;
      v5 = 0;
      v6 = 1;
    }
  }
  else
  {
    v7 = a2 - 1;
    v2 = a1 - 1;
    if ( !(_BYTE)v4 )
      v3 = v7;
    v5 = 0;
    v6 = 1;
  }
  if ( v2 < v3 )
    v2 = v3;
  return (v6 + v2 + 1) | (unsigned __int64)(v5 << 32);
}
