/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B770
// Address: 0x000000000043B770

//----- (000000000043B770) ----------------------------------------------------
__int64 __fastcall sub_43B770(const char *a1, int a2)
{
  pthread_mutex_t *v4; // x24
  __int64 *v5; // x19
  __int64 v6; // x22
  __int64 v7; // x20
  const char *v8; // x1

  if ( !a1 )
    return 0;
  v4 = (pthread_mutex_t *)qword_522180;
  sub_494720((pthread_mutex_t *)qword_522180);
  if ( a2 == 2 )
  {
    v7 = 0;
    if ( *(_QWORD *)a1 < (unsigned __int64)qword_522170 )
    {
      v7 = *(_QWORD *)(qword_522168 + 8LL * *(_QWORD *)a1);
      if ( v7 )
        ++*(_DWORD *)(v7 + 12);
    }
  }
  else
  {
    v5 = (__int64 *)qword_522168;
    v6 = qword_522168 + 8 * qword_522170;
    if ( qword_522168 == v6 )
    {
LABEL_10:
      v7 = 0;
    }
    else
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *(const char **)(v7 + 24);
          if ( a2 )
            v8 = *(const char **)(v7 + 16);
          if ( v8 && !strcasecmp(a1, v8) )
            break;
        }
        if ( ++v5 == (__int64 *)v6 )
          goto LABEL_10;
      }
      ++*(_DWORD *)(v7 + 12);
    }
  }
  sub_494760(v4);
  return v7;
}
// 522168: using guessed type __int64 qword_522168;
// 522170: using guessed type __int64 qword_522170;
// 522180: using guessed type __int64 qword_522180;
