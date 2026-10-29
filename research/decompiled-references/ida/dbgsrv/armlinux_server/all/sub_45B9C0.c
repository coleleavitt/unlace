/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B9C0
// Address: 0x000000000045B9C0

//----- (000000000045B9C0) ----------------------------------------------------
void *__fastcall sub_45B9C0(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v4; // x20
  __int64 v7; // x25
  __int64 v8; // x23
  __int64 i; // x22
  _QWORD *v10; // x21
  void *v11; // x0
  void *v12; // x0
  void *result; // x0
  _DWORD *v14; // x27
  char *v15; // x0
  __int64 v16; // x1
  char *v17; // x3
  int v18; // w26
  int v19; // t1
  void *v20; // x23
  size_t v21; // x22
  int v22; // w25
  size_t v23; // x21
  void *v24; // x24

  v4 = a1 + 48;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    v8 = 0;
    for ( i = 0; i != v7; ++i )
    {
      v10 = (_QWORD *)(*(_QWORD *)(a1 + 48) + v8);
      v11 = (void *)v10[4];
      if ( v11 )
      {
        v10[5] = 0;
        j__free(v11);
      }
      v12 = (void *)v10[1];
      if ( v12 )
      {
        v10[2] = 0;
        j__free(v12);
      }
      v8 += 56;
    }
  }
  *(_QWORD *)(a1 + 56) = 0;
  result = *(void **)(v4 + 16);
  if ( a3 > (unsigned __int64)result )
  {
    result = sub_491288(v4, *(void **)(a1 + 48), a3, 0x38u);
    *(_QWORD *)(a1 + 48) = result;
  }
  if ( a3 > 0 )
  {
    v14 = &a2[14 * (a3 - 1) + 14];
    do
    {
      v19 = *a2;
      a2 += 14;
      v18 = v19;
      v20 = nullptr;
      v21 = *((_QWORD *)a2 - 5);
      v22 = *(a2 - 13);
      if ( v21 )
      {
        v20 = sub_491248(*((_QWORD *)a2 - 5));
        memcpy(v20, *((const void **)a2 - 6), v21);
      }
      v23 = *((_QWORD *)a2 - 2);
      v24 = nullptr;
      if ( v23 )
      {
        v24 = sub_491248(*((_QWORD *)a2 - 2));
        memcpy(v24, *((const void **)a2 - 3), v23);
      }
      v15 = *(char **)v4;
      v16 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int64)(v16 + 1) > *(_QWORD *)(v4 + 16) )
      {
        v15 = (char *)sub_491288(v4, *(void **)v4, v16 + 1, 0x38u);
        v16 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)v4 = v15;
      }
      v17 = &v15[56 * v16];
      *(_DWORD *)v17 = v18;
      *((_DWORD *)v17 + 1) = v22;
      *((_QWORD *)v17 + 1) = v20;
      *((_QWORD *)v17 + 2) = v21;
      *((_QWORD *)v17 + 3) = v21;
      *((_QWORD *)v17 + 4) = v24;
      *((_QWORD *)v17 + 5) = v23;
      *((_QWORD *)v17 + 6) = v23;
      result = (void *)(*(_QWORD *)(v4 + 8) + 1LL);
      *(_QWORD *)(v4 + 8) = result;
    }
    while ( a2 != v14 );
  }
  return result;
}
