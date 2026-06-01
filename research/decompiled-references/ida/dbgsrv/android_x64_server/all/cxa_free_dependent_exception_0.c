/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_free_dependent_exception_0
// Address: 0x00000000000D0C00

//----- (00000000000D0C00) ----------------------------------------------------
void __fastcall _cxa_free_dependent_exception_0(__int64 a1)
{
  if ( a1 >= (unsigned __int64)&dword_1590A0 || a1 < (unsigned __int64)dword_158EA0 )
    free((void *)a1);
  else
    sub_D0C30(a1);
}
// 158EA0: using guessed type int dword_158EA0[];
