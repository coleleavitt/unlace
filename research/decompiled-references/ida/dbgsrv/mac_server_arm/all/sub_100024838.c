/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024838
// Address: 0x0000000100024838

//----- (0000000100024838) ----------------------------------------------------
__int64 __fastcall sub_100024838(__int64 a1)
{
  __int64 v1; // x8
  int v2; // w2

  v1 = *(_QWORD *)(a1 + 304);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 304) = v1 - 1;
  sub_100024730(a1, 172, v2);
  return 0;
}
