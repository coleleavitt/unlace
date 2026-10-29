/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A7D8
// Address: 0x000000000044A7D8

//----- (000000000044A7D8) ----------------------------------------------------
void __fastcall sub_44A7D8(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  char *v4; // x0
  __int64 v5; // x21
  __int64 i; // x19
  __int64 *v7; // x0
  pthread_mutex_t *v8; // x19
  __int64 v9; // x1
  int v10; // w0

  if ( *(_BYTE *)(a1 + 145) )
  {
    v8 = (pthread_mutex_t *)qword_522288;
    sub_494720((pthread_mutex_t *)qword_522288);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_DWORD *)(v9 + 120) - 1;
    *(_DWORD *)(v9 + 120) = v10;
    if ( !v10 && off_520160 )
      off_520160();
    sub_494760(v8);
  }
  v2 = *(void **)(a1 + 72);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v3);
  }
  v4 = *(char **)(a1 + 24);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)&v4[32 * i];
        sub_448310(v7);
        v4 = *(char **)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v4);
  }
}
// 520160: using guessed type __int64 (*off_520160)();
// 522288: using guessed type __int64 qword_522288;
