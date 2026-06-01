/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462338
// Address: 0x0000000000462338

//----- (0000000000462338) ----------------------------------------------------
__int64 __fastcall sub_462338(__int64 a1, __int64 *a2)
{
  unsigned __int16 v4; // [xsp+26h] [xbp-Ah] BYREF

  if ( sub_461D38(*(_QWORD *)(a1 + 8), (__int64)&v4, 2) != 2 )
    return sub_4325E8(a2, "read error");
  a2[1] = v4;
  return 0;
}
