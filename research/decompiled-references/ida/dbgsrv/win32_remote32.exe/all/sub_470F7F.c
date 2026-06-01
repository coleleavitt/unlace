/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470F7F
// Address: 0x00470F7F

//----- (00470F7F) --------------------------------------------------------
int __thiscall sub_470F7F(unsigned __int8 **this)
{
  unsigned __int8 *v2; // ecx
  int result; // eax

  v2 = *(this + 2);
  if ( v2 == *(this + 1) )
    return -1;
  result = *v2;
  *(this + 2) = v2 + 1;
  return result;
}
