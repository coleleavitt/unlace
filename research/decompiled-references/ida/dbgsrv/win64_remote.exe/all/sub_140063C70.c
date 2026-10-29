/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063C70
// Address: 0x0000000140063C70

//----- (0000000140063C70) ----------------------------------------------------
__int64 __fastcall sub_140063C70(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return sub_140064BE0(*(_QWORD *)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
