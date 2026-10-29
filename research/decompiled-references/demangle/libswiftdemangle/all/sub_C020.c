_BYTE *__fastcall sub_C020(_BYTE *a1)
{
  unsigned __int8 v1; // al
  _BYTE *result; // rax
  bool v3; // cc

  v1 = a1[18];
  if ( v1 <= 4u )
  {
    v3 = v1 <= 2u;
    result = nullptr;
    if ( !v3 )
      return a1;
  }
  else if ( v1 == 5 )
  {
    return *(_BYTE **)a1;
  }
  else
  {
    return nullptr;
  }
  return result;
}
