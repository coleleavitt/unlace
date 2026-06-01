/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F710
// Address: 0x000000000047F710

//----- (000000000047F710) ----------------------------------------------------
__int64 __fastcall sub_47F710(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_47A370(*(FILE **)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
