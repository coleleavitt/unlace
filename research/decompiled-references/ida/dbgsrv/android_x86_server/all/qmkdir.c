/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmkdir
// Address: 0x000AF770

//----- (000AF770) --------------------------------------------------------
int __cdecl qmkdir(char *path, unsigned __int16 a2)
{
  int v2; // esi

  v2 = mkdir(path, a2);
  if ( v2 == -1 )
    set_qerrno(1);
  return v2;
}
