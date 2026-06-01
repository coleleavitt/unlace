/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwrite
// Address: 0x00000000000BD19C

//----- (00000000000BD19C) ----------------------------------------------------
__int64 __fastcall qwrite(int a1, const void *a2, size_t a3)
{
  unsigned int v4; // w0
  unsigned int v5; // w19
  unsigned int v6; // w0

  v4 = write(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
  {
    if ( v4 == -1 )
      v6 = 1;
    else
      v6 = 2;
    set_qerrno(v6);
  }
  return v5;
}
