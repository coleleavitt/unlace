/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unmake_linput
// Address: 0x00000000000BE740

//----- (00000000000BE740) ----------------------------------------------------
void __fastcall unmake_linput(void *a1)
{
  if ( a1 )
    operator delete(a1);
}
