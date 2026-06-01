char *__fastcall sub_74EA10(_WORD *a1, char *a2, unsigned int *a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  char *v6; // rax

  v4 = (unsigned __int16)*a1;
  if ( *a1 )
  {
    do
    {
      v5 = &byte_2CA2EE0[v4];
      v6 = sub_74E590((unsigned __int16 **)&byte_2CA2EE0[v4], a2, a3);
      v4 = *((unsigned __int16 *)v5 + 4);
      a2 = v6;
    }
    while ( *((_WORD *)v5 + 4) );
  }
  return a2;
}

