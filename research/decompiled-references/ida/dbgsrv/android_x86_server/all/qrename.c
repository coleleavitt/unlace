/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrename
// Address: 0x000AFFF0

//----- (000AFFF0) --------------------------------------------------------
int __cdecl qrename(char *old, char *a2)
{
  int v2; // esi

  v2 = rename(old, a2);
  if ( v2 )
    set_qerrno(1);
  return v2;
}
