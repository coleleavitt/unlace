/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432BF0
// Address: 0x0000000000432BF0

//----- (0000000000432BF0) ----------------------------------------------------
__int64 __fastcall sub_432BF0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *(_QWORD *)(a1 + 304);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 304) = v1 - 1;
  sub_432AC0(a1, 172, v2);
  return 0;
}
