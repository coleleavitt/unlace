/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9118C
// Address: 0x0009118C

//----- (0009118C) --------------------------------------------------------
void __fastcall sub_9118C(int *a1)
{
  if ( a1 < &dword_E07C0 && a1 >= dword_E05C0 )
    JUMPOUT(0x910CC);
  j_free(a1);
}
// 911A0: control flows out of bounds to 910CC
// E05C0: using guessed type int dword_E05C0[];
// E07C0: using guessed type int dword_E07C0;
