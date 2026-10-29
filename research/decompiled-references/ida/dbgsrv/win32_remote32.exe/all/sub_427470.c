/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427470
// Address: 0x00427470

//----- (00427470) --------------------------------------------------------
unsigned int __thiscall sub_427470(unsigned int *this)
{
  unsigned int v2; // edx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int result; // eax

  v2 = *(this + 1);
  if ( v2 <= 2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(278);
  }
  v3 = *(__int16 *)(v2 + *this - 2);
  v4 = v2 - v3 - 2;
  *(this + 3) = v4;
  if ( v2 - v3 == 2 || (result = v2 - 2, v4 > v2 - 2) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(279);
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
