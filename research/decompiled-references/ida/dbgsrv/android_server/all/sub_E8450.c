/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8450
// Address: 0x00000000000E8450

//----- (00000000000E8450) ----------------------------------------------------
char *__fastcall sub_E8450(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x21
  char *v5; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  char *v8; // x0
  char *v9; // x0
  size_t v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  char v13; // w24
  __int64 v14; // x26
  unsigned __int64 v15; // x9
  char *v16; // x0
  __int64 v17; // x8
  char *v18; // x0
  unsigned __int64 v19; // x9
  size_t v20; // x1
  _BYTE *v21; // x21
  unsigned __int64 v22; // x9
  unsigned __int64 v23; // x8
  char *result; // x0
  char *v25; // x0
  unsigned __int64 v26; // x9
  size_t v27; // x1

  v2 = (_BYTE *)a1[2];
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)v2 + 24LL))(a1[2], a2);
    if ( v2[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v2 + 32LL))(v2, a2);
  }
  v5 = a2[1];
  v6 = (unsigned __int64)a2[2];
  v7 = (unsigned __int64)(v5 + 1);
  if ( (unsigned __int64)(v5 + 1) >= v6 )
  {
    v9 = *a2;
    if ( 2 * v6 >= v7 )
      v10 = 2 * v6;
    else
      v10 = (size_t)(v5 + 1);
    a2[2] = (char *)v10;
    v8 = (char *)realloc(v9, v10);
    v5 = a2[1];
    *a2 = v8;
    v7 = (unsigned __int64)(v5 + 1);
  }
  else
  {
    v8 = *a2;
  }
  a2[1] = (char *)v7;
  v5[(_QWORD)v8] = 123;
  if ( a1[4] )
  {
    v11 = (__int64)a2[1];
    v12 = 0;
    v13 = 1;
    do
    {
      v14 = v11;
      if ( (v13 & 1) == 0 )
      {
        v15 = (unsigned __int64)a2[2];
        if ( v11 + 2 >= v15 )
        {
          v18 = *a2;
          v19 = 2 * v15;
          if ( v19 >= v11 + 2 )
            v20 = v19;
          else
            v20 = v11 + 2;
          a2[2] = (char *)v20;
          v16 = (char *)realloc(v18, v20);
          v17 = (__int64)a2[1];
          *a2 = v16;
        }
        else
        {
          v16 = *a2;
          v17 = v11;
        }
        *(_WORD *)&v16[v17] = 8236;
        v14 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v14;
      }
      v21 = *(_BYTE **)(a1[3] + 8 * v12);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v21 + 24LL))(v21, a2);
      if ( v21[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v21 + 32LL))(v21, a2);
      if ( (char *)v14 == a2[1] )
      {
        a2[1] = (char *)v11;
      }
      else
      {
        v13 = 0;
        v11 = (__int64)a2[1];
      }
      ++v12;
    }
    while ( v12 != a1[4] );
  }
  else
  {
    v11 = (__int64)a2[1];
  }
  v22 = (unsigned __int64)a2[2];
  v23 = v11 + 1;
  if ( v11 + 1 >= v22 )
  {
    v25 = *a2;
    v26 = 2 * v22;
    if ( v26 >= v23 )
      v27 = v26;
    else
      v27 = v11 + 1;
    a2[2] = (char *)v27;
    result = (char *)realloc(v25, v27);
    v11 = (__int64)a2[1];
    *a2 = result;
    v23 = v11 + 1;
  }
  else
  {
    result = *a2;
  }
  a2[1] = (char *)v23;
  result[v11] = 125;
  return result;
}
