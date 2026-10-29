/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2FBC
// Address: 0x00000000000A2FBC

//----- (00000000000A2FBC) ----------------------------------------------------
void __fastcall sub_A2FBC(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  if ( (*a2 & 1) != 0 )
  {
    --*a2;
    *a3 = 2;
  }
}
