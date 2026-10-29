/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmkdir
// Address: 0x00000000000C1EC0

//----- (00000000000C1EC0) ----------------------------------------------------
__int64 __fastcall qmkdir(const char *a1, __mode_t a2)
{
  unsigned int v2; // ebx

  v2 = mkdir(a1, a2);
  if ( v2 == -1 )
    set_qerrno(1u);
  return v2;
}
