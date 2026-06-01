/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: search_path
// Address: 0x00000000000B6E68

//----- (00000000000B6E68) ----------------------------------------------------
__int64 __fastcall search_path(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int8 *a3, char a4)
{
  unsigned int v8; // w19
  char *i; // x2
  void *v11; // x0
  void *ptr; // [xsp+0h] [xbp-1060h] BYREF
  __int64 v13; // [xsp+8h] [xbp-1058h]
  __int64 v14; // [xsp+10h] [xbp-1050h]
  const char *v15[513]; // [xsp+18h] [xbp-1048h] BYREF

  v15[512] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 && *a3 )
  {
    if ( (qisabspath(a3) & 1) == 0 )
    {
      ptr = nullptr;
      v13 = 0;
      v14 = 0;
      if ( (qgetenv("PATH", (__int64)&ptr) & 1) != 0 )
      {
        for ( i = (char *)qstrtok((char *)ptr, ":", v15); i; i = (char *)qstrtok(nullptr, ":", v15) )
        {
          if ( *i )
          {
            qmakepath((size_t)a1, a2, i, a3, 0);
            if ( qfileexist((const char *)a1) )
              goto LABEL_15;
          }
        }
      }
      if ( (a4 & 1) != 0
        && (qgetcwd((char *)v15, 0x1000u), qmakepath((size_t)a1, a2, (char *)v15, a3, 0), qfileexist((const char *)a1)) )
      {
LABEL_15:
        v8 = 1;
        v11 = ptr;
        if ( !ptr )
          return v8;
      }
      else
      {
        v8 = 0;
        v11 = ptr;
        if ( !ptr )
          return v8;
      }
      v13 = 0;
      qfree(v11);
      ptr = nullptr;
      v14 = 0;
      return v8;
    }
    qstrncpy(a1, (char *)a3, a2);
    return 1;
  }
  else
  {
    return 0;
  }
}
