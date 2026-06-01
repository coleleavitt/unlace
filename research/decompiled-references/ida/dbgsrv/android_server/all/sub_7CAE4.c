/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CAE4
// Address: 0x000000000007CAE4

//----- (000000000007CAE4) ----------------------------------------------------
unsigned __int64 __fastcall sub_7CAE4(__int64 a1, __int64 a2)
{
  __int64 v4; // x20
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x20
  _BYTE *v8; // x0

  v4 = qgetline(a1, *(FILE **)(a2 + 272));
  if ( v4 >= 1
    && *(_QWORD *)(a1 + 8) >= 4u
    && !strncmp(*(const char **)a1, byte_104D41, 3u)
    && qftell(*(FILE **)(a2 + 272)) <= v4 + 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v5 - 1;
    if ( v5 >= 2 )
    {
      if ( v6 < 4 )
      {
        v7 = 0;
      }
      else
      {
        v7 = v5 - 4;
        memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 3LL), v5 - 4);
      }
      if ( *(_QWORD *)(a1 + 16) >= v7 + 1 )
      {
        v8 = *(_BYTE **)a1;
      }
      else
      {
        v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v7 + 1, 1u);
        *(_QWORD *)a1 = v8;
      }
      *(_QWORD *)(a1 + 8) = v7 + 1;
      v8[v7] = 0;
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v5 - 1;
    }
    if ( v5 )
      return v6;
    else
      return 0;
  }
  return v4;
}
