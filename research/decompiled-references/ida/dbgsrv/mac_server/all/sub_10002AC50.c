/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002AC50
// Address: 0x000000010002AC50

//----- (000000010002AC50) ----------------------------------------------------
__int64 __fastcall sub_10002AC50(__int64 a1)
{
  _DWORD *v1; // r14
  _QWORD *v2; // r15
  size_t v3; // r12
  void *v4; // rax
  void *v5; // rax
  __int64 v6; // rcx

  v1 = operator new(0x20u);
  v1[6] = 0;
  *v1 = 1;
  v2 = operator new(0x18u);
  *(_OWORD *)v2 = 0;
  v2[2] = 0;
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a1 + 48));
    *v2 = v4;
    v2[2] = v3;
    memcpy(v4, *(const void **)(a1 + 40), v3);
    v2[1] = v3;
  }
  *((_QWORD *)v1 + 2) = v2;
  v5 = *(void **)(a1 + 344);
  v6 = *(_QWORD *)(a1 + 352);
  if ( *(_QWORD *)(a1 + 360) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve(a1 + 344, v5, v6 + 1, 8u);
    *(_QWORD *)(a1 + 344) = v5;
    v6 = *(_QWORD *)(a1 + 352);
  }
  *((_QWORD *)v5 + v6) = v1;
  ++*(_QWORD *)(a1 + 352);
  return 0;
}
