/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idc_getattr
// Address: 0x000000000006AE08

//----- (000000000006AE08) ----------------------------------------------------
char *__fastcall set_idc_getattr(__int64 a1, const char *a2)
{
  pthread_mutex_t *v2; // x19
  int *v4; // x20
  unsigned __int8 v5; // w8
  _QWORD *v6; // x22
  __int64 v7; // x8
  __int64 v8; // x23
  __int64 v9; // x8
  const char *v10; // x0
  int v11; // w0
  unsigned __int64 v12; // x25
  _UNKNOWN **v13; // x24
  unsigned __int64 v14; // x26
  char *v15; // x20
  unsigned __int64 v16; // x8
  __int64 v17; // x8
  unsigned __int64 v18; // x8
  _QWORD *v20; // x0

  v2 = (pthread_mutex_t *)qword_166AA8;
  v4 = (int *)(a1 + 56);
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v5 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v5 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    v20 = operator new(0x80u);
    *(_QWORD *)((char *)v20 + 117) = 0;
    v20[14] = 0;
    *((_OWORD *)v20 + 5) = 0u;
    *((_OWORD *)v20 + 6) = 0u;
    *((_OWORD *)v20 + 3) = 0u;
    *((_OWORD *)v20 + 4) = 0u;
    *((_OWORD *)v20 + 1) = 0u;
    *((_OWORD *)v20 + 2) = 0u;
    *(_OWORD *)v20 = 0u;
    qword_166AE0 = (__int64)v20;
    _cxa_guard_release((__guard *)&byte_166AE8);
  }
  v6 = (_QWORD *)qword_166AE0;
  if ( !a2 )
  {
    LODWORD(v8) = -1;
LABEL_21:
    v16 = *v4;
    *v4 = v8;
    if ( (v16 & 0x80000000) != 0 )
    {
      if ( (_DWORD)v16 != -1 )
      {
        v18 = -(int)v16;
        if ( qword_164A28 > v18 )
        {
          v15 = (char *)off_164A30[5 * v18];
          goto LABEL_29;
        }
      }
    }
    else if ( v6[1] > v16 )
    {
      v17 = *(_QWORD *)(*v6 + 8 * v16);
      if ( *(_QWORD *)(v17 + 8) )
        v15 = *(char **)v17;
      else
        v15 = &byte_F154B;
      goto LABEL_29;
    }
    v15 = "";
    goto LABEL_29;
  }
  v7 = *(_QWORD *)(qword_166AE0 + 8);
  while ( 1 )
  {
    v8 = v7 - 1;
    if ( v7 - 1 < 0 )
      break;
    v9 = *(_QWORD *)(*v6 + 8 * v7 - 8);
    if ( *(_QWORD *)(v9 + 8) )
      v10 = *(const char **)v9;
    else
      v10 = &byte_F154B;
    v11 = strcmp(v10, a2);
    v7 = v8;
    if ( !v11 )
    {
      if ( (_DWORD)v8 != -1 )
        goto LABEL_19;
      break;
    }
  }
  v12 = qword_164A28;
  if ( !qword_164A28 )
    goto LABEL_20;
  v13 = off_164A30;
  v8 = 0;
  v14 = 0;
  while ( strcmp(*(const char **)((char *)v13 + v8), a2) )
  {
    ++v14;
    v8 += 40;
    if ( v14 >= v12 )
      goto LABEL_20;
  }
  if ( !(_UNKNOWN **)((char *)v13 + v8) || !*(_UNKNOWN **)((char *)v13 + v8 + 8) )
    goto LABEL_20;
  LODWORD(v8) = (int)v8 / -40;
LABEL_19:
  if ( (_DWORD)v8 != 0x7FFFFFFF )
    goto LABEL_21;
LABEL_20:
  v15 = nullptr;
LABEL_29:
  qmutex_unlock(v2);
  return v15;
}
// F154B: using guessed type char byte_F154B;
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
