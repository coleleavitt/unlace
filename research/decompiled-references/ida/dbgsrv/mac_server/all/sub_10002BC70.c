/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002BC70
// Address: 0x000000010002BC70

//----- (000000010002BC70) ----------------------------------------------------
__int64 __fastcall sub_10002BC70(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // rcx
  void *v3; // rax

  v1 = *(_DWORD *)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 256);
  v3 = *(void **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v2 + 1) )
  {
    v3 = qvector_reserve(a1 + 248, v3, v2 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v3;
    v2 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v3 + v2) = v1;
  ++*(_QWORD *)(a1 + 256);
  return 0;
}
