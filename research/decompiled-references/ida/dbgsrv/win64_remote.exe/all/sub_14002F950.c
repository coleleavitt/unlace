/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F950
// Address: 0x000000014002F950

//----- (000000014002F950) ----------------------------------------------------
__int64 __fastcall sub_14002F950(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // r8d

  v1 = *(_QWORD *)(a1 + 296);
  v3 = *(_QWORD *)(a1 + 288);
  v4 = *(unsigned int *)(v3 + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 296) = --v1;
  v5 = *(_DWORD *)(v3 + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 296) = v1 - 1;
  if ( (unsigned int)sub_140032A80(a1, 171, v5) )
    return 0xFFFFFFFFLL;
  if ( (_DWORD)v4 )
    sub_14002E390(*(_QWORD **)(a1 + 192), v4, *(_DWORD *)(a1 + 200) - v4 - 4);
  return 0;
}
