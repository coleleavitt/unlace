/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472738
// Address: 0x0000000000472738

//----- (0000000000472738) ----------------------------------------------------
void *__fastcall sub_472738(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // w0
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x3
  unsigned __int64 v10; // x1
  unsigned __int8 *v11; // x3
  void *v12; // x0
  unsigned __int64 v13; // x2
  int v15; // w0
  size_t v16; // x21
  unsigned __int64 v17; // x3
  unsigned __int8 *v18; // x1
  void *result; // x0
  size_t v20; // x2
  char *v22; // x0
  char *v23; // x0

  sub_472418(a1, 1u, a4);
  v7 = sub_48E5A8((unsigned __int8 **)a4, *(_QWORD *)(a4 + 8));
  v8 = v7;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v7 > v9 )
  {
    v22 = *(char **)a2;
    if ( v8 > *(_QWORD *)(a2 + 16) )
    {
      v22 = (char *)sub_491288(a2, *(void **)a2, v8, 1u);
      *(_QWORD *)a2 = v22;
      v9 = *(_QWORD *)(a2 + 8);
    }
    memset(&v22[v9], 0, v8 - v9);
    *(_QWORD *)(a2 + 8) = v8;
  }
  else if ( v7 < v9 )
  {
    *(_QWORD *)(a2 + 8) = v7;
  }
  v11 = *(unsigned __int8 **)a4;
  v10 = *(_QWORD *)(a4 + 8);
  v12 = *(void **)a2;
  v13 = *(_QWORD *)a4 + v8;
  if ( *(_QWORD *)a4 <= v13 && v10 >= v13 )
  {
    *(_QWORD *)a4 = v13;
    memcpy(v12, v11, v8);
    v10 = *(_QWORD *)(a4 + 8);
  }
  *(_QWORD *)(a2 + 24) = sub_48E6E8((unsigned __int8 **)a4, v10) - 1;
  v15 = sub_48E5A8((unsigned __int8 **)a4, *(_QWORD *)(a4 + 8));
  v16 = v15;
  v17 = *(_QWORD *)(a2 + 40);
  if ( v15 > v17 )
  {
    if ( (unsigned __int64)v15 > *(_QWORD *)(a2 + 48) )
    {
      v23 = (char *)sub_491288(a2 + 32, *(void **)(a2 + 32), v15, 1u);
      *(_QWORD *)(a2 + 32) = v23;
      memset(&v23[*(_QWORD *)(a2 + 40)], 0, v16 - *(_QWORD *)(a2 + 40));
    }
    else
    {
      memset((void *)(*(_QWORD *)(a2 + 32) + v17), 0, v15 - v17);
    }
    *(_QWORD *)(a2 + 40) = v16;
  }
  else if ( v15 < v17 )
  {
    *(_QWORD *)(a2 + 40) = v15;
  }
  v18 = *(unsigned __int8 **)a4;
  result = *(void **)(a2 + 32);
  v20 = *(_QWORD *)a4 + v16;
  if ( *(_QWORD *)(a4 + 8) >= v20 && (unsigned __int64)v18 <= v20 )
  {
    *(_QWORD *)a4 = v20;
    result = memcpy(result, v18, v16);
  }
  if ( a3 )
    return (void *)sub_472418(a3, 0, a4);
  return result;
}
