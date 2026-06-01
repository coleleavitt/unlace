/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5AAC
// Address: 0x00000000000E5AAC

//----- (00000000000E5AAC) ----------------------------------------------------
char *__fastcall sub_E5AAC(_QWORD *a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  _BYTE *v9; // x21
  char *v10; // x8
  unsigned __int64 v11; // x10
  char *v12; // x0
  char *v13; // x0
  size_t v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  char v17; // w24
  __int64 v18; // x26
  unsigned __int64 v19; // x9
  char *v20; // x0
  __int64 v21; // x8
  char *v22; // x0
  unsigned __int64 v23; // x9
  size_t v24; // x1
  _BYTE *v25; // x21
  unsigned __int64 v26; // x9
  char *result; // x0
  char *v28; // x0
  unsigned __int64 v29; // x9
  size_t v30; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 1) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 1) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 1);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v2[(_QWORD)v6] = 40;
  ++a2[1];
  v9 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( v9[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v10 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v10 + 2) >= v11 )
  {
    v13 = *a2;
    if ( 2 * v11 >= (unsigned __int64)(v10 + 2) )
      v14 = 2 * v11;
    else
      v14 = (size_t)(v10 + 2);
    a2[2] = (char *)v14;
    v12 = (char *)realloc(v13, v14);
    v10 = a2[1];
    *a2 = v12;
  }
  else
  {
    v12 = *a2;
  }
  *(_WORD *)&v10[(_QWORD)v12] = 10281;
  v15 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v15;
  if ( a1[4] )
  {
    v16 = 0;
    v17 = 1;
    do
    {
      v18 = v15;
      if ( (v17 & 1) == 0 )
      {
        v19 = (unsigned __int64)a2[2];
        if ( v15 + 2 >= v19 )
        {
          v22 = *a2;
          v23 = 2 * v19;
          if ( v23 >= v15 + 2 )
            v24 = v23;
          else
            v24 = v15 + 2;
          a2[2] = (char *)v24;
          v20 = (char *)realloc(v22, v24);
          v21 = (__int64)a2[1];
          *a2 = v20;
        }
        else
        {
          v20 = *a2;
          v21 = v15;
        }
        *(_WORD *)&v20[v21] = 8236;
        v18 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v18;
      }
      v25 = *(_BYTE **)(a1[3] + 8 * v16);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v25 + 24LL))(v25, a2);
      if ( v25[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v25 + 32LL))(v25, a2);
      if ( (char *)v18 == a2[1] )
      {
        a2[1] = (char *)v15;
      }
      else
      {
        v17 = 0;
        v15 = (__int64)a2[1];
      }
      ++v16;
    }
    while ( v16 != a1[4] );
  }
  v26 = (unsigned __int64)a2[2];
  if ( v15 + 1 >= v26 )
  {
    v28 = *a2;
    v29 = 2 * v26;
    if ( v29 >= v15 + 1 )
      v30 = v29;
    else
      v30 = v15 + 1;
    a2[2] = (char *)v30;
    result = (char *)realloc(v28, v30);
    v15 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v15] = 41;
  ++a2[1];
  return result;
}
