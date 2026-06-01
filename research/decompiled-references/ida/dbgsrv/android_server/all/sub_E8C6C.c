/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8C6C
// Address: 0x00000000000E8C6C

//----- (00000000000E8C6C) ----------------------------------------------------
void *__fastcall sub_E8C6C(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x8
  _BYTE *v3; // x22
  size_t v6; // x21
  char *v7; // x8
  size_t v8; // x10
  char *v9; // x0
  char *v10; // x0
  size_t v11; // x1
  _BYTE *v12; // x21
  void *result; // x0
  _BYTE *v14; // x8
  _BYTE *v15; // x21
  size_t v16; // x20
  char *v17; // x8
  size_t v18; // x10
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1

  v3 = (_BYTE *)a1[2];
  v2 = (_BYTE *)a1[3];
  v6 = v2 - v3;
  if ( v2 != v3 )
  {
    v7 = a2[1];
    v8 = (size_t)a2[2];
    if ( (unsigned __int64)&v7[v6] >= v8 )
    {
      v10 = *a2;
      if ( 2 * v8 >= (unsigned __int64)&v7[v6] )
        v11 = 2 * v8;
      else
        v11 = (size_t)&v7[v6];
      a2[2] = (char *)v11;
      v9 = (char *)realloc(v10, v11);
      v7 = a2[1];
      *a2 = v9;
    }
    else
    {
      v9 = *a2;
    }
    memmove(&v7[(_QWORD)v9], v3, v6);
    a2[1] += v6;
  }
  v12 = (_BYTE *)a1[4];
  result = (void *)(*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 24LL))(v12, a2);
  if ( v12[9] != 1 )
    result = (void *)(*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 32LL))(v12, a2);
  v15 = (_BYTE *)a1[5];
  v14 = (_BYTE *)a1[6];
  v16 = v14 - v15;
  if ( v14 != v15 )
  {
    v17 = a2[1];
    v18 = (size_t)a2[2];
    if ( (unsigned __int64)&v17[v16] >= v18 )
    {
      v20 = *a2;
      if ( 2 * v18 >= (unsigned __int64)&v17[v16] )
        v21 = 2 * v18;
      else
        v21 = (size_t)&v17[v16];
      a2[2] = (char *)v21;
      v19 = (char *)realloc(v20, v21);
      v17 = a2[1];
      *a2 = v19;
    }
    else
    {
      v19 = *a2;
    }
    result = memmove(&v17[(_QWORD)v19], v15, v16);
    a2[1] += v16;
  }
  return result;
}
