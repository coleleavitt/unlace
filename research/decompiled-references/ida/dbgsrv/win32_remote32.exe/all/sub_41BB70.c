/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BB70
// Address: 0x0041BB70

//----- (0041BB70) --------------------------------------------------------
_DWORD *__thiscall sub_41BB70(_DWORD *this, unsigned int a2, unsigned int a3)
{
  LPVOID v4; // eax

  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  if ( a3 )
  {
    v4 = nullptr;
    if ( a3 != -1 )
    {
      v4 = sub_453B00((int)this, nullptr, a3 + 1, 1u);
      *this = v4;
    }
    *(this + 1) = a3 + 1;
    sub_464310((unsigned int)v4, a2, a3);
    *(_BYTE *)(a3 + *this) = 0;
  }
  return this;
}
