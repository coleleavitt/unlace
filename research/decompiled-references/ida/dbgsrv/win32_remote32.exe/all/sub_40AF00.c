/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AF00
// Address: 0x0040AF00

//----- (0040AF00) --------------------------------------------------------
HANDLE __thiscall sub_40AF00(HANDLE *this)
{
  HANDLE result; // eax

  result = *this;
  if ( *((_BYTE *)*this + 28) )
  {
    result = *(this + 1);
    if ( result != (HANDLE)-1 )
      return (HANDLE)CloseHandle(*(this + 1));
  }
  return result;
}
