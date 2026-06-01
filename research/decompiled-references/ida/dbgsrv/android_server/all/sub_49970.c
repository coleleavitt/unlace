/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49970
// Address: 0x0000000000049970

//----- (0000000000049970) ----------------------------------------------------
__int64 __fastcall sub_49970(__int64 a1, char *s)
{
  size_t v4; // x0
  unsigned __int64 v5; // x22
  size_t v6; // x21
  void **v7; // x23
  void *v8; // x0

  if ( s && (v4 = strlen(s)) != 0 )
  {
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void **)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) >= v4 + 1 )
    {
      v8 = *v7;
    }
    else
    {
      v8 = qvector_reserve((pthread_mutex_t *)(a1 + 16), *v7, v5, 1u);
      *v7 = v8;
    }
    *(_QWORD *)(a1 + 24) = v5;
    memmove(v8, s, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0;
  }
  return 2;
}
