/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422B80
// Address: 0x00422B80

//----- (00422B80) --------------------------------------------------------
int __thiscall sub_422B80(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 1);
  result = *(_DWORD *)(*this + 4 * v2 - 4);
  if ( v2 )
    *(this + 1) = v2 - 1;
  return result;
}
