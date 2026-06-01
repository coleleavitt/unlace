/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439B10
// Address: 0x0000000000439B10

//----- (0000000000439B10) ----------------------------------------------------
__int64 __fastcall sub_439B10(char *a1, int a2, const void *a3, unsigned __int64 a4)
{
  pthread_mutex_t *v8; // x22
  __int64 *v9; // x25
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  unsigned __int64 v13; // x1
  char *v14; // x0
  unsigned int v15; // w19
  unsigned __int64 v17; // x3
  char v18; // [xsp+47h] [xbp-9h] BYREF

  v8 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v9 = (__int64 *)sub_43CF60();
  v10 = sub_43DEC8(v9, a1);
  if ( v10 == -1 )
  {
    v15 = 0;
  }
  else
  {
    v11 = *v9;
    v18 = 0;
    v12 = *(_QWORD *)(v11 + 8 * v10);
    v13 = *(_QWORD *)(v12 + 40);
    v14 = *(char **)(v12 + 32);
    if ( a4 < v13 )
    {
      *(_QWORD *)(v12 + 40) = a4;
    }
    else if ( a4 > v13 )
    {
      v17 = *(_QWORD *)(v12 + 48);
      if ( v14 <= &v18 && &v18 < &v14[v17] )
      {
        if ( a4 <= v17
          || (v14 = (char *)sub_491288(v12 + 32, *(void **)(v12 + 32), a4, 1u),
              *(_QWORD *)(v12 + 32) = v14,
              v13 = *(_QWORD *)(v12 + 40),
              a4 > v13) )
        {
          do
          {
            v14[v13++] = 0;
            v14 = *(char **)(v12 + 32);
          }
          while ( a4 > v13 );
          *(_QWORD *)(v12 + 40) = a4;
        }
        else
        {
          *(_QWORD *)(v12 + 40) = a4;
        }
      }
      else if ( a4 <= v17
             || (v14 = (char *)sub_491288(v12 + 32, *(void **)(v12 + 32), a4, 1u),
                 *(_QWORD *)(v12 + 32) = v14,
                 v13 = *(_QWORD *)(v12 + 40),
                 a4 > v13) )
      {
        do
        {
          v14[v13++] = 0;
          v14 = *(char **)(v12 + 32);
        }
        while ( a4 > v13 );
        *(_QWORD *)(v12 + 40) = a4;
      }
      else
      {
        *(_QWORD *)(v12 + 40) = a4;
      }
    }
    memcpy(v14, a3, a4);
    sub_43D3A8(v12 + 32);
    *(_DWORD *)(v12 + 24) = a2;
    *(_DWORD *)(v12 + 136) = 0;
    v15 = 1;
  }
  sub_494760(v8);
  return v15;
}
// 522288: using guessed type __int64 qword_522288;
