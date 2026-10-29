/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F3A8
// Address: 0x000000000005F3A8

//----- (000000000005F3A8) ----------------------------------------------------
__int64 __fastcall sub_5F3A8(__int64 a1)
{
  int v1; // w8
  __int64 v3; // x20
  __int64 v5; // x8
  _BYTE *v6; // x0

  v1 = *(unsigned __int8 *)(a1 + 212);
  if ( v1 == 168 || v1 == 191 )
    return 0;
  v3 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -65;
  v5 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(_BYTE **)v3;
  }
  else
  {
    v6 = qvector_reserve((pthread_mutex_t *)v3, *(void **)v3, v5 + 1, 1u);
    v5 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = v6;
  }
  v6[v5] = -65;
  ++*(_QWORD *)(v3 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
