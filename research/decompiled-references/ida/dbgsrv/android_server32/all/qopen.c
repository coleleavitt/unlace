/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen
// Address: 0x0007DB04

//----- (0007DB04) --------------------------------------------------------
int __fastcall qopen(int a1, int a2)
{
  int v2; // r4

  v2 = _open_2(a1, (a2 & 0xFFFDFDBF) + 0x20000);
  if ( v2 == -1 )
  {
    set_qerrno(1);
    return -1;
  }
  else if ( flock(v2, 6) == -1 )
  {
    set_qerrno(1);
    if ( close(v2) == -1 )
      set_qerrno(1);
    return -1;
  }
  else
  {
    fcntl(v2, 2, 1);
    return v2;
  }
}
// 192E0: using guessed type int __fastcall _open_2(_DWORD, _DWORD);
