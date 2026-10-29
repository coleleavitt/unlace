/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwrite
// Address: 0x0007DD94

//----- (0007DD94) --------------------------------------------------------
ssize_t __fastcall qwrite(int a1, const void *a2, size_t a3)
{
  ssize_t v4; // r4
  int v5; // r0

  v4 = write(a1, a2, a3);
  if ( v4 != a3 )
  {
    v5 = 1;
    if ( v4 != -1 )
      v5 = 2;
    set_qerrno(v5);
  }
  return v4;
}
