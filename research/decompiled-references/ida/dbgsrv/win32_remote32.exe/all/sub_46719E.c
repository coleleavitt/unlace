/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46719E
// Address: 0x0046719E

//----- (0046719E) --------------------------------------------------------
_DWORD *__thiscall sub_46719E(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad exception";
  *this = &std::bad_exception::`vftable';
  return this;
}
// 4A451C: using guessed type void *std::bad_exception::`vftable';
