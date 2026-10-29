__int64 __fastcall sub_7734C0(_WORD *a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned __int16 **v3; // rdx
  __int16 v4; // ax

  v1 = (unsigned __int16)*a1;
  v2 = 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      do
      {
        v3 = (unsigned __int16 **)&byte_2CCCDE0[v1];
        v1 = *((unsigned __int16 *)v3 + 4);
      }
      while ( *((_WORD *)v3 + 4) );
      v4 = *((_WORD *)v3 + 5);
      if ( v4 )
        break;
      v1 = **v3;
    }
    v2 = 0;
    if ( v4 == 1 )
      LOBYTE(v2) = *(_BYTE *)v3 == 38;
  }
  return v2;
}
