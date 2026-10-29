/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450AE0
// Address: 0x00450AE0

//----- (00450AE0) --------------------------------------------------------
int __thiscall sub_450AE0(int *this, int a2, int a3)
{
  int result; // eax

  result = sub_44D570(*(this + 4), a2, a3);
  if ( !(_BYTE)result )
    *(this + 8) = (int)&dword_48FD78;
  return result;
}
// 48FD78: using guessed type int dword_48FD78;
