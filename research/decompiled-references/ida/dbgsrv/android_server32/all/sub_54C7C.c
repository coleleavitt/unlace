/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54C7C
// Address: 0x00054C7C

//----- (00054C7C) --------------------------------------------------------
int __fastcall sub_54C7C(int result, int a2)
{
  _BOOL4 v2; // r3

  v2 = 0;
  if ( *(_QWORD *)(result + 8) )
    v2 = *(_QWORD *)(a2 + 8) != 0;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  return result;
}
