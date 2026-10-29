/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448470
// Address: 0x00448470

//----- (00448470) --------------------------------------------------------
_DWORD *__thiscall sub_448470(_DWORD *this, int a2)
{
  *(this + 64) = a2;
  *(_DWORD *)(a2 + 200) = this != nullptr ? this + 28 : nullptr;
  return this + 28;
}
