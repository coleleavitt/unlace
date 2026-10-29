/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DF16
// Address: 0x0008DF16

//----- (0008DF16) --------------------------------------------------------
int __fastcall sub_8DF16(int a1, _DWORD *a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r2

  result = -102;
  if ( a1 )
  {
    result = -100;
    if ( *(_QWORD *)(a1 + 96) )
    {
      v4 = *(_DWORD *)(a1 + 88);
      v5 = *(_DWORD *)(a1 + 80);
      *a2 = v4;
      a2[1] = v5;
      return 0;
    }
  }
  return result;
}
