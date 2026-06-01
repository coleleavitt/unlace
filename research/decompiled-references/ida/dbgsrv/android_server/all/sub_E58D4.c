/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E58D4
// Address: 0x00000000000E58D4

//----- (00000000000E58D4) ----------------------------------------------------
char *__fastcall sub_E58D4(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x21
  char *v5; // x8
  unsigned __int64 v6; // x10
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  __int64 v10; // x22
  __int64 v11; // x23
  char v12; // w24
  __int64 v13; // x26
  unsigned __int64 v14; // x9
  char *v15; // x0
  __int64 v16; // x8
  char *v17; // x0
  unsigned __int64 v18; // x9
  size_t v19; // x1
  _BYTE *v20; // x21
  unsigned __int64 v21; // x9
  char *result; // x0
  char *v23; // x0
  unsigned __int64 v24; // x9
  size_t v25; // x1

  v2 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v2 + 32LL))(v2, a2);
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
  v5[(_QWORD)v7] = 40;
  v10 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v10;
  if ( a1[4] )
  {
    v11 = 0;
    v12 = 1;
    do
    {
      v13 = v10;
      if ( (v12 & 1) == 0 )
      {
        v14 = (unsigned __int64)a2[2];
        if ( v10 + 2 >= v14 )
        {
          v17 = *a2;
          v18 = 2 * v14;
          if ( v18 >= v10 + 2 )
            v19 = v18;
          else
            v19 = v10 + 2;
          a2[2] = (char *)v19;
          v15 = (char *)realloc(v17, v19);
          v16 = (__int64)a2[1];
          *a2 = v15;
        }
        else
        {
          v15 = *a2;
          v16 = v10;
        }
        *(_WORD *)&v15[v16] = 8236;
        v13 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v13;
      }
      v20 = *(_BYTE **)(a1[3] + 8 * v11);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v20 + 24LL))(v20, a2);
      if ( v20[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v20 + 32LL))(v20, a2);
      if ( (char *)v13 == a2[1] )
      {
        a2[1] = (char *)v10;
      }
      else
      {
        v12 = 0;
        v10 = (__int64)a2[1];
      }
      ++v11;
    }
    while ( v11 != a1[4] );
  }
  v21 = (unsigned __int64)a2[2];
  if ( v10 + 1 >= v21 )
  {
    v23 = *a2;
    v24 = 2 * v21;
    if ( v24 >= v10 + 1 )
      v25 = v24;
    else
      v25 = v10 + 1;
    a2[2] = (char *)v25;
    result = (char *)realloc(v23, v25);
    v10 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v10] = 41;
  ++a2[1];
  return result;
}
