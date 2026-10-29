/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ECBF8
// Address: 0x00000000000ECBF8

//----- (00000000000ECBF8) ----------------------------------------------------
char *__fastcall sub_ECBF8(__int64 a1, char **a2)
{
  _BYTE *v4; // x0
  char *v5; // x8
  unsigned __int64 v6; // x10
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  char *v10; // x8
  char v11; // w9
  char *v12; // x8
  unsigned __int64 v13; // x10
  char *v14; // x0
  char *v15; // x0
  size_t v16; // x1
  _BYTE *v17; // x20
  char *v18; // x8
  unsigned __int64 v19; // x10
  char *result; // x0
  char *v21; // x0
  size_t v22; // x1
  char *v23; // x8

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v4 = *(_BYTE **)(a1 + 24);
  if ( !v4[10] )
    goto LABEL_8;
  if ( v4[10] == 2 )
  {
    if ( ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 8LL))(v4, a2) & 1) != 0 )
    {
LABEL_8:
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
      v10 = &v5[(_QWORD)v7];
      v11 = 40;
      goto LABEL_22;
    }
    v4 = *(_BYTE **)(a1 + 24);
  }
  if ( !v4[11] || v4[11] == 2 && ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 16LL))(v4, a2) & 1) != 0 )
    goto LABEL_8;
  v12 = a2[1];
  v13 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v12 + 1) >= v13 )
  {
    v15 = *a2;
    if ( 2 * v13 >= (unsigned __int64)(v12 + 1) )
      v16 = 2 * v13;
    else
      v16 = (size_t)(v12 + 1);
    a2[2] = (char *)v16;
    v14 = (char *)realloc(v15, v16);
    v12 = a2[1];
    *a2 = v14;
  }
  else
  {
    v14 = *a2;
  }
  v10 = &v12[(_QWORD)v14];
  v11 = 32;
LABEL_22:
  *v10 = v11;
  ++a2[1];
  v17 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
  v18 = a2[1];
  v19 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v18 + 3) >= v19 )
  {
    v21 = *a2;
    if ( 2 * v19 >= (unsigned __int64)(v18 + 3) )
      v22 = 2 * v19;
    else
      v22 = (size_t)(v18 + 3);
    a2[2] = (char *)v22;
    result = (char *)realloc(v21, v22);
    v18 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v23 = &v18[(_QWORD)result];
  v23[2] = 42;
  *(_WORD *)v23 = 14906;
  a2[1] += 3;
  return result;
}
