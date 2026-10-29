char __fastcall sub_141A630(unsigned __int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  if ( (unsigned __int16)a1 > 0x13u )
    return (((_WORD)a1 - 8) & 0xFFF7) == 0;
  v1 = 982656;
  result = 1;
  if ( !_bittest64(&v1, a1) )
    return (((_WORD)a1 - 8) & 0xFFF7) == 0;
  return result;
}
