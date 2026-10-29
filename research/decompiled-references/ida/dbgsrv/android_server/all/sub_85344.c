/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85344
// Address: 0x0000000000085344

//----- (0000000000085344) ----------------------------------------------------
const char *__fastcall sub_85344(_QWORD *a1, size_t a2, unsigned __int64 a3, __int64 a4, const char *a5, char a6)
{
  pthread_mutex_t *v9; // x19
  __int64 v13; // x26
  __int64 v14; // x27
  __int64 v15; // x8
  const char *v16; // x0
  pthread_mutex_t *v17; // x0
  const char *v18; // x25
  char v19; // w0
  __int64 v20; // x8
  __int64 v21; // x26
  _QWORD *v22; // x24
  pthread_mutex_t *v23; // x0
  char v24; // w0

  v9 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v13 = 24LL * a1[4];
  if ( v13 )
  {
    v14 = a1[3];
    do
    {
      v15 = *(_QWORD *)(v14 + 8);
      if ( a5 )
      {
        if ( v15 )
          v16 = *(const char **)v14;
        else
          v16 = &byte_F154B;
        if ( !strcasecmp(v16, a5) )
          a5 = nullptr;
      }
      else
      {
        if ( v15 )
          v17 = (pthread_mutex_t *)qmakepath(a2, a3, *(char **)v14, a4, 0);
        else
          v17 = (pthread_mutex_t *)qmakepath(a2, a3, &byte_F154B, a4, 0);
        v18 = (const char *)v17;
        if ( (a6 & 1) != 0 )
          v19 = sub_85528(v17, a3);
        else
          v19 = qfileexist((const char *)v17);
        if ( (v19 & 1) != 0 )
          goto LABEL_34;
        a5 = nullptr;
      }
      v13 -= 24;
      v14 += 24;
    }
    while ( v13 );
  }
  v20 = a1[1];
  if ( !v20 )
  {
    get_ida_subdirs((__int64)a1, "idc", 0);
    v20 = a1[1];
  }
  v21 = 24 * v20;
  if ( 24 * v20 )
  {
    v22 = (_QWORD *)(*a1 + 8LL);
    while ( 1 )
    {
      v23 = (pthread_mutex_t *)(*v22
                              ? qmakepath(a2, a3, (char *)*(v22 - 1), a4, 0)
                              : qmakepath(a2, a3, &byte_F154B, a4, 0));
      v18 = (const char *)v23;
      v24 = (a6 & 1) != 0 ? sub_85528(v23, a3) : qfileexist((const char *)v23);
      if ( (v24 & 1) != 0 )
        break;
      v21 -= 24;
      v22 += 3;
      if ( !v21 )
        goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    v18 = getsysfile(a2, a3, a4, nullptr);
  }
LABEL_34:
  qmutex_unlock(v9);
  return v18;
}
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
