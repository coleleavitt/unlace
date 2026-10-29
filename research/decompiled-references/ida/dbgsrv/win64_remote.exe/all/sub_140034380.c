/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034380
// Address: 0x0000000140034380

//----- (0000000140034380) ----------------------------------------------------
__int64 __fastcall sub_140034380(__int64 a1, char a2, unsigned __int16 a3)
{
  char v5; // si

  v5 = a3;
  if ( (unsigned __int8)a3 == a3 )
  {
    sub_1400347C0(a1, a2);
    return sub_1400344E0(a1, v5);
  }
  else
  {
    sub_1400347C0(a1, a2 + 1);
    return sub_1400343E0(a1, a3);
  }
}
