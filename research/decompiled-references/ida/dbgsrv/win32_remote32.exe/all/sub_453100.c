/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453100
// Address: 0x00453100

//----- (00453100) --------------------------------------------------------
_DWORD *__thiscall sub_453100(_DWORD *this, char a2)
{
  *this = &std::exception::`vftable';
  sub_464CDE((int)(this + 1));
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 4A4474: using guessed type void *std::exception::`vftable';
