/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E030
// Address: 0x000000010001E030

//----- (000000010001E030) ----------------------------------------------------
_QWORD *__fastcall sub_10001E030(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // x25
  _QWORD *v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x21
  const void *v10; // x22
  size_t v11; // x0
  size_t v12; // x23
  unsigned __int64 v13; // x24
  _QWORD *v14; // x1
  _QWORD *v15; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x9
  _QWORD *v18; // x1
  unsigned __int64 v19; // x2
  _QWORD *result; // x0
  _QWORD *v21; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x2
  _QWORD *v26; // x9
  _QWORD *v27; // [xsp+0h] [xbp-60h] BYREF

  if ( *a2 )
  {
    v5 = a2 + 1;
    do
    {
      v7 = *(_QWORD **)(a1 + 24);
      v8 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v8 + 1) )
      {
        v7 = qvector_reserve((_QWORD *)(a1 + 24), v7, v8 + 1, 0x18u);
        *(_QWORD *)(a1 + 24) = v7;
        v8 = *(_QWORD *)(a1 + 32);
      }
      v9 = &v7[3 * v8];
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      ++*(_QWORD *)(a1 + 32);
      v10 = (const void *)*(v5 - 1);
      if ( v10 && (v11 = strlen((const char *)*(v5 - 1))) != 0 )
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = (_QWORD *)*v9;
        if ( v9[2] < v11 + 1 )
        {
          v14 = qvector_reserve(v9, v14, v13, 1u);
          *v9 = v14;
        }
        v9[1] = v13;
        memmove(v14, v10, v12);
        *(_BYTE *)(*v9 + v12) = 0;
      }
      else
      {
        v9[1] = 0;
      }
      v15 = (_QWORD *)*v9;
      v27 = v15;
      v16 = *(_QWORD *)(a1 + 56);
      v17 = *(_QWORD *)(a1 + 64);
      v18 = *(_QWORD **)(a1 + 48);
      v19 = v16 + 1;
      if ( v18 > &v27 || &v18[v17] <= &v27 )
      {
        if ( v17 < v19 )
        {
          v18 = qvector_reserve((_QWORD *)(a1 + 48), v18, v19, 8u);
          *(_QWORD *)(a1 + 48) = v18;
          v16 = *(_QWORD *)(a1 + 56);
          v15 = v27;
        }
      }
      else if ( v17 < v19 )
      {
        v18 = qvector_reserve((_QWORD *)(a1 + 48), v18, v19, 8u);
        *(_QWORD *)(a1 + 48) = v18;
        v16 = *(_QWORD *)(a1 + 56);
      }
      v18[v16] = v15;
      ++*(_QWORD *)(a1 + 56);
    }
    while ( *v5++ );
  }
  result = (_QWORD *)(a1 + 48);
  v21 = *(_QWORD **)(a1 + 48);
  v27 = nullptr;
  v22 = *(_QWORD *)(a1 + 56);
  v23 = *(_QWORD *)(a1 + 64);
  v24 = v22 + 1;
  if ( v21 > &v27 || &v21[v23] <= &v27 )
  {
    if ( v23 >= v24 )
    {
      v26 = nullptr;
    }
    else
    {
      result = qvector_reserve(result, v21, v24, 8u);
      v21 = result;
      *(_QWORD *)(a1 + 48) = result;
      v22 = *(_QWORD *)(a1 + 56);
      v26 = v27;
    }
    v21[v22] = v26;
  }
  else
  {
    if ( v23 < v24 )
    {
      result = qvector_reserve(result, v21, v24, 8u);
      v21 = result;
      *(_QWORD *)(a1 + 48) = result;
      v22 = *(_QWORD *)(a1 + 56);
    }
    v21[v22] = 0;
  }
  ++*(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 96) = a3;
  return result;
}
