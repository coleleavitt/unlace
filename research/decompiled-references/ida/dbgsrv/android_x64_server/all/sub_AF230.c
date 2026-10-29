/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF230
// Address: 0x00000000000AF230

//----- (00000000000AF230) ----------------------------------------------------
bool __fastcall sub_AF230(_QWORD *a1)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rdx
  char *i; // rdi
  char *v5; // rdx

  *a1 = &off_14F7C0;
  v2 = (pthread_mutex_t *)qword_156A78;
  qmutex_lock((pthread_mutex_t *)qword_156A78);
  v3 = 8LL * (_QWORD)*(&ptr + 1);
  i = (char *)ptr;
  if ( 8LL * (_QWORD)*(&ptr + 1) )
  {
    for ( i = (char *)ptr; *(_QWORD **)i != a1; i += 8 )
    {
      v3 -= 8;
      if ( !v3 )
        return qmutex_unlock(v2);
    }
  }
  v5 = (char *)ptr + 8 * (_QWORD)*(&ptr + 1);
  if ( i != v5 )
  {
    memmove(i, i + 8, (v5 - 8 - i) & 0xFFFFFFFFFFFFFFF8LL);
    *(&ptr + 1) = (char *)*(&ptr + 1) - 1;
  }
  return qmutex_unlock(v2);
}
// 14F7C0: using guessed type void (__fastcall __noreturn *off_14F7C0)();
// 156A78: using guessed type __int64 qword_156A78;
