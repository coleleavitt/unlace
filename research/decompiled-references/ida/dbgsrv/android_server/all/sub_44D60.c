/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D60
// Address: 0x0000000000044D60

//----- (0000000000044D60) ----------------------------------------------------
size_t __fastcall sub_44D60(size_t result, _QWORD *a2, int a3)
{
  size_t v4; // x20
  size_t *v5; // x22
  _QWORD *v6; // x28
  __int64 v7; // x21
  size_t v8; // x24
  void **v9; // x23
  const void *v10; // x25
  void *v11; // x1
  unsigned __int64 v12; // x27
  size_t v13; // x26
  void *v14; // x21
  __int64 v15; // x8
  unsigned __int64 v16; // x9
  char *v17; // x1
  unsigned __int64 v18; // x2
  __int64 v20; // x8
  unsigned __int64 v21; // x9
  char *v22; // x1
  unsigned __int64 v23; // x2
  void *v24; // x9
  __int64 v25; // x8
  pthread_mutex_t *v26; // [xsp+10h] [xbp-70h]
  void *v27; // [xsp+18h] [xbp-68h] BYREF

  v4 = result;
  if ( *a2 )
  {
    v5 = (size_t *)(result + 24);
    v6 = a2 + 1;
    v26 = (pthread_mutex_t *)(result + 48);
    do
    {
      v7 = *(_QWORD *)(v4 + 32);
      if ( *(_QWORD *)(v4 + 40) >= (unsigned __int64)(v7 + 1) )
      {
        v8 = *v5;
      }
      else
      {
        result = (size_t)qvector_reserve((pthread_mutex_t *)(v4 + 24), *(void **)(v4 + 24), v7 + 1, 0x18u);
        v7 = *(_QWORD *)(v4 + 32);
        v8 = result;
        *(_QWORD *)(v4 + 24) = result;
      }
      v9 = (void **)(v8 + 24 * v7);
      v9[1] = nullptr;
      v9[2] = nullptr;
      *v9 = nullptr;
      ++*(_QWORD *)(v4 + 32);
      v10 = (const void *)*(v6 - 1);
      if ( v10 && (result = strlen((const char *)*(v6 - 1))) != 0 )
      {
        v11 = *v9;
        v12 = result + 1;
        v13 = result;
        if ( *(_QWORD *)(v8 + 24 * v7 + 16) < result + 1 )
        {
          v11 = qvector_reserve((pthread_mutex_t *)(v8 + 24 * v7), v11, v12, 1u);
          *v9 = v11;
        }
        *(_QWORD *)(v8 + 24 * v7 + 8) = v12;
        result = (size_t)memmove(v11, v10, v13);
        *((_BYTE *)*v9 + v13) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 24 * v7 + 8) = 0;
      }
      v14 = *v9;
      v27 = *v9;
      v15 = *(_QWORD *)(v4 + 56);
      v16 = *(_QWORD *)(v4 + 64);
      v17 = *(char **)(v4 + 48);
      v18 = v15 + 1;
      if ( v17 > (char *)&v27 || &v17[8 * v16] <= (char *)&v27 )
      {
        if ( v16 < v18 )
        {
          result = (size_t)qvector_reserve(v26, v17, v18, 8u);
          *(_QWORD *)(v4 + 48) = result;
          v15 = *(_QWORD *)(v4 + 56);
          v14 = v27;
          v17 = (char *)result;
        }
      }
      else if ( v16 < v18 )
      {
        result = (size_t)qvector_reserve(v26, v17, v18, 8u);
        v15 = *(_QWORD *)(v4 + 56);
        v17 = (char *)result;
        *(_QWORD *)(v4 + 48) = result;
      }
      *(_QWORD *)&v17[8 * v15] = v14;
      ++*(_QWORD *)(v4 + 56);
    }
    while ( *v6++ );
  }
  else
  {
    v26 = (pthread_mutex_t *)(result + 48);
  }
  v27 = nullptr;
  v20 = *(_QWORD *)(v4 + 56);
  v21 = *(_QWORD *)(v4 + 64);
  v22 = *(char **)(v4 + 48);
  v23 = v20 + 1;
  if ( v22 <= (char *)&v27 && &v22[8 * v21] > (char *)&v27 )
  {
    if ( v21 < v23 )
    {
      result = (size_t)qvector_reserve(v26, v22, v23, 8u);
      v26->__align = result;
      v20 = *(_QWORD *)(v4 + 56);
      v22 = (char *)result;
    }
    goto LABEL_27;
  }
  if ( v21 >= v23 )
  {
LABEL_27:
    v24 = nullptr;
    goto LABEL_28;
  }
  result = (size_t)qvector_reserve(v26, v22, v23, 8u);
  v26->__align = result;
  v20 = *(_QWORD *)(v4 + 56);
  v24 = v27;
  v22 = (char *)result;
LABEL_28:
  *(_QWORD *)&v22[8 * v20] = v24;
  v25 = *(_QWORD *)(v4 + 56);
  *(_DWORD *)(v4 + 96) = a3;
  *(_QWORD *)(v4 + 56) = v25 + 1;
  return result;
}
