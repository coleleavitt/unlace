/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEEB0
// Address: 0x000BEEB0

//----- (000BEEB0) --------------------------------------------------------
void __cdecl sub_BEEB0(int *ptr)
{
  if ( ptr >= &dword_13E5D0 || ptr < &dword_13E3D0 )
    free(ptr);
  else
    sub_BED90();
}
// BED90: using guessed type int sub_BED90(void);
// 13E3D0: using guessed type int dword_13E3D0;
// 13E5D0: using guessed type int dword_13E5D0;
