/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427550
// Address: 0x00427550

//----- (00427550) --------------------------------------------------------
int __thiscall sub_427550(_DWORD *this, int a2)
{
  unsigned int v2; // esi
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 )
    return -1;
  v2 = *(this + 1);
  result = 0;
  if ( !v2 )
    return -1;
  for ( i = (_DWORD *)*this; *i != a2; ++i )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
