/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000560A0
// Address: 0x00000001000560A0

//----- (00000001000560A0) ----------------------------------------------------
__int64 __fastcall sub_1000560A0(
        __int64 result,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x8

  if ( *(_BYTE *)(result + 664) == 1 )
  {
    v9 = *(_QWORD *)(result + 400);
    if ( v9 && *(_BYTE *)(v9 + 68) != 1 )
      return sub_10005E6DC(0, v9);
    else
      return sub_100060F44(0, a2, &a9);
  }
  return result;
}
