/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfwrite
// Address: 0x0000000100073CA4

//----- (0000000100073CA4) ----------------------------------------------------
size_t __fastcall qfwrite(FILE *__stream, void *__ptr, size_t __nitems)
{
  size_t v3; // x19
  size_t v4; // x0

  if ( !__stream )
  {
    set_qerrno();
    *__error() = 9;
    v3 = -1;
    goto LABEL_6;
  }
  v3 = __nitems;
  if ( __nitems )
  {
    v4 = fwrite(__ptr, 1u, __nitems, __stream);
    if ( v4 != v3 )
    {
      v3 = v4;
LABEL_6:
      set_qerrno();
    }
  }
  return v3;
}
