/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F324
// Address: 0x000000000005F324

//----- (000000000005F324) ----------------------------------------------------
__int64 __fastcall sub_5F324(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0

  if ( *(unsigned __int8 *)(a1 + 212) != 211 )
  {
    v1 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -47;
    v3 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v3 + 1) )
    {
      v4 = *(_BYTE **)v1;
    }
    else
    {
      v4 = qvector_reserve((pthread_mutex_t *)v1, *(void **)v1, v3 + 1, 1u);
      v3 = *(_QWORD *)(v1 + 8);
      *(_QWORD *)v1 = v4;
    }
    v4[v3] = -47;
    ++*(_QWORD *)(v1 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return 0;
}
