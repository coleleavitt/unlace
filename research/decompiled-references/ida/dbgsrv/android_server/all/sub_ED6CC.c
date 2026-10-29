/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ED6CC
// Address: 0x00000000000ED6CC

//----- (00000000000ED6CC) ----------------------------------------------------
char *__fastcall sub_ED6CC(__int64 a1, char **a2)
{
  _BYTE *v4; // x0
  char *v5; // x8
  unsigned __int64 v6; // x10
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  _BYTE *v10; // x0
  char *v11; // x8
  _QWORD *v12; // x20
  unsigned __int64 v13; // x10
  char *result; // x0
  char *v15; // x0
  size_t v16; // x1
  char *v17; // x8
  __int64 v18; // x8
  char *v19; // x8
  unsigned __int64 v20; // x10
  char *v21; // x0
  size_t v22; // x1

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v4 = *(_BYTE **)(a1 + 16);
  if ( !v4[10] || v4[10] == 2 && ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 8LL))(v4, a2) & 1) != 0 )
  {
    v5 = a2[1];
    v6 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v5 + 1) >= v6 )
    {
      v8 = *a2;
      if ( 2 * v6 >= (unsigned __int64)(v5 + 1) )
        v9 = 2 * v6;
      else
        v9 = (size_t)(v5 + 1);
      a2[2] = (char *)v9;
      v7 = (char *)realloc(v8, v9);
      v5 = a2[1];
      *a2 = v7;
    }
    else
    {
      v7 = *a2;
    }
    v5[(_QWORD)v7] = 32;
    ++a2[1];
  }
  v10 = *(_BYTE **)(a1 + 16);
  if ( !v10[10] )
    goto LABEL_18;
  if ( v10[10] == 2 )
  {
    if ( ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 8LL))(v10, a2) & 1) != 0 )
    {
LABEL_18:
      v12 = a2 + 1;
      v11 = a2[1];
      v13 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v11 + 3) >= v13 )
      {
        v15 = *a2;
        if ( 2 * v13 >= (unsigned __int64)(v11 + 3) )
          v16 = 2 * v13;
        else
          v16 = (size_t)(v11 + 3);
        a2[2] = (char *)v16;
        result = (char *)realloc(v15, v16);
        v11 = a2[1];
        *a2 = result;
      }
      else
      {
        result = *a2;
      }
      v17 = &v11[(_QWORD)result];
      v17[2] = 38;
      *(_WORD *)v17 = 9768;
      v18 = 3;
      goto LABEL_32;
    }
    v10 = *(_BYTE **)(a1 + 16);
  }
  if ( !v10[11]
    || v10[11] == 2 && ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 16LL))(v10, a2) & 1) != 0 )
  {
    goto LABEL_18;
  }
  v12 = a2 + 1;
  v19 = a2[1];
  v20 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v19 + 2) >= v20 )
  {
    v21 = *a2;
    if ( 2 * v20 >= (unsigned __int64)(v19 + 2) )
      v22 = 2 * v20;
    else
      v22 = (size_t)(v19 + 2);
    a2[2] = (char *)v22;
    result = (char *)realloc(v21, v22);
    v19 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  *(_WORD *)&v19[(_QWORD)result] = 9766;
  v18 = 2;
LABEL_32:
  *v12 += v18;
  return result;
}
