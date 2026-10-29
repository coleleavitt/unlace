_BYTE *__fastcall sub_2289A60(unsigned __int8 *a1, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *result; // rax
  unsigned __int64 v5; // rdx

  result = (_BYTE *)sub_2288A70(a1, a2, a3);
  if ( !a2 )
    return nullptr;
  if ( v5 <= 2 )
  {
LABEL_13:
    if ( a3 <= 1 )
      return nullptr;
LABEL_8:
    if ( v5 && result[v5 - 1] == 58 )
      return result;
    return nullptr;
  }
  if ( *result == 47 )
  {
    if ( result[1] == 47 )
      return result;
    goto LABEL_13;
  }
  if ( a3 == 1 )
    return nullptr;
  if ( !a3 || *result != 92 || result[1] != 92 )
  {
    if ( !a3 )
      return nullptr;
    goto LABEL_8;
  }
  return result;
}
