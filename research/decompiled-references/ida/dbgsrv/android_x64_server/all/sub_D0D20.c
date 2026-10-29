/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0D20
// Address: 0x00000000000D0D20

//----- (00000000000D0D20) ----------------------------------------------------
void __fastcall sub_D0D20(__int64 a1)
{
  if ( a1 >= (unsigned __int64)&dword_1590A0 || a1 < (unsigned __int64)dword_158EA0 )
    free((void *)a1);
  else
    sub_D0C30(a1);
}
// 158EA0: using guessed type int dword_158EA0[];
