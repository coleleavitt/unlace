unsigned __int8 *__fastcall sub_206D730(unsigned __int8 *a1)
{
  unsigned __int8 *result; // rax
  unsigned __int8 v2; // dl

  for ( result = a1;
        (unsigned int)*result - 19 <= 1;
        result = *(unsigned __int8 **)&result[-16 - 8LL * ((v2 >> 2) & 0xF) + 8] )
  {
    while ( 1 )
    {
      v2 = *(result - 16);
      if ( (v2 & 2) == 0 )
        break;
      result = *(unsigned __int8 **)(*((_QWORD *)result - 4) + 8LL);
      if ( (unsigned int)*result - 19 > 1 )
        return result;
    }
  }
  return result;
}
