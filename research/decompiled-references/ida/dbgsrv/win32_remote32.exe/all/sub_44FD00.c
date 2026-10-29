/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FD00
// Address: 0x0044FD00

//----- (0044FD00) --------------------------------------------------------
int __thiscall sub_44FD00(SOCKET *this, int how)
{
  SOCKET v3; // ecx
  int result; // eax

  v3 = *(this + 7);
  if ( v3 != -1 )
  {
    if ( how > -1 )
      shutdown(v3, how);
    result = closesocket(*(this + 7));
    *(this + 7) = -1;
  }
  return result;
}
