/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D9B8
// Address: 0x000000000007D9B8

//----- (000000000007D9B8) ----------------------------------------------------
__int64 __fastcall sub_7D9B8(__int64 a1, const char **a2)
{
  const char *v2; // x21
  char *v5; // x0
  const char *v6; // x24
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x23
  _BYTE *v10; // x0
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x22
  void *v13; // x1
  char *v14; // x8
  unsigned __int64 v15; // x21
  void *v16; // x0
  char *v17; // x0
  __int64 v18; // x8

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v5 = strchr(v2, 10);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = &v2[strlen(v2)];
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v6 - v2 + 1;
  *(_QWORD *)(a1 + 8) = 0;
  if ( v8 >= v9 )
  {
    v10 = *(_BYTE **)a1;
  }
  else
  {
    v10 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v6 - v2 + 1, 1u);
    *(_QWORD *)a1 = v10;
  }
  *(_QWORD *)(a1 + 8) = v9;
  v10[v6 - v2] = 0;
  memmove(*(void **)a1, v2, v6 - v2);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = v11 - 2;
  if ( v11 >= 2 )
  {
    v13 = *(void **)a1;
    v14 = (char *)(*(_QWORD *)a1 + v12);
    if ( *v14 == 10 )
    {
      v15 = v11 - 1;
      if ( (__int64)(v11 - 1) > 1 )
      {
        if ( *(_QWORD *)(a1 + 16) < v15 )
        {
          v17 = (char *)qvector_reserve((pthread_mutex_t *)a1, v13, v15, 1u);
          v14 = &v17[v12];
          *(_QWORD *)a1 = v17;
        }
        *(_QWORD *)(a1 + 8) = v15;
        *v14 = 0;
      }
      else if ( v13 )
      {
        v16 = *(void **)a1;
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v16);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
  }
  *a2 = v6;
  v18 = *(_QWORD *)(a1 + 8);
  if ( v18 )
    return v18 - 1;
  else
    return 0;
}
