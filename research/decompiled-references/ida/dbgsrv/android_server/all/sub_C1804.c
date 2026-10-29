/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1804
// Address: 0x00000000000C1804

//----- (00000000000C1804) ----------------------------------------------------
void __fastcall sub_C1804(pthread_mutex_t *a1, struct __pthread_internal_list *a2)
{
  pthread_mutex_t *v2; // x19
  struct __pthread_internal_list *v3; // x22
  struct __pthread_internal_list *prev; // x20
  _DWORD *v5; // x0
  struct __pthread_internal_list *v6; // x8
  int v7; // w24
  _DWORD *v8; // x21
  sem_t *p_next; // x22
  struct timespec abstime; // [xsp+8h] [xbp-58h] BYREF
  __int64 v11; // [xsp+18h] [xbp-48h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  prev = a1->__list.__prev;
  if ( &a1->__align + 3 == (__int64 *)prev )
  {
LABEL_5:
    if ( under_debugger )
      goto LABEL_18;
    a1 = interr(1209);
  }
  else
  {
    v2 = a1;
    v3 = a2;
    while ( &prev[1] != a2 )
    {
      prev = prev->__prev;
      if ( &a1->__align + 3 == (__int64 *)prev )
        goto LABEL_5;
    }
  }
  v5 = (_DWORD *)__errno(a1);
  v6 = v3[1].__prev;
  v7 = *v5;
  v8 = v5;
  if ( v6 )
  {
    p_next = (sem_t *)&v6[1].__next;
    if ( v6->__next > (struct __pthread_internal_list *)((char *)&dword_0 + 1) )
      p_next = (sem_t *)p_next->__align;
    if ( sub_BEE14(&abstime) )
    {
      if ( abstime.tv_nsec >= 1000000000 )
      {
        abstime.tv_nsec -= 1000000000LL;
        ++abstime.tv_sec;
      }
      while ( sem_timedwait(p_next, &abstime) )
      {
        if ( *v8 != 4 )
          goto LABEL_15;
      }
      if ( !under_debugger )
        interr(1158);
LABEL_18:
      __break(1u);
    }
  }
LABEL_15:
  prev->__next->__prev = prev->__prev;
  prev->__prev->__next = prev->__next;
  qsem_free((__int64)prev[2].__prev);
  qfree(prev);
  --v2[1].__align;
  *v8 = v7;
}
// C1870: variable 'v3' is possibly undefined
// C190C: variable 'v2' is possibly undefined
// 0: using guessed type int dword_0;
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
