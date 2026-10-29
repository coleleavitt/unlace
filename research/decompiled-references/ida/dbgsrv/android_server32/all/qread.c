/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qread
// Address: 0x0007DD54

//----- (0007DD54) --------------------------------------------------------
ssize_t __fastcall qread(int a1, void *a2, signed int a3)
{
  ssize_t v4; // r4
  int v5; // r0

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  v4 = read(a1, a2, a3);
  if ( v4 != a3 )
  {
    v5 = 1;
    if ( v4 != -1 )
      v5 = 3;
    set_qerrno(v5);
  }
  return v4;
}
// E0550: using guessed type char under_debugger;
