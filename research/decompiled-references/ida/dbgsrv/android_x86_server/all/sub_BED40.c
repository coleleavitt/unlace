/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BED40
// Address: 0x000BED40

//----- (000BED40) --------------------------------------------------------
void __cdecl sub_BED40(int *ptr)
{
  if ( ptr >= &dword_13E5D0 || ptr < &dword_13E3D0 )
    free(ptr);
  else
    sub_BED90();
}
// BED90: using guessed type int sub_BED90(void);
// 13E3D0: using guessed type int dword_13E3D0;
// 13E5D0: using guessed type int dword_13E5D0;
