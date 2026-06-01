/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B70
// Address: 0x0000000000080B70

//----- (0000000000080B70) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_80B70(
        __int64 a1,
        pthread_mutex_t *a2,
        unsigned __int64 a3,
        unsigned __int8 *a4,
        char a5,
        char a6)
{
  int v9; // w27
  pthread_mutex_t *v13; // x25
  char *v15; // x2
  char *v16; // x0
  int v17; // w8
  int v18; // w9
  int v19; // w8
  __int64 v20; // x28
  int v21; // w29
  char *v22; // x2
  char *v23; // x0
  const char *v24; // x22
  __int128 *v25; // x0
  const char *v26; // x0
  char v27[4096]; // [xsp+8h] [xbp-1068h] BYREF
  __int64 v28; // [xsp+1008h] [xbp-68h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = *(_DWORD *)(a1 + 340);
  if ( (qisabspath(a4) & 1) == 0 )
  {
    v13 = nullptr;
    if ( a5 != 34 || (a6 & 1) != 0 )
      goto LABEL_30;
    v15 = *(char **)(a1 + 280);
    if ( v15 )
      qdirname(v27, 0x1000u, v15);
    else
      qgetcwd(v27, 0x1000u);
    v16 = qmakepath((size_t)a2, a3, v27, a4, 0);
    v13 = (pthread_mutex_t *)v16;
    if ( (v9 & 4) != 0 )
    {
      if ( (sub_85528(a2, a3) & 1) != 0 )
        goto LABEL_17;
    }
    else if ( qfileexist(v16) )
    {
LABEL_17:
      if ( !v13 )
      {
        v17 = *(_DWORD *)(a1 + 256);
        v18 = v17 - 1;
        if ( ((v17 - 1) & 0x80000000) == 0 )
        {
          v19 = v17 - 2;
          v20 = 40LL * v18;
          while ( 1 )
          {
            v21 = v19;
            v22 = *(char **)(*(_QWORD *)(a1 + 248) + v20);
            if ( v22 )
              qdirname(v27, 0x1000u, v22);
            else
              qgetcwd(v27, 0x1000u);
            v23 = qmakepath((size_t)a2, a3, v27, a4, 0);
            v13 = (pthread_mutex_t *)v23;
            if ( (v9 & 4) == 0 )
              break;
            if ( (sub_85528(a2, a3) & 1) == 0 )
              goto LABEL_27;
LABEL_28:
            if ( !v13 )
            {
              v19 = v21 - 1;
              v20 -= 40;
              if ( (v21 & 0x80000000) == 0 )
                continue;
            }
            goto LABEL_30;
          }
          if ( qfileexist(v23) )
            goto LABEL_28;
LABEL_27:
          v13 = nullptr;
          goto LABEL_28;
        }
      }
LABEL_30:
      if ( (a6 & 1) != 0 )
      {
        v24 = v27;
        if ( (qdirname(v27, 0x1000u, *(char **)(a1 + 280)) & 1) == 0 )
          v24 = nullptr;
      }
      else
      {
        if ( a5 == 34 && v13 )
          return v13;
        v24 = nullptr;
      }
      v25 = off_164A88();
      v26 = sub_85344(v25, (size_t)a2, a3, (__int64)a4, v24, (v9 & 4) != 0);
      if ( v26 )
        return (pthread_mutex_t *)v26;
      return v13;
    }
    v13 = nullptr;
    goto LABEL_17;
  }
  v13 = qstrncpy(a2, (char *)a4, a3);
  if ( (v9 & 4) == 0 )
    return v13;
  if ( (sub_85528(a2, a3) & 1) != 0 )
    return v13;
  else
    return nullptr;
}
// 164A88: using guessed type __int128 *(*off_164A88)();
