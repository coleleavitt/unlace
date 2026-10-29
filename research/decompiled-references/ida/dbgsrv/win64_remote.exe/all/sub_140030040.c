/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030040
// Address: 0x0000000140030040

//----- (0000000140030040) ----------------------------------------------------
__int64 __fastcall sub_140030040(__int64 a1)
{
  unsigned __int16 v2; // bx

  v2 = *(_WORD *)(a1 + 112) - 1;
  if ( v2 >= 0x10u )
  {
    if ( (unsigned __int8)v2 == v2 )
    {
      sub_1400347C0(a1, 136);
      sub_1400344E0(a1, v2);
    }
    else
    {
      sub_1400347C0(a1, 137);
      sub_1400343E0(a1, v2);
    }
    return 0;
  }
  else
  {
    sub_1400347C0(a1, v2 + 64);
    return 0;
  }
}
