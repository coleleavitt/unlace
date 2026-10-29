/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BB90
// Address: 0x000000000045BB90

//----- (000000000045BB90) ----------------------------------------------------
__int64 __fastcall sub_45BB90(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x23
  __int64 i; // x22
  _QWORD *v8; // x20
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x1
  __int64 (__fastcall *v12)(__int64, char **); // x3
  void *v13; // x0
  unsigned __int64 v14; // x23
  unsigned __int64 v15; // x20
  unsigned __int64 j; // x22
  __int64 v17; // x1
  void *v18; // x0
  unsigned __int64 v19; // x0
  __int64 k; // x23
  char *v21; // x1
  __int64 v22; // x3
  char *v23; // x24
  __int64 v24; // x4
  __int64 v25; // x0
  unsigned __int64 v26; // x25
  const void *v28; // x27
  void *v29; // x0

  v6 = a1[40];
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = (_QWORD *)(a1[39] + (i << 6));
      v9 = (void *)v8[5];
      if ( v9 )
      {
        v8[6] = 0;
        j__free(v9);
      }
      v10 = (void *)v8[1];
      if ( v10 )
      {
        v8[2] = 0;
        j__free(v10);
      }
    }
  }
  v11 = *a1;
  a1[40] = 0;
  v12 = *(__int64 (__fastcall **)(__int64, char **))(v11 + 24);
  if ( v12 == sub_45B938 )
  {
    v13 = (void *)a1[39];
    if ( !v13 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      if ( !v14 )
        return 1;
      v15 = 0;
      goto LABEL_12;
    }
    j__free(v13);
    a1[39] = 0;
    a1[41] = 0;
  }
  else
  {
    ((void (__fastcall *)(__int64 *, __int64 *, __int64))v12)(a1, a1 + 39, a3);
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = a1[40];
  if ( v14 )
  {
LABEL_12:
    for ( j = 0; j < v14; ++j )
    {
      v17 = *(_QWORD *)a2 + 32 * j;
      v18 = *(void **)(v17 + 8);
      if ( v18 )
      {
        *(_QWORD *)(v17 + 16) = 0;
        j__free(v18);
      }
    }
  }
  v19 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0;
  if ( v19 < v15 )
    *(_QWORD *)a2 = sub_491288(a2, *(void **)a2, v15, 0x20u);
  if ( v15 )
  {
    for ( k = 0; k != v15; ++k )
    {
      v21 = *(char **)a2;
      v22 = *(_QWORD *)(a2 + 8);
      if ( (unsigned __int64)(v22 + 1) > *(_QWORD *)(a2 + 16) )
      {
        v21 = (char *)sub_491288(a2, v21, v22 + 1, 0x20u);
        v22 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v21;
      }
      v23 = &v21[32 * v22];
      *((_QWORD *)v23 + 1) = 0;
      *((_QWORD *)v23 + 2) = 0;
      *((_QWORD *)v23 + 3) = 0;
      ++*(_QWORD *)(a2 + 8);
      v24 = a1[39] + (k << 6);
      *(_DWORD *)v23 = *(_DWORD *)v24;
      v25 = v24 + 40;
      if ( *(_QWORD *)(v24 + 48) <= 1u )
        v25 = v24 + 8;
      if ( v23 + 8 != (char *)v25 )
      {
        v26 = *(_QWORD *)(v25 + 8);
        if ( v26 > 1 )
        {
          v28 = *(const void **)v25;
          v29 = *((void **)v23 + 1);
          if ( v26 > *((_QWORD *)v23 + 3) )
          {
            v29 = sub_491288((__int64)(v23 + 8), *((void **)v23 + 1), v26, 1u);
            *((_QWORD *)v23 + 1) = v29;
          }
          *((_QWORD *)v23 + 2) = v26;
          memmove(v29, v28, v26 - 1);
          *(_BYTE *)(*((_QWORD *)v23 + 1) + v26 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v23 + 2) = 0;
        }
      }
    }
  }
  return 1;
}
