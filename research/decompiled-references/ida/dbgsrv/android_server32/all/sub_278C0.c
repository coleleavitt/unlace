/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_278C0
// Address: 0x000278C0

//----- (000278C0) --------------------------------------------------------
int __fastcall sub_278C0(int *a1)
{
  int v1; // r4
  int v2; // r0
  _DWORD v4[123]; // [sp+0h] [bp-1F0h] BYREF

  v1 = 0;
  v2 = sub_2BCCC((int)v4, a1, 0, 0);
  v4[96] = sub_27934;
  if ( sub_27938(v2) )
    v1 = sub_27A6C((int)v4);
  sub_283E4(v4);
  return v1;
}
