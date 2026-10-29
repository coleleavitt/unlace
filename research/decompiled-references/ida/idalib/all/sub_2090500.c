bool __fastcall sub_2090500(unsigned __int8 *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( (unsigned int)(v1 - 29) < 0x20 )
    return 0;
  if ( (unsigned int)(v1 - 29) > 0x21 )
    return (unsigned int)(v1 - 64) < 3;
  return (*((_WORD *)a1 + 1) & 0x380) != 0;
}
