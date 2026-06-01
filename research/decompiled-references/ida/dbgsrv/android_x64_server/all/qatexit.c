/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qatexit
// Address: 0x00000000000C3570

//----- (00000000000C3570) ----------------------------------------------------
bool __fastcall qatexit(__int64 a1)
{
  pthread_mutex_t *v2; // r14
  _QWORD *v3; // r15
  __int64 v4; // rdx
  char *v5; // rax
  __int64 v6; // rdi
  char *v7; // rcx
  unsigned __int64 v8; // rdx
  char *v9; // rax

  v2 = (pthread_mutex_t *)qword_158B38;
  if ( !qword_158B38 )
  {
    v2 = qmutex_create();
    qword_158B38 = (__int64)v2;
    if ( !v2 )
    {
      if ( !(_BYTE)under_debugger )
        interr(547);
      BUG();
    }
  }
  qmutex_lock(v2);
  v3 = qword_158B48;
  if ( !qword_158B48 )
  {
    v3 = qalloc_or_throw(24);
    *(_OWORD *)v3 = 0;
    v3[2] = 0;
    qword_158B48 = v3;
  }
  v4 = v3[1];
  v5 = (char *)(*v3 + 8 * v4);
  v6 = 8 * v4;
  v7 = (char *)*v3;
  if ( 8 * v4 )
  {
    v7 = (char *)*v3;
    while ( *(_QWORD *)v7 != a1 )
    {
      v7 += 8;
      v6 -= 8;
      if ( !v6 )
        goto LABEL_11;
    }
  }
  if ( v7 == v5 )
  {
LABEL_11:
    v8 = v4 + 1;
    if ( v3[2] < v8 )
    {
      v9 = (char *)qvector_reserve((__int64)v3, (char *)*v3, v8, 8u);
      *v3 = v9;
      v5 = &v9[8 * v3[1]];
    }
    *(_QWORD *)v5 = a1;
    ++v3[1];
  }
  return qmutex_unlock(v2);
}
// 158B38: using guessed type __int64 qword_158B38;
// 158B40: using guessed type __int64 under_debugger;
