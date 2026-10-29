unsigned __int8 *__fastcall sub_208B030(__int64 a1)
{
  unsigned __int8 *result; // rax

  if ( *(_BYTE *)(a1 + 64) == 2 )
    result = *(unsigned __int8 **)(a1 + 48);
  else
    result = *(unsigned __int8 **)(a1 + 40);
  if ( result )
  {
    if ( (unsigned int)*result - 1 > 1 )
      return nullptr;
    else
      return *((unsigned __int8 **)result + 16);
  }
  return result;
}
