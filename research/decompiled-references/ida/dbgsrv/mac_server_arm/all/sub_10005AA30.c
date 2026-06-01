/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AA30
// Address: 0x000000010005AA30

//----- (000000010005AA30) ----------------------------------------------------
void *__fastcall sub_10005AA30(_QWORD **a1, __int64 a2)
{
  char *v4; // x8
  const char *v5; // x21
  size_t v6; // x0
  size_t v7; // x22
  _QWORD *v8; // x25
  unsigned __int64 v9; // x23
  _QWORD *v10; // x8
  char *v11; // x8
  const char *v12; // x20
  void *result; // x0
  size_t v14; // x21
  _QWORD *v15; // x23
  unsigned __int64 v16; // x22
  _QWORD *v17; // x8
  char v18; // [xsp+6h] [xbp-4Ah] BYREF
  char v19; // [xsp+7h] [xbp-49h] BYREF

  sub_1000500AC(a1, *(_QWORD *)(a2 + 64) + 1LL);
  sub_1000500AC(a1, *(_QWORD *)a2 - 16LL * *(_QWORD *)(a2 + 64) + 1);
  sub_1000500AC(a1, *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 + 1LL);
  sub_10002CF84(a1, *(unsigned __int8 *)(a2 + 73) | (16 * *(unsigned __int8 *)(a2 + 72)));
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(char **)(a2 + 16);
  else
    v4 = &byte_100075A30;
  if ( v4 )
    v5 = v4;
  else
    v5 = &byte_10008E2F5;
  v6 = strlen(v5);
  v7 = v6 + 1;
  if ( v6 != -1 )
  {
    v8 = a1[1];
    if ( __CFADD__(v8, v7) )
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v9 = (unsigned __int64)v8 + v7;
    if ( (unsigned __int64)v8 >= v9 )
    {
      if ( v8 != (_QWORD *)v9 )
      {
        v18 = 0;
        sub_100019CE4(a1, v9, &v18);
      }
    }
    else
    {
      v10 = *a1;
      if ( (unsigned __int64)a1[2] < v9 )
      {
        v10 = qvector_reserve(a1, *a1, v9, 1u);
        *a1 = v10;
      }
      bzero((char *)a1[1] + (_QWORD)v10, v9 - (_QWORD)a1[1]);
      a1[1] = (_QWORD *)v9;
    }
    memcpy((char *)v8 + (_QWORD)*a1, v5, v7);
  }
  if ( *(_QWORD *)(a2 + 48) )
    v11 = *(char **)(a2 + 40);
  else
    v11 = &byte_100075A30;
  if ( v11 )
    v12 = v11;
  else
    v12 = &byte_10008E2F5;
  result = (void *)strlen(v12);
  v14 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v15 = a1[1];
    if ( __CFADD__(v15, v14) )
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v16 = (unsigned __int64)v15 + v14;
    if ( (unsigned __int64)v15 >= v16 )
    {
      if ( v15 != (_QWORD *)v16 )
      {
        v19 = 0;
        sub_100019CE4(a1, v16, &v19);
      }
    }
    else
    {
      v17 = *a1;
      if ( (unsigned __int64)a1[2] < v16 )
      {
        v17 = qvector_reserve(a1, *a1, v16, 1u);
        *a1 = v17;
      }
      bzero((char *)a1[1] + (_QWORD)v17, v16 - (_QWORD)a1[1]);
      a1[1] = (_QWORD *)v16;
    }
    return memcpy((char *)v15 + (_QWORD)*a1, v12, v14);
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
