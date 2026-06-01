/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85528
// Address: 0x0000000000085528

//----- (0000000000085528) ----------------------------------------------------
__int64 __fastcall sub_85528(pthread_mutex_t *a1, __int64 a2)
{
  unsigned int v4; // w19
  pthread_mutex_t *v5; // x0
  __int64 v6; // x8
  pthread_mutex_t *v7; // x21
  __int64 align; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  char *v11; // x3
  int v12; // w2
  pthread_mutex_t *v13; // x0
  void *v14; // x0
  pthread_mutex_t ptr[206]; // [xsp+10h] [xbp-50B0h] BYREF
  __int64 v17; // [xsp+2050h] [xbp-3070h]
  int v18; // [xsp+205Ch] [xbp-3064h]
  pthread_mutex_t v19[102]; // [xsp+4068h] [xbp-1058h] BYREF
  __int64 v20; // [xsp+5068h] [xbp-58h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  if ( qfileexist((const char *)a1) )
    return 1;
  v19[0].__size[0] = 0;
  memset(ptr, 0, 24);
  while ( 1 )
  {
    v5 = (pthread_mutex_t *)qbasename(a1);
    v6 = *(&ptr[0].__align + 1);
    v7 = v5;
    if ( *(&ptr[0].__align + 2) >= (unsigned __int64)(*(&ptr[0].__align + 1) + 1) )
    {
      align = ptr[0].__align;
    }
    else
    {
      align = (__int64)qvector_reserve(ptr, (void *)ptr[0].__align, *(&ptr[0].__align + 1) + 1, 8u);
      v6 = *(&ptr[0].__align + 1);
      ptr[0].__align = align;
    }
    *(_QWORD *)(align + 8 * v6) = v7;
    v9 = ++*(&ptr[0].__align + 1);
    if ( v7 == a1 )
      break;
    v7[-1].__size[39] = 0;
    if ( qisdir((const char *)a1) )
    {
      qstrncpy(v19, (char *)a1, 4096);
      v9 = *(&ptr[0].__align + 1);
      break;
    }
  }
  if ( !v9 )
  {
LABEL_19:
    qstrncpy(a1, (char *)v19, a2);
    v4 = 1;
    v14 = (void *)ptr[0].__align;
    if ( !ptr[0].__align )
      return v4;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v10 = v9 - 1;
    v11 = *(char **)(ptr[0].__align + 8 * v10);
    *(&ptr[0].__align + 1) = v10;
    if ( v19[0].__size[0] )
      qmakepath((size_t)v19, 0x1000u, (char *)v19, v11, 0);
    else
      qstrncpy(v19, v11, 4096);
    v17 = 0;
    v18 = 0;
    v12 = *(&ptr[0].__align + 1) ? 0x4000 : 0;
    if ( (unsigned int)qfindfirst((__int64)v19, (__int64)&ptr[0].__list, v12) )
      break;
    v13 = (pthread_mutex_t *)qbasename(v19);
    qstrncpy(v13, &ptr[0].__size[28], (char *)&v20 - (char *)v13);
    qfindclose((__int64)&ptr[0].__list);
    v9 = *(&ptr[0].__align + 1);
    if ( !*(&ptr[0].__align + 1) )
      goto LABEL_19;
  }
  qfindclose((__int64)&ptr[0].__list);
  v4 = 0;
  v14 = (void *)ptr[0].__align;
  if ( ptr[0].__align )
  {
LABEL_22:
    *(&ptr[0].__align + 1) = 0;
    qfree(v14);
    ptr[0].__align = 0;
    *(&ptr[0].__align + 2) = 0;
  }
  return v4;
}
