/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qaccess
// Address: 0x000AFFA0

//----- (000AFFA0) --------------------------------------------------------
int __cdecl qaccess(char *name, int type)
{
  int v2; // esi

  v2 = access(name, type);
  if ( v2 )
    set_qerrno(1);
  return v2;
}
