/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B640
// Address: 0x0040B640

//----- (0040B640) --------------------------------------------------------
void **__thiscall sub_40B640(void **this, char a2)
{
  void *v3; // eax

  v3 = *this;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v3);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) == 0 )
    {
      sub_453A20(this);
      return this;
    }
    nullsub_1(this);
  }
  return this;
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
