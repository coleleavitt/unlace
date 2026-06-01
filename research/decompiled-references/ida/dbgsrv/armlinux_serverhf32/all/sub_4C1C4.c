/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C1C4
// Address: 0x0004C1C4

//----- (0004C1C4) --------------------------------------------------------
int __fastcall sub_4C1C4(int result, int a2)
{
  _BOOL4 v2; // r3

  if ( *(_QWORD *)(result + 8) )
    v2 = *(_QWORD *)(a2 + 8) != 0;
  else
    v2 = 0;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  return result;
}
