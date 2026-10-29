/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490E28
// Address: 0x0000000000490E28

//----- (0000000000490E28) ----------------------------------------------------
__int64 __fastcall sub_490E28(__int64 a1, FILE *stream)
{
  __int64 v3; // x19
  char *v4; // x22
  char *v6; // x0
  unsigned __int64 v7; // x2
  __int64 v8; // x21
  __int64 v9; // x1
  char *v10; // x21
  __int64 v11; // x2
  char *v12; // x0
  unsigned __int64 v14; // x22
  _BOOL4 v15; // w0
  bool v16; // zf
  unsigned __int64 v17; // x2
  unsigned __int64 v18; // x22
  _BYTE *v19; // x21

  v3 = 0;
  v4 = nullptr;
  *(_QWORD *)(a1 + 8) = 0;
  while ( !feof(stream) )
  {
    v6 = *(char **)a1;
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      v8 = v7 + 1023;
      if ( v7 == -1023 )
      {
        v9 = -1023;
        if ( v6 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          j__free(v6);
          *(_QWORD *)a1 = 0;
          v9 = *(_QWORD *)(a1 + 8);
          v6 = nullptr;
          *(_QWORD *)(a1 + 16) = 0;
        }
        v4 = sub_490D08(&v6[v3], v9 - v3, stream);
        if ( !v4 )
        {
LABEL_21:
          v15 = 1;
          goto LABEL_23;
        }
        goto LABEL_8;
      }
      v14 = v7 + 1024;
      if ( v7 >= v7 + 1024 )
      {
        *(_QWORD *)(a1 + 8) = v14;
        goto LABEL_20;
      }
    }
    else
    {
      v8 = 1024;
      v14 = 1025;
    }
    if ( *(_QWORD *)(a1 + 16) < v14 )
    {
      v6 = (char *)sub_491288(a1, *(void **)a1, v14, 1u);
      *(_QWORD *)a1 = v6;
      v7 = *(_QWORD *)(a1 + 8);
    }
    memset(&v6[v7], 0, v14 - v7);
    v6 = *(char **)a1;
    *(_QWORD *)(a1 + 8) = v14;
LABEL_20:
    v6[v8] = 0;
    v4 = sub_490D08((char *)(*(_QWORD *)a1 + v3), *(_QWORD *)(a1 + 8) - v3, stream);
    if ( !v4 )
      goto LABEL_21;
LABEL_8:
    v10 = *(char **)a1;
    v3 += strlen((const char *)(*(_QWORD *)a1 + v3));
    if ( v3 )
    {
      v11 = v3 - 1;
      v12 = &v10[v3 - 1];
      if ( !((v3 - 1) | *(_QWORD *)(a1 + 8)) )
        v12 = &byte_522118;
      if ( *v12 == 10 )
      {
        --v3;
        if ( !v11 )
        {
LABEL_13:
          if ( v10 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            j__free(v10);
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 16) = 0;
          }
          return v3;
        }
LABEL_29:
        v17 = *(_QWORD *)(a1 + 8);
        v18 = v3 + 1;
        if ( v3 + 1 > v17 )
        {
          if ( v18 > *(_QWORD *)(a1 + 16) )
          {
            v10 = (char *)sub_491288(a1, v10, v3 + 1, 1u);
            v17 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v10;
          }
          memset(&v10[v17], 0, v18 - v17);
          v19 = *(_BYTE **)a1;
          *(_QWORD *)(a1 + 8) = v18;
          v19[v3] = 0;
        }
        else
        {
          if ( v3 + 1 < v17 )
            *(_QWORD *)(a1 + 8) = v18;
          v10[v3] = 0;
        }
        return v3;
      }
    }
  }
  v15 = v4 == nullptr;
LABEL_23:
  if ( v3 )
    v16 = 1;
  else
    v16 = !v15;
  if ( v16 )
  {
    v10 = *(char **)a1;
    if ( !v3 )
      goto LABEL_13;
    goto LABEL_29;
  }
  return -1;
}
// 522118: using guessed type char byte_522118;
