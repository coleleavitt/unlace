/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFC00
// Address: 0x00000000004AFC00

//----- (00000000004AFC00) ----------------------------------------------------
unsigned __int64 __fastcall sub_4AFC00(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x1

  v3 = *(_QWORD *)(a1 + 8) - a2;
  if ( v3 > a3 )
    return a3;
  else
    return v3;
}
