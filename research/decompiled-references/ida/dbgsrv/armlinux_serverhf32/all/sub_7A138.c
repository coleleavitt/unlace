/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A138
// Address: 0x0007A138

//----- (0007A138) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_7A138(int a1)
{
  pthread_mutex_t *v2; // r5
  pthread_t v3; // r0

  v2 = *(pthread_mutex_t **)(a1 + 28);
  sub_7A100(v2);
  if ( !*(_BYTE *)(a1 + 164) )
  {
    v3 = sub_79FC0((void *(*)(void *))sub_7A564, (void *)a1);
    *(_DWORD *)(a1 + 32) = v3;
    if ( !v3 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(1258);
    }
    *(_BYTE *)(a1 + 164) = 1;
    pthread_sigmask(1, (const __sigset_t *)(a1 + 36), nullptr);
  }
  return sub_7A128(v2);
}
// D5C00: using guessed type char under_debugger;
