/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4623B8
// Address: 0x00000000004623B8

//----- (00000000004623B8) ----------------------------------------------------
__int64 __fastcall sub_4623B8(__int64 a1, __int64 *a2)
{
  unsigned int v4; // [xsp+24h] [xbp-Ch] BYREF

  if ( sub_461D38(*(_QWORD *)(a1 + 8), (__int64)&v4, 4) != 4 )
    return sub_4325E8(a2, "read error");
  a2[1] = v4;
  return 0;
}
