/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D190
// Address: 0x000000010002D190

//----- (000000010002D190) ----------------------------------------------------
__int64 __fastcall sub_10002D190(__int64 a1)
{
  void *v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v1 = *(void **)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 376);
  v3 = v2 + 1;
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v2 + 1) )
  {
    v1 = qvector_reserve(a1 + 368, v1, v3, 0x10u);
    *(_QWORD *)(a1 + 368) = v1;
    v2 = *(_QWORD *)(a1 + 376);
    v3 = v2 + 1;
  }
  *(_QWORD *)(a1 + 376) = v3;
  *((_DWORD *)v1 + 4 * v2) = *(_DWORD *)(a1 + 208);
  return 0;
}
