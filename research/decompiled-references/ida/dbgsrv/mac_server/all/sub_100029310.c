/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029310
// Address: 0x0000000100029310

//----- (0000000100029310) ----------------------------------------------------
__int64 __fastcall sub_100029310(__int64 a1)
{
  void *v1; // rax
  __int64 v2; // rcx
  void *v3; // rax
  __int64 v4; // rcx
  int v5; // r14d
  __int64 v6; // rcx
  _DWORD *v7; // rax

  v1 = *(void **)(a1 + 248);
  v2 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v2 + 1) )
  {
    v1 = qvector_reserve(a1 + 248, v1, v2 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v1;
    v2 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v1 + v2) = -1;
  ++*(_QWORD *)(a1 + 256);
  v3 = *(void **)(a1 + 272);
  v4 = *(_QWORD *)(a1 + 280);
  if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(a1 + 272, v3, v4 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v3;
    v4 = *(_QWORD *)(a1 + 280);
  }
  *((_DWORD *)v3 + v4) = -1;
  ++*(_QWORD *)(a1 + 280);
  v5 = *(_DWORD *)(a1 + 208);
  v6 = *(_QWORD *)(a1 + 304);
  v7 = *(_DWORD **)(a1 + 296);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v6 + 1) )
  {
    v7 = qvector_reserve(a1 + 296, *(void **)(a1 + 296), v6 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v7;
    v6 = *(_QWORD *)(a1 + 304);
  }
  v7[v6] = v5;
  ++*(_QWORD *)(a1 + 304);
  return 0;
}
