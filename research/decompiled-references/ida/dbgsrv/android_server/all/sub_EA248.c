/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA248
// Address: 0x00000000000EA248

//----- (00000000000EA248) ----------------------------------------------------
char *__fastcall sub_EA248(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  char v11; // w24
  __int64 v12; // x26
  unsigned __int64 v13; // x9
  char *v14; // x0
  __int64 v15; // x8
  char *v16; // x0
  unsigned __int64 v17; // x9
  size_t v18; // x1
  _BYTE *v19; // x21
  char *v20; // x0
  unsigned __int64 v21; // x9
  unsigned __int64 v22; // x9
  size_t v23; // x1
  unsigned __int64 v24; // x9
  char *result; // x0
  char *v26; // x0
  unsigned __int64 v27; // x9
  size_t v28; // x1

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
  v2[(_QWORD)v6] = 60;
  v9 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v9;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v10 = 0;
    v11 = 1;
    do
    {
      v12 = v9;
      if ( (v11 & 1) == 0 )
      {
        v13 = (unsigned __int64)a2[2];
        if ( v9 + 2 >= v13 )
        {
          v16 = *a2;
          v17 = 2 * v13;
          if ( v17 >= v9 + 2 )
            v18 = v17;
          else
            v18 = v9 + 2;
          a2[2] = (char *)v18;
          v14 = (char *)realloc(v16, v18);
          v15 = (__int64)a2[1];
          *a2 = v14;
        }
        else
        {
          v14 = *a2;
          v15 = v9;
        }
        *(_WORD *)&v14[v15] = 8236;
        v12 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v12;
      }
      v19 = *(_BYTE **)(*(_QWORD *)(a1 + 16) + 8 * v10);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 24LL))(v19, a2);
      if ( v19[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 32LL))(v19, a2);
      if ( (char *)v12 == a2[1] )
      {
        a2[1] = (char *)v9;
      }
      else
      {
        v11 = 0;
        v9 = (__int64)a2[1];
      }
      ++v10;
    }
    while ( v10 != *(_QWORD *)(a1 + 24) );
  }
  if ( v9 )
  {
    v20 = *a2;
    if ( (*a2)[v9 - 1] == 62 )
    {
      v21 = (unsigned __int64)a2[2];
      if ( v9 + 1 >= v21 )
      {
        v22 = 2 * v21;
        if ( v22 >= v9 + 1 )
          v23 = v22;
        else
          v23 = v9 + 1;
        a2[2] = (char *)v23;
        v20 = (char *)realloc(v20, v23);
        v9 = (__int64)a2[1];
        *a2 = v20;
      }
      v20[v9] = 32;
      v9 = (__int64)(a2[1] + 1);
      a2[1] = (char *)v9;
    }
  }
  v24 = (unsigned __int64)a2[2];
  if ( v9 + 1 >= v24 )
  {
    v26 = *a2;
    v27 = 2 * v24;
    if ( v27 >= v9 + 1 )
      v28 = v27;
    else
      v28 = v9 + 1;
    a2[2] = (char *)v28;
    result = (char *)realloc(v26, v28);
    v9 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v9] = 62;
  ++a2[1];
  return result;
}
