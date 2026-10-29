/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494788
// Address: 0x0000000000494788

//----- (0000000000494788) ----------------------------------------------------
bool __fastcall sub_494788(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  pthread_t v3; // x0

  v2 = *(pthread_mutex_t **)(a1 + 56);
  sub_494720(v2);
  if ( !*(_BYTE *)(a1 + 200) )
  {
    v3 = sub_494528((void *(*)(void *))sub_494DD0, (void *)a1);
    *(_QWORD *)(a1 + 64) = v3;
    if ( !v3 )
    {
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(1258);
    }
    *(_BYTE *)(a1 + 200) = 1;
    pthread_sigmask(1, (const __sigset_t *)(a1 + 72), nullptr);
  }
  return sub_494760(v2);
}
// 52451C: using guessed type char under_debugger;
