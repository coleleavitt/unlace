/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qunlink
// Address: 0x000AFF60

//----- (000AFF60) --------------------------------------------------------
int __cdecl qunlink(char *name)
{
  int v1; // esi

  v1 = unlink(name);
  if ( v1 )
    set_qerrno(1);
  return v1;
}
