/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CC40
// Address: 0x000000010005CC40

//----- (000000010005CC40) ----------------------------------------------------
void __fastcall sub_10005CC40(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  if ( (*a2 & 1) != 0 )
  {
    --*a2;
    *a3 = 2;
  }
}
