/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qaccess
// Address: 0x00000000000C2520

//----- (00000000000C2520) ----------------------------------------------------
__int64 __fastcall qaccess(const char *a1, int a2)
{
  unsigned int v2; // ebx

  v2 = access(a1, a2);
  if ( v2 )
    set_qerrno(1u);
  return v2;
}
