/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4510C0
// Address: 0x004510C0

//----- (004510C0) --------------------------------------------------------
int __thiscall sub_4510C0(int *this, int a2, int a3)
{
  int result; // eax

  result = sub_44D7D0(*(this + 4), a2, a3);
  if ( !(_BYTE)result )
    *(this + 8) = (int)&dword_48FD78;
  return result;
}
// 48FD78: using guessed type int dword_48FD78;
