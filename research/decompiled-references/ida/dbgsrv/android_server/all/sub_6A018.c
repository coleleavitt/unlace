/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A018
// Address: 0x000000000006A018

//----- (000000000006A018) ----------------------------------------------------
__int64 __fastcall sub_6A018(__int64 a1, const char *a2)
{
  pthread_mutex_t *v2; // x21
  __int64 v5; // x8
  __int64 v6; // x23
  __int64 v7; // x22
  const char *v8; // x0
  __int64 v9; // x24
  pthread_mutex_t *v10; // x0
  _QWORD *v11; // x0
  _QWORD *align; // x21
  char *v13; // x22
  size_t v14; // x0
  void *v15; // x1
  unsigned __int64 v16; // x23
  size_t v17; // x20

  if ( !a2 )
    return 0;
  v2 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v5 = *(_QWORD *)(a1 + 96);
  if ( 56 * v5 )
  {
    v6 = 56 * v5;
    v7 = *(_QWORD *)(a1 + 88) + 24LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 - 16) ? *(const char **)(v7 - 24) : &byte_F154B;
      if ( !strcmp(v8, a2) )
        break;
      v6 -= 56;
      v7 += 56;
      if ( !v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v7 = 0;
  }
  qmutex_unlock(v2);
  if ( !v7 )
  {
    v9 = *(_QWORD *)(a1 + 96);
    v10 = (pthread_mutex_t *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) >= (unsigned __int64)(v9 + 1) )
    {
      align = (_QWORD *)v10->__align;
    }
    else
    {
      v11 = qvector_reserve(v10, *(void **)(a1 + 88), v9 + 1, 0x38u);
      v9 = *(_QWORD *)(a1 + 96);
      align = v11;
      *(_QWORD *)(a1 + 88) = v11;
    }
    v13 = (char *)&align[7 * v9];
    *(_QWORD *)v13 = 0;
    *((_QWORD *)v13 + 1) = 0;
    *((_QWORD *)v13 + 2) = 0;
    v13[24] = 2;
    *((_QWORD *)v13 + 4) = 0;
    *((_QWORD *)v13 + 5) = 0;
    *((_QWORD *)v13 + 6) = 0;
    ++*(_QWORD *)(a1 + 96);
    v14 = strlen(a2);
    if ( v14 )
    {
      v15 = *(void **)v13;
      v16 = v14 + 1;
      v17 = v14;
      if ( align[7 * v9 + 2] < v14 + 1 )
      {
        v15 = qvector_reserve((pthread_mutex_t *)&align[7 * v9], v15, v16, 1u);
        *(_QWORD *)v13 = v15;
      }
      align[7 * v9 + 1] = v16;
      memmove(v15, a2, v17);
      *(_BYTE *)(*(_QWORD *)v13 + v17) = 0;
    }
    else
    {
      align[7 * v9 + 1] = 0;
    }
    return (__int64)&align[7 * v9 + 3];
  }
  return v7;
}
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
