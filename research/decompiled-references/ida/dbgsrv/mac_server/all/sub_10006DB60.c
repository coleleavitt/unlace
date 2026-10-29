/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006DB60
// Address: 0x000000010006DB60

//----- (000000010006DB60) ----------------------------------------------------
__int64 __fastcall sub_10006DB60(__int64 a1, unsigned int a2)
{
  pthread_mutex_t *v2; // r12
  char *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r15
  __int64 i; // r12
  _QWORD v11[5]; // [rsp+0h] [rbp-50h] BYREF

  memset(&v11[2], 0, 24);
  v2 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v3 = *(char **)(a1 + 8);
  v11[2] = v3;
  *(__m128i *)v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(_OWORD *)&v11[3] = *(_OWORD *)v11;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  qmutex_unlock(v2);
  v8 = 8 * _mm_load_si128((const __m128i *)v11).u64[0];
  if ( v8 )
  {
    for ( i = 0; i != v8; i += 8 )
      (***(void (__fastcall ****)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&v3[i])(
        *(_QWORD *)&v3[i],
        a2,
        v4,
        v5,
        v6,
        v7,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4]);
  }
  if ( v3 )
    qfree(v3);
  return __stack_chk_guard;
}
// 10006DBF9: variable 'v4' is possibly undefined
// 10006DBF9: variable 'v5' is possibly undefined
// 10006DBF9: variable 'v6' is possibly undefined
// 10006DBF9: variable 'v7' is possibly undefined
