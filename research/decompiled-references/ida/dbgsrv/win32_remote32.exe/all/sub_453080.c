/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453080
// Address: 0x00453080

//----- (00453080) --------------------------------------------------------
_DWORD *__thiscall sub_453080(_DWORD *this, char a2)
{
  void *v4; // [esp-4h] [ebp-18h]

  v4 = (void *)*(this + 2);
  *this = &off_48DA64;
  sub_456330(v4);
  *(this + 2) = 0;
  *(this + 1) = 0;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48DA64: using guessed type void (__noreturn *off_48DA64)();
