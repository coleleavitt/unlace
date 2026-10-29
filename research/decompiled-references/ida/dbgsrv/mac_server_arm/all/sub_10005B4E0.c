/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B4E0
// Address: 0x000000010005B4E0

//----- (000000010005B4E0) ----------------------------------------------------
_QWORD *__fastcall sub_10005B4E0(int a1, unsigned __int64 *a2)
{
  __int64 v3; // x24
  __int64 v4; // x21
  _QWORD *v5; // x0
  _QWORD *v6; // x20
  __int64 i; // x26
  _QWORD *v8; // x27
  const char *v9; // x22
  unsigned __int64 v10; // x28
  const char *v11; // x21
  size_t v13; // x0
  size_t v14; // x23
  unsigned __int64 v15; // x21
  _QWORD *v16; // x1
  const char *v17; // x8
  size_t v19; // x0
  size_t v20; // x22
  unsigned __int64 v21; // x23
  _QWORD *v22; // x1

  if ( a1 < 1 )
    return nullptr;
  v3 = (unsigned int)a1;
  v4 = 56LL * (unsigned int)a1;
  v5 = operator new[](v4 + 16);
  *v5 = 56;
  v5[1] = v3;
  v6 = v5 + 2;
  bzero(v5 + 2, 56 * ((v4 - 56) / 0x38uLL) + 56);
  for ( i = 0; i != v3; ++i )
  {
    v8 = &v6[7 * i];
    *(_DWORD *)v8 = unpack_dd(a2, a2[1]);
    *((_DWORD *)v8 + 1) = unpack_dd(a2, a2[1]);
    v9 = (const char *)*a2;
    v10 = a2[1];
    v11 = (const char *)*a2;
    do
    {
      if ( (unsigned __int64)v11 >= v10 )
      {
        v11 = (const char *)*a2;
LABEL_14:
        v8[2] = 0;
        goto LABEL_15;
      }
    }
    while ( *v11++ );
    *a2 = (unsigned __int64)v11;
    if ( !v9 )
      goto LABEL_14;
    v13 = strlen(v9);
    if ( !v13 )
      goto LABEL_14;
    v14 = v13;
    v15 = v13 + 1;
    v16 = (_QWORD *)v8[1];
    if ( v8[3] < v13 + 1 )
    {
      v16 = qvector_reserve(v8 + 1, v16, v15, 1u);
      v8[1] = v16;
    }
    v8[2] = v15;
    memmove(v16, v9, v14);
    *(_BYTE *)(v8[1] + v14) = 0;
    v11 = (const char *)*a2;
    v10 = a2[1];
LABEL_15:
    v17 = v11;
    do
    {
      if ( (unsigned __int64)v17 >= v10 )
        goto LABEL_3;
    }
    while ( *v17++ );
    *a2 = (unsigned __int64)v17;
    if ( !v11 || (v19 = strlen(v11)) == 0 )
    {
LABEL_3:
      v8[5] = 0;
      continue;
    }
    v20 = v19;
    v21 = v19 + 1;
    v22 = (_QWORD *)v8[4];
    if ( v8[6] < v19 + 1 )
    {
      v22 = qvector_reserve(v8 + 4, v22, v21, 1u);
      v8[4] = v22;
    }
    v8[5] = v21;
    memmove(v22, v11, v20);
    *(_BYTE *)(v8[4] + v20) = 0;
  }
  return v6;
}
