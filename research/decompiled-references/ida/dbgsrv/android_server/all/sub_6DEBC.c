/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DEBC
// Address: 0x000000000006DEBC

//----- (000000000006DEBC) ----------------------------------------------------
__int64 __fastcall sub_6DEBC(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9

  v2 = *((int *)a1 + 2);
  if ( (v2 & 0x80000000) != 0 )
    return sub_6DF20(a2, ~(_DWORD)v2);
  v3 = *a1;
  if ( !*a1 )
    return 0;
  if ( *(_DWORD *)v3 != 289621065 )
    return 0;
  if ( *(_QWORD *)(v3 + 32) <= v2 )
    return 0;
  return *(_QWORD *)(v3 + 24) + 32 * v2;
}
