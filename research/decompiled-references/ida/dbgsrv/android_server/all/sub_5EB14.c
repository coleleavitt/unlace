/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EB14
// Address: 0x000000000005EB14

//----- (000000000005EB14) ----------------------------------------------------
_BYTE *__fastcall sub_5EB14(__int64 a1, __int16 a2)
{
  __int64 v2; // x21
  __int64 v5; // x8
  _BYTE *v6; // x0
  __int64 v7; // x21
  __int64 v8; // x8
  _BYTE *result; // x0

  v2 = *(_QWORD *)(a1 + 200);
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(_BYTE **)v2;
  }
  else
  {
    v6 = qvector_reserve(*(pthread_mutex_t **)(a1 + 200), *(void **)v2, v5 + 1, 1u);
    v5 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)v2 = v6;
  }
  v6[v5] = a2;
  ++*(_QWORD *)(v2 + 8);
  v7 = *(_QWORD *)(a1 + 200);
  ++*(_DWORD *)(a1 + 208);
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
  {
    result = *(_BYTE **)v7;
  }
  else
  {
    result = qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v8 + 1, 1u);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)v7 = result;
  }
  result[v8] = HIBYTE(a2);
  ++*(_QWORD *)(v7 + 8);
  ++*(_DWORD *)(a1 + 208);
  return result;
}
