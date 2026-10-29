/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x0000000100070328

//----- (0000000100070328) ----------------------------------------------------
char *__fastcall idadir(const char *a1)
{
  __int64 v2; // x3
  __int64 v3; // x4
  __int64 v4; // x5
  __int64 v5; // x6
  __int64 v6; // x7
  char **v7; // x19
  size_t v8; // x0
  size_t v9; // x20
  unsigned __int64 v10; // x21
  char *v11; // x0
  char *v12; // x19
  void *v14; // [xsp+10h] [xbp-450h] BYREF
  __int64 v15; // [xsp+18h] [xbp-448h]
  __int64 v16; // [xsp+20h] [xbp-440h]
  pthread_mutex_t *v17; // [xsp+28h] [xbp-438h] BYREF
  Dl_info __src; // [xsp+30h] [xbp-430h] BYREF

  sub_1000756E0(&v17);
  if ( byte_1000A5B50 )
    goto LABEL_13;
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  if ( byte_1000A58F0 != 1 )
    goto LABEL_8;
  if ( (qgetenv("IDADIR", &v14) & 1) == 0 )
  {
    if ( (byte_1000A58F0 & 1) != 0 )
    {
      memset(&__src, 0, sizeof(__src));
      if ( dladdr(idadir, &__src) )
      {
        qstrncpy(&byte_1000A5B50, (unsigned __int8 *)__src.dli_fname, 1024);
        goto LABEL_9;
      }
    }
LABEL_8:
    LODWORD(__src.dli_fname) = 1024;
    _NSGetExecutablePath(&byte_1000A5B50, (uint32_t *)&__src);
LABEL_9:
    if ( !qisdir(&byte_1000A5B50) )
      qdirname(&byte_1000A5B50, 0x400u, &byte_1000A5B50);
    goto LABEL_11;
  }
  qstrncpy(&byte_1000A5B50, (unsigned __int8 *)v14, 1024);
LABEL_11:
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
LABEL_13:
  if ( a1 && *a1 )
  {
    qmakepath((char *)&__src, 1024, &byte_1000A5B50, v2, v3, v4, v5, v6, a1);
    v7 = (char **)sub_10006C108();
    v8 = strlen((const char *)&__src);
    if ( v8 )
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = *v7;
      if ( (unsigned __int64)v7[2] < v10 )
      {
        v11 = (char *)qvector_reserve(v7, *v7, v10, 1u);
        *v7 = v11;
      }
      v7[1] = (char *)v10;
      memmove(v11, &__src, v9);
      (*v7)[v9] = 0;
    }
    else
    {
      v7[1] = nullptr;
    }
    v12 = *v7;
  }
  else
  {
    v12 = &byte_1000A5B50;
  }
  qmutex_unlock(v17);
  return v12;
}
// 100070460: variable 'v2' is possibly undefined
// 100070460: variable 'v3' is possibly undefined
// 100070460: variable 'v4' is possibly undefined
// 100070460: variable 'v5' is possibly undefined
// 100070460: variable 'v6' is possibly undefined
// 1000A58F0: using guessed type char byte_1000A58F0;
// 1000A5B50: using guessed type char byte_1000A5B50;
