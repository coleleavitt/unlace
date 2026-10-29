/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C374
// Address: 0x0004C374

//----- (0004C374) --------------------------------------------------------
int __fastcall sub_4C374(int result, int a2)
{
  if ( *(_QWORD *)(result + 8) )
    *(_DWORD *)(result + 8) = 1;
  else
    *(_DWORD *)(result + 8) = *(_QWORD *)(a2 + 8) != 0;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  return result;
}
