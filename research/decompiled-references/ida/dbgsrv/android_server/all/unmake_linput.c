/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unmake_linput
// Address: 0x00000000000B9B38

//----- (00000000000B9B38) ----------------------------------------------------
void __fastcall unmake_linput(void *ptr)
{
  if ( ptr )
    operator delete(ptr);
}
