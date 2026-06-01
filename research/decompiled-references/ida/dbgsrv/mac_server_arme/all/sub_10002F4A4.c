/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F4A4
// Address: 0x000000010002F4A4

//----- (000000010002F4A4) ----------------------------------------------------
char *__fastcall sub_10002F4A4(_QWORD *a1, const char *a2, __int64 a3)
{
  pthread_mutex_t *v6; // x19
  pthread_mutex_t *v7; // x24
  unsigned __int64 v8; // x25
  unsigned __int64 v9; // x8
  __int64 v10; // x26
  int v11; // w27
  char *v12; // x21
  const char *v13; // x0
  __int64 v14; // x9
  _QWORD *v15; // x25
  size_t v16; // x0
  size_t v17; // x24
  unsigned __int64 v18; // x26
  void *v19; // x0
  int v20; // w8
  _QWORD *v21; // x1
  __int64 v22; // x8

  if ( a2 )
  {
    v6 = (pthread_mutex_t *)qword_1000A57C0;
    qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
    v7 = (pthread_mutex_t *)qword_1000A57C0;
    qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
    v8 = a1[9];
    if ( v8 )
    {
      v9 = 0;
      v10 = a1[8];
      v11 = 1;
      while ( 1 )
      {
        v12 = *(char **)(v10 + 8 * v9);
        v13 = *((_QWORD *)v12 + 5) ? *((const char **)v12 + 4) : &byte_10007AE40;
        if ( !strcmp(v13, a2) )
          break;
        v9 = v11++;
        if ( v8 <= v9 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v12 = nullptr;
    }
    qmutex_unlock(v7);
    if ( v12 )
      goto LABEL_23;
    v12 = (char *)operator new(0x48u);
    *(_OWORD *)(v12 + 8) = 0u;
    v14 = a1[9];
    *(_QWORD *)v12 = v12 + 8;
    *((_QWORD *)v12 + 4) = 0;
    v15 = v12 + 32;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = v14;
    *(_OWORD *)(v12 + 40) = 0u;
    *((_QWORD *)v12 + 7) = -1;
    *((_DWORD *)v12 + 16) = -1;
    v16 = strlen(a2);
    if ( v16 )
    {
      v17 = v16;
      v18 = v16 + 1;
      if ( v16 == -1 )
      {
        v19 = nullptr;
      }
      else
      {
        v19 = qvector_reserve(v15, nullptr, v18, 1u);
        *v15 = v19;
      }
      *((_QWORD *)v12 + 5) = v18;
      memmove(v19, a2, v17);
      *(_BYTE *)(*((_QWORD *)v12 + 4) + v17) = 0;
      if ( a3 )
        goto LABEL_19;
    }
    else
    {
      *((_QWORD *)v12 + 5) = 0;
      if ( a3 )
      {
LABEL_19:
        v20 = *(_DWORD *)(a3 + 28);
        goto LABEL_20;
      }
    }
    v20 = 0;
LABEL_20:
    *((_DWORD *)v12 + 6) = v20;
    v21 = (_QWORD *)a1[8];
    v22 = a1[9];
    if ( a1[10] < (unsigned __int64)(v22 + 1) )
    {
      v21 = qvector_reserve(a1 + 8, v21, v22 + 1, 8u);
      a1[8] = v21;
      v22 = a1[9];
    }
    v21[v22] = v12;
    ++a1[9];
LABEL_23:
    qmutex_unlock(v6);
    return v12;
  }
  return nullptr;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
