/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qatexit
// Address: 0x00000000000BE72C

//----- (00000000000BE72C) ----------------------------------------------------
pthread_mutex_t *__fastcall qatexit(__int64 a1)
{
  pthread_mutex_t *v1; // x19
  pthread_mutex_t *v3; // x0
  pthread_mutex_t *v4; // x21
  __int64 v5; // x9
  __int64 v6; // x10
  char *v7; // x8
  char *align; // x11
  char *v9; // x0
  __int64 v10; // x8
  __int64 *p_align; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  char v20; // [xsp+0h] [xbp-30h]

  v1 = (pthread_mutex_t *)qword_168DE8;
  if ( !qword_168DE8 )
  {
    v3 = qmutex_create();
    v1 = v3;
    qword_168DE8 = (__int64)v3;
    if ( !v3 )
    {
      if ( !under_debugger )
        v3 = interr(547);
      __break(1u);
      p_align = &v3->__align;
      qmutex_unlock(nullptr);
      Unwind_Resume(p_align, v13, v14, v15, v16, v17, v18, v19, v20);
    }
  }
  qmutex_lock(v1);
  v4 = (pthread_mutex_t *)qword_168DF8;
  if ( !qword_168DF8 )
  {
    v4 = (pthread_mutex_t *)qalloc_or_throw(24);
    *(&v4->__align + 1) = 0;
    *(&v4->__align + 2) = 0;
    v4->__align = 0;
    qword_168DF8 = (__int64)v4;
  }
  v5 = *(&v4->__align + 1);
  v6 = 8 * v5;
  v7 = (char *)(v4->__align + 8 * v5);
  align = (char *)v4->__align;
  if ( 8 * v5 )
  {
    align = (char *)v4->__align;
    while ( *(_QWORD *)align != a1 )
    {
      v6 -= 8;
      align += 8;
      if ( !v6 )
        goto LABEL_11;
    }
  }
  if ( align == v7 )
  {
LABEL_11:
    if ( *(&v4->__align + 2) < (unsigned __int64)(v5 + 1) )
    {
      v9 = (char *)qvector_reserve(v4, (void *)v4->__align, v5 + 1, 8u);
      v10 = *(&v4->__align + 1);
      v4->__align = (__int64)v9;
      v7 = &v9[8 * v10];
    }
    *(_QWORD *)v7 = a1;
    ++*(&v4->__align + 1);
  }
  return qmutex_unlock(v1);
}
// BE83C: variable 'v13' is possibly undefined
// BE83C: variable 'v14' is possibly undefined
// BE83C: variable 'v15' is possibly undefined
// BE83C: variable 'v16' is possibly undefined
// BE83C: variable 'v17' is possibly undefined
// BE83C: variable 'v18' is possibly undefined
// BE83C: variable 'v19' is possibly undefined
// BE83C: variable 'v20' is possibly undefined
// 167DD0: using guessed type __int64[512];
// 168DE8: using guessed type __int64 qword_168DE8;
// 168DF0: using guessed type char under_debugger;
// 168DF8: using guessed type __int64 qword_168DF8;
