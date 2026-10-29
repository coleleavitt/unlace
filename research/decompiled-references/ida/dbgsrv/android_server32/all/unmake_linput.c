/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unmake_linput
// Address: 0x0007B746

//----- (0007B746) --------------------------------------------------------
void __fastcall unmake_linput(void *a1)
{
  if ( a1 )
    operator delete(a1);
}
