/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E690
// Address: 0x0044E690

//----- (0044E690) --------------------------------------------------------
int __thiscall sub_44E690(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(this + 5) )
  {
    *(_DWORD *)(*(this + 4) + 4) += a2;
    return a2;
  }
  return result;
}
