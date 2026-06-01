/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D274
// Address: 0x0008D274

//----- (0008D274) --------------------------------------------------------
int __fastcall sub_8D274(_DWORD *a1, _DWORD *a2)
{
  int v2; // r2

  v2 = -102;
  if ( a1 )
  {
    a2[3] = a1[17];
    a2[2] = a1[16];
    a2[1] = a1[15];
    *a2 = a1[14];
    return 0;
  }
  return v2;
}
