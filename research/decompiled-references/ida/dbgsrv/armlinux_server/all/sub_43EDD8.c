/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43EDD8
// Address: 0x000000000043EDD8

//----- (000000000043EDD8) ----------------------------------------------------
__int64 __fastcall sub_43EDD8(__int64 a1, const char *a2, int a3)
{
  pthread_mutex_t *v6; // x25
  size_t v7; // x23
  unsigned __int64 v8; // x22
  int v9; // w19
  _UNKNOWN **v10; // x24
  __int64 v11; // x0
  const char *v12; // x27
  unsigned int v13; // w19
  size_t v15; // x0
  size_t v16; // x20
  unsigned __int64 v17; // x19
  void *v18; // x0

  if ( a2 )
  {
    v6 = (pthread_mutex_t *)qword_522288;
    sub_494720((pthread_mutex_t *)qword_522288);
    v7 = strlen(a2);
    v8 = qword_520148;
    if ( qword_520148 )
    {
      v9 = 0;
      v10 = off_520150;
      v11 = 0;
      while ( 1 )
      {
        v12 = (const char *)v10[5 * v11];
        if ( !strncmp(a2, v12, v7) && --a3 < 0 )
          break;
        v11 = ++v9;
        if ( v9 >= v8 )
        {
          v13 = 0;
          goto LABEL_8;
        }
      }
      if ( a1 )
      {
        if ( v12 )
        {
          v15 = strlen(v12);
          v16 = v15;
          if ( v15 )
          {
            v17 = v15 + 1;
            v18 = *(void **)a1;
            if ( v17 > *(_QWORD *)(a1 + 16) )
            {
              v18 = sub_491288(a1, *(void **)a1, v17, 1u);
              *(_QWORD *)a1 = v18;
            }
            *(_QWORD *)(a1 + 8) = v17;
            v13 = 1;
            memmove(v18, v12, v16);
            *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
            goto LABEL_8;
          }
        }
        *(_QWORD *)(a1 + 8) = 0;
      }
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
LABEL_8:
    sub_494760(v6);
    return v13;
  }
  return 0;
}
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
// 522288: using guessed type __int64 qword_522288;
