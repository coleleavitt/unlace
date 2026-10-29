/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4510F0
// Address: 0x004510F0

//----- (004510F0) --------------------------------------------------------
int __thiscall sub_4510F0(int *this, int a2)
{
  int result; // eax

  result = sub_44D7F0(*(this + 4), a2);
  if ( !(_BYTE)result )
    *(this + 8) = (int)&dword_48FD78;
  return result;
}
// 48FD78: using guessed type int dword_48FD78;
