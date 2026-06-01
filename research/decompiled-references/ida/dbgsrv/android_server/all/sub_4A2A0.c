/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2A0
// Address: 0x000000000004A2A0

//----- (000000000004A2A0) ----------------------------------------------------
__int64 __fastcall sub_4A2A0(__int64 a1, __int64 a2, char *s)
{
  __int64 v3; // x19
  size_t v5; // x0
  unsigned __int64 v6; // x22
  size_t v7; // x21
  void *v8; // x0

  if ( a2 != 14 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( s && (v5 = strlen(s)) != 0 )
  {
    v6 = v5 + 1;
    v7 = v5;
    if ( *(_QWORD *)(v3 + 16) >= v5 + 1 )
    {
      v8 = *(void **)v3;
    }
    else
    {
      v8 = qvector_reserve((pthread_mutex_t *)v3, *(void **)v3, v6, 1u);
      *(_QWORD *)v3 = v8;
    }
    *(_QWORD *)(v3 + 8) = v6;
    memmove(v8, s, v7);
    *(_BYTE *)(*(_QWORD *)v3 + v7) = 0;
  }
  else
  {
    *(_QWORD *)(v3 + 8) = 0;
  }
  return 1;
}
