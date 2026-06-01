/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451560
// Address: 0x00451560

//----- (00451560) --------------------------------------------------------
SECURITY_STATUS __thiscall sub_451560(SECURITY_STATUS *this)
{
  unsigned int v2; // edi
  int v3; // ebx
  SECURITY_STATUS result; // eax

  v2 = 0;
  if ( *(this + 10) )
  {
    v3 = 0;
    do
    {
      result = *this;
      if ( *(_BYTE *)(v2 + *this) )
      {
        result = *(_DWORD *)(*(this + 3) + v3 + 8);
        if ( result )
          result = FreeContextBuffer(*(PVOID *)(*(this + 3) + v3 + 8));
      }
      ++v2;
      v3 += 12;
    }
    while ( v2 < *(this + 10) );
  }
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 7) = 0;
  return result;
}
