/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DEE8
// Address: 0x0008DEE8

//----- (0008DEE8) --------------------------------------------------------
int __fastcall sub_8DEE8(int a1, _DWORD *a2)
{
  int result; // r0
  int v4; // r3
  _DWORD *v5; // r1
  int v6; // r0

  result = -102;
  if ( a1 && a2 )
  {
    result = -100;
    if ( *(_QWORD *)(a1 + 96) )
    {
      v4 = *(_DWORD *)(a1 + 92);
      *a2 = *(_DWORD *)(a1 + 88);
      a2[1] = v4;
      v5 = a2 + 2;
      v6 = *(_DWORD *)(a1 + 80);
      v5[1] = *(_DWORD *)(a1 + 84);
      *v5 = v6;
      return 0;
    }
  }
  return result;
}
