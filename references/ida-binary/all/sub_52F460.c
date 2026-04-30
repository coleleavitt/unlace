__int64 __fastcall sub_52F460(unsigned __int8 a1)
{
  unsigned int v1; // ebp

  if ( (unsigned int)(char)a1 > 0x7F )
    goto LABEL_2;
  v1 = 1;
  if ( ispunct(a1) )
    return v1;
  if ( !isspace(a1) )
  {
LABEL_2:
    LOBYTE(v1) = a1 == 126;
    return v1;
  }
  return 1;
}
