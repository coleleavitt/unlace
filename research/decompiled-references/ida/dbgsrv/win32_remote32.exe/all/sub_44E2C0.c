/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E2C0
// Address: 0x0044E2C0

//----- (0044E2C0) --------------------------------------------------------
_DWORD *__thiscall sub_44E2C0(_DWORD *this, char a2)
{
  *this = off_48FD1C;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48FD1C: using guessed type int (*off_48FD1C[2])();
