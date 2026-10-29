__int64 __fastcall sub_8211D0(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax

  v1 = 1;
  if ( ((a1 >> 3) & 7) == 7 )
  {
    if ( (a1 & 0x104) == 0 )
    {
      v5 = (unsigned __int8)a1 >> 6;
      LOBYTE(v1) = v5 != 0;
      if ( v5 == 3 )
        return BYTE1(a1) & 1;
    }
    return v1;
  }
  if ( ((a1 >> 3) & 7) != 1 )
    return v1;
  v3 = a1;
  v4 = -10;
  LOBYTE(v3) = (unsigned __int8)a1 >> 6;
  if ( _bittest64(&v4, v3) )
    return v1;
  return BYTE1(a1) & 1;
}

