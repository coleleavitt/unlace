/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401770
// Address: 0x00401770

//----- (00401770) --------------------------------------------------------
void *__thiscall sub_401770(_DWORD *this)
{
  unsigned int v2; // eax
  void *v3; // ecx
  LPVOID v4; // eax
  void *result; // eax

  v2 = *(this + 1);
  if ( *(this + 2) > v2 )
  {
    v3 = (void *)*this;
    if ( *this )
    {
      if ( v2 )
      {
        v4 = sub_453A30(v3, v2);
        if ( v4 )
          *this = v4;
      }
    }
  }
  result = (void *)*this;
  *(this + 2) = 0;
  *(this + 1) = 0;
  *this = 0;
  return result;
}
