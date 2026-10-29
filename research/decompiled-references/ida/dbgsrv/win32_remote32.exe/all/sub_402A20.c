/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402A20
// Address: 0x00402A20

//----- (00402A20) --------------------------------------------------------
_BYTE *__thiscall sub_402A20(_DWORD *this)
{
  _BYTE *v2; // edx
  _BYTE *result; // eax
  unsigned int v4; // esi

  v2 = (_BYTE *)*this;
  result = (_BYTE *)*this;
  v4 = *(this + 1);
  while ( (unsigned int)v2 < v4 )
  {
    if ( !*v2++ )
    {
      *this = v2;
      return result;
    }
  }
  return nullptr;
}
