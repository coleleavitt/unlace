__int64 __fastcall sub_3594D0(unsigned int a1)
{
  unsigned int v1; // ebx
  const char *v2; // rdi

  v1 = a1;
  if ( (a1 & 0xF7) == 1 || (_BYTE)a1 == 13 )
  {
    v2 = "UTF-16LE";
    if ( (unsigned __int8)getinf_flag(3, 32) )
      v2 = "UTF-16BE";
    goto LABEL_9;
  }
  if ( (_BYTE)a1 == 2 )
  {
    v2 = "UTF-32LE";
    if ( (unsigned __int8)getinf_flag(3, 32) )
      v2 = "UTF-32BE";
LABEL_9:
    v1 |= (unsigned int)add_encoding((int)v2) << 24;
  }
  return v1;
}
