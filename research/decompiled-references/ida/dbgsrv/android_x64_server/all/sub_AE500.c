/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE500
// Address: 0x00000000000AE500

//----- (00000000000AE500) ----------------------------------------------------
void __fastcall sub_AE500(__int64 a1, unsigned int a2)
{
  pthread_mutex_t *v2; // r14
  char *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 i; // rbx

  v2 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v3 = *(char **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  qmutex_unlock(v2);
  v5 = 8 * v4;
  if ( v5 )
  {
    for ( i = 0; i != v5; i += 8 )
      (***(void (__fastcall ****)(_QWORD, _QWORD))&v3[i])(*(_QWORD *)&v3[i], a2);
  }
  if ( v3 )
    qfree(v3);
}
