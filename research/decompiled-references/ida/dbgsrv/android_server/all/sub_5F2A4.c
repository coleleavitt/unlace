/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F2A4
// Address: 0x000000000005F2A4

//----- (000000000005F2A4) ----------------------------------------------------
__int64 __fastcall sub_5F2A4(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0

  if ( (sub_5F22C(a1) & 1) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -50;
    v3 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v3 + 1) )
    {
      v4 = *(_BYTE **)v2;
    }
    else
    {
      v4 = qvector_reserve((pthread_mutex_t *)v2, *(void **)v2, v3 + 1, 1u);
      v3 = *(_QWORD *)(v2 + 8);
      *(_QWORD *)v2 = v4;
    }
    v4[v3] = -50;
    ++*(_QWORD *)(v2 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return 0;
}
