/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4160D0
// Address: 0x004160D0

//----- (004160D0) --------------------------------------------------------
LPVOID __thiscall sub_4160D0(int this, unsigned int a2, LPVOID *a3)
{
  LPVOID result; // eax
  unsigned int i; // edx

  if ( a2 > *(_DWORD *)(this + 8) )
  {
    result = sub_453B00(this, *(void **)this, a2, 4u);
    *(_DWORD *)this = result;
  }
  for ( i = *(_DWORD *)(this + 4); i < a2; ++i )
  {
    result = *a3;
    *(_DWORD *)(*(_DWORD *)this + 4 * i) = *a3;
  }
  *(_DWORD *)(this + 4) = a2;
  return result;
}
