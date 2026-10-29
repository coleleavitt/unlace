/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4626D4
// Address: 0x004626D4

//----- (004626D4) --------------------------------------------------------
_DWORD *__thiscall sub_4626D4(_DWORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h] BYREF
  char v5; // [esp+8h] [ebp-4h]

  v4 = a2;
  v5 = 1;
  *this = &std::exception::`vftable';
  *(this + 1) = 0;
  *(this + 2) = 0;
  sub_464C7B((int)&v4, (int)(this + 1));
  return this;
}
// 4A4474: using guessed type void *std::exception::`vftable';
