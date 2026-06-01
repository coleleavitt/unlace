/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9508
// Address: 0x00000000000E9508

//----- (00000000000E9508) ----------------------------------------------------
_BYTE *__fastcall sub_E9508(__int64 a1, char **a2)
{
  char *v4; // x8
  unsigned __int64 v5; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  _BYTE *result; // x0
  _BYTE *v10; // x1
  size_t v11; // x20
  char *v12; // x8
  size_t v13; // x10
  const void *v14; // x21
  char *v15; // x0
  char *v16; // x0
  size_t v17; // x1

  if ( *(_BYTE *)(a1 + 24) )
  {
    v4 = a2[1];
    v5 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v4 + 1) >= v5 )
    {
      v7 = *a2;
      if ( 2 * v5 >= (unsigned __int64)(v4 + 1) )
        v8 = 2 * v5;
      else
        v8 = (size_t)(v4 + 1);
      a2[2] = (char *)v8;
      v6 = (char *)realloc(v7, v8);
      v4 = a2[1];
      *a2 = v6;
    }
    else
    {
      v6 = *a2;
    }
    v4[(_QWORD)v6] = 126;
    ++a2[1];
  }
  result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16));
  v11 = v10 - result;
  if ( v10 != result )
  {
    v12 = a2[1];
    v13 = (size_t)a2[2];
    v14 = result;
    if ( (unsigned __int64)&v12[v11] >= v13 )
    {
      v16 = *a2;
      if ( 2 * v13 >= (unsigned __int64)&v12[v11] )
        v17 = 2 * v13;
      else
        v17 = (size_t)&v12[v11];
      a2[2] = (char *)v17;
      v15 = (char *)realloc(v16, v17);
      v12 = a2[1];
      *a2 = v15;
    }
    else
    {
      v15 = *a2;
    }
    result = memmove(&v12[(_QWORD)v15], v14, v11);
    a2[1] += v11;
  }
  return result;
}
// E9584: variable 'v10' is possibly undefined
