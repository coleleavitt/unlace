/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450C48
// Address: 0x0000000000450C48

//----- (0000000000450C48) ----------------------------------------------------
__int64 __fastcall sub_450C48(__int64 a1, const char **a2)
{
  const char *v2; // x20
  char *v5; // x0
  const char *v6; // x23
  unsigned __int64 v7; // x1
  unsigned __int64 v8; // x22
  _BYTE *v9; // x0
  unsigned __int64 v10; // x2
  __int64 v11; // x1
  __int64 result; // x0
  char *v13; // x0
  unsigned __int64 v14; // x20

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v5 = strchr(*a2, 10);
  v6 = v5 + 1;
  if ( !v5 )
    v6 = &v2[strlen(v2)];
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  v8 = v6 - v2 + 1;
  v9 = *(_BYTE **)a1;
  if ( v8 > v7 )
  {
    v9 = sub_491288(a1, *(void **)a1, v6 - v2 + 1, 1u);
    *(_QWORD *)a1 = v9;
  }
  *(_QWORD *)(a1 + 8) = v8;
  v9[v6 - v2] = 0;
  memmove(*(void **)a1, v2, v6 - v2);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 > 1 )
  {
    v13 = *(char **)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + v10 - 2) == 10 )
    {
      v14 = v10 - 1;
      if ( (__int64)(v10 - 1) <= 1 )
      {
        if ( v13 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          j__free(v13);
          *(_QWORD *)a1 = 0;
          *(_QWORD *)(a1 + 16) = 0;
        }
      }
      else
      {
        if ( v14 > *(_QWORD *)(a1 + 16) )
        {
          v13 = (char *)sub_491288(a1, *(void **)a1, v10 - 1, 1u);
          *(_QWORD *)a1 = v13;
        }
        *(_QWORD *)(a1 + 8) = v14;
        v13[v14 - 1] = 0;
      }
    }
  }
  *a2 = v6;
  v11 = *(_QWORD *)(a1 + 8);
  result = v11 - 1;
  if ( !v11 )
    return 0;
  return result;
}
