__int64 __fastcall sub_2287340(_BYTE *a1, char *a2, __int64 a3)
{
  __int64 v3; // r8
  char *i; // rcx
  char v5; // dl
  _BYTE *v6; // rax

  if ( a3 )
  {
    v3 = (__int64)&a1[a3 - 1];
    for ( i = a2; ; ++i )
    {
      v6 = i + 1;
      if ( a1 == (_BYTE *)v3 )
        break;
      v5 = *i;
      *a1++ = v5;
      if ( !v5 )
        return v6 - a2 - 1;
    }
    *a1 = 0;
    v6 = i + 1;
    if ( *i )
      goto LABEL_8;
    return v6 - a2 - 1;
  }
  else
  {
    v6 = a2;
    do
LABEL_8:
      ++v6;
    while ( *(v6 - 1) );
    return v6 - a2 - 1;
  }
}
