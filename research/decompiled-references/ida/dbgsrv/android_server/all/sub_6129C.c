/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6129C
// Address: 0x000000000006129C

//----- (000000000006129C) ----------------------------------------------------
__int64 __fastcall sub_6129C(__int64 a1)
{
  __int64 v1; // x9
  int v2; // w2

  v1 = *(_QWORD *)(a1 + 304);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * (v1 - 1));
  if ( v1 )
    *(_QWORD *)(a1 + 304) = v1 - 1;
  sub_61190(a1, 172, v2);
  return 0;
}
