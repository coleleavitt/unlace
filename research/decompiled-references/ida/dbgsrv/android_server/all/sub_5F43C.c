/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F43C
// Address: 0x000000000005F43C

//----- (000000000005F43C) ----------------------------------------------------
__int64 __fastcall sub_5F43C(__int64 a1)
{
  __int64 v2; // x20
  __int64 v4; // x8
  _BYTE *v5; // x0

  if ( (*(unsigned __int8 *)(a1 + 212) | 2) == 0xD2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -48;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    v5 = *(_BYTE **)v2;
  }
  else
  {
    v5 = qvector_reserve((pthread_mutex_t *)v2, *(void **)v2, v4 + 1, 1u);
    v4 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)v2 = v5;
  }
  v5[v4] = -48;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
