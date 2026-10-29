/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F9E0
// Address: 0x000000014002F9E0

//----- (000000014002F9E0) ----------------------------------------------------
__int64 __fastcall sub_14002F9E0(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 296) = v1 - 1;
  return sub_140032A80(a1, 172, v2);
}
