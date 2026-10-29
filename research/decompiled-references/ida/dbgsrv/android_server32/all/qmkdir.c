/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmkdir
// Address: 0x0007DE38

//----- (0007DE38) --------------------------------------------------------
int __fastcall qmkdir(const char *a1, unsigned __int16 a2)
{
  int v2; // r4

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  set_qerrno(1);
  return -1;
}
