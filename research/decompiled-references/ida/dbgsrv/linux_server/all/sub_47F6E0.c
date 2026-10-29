/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F6E0
// Address: 0x000000000047F6E0

//----- (000000000047F6E0) ----------------------------------------------------
size_t __fastcall sub_47F6E0(__int64 a1, void *a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_480BA0(*(FILE **)(a1 + 8), a2, a3);
  return sub_47F340(a1, a2, a3, a4, a5);
}
