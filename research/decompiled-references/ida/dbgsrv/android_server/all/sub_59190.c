/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59190
// Address: 0x0000000000059190

//----- (0000000000059190) ----------------------------------------------------
__int64 __fastcall sub_59190(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // w8

  if ( a2 && *a2 == 36 && a2[1] && (a2[2] == 46 || !a2[2]) && (v2 = (unsigned __int8)a2[1] - 97, v2 <= 0x17) )
    return (0x88802Bu >> v2) & 1;
  else
    return 0;
}
