/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FAA8
// Address: 0x000000000009FAA8

//----- (000000000009FAA8) ----------------------------------------------------
_QWORD *__fastcall sub_9FAA8(int a1, unsigned __int64 *a2)
{
  __int64 v3; // x22
  __int64 v4; // x9
  _BOOL4 v5; // w8
  bool v6; // cf
  unsigned __int64 v7; // x9
  int v8; // w10
  unsigned __int64 v9; // x0
  _QWORD *v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // x26
  __int64 v14; // x27
  void *v15; // x0
  void *v16; // x0
  _DWORD *v17; // x21
  const char *v18; // x21
  _BYTE *v19; // x9
  size_t v21; // x0
  unsigned __int64 v22; // x24
  size_t v23; // x22
  void **v24; // x23
  const char *v25; // x21
  _BYTE *v26; // x9
  size_t v28; // x0
  unsigned __int64 v29; // x24
  size_t v30; // x22
  void **v31; // x23

  if ( a1 < 1 )
    return nullptr;
  v3 = a1;
  v4 = 56LL * a1;
  v5 = !is_mul_ok(a1, 0x38u);
  v6 = __CFADD__(v4, 8);
  v7 = v4 + 8;
  v8 = v6;
  if ( v5 | v8 )
    v9 = -1;
  else
    v9 = v7;
  v11 = (_QWORD *)operator new[](v9);
  *v11 = v3;
  v12 = v11 + 1;
  memset(v11 + 1, 0, 56 * ((56LL * a1 - 56) / 0x38uLL) + 56);
  v13 = 0;
  v14 = (unsigned int)a1;
  do
  {
    v17 = &v12[7 * v13];
    *v17 = unpack_dd(a2, a2[1]);
    v17[1] = unpack_dd(a2, a2[1]);
    v18 = (const char *)*a2;
    v19 = (_BYTE *)*a2;
    do
    {
      if ( (unsigned __int64)v19 >= a2[1] )
        goto LABEL_20;
    }
    while ( *v19++ );
    *a2 = (unsigned __int64)v19;
    if ( !v18 || (v21 = strlen(v18)) == 0 )
    {
LABEL_20:
      v12[7 * v13 + 2] = 0;
      goto LABEL_21;
    }
    v22 = v21 + 1;
    v23 = v21;
    v24 = (void **)&v12[7 * v13 + 1];
    if ( v12[7 * v13 + 3] >= v21 + 1 )
    {
      v15 = *v24;
    }
    else
    {
      v15 = qvector_reserve((pthread_mutex_t *)&v12[7 * v13 + 1], *v24, v22, 1u);
      *v24 = v15;
    }
    v12[7 * v13 + 2] = v22;
    memmove(v15, v18, v23);
    *((_BYTE *)*v24 + v23) = 0;
LABEL_21:
    v25 = (const char *)*a2;
    v26 = (_BYTE *)*a2;
    do
    {
      if ( (unsigned __int64)v26 >= a2[1] )
        goto LABEL_28;
    }
    while ( *v26++ );
    *a2 = (unsigned __int64)v26;
    if ( !v25 || (v28 = strlen(v25)) == 0 )
    {
LABEL_28:
      v12[7 * v13 + 5] = 0;
      goto LABEL_29;
    }
    v29 = v28 + 1;
    v30 = v28;
    v31 = (void **)&v12[7 * v13 + 4];
    if ( v12[7 * v13 + 6] >= v28 + 1 )
    {
      v16 = *v31;
    }
    else
    {
      v16 = qvector_reserve((pthread_mutex_t *)&v12[7 * v13 + 4], *v31, v29, 1u);
      *v31 = v16;
    }
    v12[7 * v13 + 5] = v29;
    memmove(v16, v25, v30);
    *((_BYTE *)*v31 + v30) = 0;
LABEL_29:
    ++v13;
  }
  while ( v13 != v14 );
  return v12;
}
