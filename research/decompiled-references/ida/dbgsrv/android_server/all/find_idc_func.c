/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_func
// Address: 0x000000000006B608

//----- (000000000006B608) ----------------------------------------------------
__int64 __fastcall find_idc_func(pthread_mutex_t *a1, const char *a2, int a3)
{
  pthread_mutex_t *v3; // x19
  size_t v7; // x0
  unsigned __int64 v8; // x25
  _UNKNOWN **v9; // x26
  size_t v10; // x24
  __int64 v11; // x8
  int v12; // w27
  const char *v13; // x23
  unsigned int v15; // w20
  size_t v17; // x0
  unsigned __int64 v18; // x22
  size_t v19; // x21
  void *align; // x0
  __int64 v21; // x8

  if ( !a2 )
    return 0;
  v3 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v7 = strlen(a2);
  v8 = qword_164A28;
  if ( qword_164A28 )
  {
    v9 = off_164A30;
    v10 = v7;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      v13 = (const char *)v9[5 * v11];
      if ( !strncmp(a2, v13, v10) && --a3 < 0 )
        break;
      v11 = v12;
      if ( v8 <= v12++ )
        goto LABEL_7;
    }
    if ( a1 )
    {
      if ( v13 )
      {
        v17 = strlen(v13);
        if ( v17 )
        {
          v18 = v17 + 1;
          v19 = v17;
          if ( *(&a1->__align + 2) >= v17 + 1 )
          {
            align = (void *)a1->__align;
          }
          else
          {
            align = qvector_reserve(a1, (void *)a1->__align, v18, 1u);
            a1->__align = (__int64)align;
          }
          *(&a1->__align + 1) = v18;
          memmove(align, v13, v19);
          v21 = a1->__align;
          v15 = 1;
          *(_BYTE *)(v21 + v19) = 0;
          goto LABEL_8;
        }
      }
      *(&a1->__align + 1) = 0;
    }
    v15 = 1;
  }
  else
  {
LABEL_7:
    v15 = 0;
  }
LABEL_8:
  qmutex_unlock(v3);
  return v15;
}
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 166AA8: using guessed type __int64 qword_166AA8;
