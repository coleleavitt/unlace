/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9AD4
// Address: 0x00000000000E9AD4

//----- (00000000000E9AD4) ----------------------------------------------------
char *__fastcall sub_E9AD4(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  unsigned __int64 v6; // x9
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
  unsigned __int64 v22; // x8
  char *result; // x0
  char *v24; // x0
  unsigned __int64 v25; // x9
  size_t v26; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  v6 = (unsigned __int64)(v2 + 1);
  if ( (unsigned __int64)(v2 + 1) >= v3 )
  {
    v8 = *a2;
    if ( 2 * v3 >= v6 )
      v9 = 2 * v3;
    else
      v9 = (size_t)(v2 + 1);
    a2[2] = (char *)v9;
    v7 = (char *)realloc(v8, v9);
    v2 = a2[1];
    *a2 = v7;
    v6 = (unsigned __int64)(v2 + 1);
  }
  else
  {
    v7 = *a2;
  }
  a2[1] = (char *)v6;
  v2[(_QWORD)v7] = 91;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v10 = (__int64)a2[1];
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
      v20 = *(_BYTE **)(*(_QWORD *)(a1 + 16) + 8 * v11);
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
    while ( v11 != *(_QWORD *)(a1 + 24) );
  }
  else
  {
    v10 = (__int64)a2[1];
  }
  v21 = (unsigned __int64)a2[2];
  v22 = v10 + 1;
  if ( v10 + 1 >= v21 )
  {
    v24 = *a2;
    v25 = 2 * v21;
    if ( v25 >= v22 )
      v26 = v25;
    else
      v26 = v10 + 1;
    a2[2] = (char *)v26;
    result = (char *)realloc(v24, v26);
    v10 = (__int64)a2[1];
    *a2 = result;
    v22 = v10 + 1;
  }
  else
  {
    result = *a2;
  }
  a2[1] = (char *)v22;
  result[v10] = 93;
  return result;
}
