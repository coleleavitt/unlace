/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CF20
// Address: 0x0043CF20

//----- (0043CF20) --------------------------------------------------------
_DWORD *__thiscall sub_43CF20(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx

  result = (_DWORD *)*(this + 6);
  v3 = &result[8 * *(this + 7)];
  if ( result == v3 )
    return nullptr;
  while ( *result != a2 )
  {
    result += 8;
    if ( result == v3 )
      return nullptr;
  }
  return result;
}
