/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A550
// Address: 0x000000000006A550

//----- (000000000006A550) ----------------------------------------------------
char *__fastcall sub_6A550(_QWORD *a1, const char *a2, __int64 a3)
{
  pthread_mutex_t *v3; // x19
  pthread_mutex_t *v7; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x26
  __int64 v10; // x8
  int v11; // w27
  char *v12; // x21
  const char *v13; // x0
  char *v15; // x0
  __int64 v16; // x8
  pthread_mutex_t *v17; // x25
  size_t v18; // x0
  void *v19; // x1
  unsigned __int64 v20; // x26
  size_t v21; // x24
  int v22; // w8
  __int64 v23; // x8
  pthread_mutex_t *v24; // x0
  _QWORD *align; // x0

  if ( a2 )
  {
    v3 = (pthread_mutex_t *)qword_166AA8;
    qmutex_lock((pthread_mutex_t *)qword_166AA8);
    v7 = (pthread_mutex_t *)qword_166AA8;
    qmutex_lock((pthread_mutex_t *)qword_166AA8);
    v8 = a1[9];
    if ( v8 )
    {
      v9 = a1[8];
      v10 = 0;
      v11 = 1;
      while ( 1 )
      {
        v12 = *(char **)(v9 + 8 * v10);
        v13 = *((_QWORD *)v12 + 5) ? *((const char **)v12 + 4) : &byte_F154B;
        if ( !strcmp(v13, a2) )
          break;
        v10 = v11;
        if ( v8 <= v11++ )
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
    v15 = (char *)operator new(0x48u);
    v16 = a1[9];
    *((_QWORD *)v15 + 1) = 0;
    v12 = v15;
    *((_QWORD *)v15 + 2) = 0;
    *((_QWORD *)v15 + 5) = 0;
    *((_QWORD *)v15 + 6) = 0;
    *(_QWORD *)v15 = v15 + 8;
    *((_DWORD *)v15 + 6) = 0;
    *((_DWORD *)v15 + 7) = v16;
    *((_QWORD *)v15 + 4) = 0;
    v17 = (pthread_mutex_t *)(v15 + 32);
    *((_QWORD *)v15 + 7) = -1;
    *((_DWORD *)v15 + 16) = -1;
    v18 = strlen(a2);
    if ( v18 )
    {
      v19 = *((void **)v12 + 4);
      v20 = v18 + 1;
      v21 = v18;
      if ( *((_QWORD *)v12 + 6) < v18 + 1 )
      {
        v19 = qvector_reserve(v17, v19, v20, 1u);
        v17->__align = (__int64)v19;
      }
      *((_QWORD *)v12 + 5) = v20;
      memmove(v19, a2, v21);
      *(_BYTE *)(*((_QWORD *)v12 + 4) + v21) = 0;
      if ( a3 )
        goto LABEL_15;
    }
    else
    {
      *((_QWORD *)v12 + 5) = 0;
      if ( a3 )
      {
LABEL_15:
        v22 = *(_DWORD *)(a3 + 28);
LABEL_19:
        *((_DWORD *)v12 + 6) = v22;
        v23 = a1[9];
        v24 = (pthread_mutex_t *)(a1 + 8);
        if ( a1[10] >= (unsigned __int64)(v23 + 1) )
        {
          align = (_QWORD *)v24->__align;
        }
        else
        {
          align = qvector_reserve(v24, (void *)v24->__align, v23 + 1, 8u);
          v23 = a1[9];
          a1[8] = align;
        }
        align[v23] = v12;
        ++a1[9];
LABEL_23:
        qmutex_unlock(v3);
        return v12;
      }
    }
    v22 = 0;
    goto LABEL_19;
  }
  return nullptr;
}
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
