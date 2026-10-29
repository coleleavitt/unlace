/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462438
// Address: 0x0000000000462438

//----- (0000000000462438) ----------------------------------------------------
__int64 __fastcall sub_462438(__int64 a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // [xsp+20h] [xbp-10h] BYREF

  if ( sub_461D38(*(_QWORD *)(a1 + 8), (__int64)&v5, 8) != 8 )
    return sub_4325E8(a2, "read error");
  v4 = v5;
  sub_448310(a2);
  *(_BYTE *)a2 = 9;
  a2[1] = v4;
  return 0;
}
