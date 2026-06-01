/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_776E0
// Address: 0x000776E0

//----- (000776E0) --------------------------------------------------------
__int64 __fastcall sub_776E0(int a1)
{
  _QWORD v2[10]; // [sp+0h] [bp-58h] BYREF

  if ( !a1 || sub_7749C(a1, (int)v2) )
    return 0;
  else
    return v2[5];
}
