/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438730
// Address: 0x00438730

//----- (00438730) --------------------------------------------------------
int __stdcall sub_438730(int a1, int a2, int a3)
{
  sub_4378A0((_DWORD *)a1);
  *(_DWORD *)(a1 + 116) = sub_4355C0;
  *(_DWORD *)(a1 + 120) = a1 + 124;
  *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  if ( a3 )
  {
    sub_4383D0(a1);
    *(_DWORD *)(a1 + 284) = a3;
    *(_BYTE *)(a1 + 320) = 1;
  }
  return 0;
}
