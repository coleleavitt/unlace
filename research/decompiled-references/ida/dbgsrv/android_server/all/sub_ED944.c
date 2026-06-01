/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ED944
// Address: 0x00000000000ED944

//----- (00000000000ED944) ----------------------------------------------------
void *__fastcall sub_ED944(__int64 a1, char **a2)
{
  void *result; // x0
  _BYTE *v5; // x8
  _BYTE *v6; // x21
  size_t v7; // x20
  char *v8; // x8
  size_t v9; // x10
  char *v10; // x0
  char *v11; // x0
  size_t v12; // x1

  result = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v6 = *(_BYTE **)(a1 + 24);
  v5 = *(_BYTE **)(a1 + 32);
  v7 = v5 - v6;
  if ( v5 != v6 )
  {
    v8 = a2[1];
    v9 = (size_t)a2[2];
    if ( (unsigned __int64)&v8[v7] >= v9 )
    {
      v11 = *a2;
      if ( 2 * v9 >= (unsigned __int64)&v8[v7] )
        v12 = 2 * v9;
      else
        v12 = (size_t)&v8[v7];
      a2[2] = (char *)v12;
      v10 = (char *)realloc(v11, v12);
      v8 = a2[1];
      *a2 = v10;
    }
    else
    {
      v10 = *a2;
    }
    result = memmove(&v8[(_QWORD)v10], v6, v7);
    a2[1] += v7;
  }
  return result;
}
