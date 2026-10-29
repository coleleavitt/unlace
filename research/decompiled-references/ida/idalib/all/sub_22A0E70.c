__int64 __fastcall sub_22A0E70(void *s1, size_t n)
{
  _UNKNOWN **v2; // rbx
  unsigned int v3; // r13d
  _UNKNOWN **v5; // rax

  if ( n )
  {
    v2 = &off_2BEE940;
    while ( 1 )
    {
      if ( v2[1] == (_UNKNOWN *)n )
      {
        v3 = *((_DWORD *)v2 + 4);
        if ( !memcmp(s1, *v2, n) )
          break;
      }
      v2 += 4;
      if ( v2 == &off_2BEFB80 )
        return 0;
    }
  }
  else
  {
    v5 = &off_2BEE940;
    do
    {
      if ( !v5[1] )
        return *((unsigned int *)v5 + 4);
      v5 += 4;
    }
    while ( v5 != &off_2BEFB80 );
    return 0;
  }
  return v3;
}
