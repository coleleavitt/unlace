unsigned __int64 __fastcall sub_16B5870(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // edx
  unsigned __int8 v5; // cl
  int v6; // esi

  v2 = a1;
  v3 = a2;
  if ( BYTE4(a1) )
  {
    if ( BYTE4(a2) )
    {
      v5 = 1;
      v6 = 0;
      v4 = 0;
      return (unsigned int)(v6 + v4 + v3 + v2) | ((unsigned __int64)v5 << 32);
    }
    v4 = 0;
  }
  else
  {
    v2 = a1 - 1;
    v4 = BYTE4(a2) ^ 1;
    if ( BYTE4(a2) )
    {
      v5 = 0;
      v6 = 1;
      return (unsigned int)(v6 + v4 + v3 + v2) | ((unsigned __int64)v5 << 32);
    }
  }
  v3 = a2 - 1;
  v5 = 0;
  v6 = 1;
  return (unsigned int)(v6 + v4 + v3 + v2) | ((unsigned __int64)v5 << 32);
}
