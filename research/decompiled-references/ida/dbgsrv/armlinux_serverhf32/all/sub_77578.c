/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77578
// Address: 0x00077578

//----- (00077578) --------------------------------------------------------
__int64 __fastcall sub_77578(int a1)
{
  _QWORD v2[10]; // [sp+0h] [bp-58h] BYREF

  if ( !a1 || sub_77334(a1, (int)v2) )
    return 0;
  else
    return v2[5];
}
