/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A3D0
// Address: 0x000000000042A3D0

//----- (000000000042A3D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_42A3D0(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 *a4, __int64 a5)
{
  unsigned __int64 v7; // x4

  v7 = a4[7];
  if ( !v7 )
    v7 = 1;
  *a3 = v7;
  *a2 = a4[4] / v7;
  return sub_42A2D8(*(_QWORD *)(a1 + 472), a2, *a3, a5, a4[3], -1);
}
