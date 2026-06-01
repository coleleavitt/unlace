/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlread
// Address: 0x000000010007A290

//----- (000000010007A290) ----------------------------------------------------
size_t __fastcall qlread(__int64 a1, void *a2, signed __int64 a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfread(*(FILE **)(a1 + 8), a2, a3);
  return (size_t)sub_100079EE0(a1, a2, a3);
}
