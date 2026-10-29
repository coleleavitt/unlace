/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060A20
// Address: 0x0000000100060A20

//----- (0000000100060A20) ----------------------------------------------------
void __fastcall sub_100060A20(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  if ( (*a2 & 1) != 0 )
  {
    --*a2;
    *a3 = 2;
  }
}
