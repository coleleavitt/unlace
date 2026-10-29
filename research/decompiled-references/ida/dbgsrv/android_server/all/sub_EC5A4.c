/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EC5A4
// Address: 0x00000000000EC5A4

//----- (00000000000EC5A4) ----------------------------------------------------
char *__fastcall sub_EC5A4(__int64 a1, char **a2)
{
  char *result; // x0
  int v5; // w8
  char *v6; // x8
  unsigned __int64 v7; // x10
  char *v8; // x0
  size_t v9; // x1
  char *v10; // x8
  char *v11; // x8
  unsigned __int64 v12; // x10
  char *v13; // x0
  size_t v14; // x1
  char *v15; // x8
  char *v16; // x8
  unsigned __int64 v17; // x10
  char *v18; // x0
  size_t v19; // x1
  char *v20; // x8

  result = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 12);
  if ( (v5 & 1) != 0 )
  {
    v6 = a2[1];
    v7 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v6 + 6) >= v7 )
    {
      v8 = *a2;
      if ( 2 * v7 >= (unsigned __int64)(v6 + 6) )
        v9 = 2 * v7;
      else
        v9 = (size_t)(v6 + 6);
      a2[2] = (char *)v9;
      result = (char *)realloc(v8, v9);
      v6 = a2[1];
      *a2 = result;
    }
    else
    {
      result = *a2;
    }
    v10 = &v6[(_QWORD)result];
    *((_WORD *)v10 + 2) = 29811;
    *(_DWORD *)v10 = 1852793632;
    a2[1] += 6;
    v5 = *(_DWORD *)(a1 + 12);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        return result;
      goto LABEL_19;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v11 = a2[1];
  v12 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v11 + 9) >= v12 )
  {
    v13 = *a2;
    if ( 2 * v12 >= (unsigned __int64)(v11 + 9) )
      v14 = 2 * v12;
    else
      v14 = (size_t)(v11 + 9);
    a2[2] = (char *)v14;
    result = (char *)realloc(v13, v14);
    v11 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v15 = &v11[(_QWORD)result];
  v15[8] = 101;
  *(_QWORD *)v15 = *(_QWORD *)" volatile";
  a2[1] += 9;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
LABEL_19:
    v16 = a2[1];
    v17 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v16 + 9) >= v17 )
    {
      v18 = *a2;
      if ( 2 * v17 >= (unsigned __int64)(v16 + 9) )
        v19 = 2 * v17;
      else
        v19 = (size_t)(v16 + 9);
      a2[2] = (char *)v19;
      result = (char *)realloc(v18, v19);
      v16 = a2[1];
      *a2 = result;
    }
    else
    {
      result = *a2;
    }
    v20 = &v16[(_QWORD)result];
    v20[8] = 116;
    *(_QWORD *)v20 = *(_QWORD *)" restrict";
    a2[1] += 9;
  }
  return result;
}
