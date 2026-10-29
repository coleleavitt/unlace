/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54E00
// Address: 0x00054E00

//----- (00054E00) --------------------------------------------------------
int __fastcall sub_54E00(int result, int a2)
{
  _BOOL4 v2; // r3

  v2 = 1;
  if ( !*(_QWORD *)(result + 8) )
    v2 = *(_QWORD *)(a2 + 8) != 0;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  return result;
}
