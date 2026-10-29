/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_847D4
// Address: 0x000847D4

//----- (000847D4) --------------------------------------------------------
_DWORD *__fastcall sub_847D4(_DWORD *result, int a2)
{
  if ( result )
  {
    if ( *result != 47 )
      return nullptr;
    if ( a2 <= 0 )
    {
      if ( !a2 )
        return (_DWORD *)result[2];
      return nullptr;
    }
    while ( 1 )
    {
      result = (_DWORD *)result[3];
      --a2;
      if ( !result )
        break;
      if ( *result != 47 )
        return nullptr;
      if ( !a2 )
        return (_DWORD *)result[2];
    }
  }
  return result;
}
