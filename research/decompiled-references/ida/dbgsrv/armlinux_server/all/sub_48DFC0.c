/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DFC0
// Address: 0x000000000048DFC0

//----- (000000000048DFC0) ----------------------------------------------------
bool __fastcall sub_48DFC0(char **a1, const char *a2, signed __int64 a3, __int64 a4)
{
  FILE *v7; // x0
  FILE *v8; // x21
  signed __int64 v9; // x22
  _BOOL4 v10; // w19
  char *v11; // x1
  unsigned __int64 v12; // x2
  const char *v13; // x0
  const char *v14; // x19
  size_t v15; // x0
  size_t v16; // x22
  void *v18; // x0
  const char *v19; // x0
  const char *v20; // x19
  size_t v21; // x0
  size_t v22; // x21
  char *v23; // x0
  unsigned __int64 v24; // x22
  void *v25; // x0
  const char *v26; // x1
  unsigned __int64 v27; // x23
  void *v28; // x0
  const char *v29; // x1

  v7 = sub_48DEE0(a2);
  if ( v7 )
  {
    v8 = v7;
    v9 = sub_4871C0(v7);
    v10 = v9 > 0 && v9 <= a3;
    if ( v9 > 0 && v9 <= a3 )
    {
      v11 = *a1;
      v12 = (unsigned __int64)a1[1];
      if ( v9 > v12 )
      {
        if ( v9 > (unsigned __int64)a1[2] )
        {
          v23 = (char *)sub_491288((__int64)a1, v11, v9, 1u);
          v12 = (unsigned __int64)a1[1];
          v11 = v23;
          *a1 = v23;
        }
        memset(&v11[v12], 0, v9 - v12);
        v11 = *a1;
        a1[1] = (char *)v9;
      }
      else if ( v9 < v12 )
      {
        a1[1] = (char *)v9;
      }
      if ( v9 == sub_4904B8(v8, v11, v9) )
        goto LABEL_12;
      if ( a4 )
      {
        v13 = sub_493840(-1);
        v14 = v13;
        if ( v13 )
        {
          v15 = strlen(v13);
          v16 = v15;
          if ( v15 )
          {
            v27 = v15 + 1;
            v28 = *(void **)a4;
            if ( v27 > *(_QWORD *)(a4 + 16) )
            {
              v28 = sub_491288(a4, *(void **)a4, v27, 1u);
              *(_QWORD *)a4 = v28;
            }
            *(_QWORD *)(a4 + 8) = v27;
            v29 = v14;
            v10 = 0;
            memmove(v28, v29, v16);
            *(_BYTE *)(*(_QWORD *)a4 + v16) = 0;
            goto LABEL_12;
          }
        }
        *(_QWORD *)(a4 + 8) = 0;
      }
    }
    else if ( a4 )
    {
      v18 = *(void **)a4;
      if ( *(_QWORD *)(a4 + 16) <= 0xFu )
      {
        v18 = sub_491288(a4, *(void **)a4, 0x10u, 1u);
        *(_QWORD *)a4 = v18;
      }
      *(_QWORD *)(a4 + 8) = 16;
      qmemcpy(v18, "wrong file size", 15);
      *(_BYTE *)(*(_QWORD *)a4 + 15LL) = 0;
      goto LABEL_12;
    }
    v10 = 0;
LABEL_12:
    sub_4906A0(v8);
    return v10;
  }
  v10 = 0;
  if ( !a4 )
    return v10;
  v19 = sub_493840(-1);
  v20 = v19;
  if ( v19 )
  {
    v21 = strlen(v19);
    v22 = v21;
    if ( v21 )
    {
      v24 = v21 + 1;
      v25 = *(void **)a4;
      if ( v24 > *(_QWORD *)(a4 + 16) )
      {
        v25 = sub_491288(a4, *(void **)a4, v24, 1u);
        *(_QWORD *)a4 = v25;
      }
      *(_QWORD *)(a4 + 8) = v24;
      v26 = v20;
      v10 = 0;
      memmove(v25, v26, v22);
      *(_BYTE *)(*(_QWORD *)a4 + v22) = 0;
      return v10;
    }
  }
  *(_QWORD *)(a4 + 8) = 0;
  return 0;
}
