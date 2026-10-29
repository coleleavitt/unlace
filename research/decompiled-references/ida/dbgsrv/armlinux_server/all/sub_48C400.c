/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C400
// Address: 0x000000000048C400

//----- (000000000048C400) ----------------------------------------------------
__int64 __fastcall sub_48C400(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_4871C0(*(FILE **)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
