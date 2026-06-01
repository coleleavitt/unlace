/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004CF84
// Address: 0x000000010004CF84

//----- (000000010004CF84) ----------------------------------------------------
__int64 __fastcall sub_10004CF84(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v10; // x21
  __int64 v11; // x24
  __int64 v12; // t1
  char *v13; // x20
  const char *v14; // x22
  _QWORD *v15; // x23
  const char *v16; // x0
  int v17; // w0
  const char *v18; // x1
  __int64 v19; // x21
  unsigned __int64 v20; // x9
  size_t v21; // x21
  const void *v23; // x20
  _QWORD *v24; // x1
  char *v25; // [xsp+0h] [xbp-60h] BYREF
  __int64 v26; // [xsp+8h] [xbp-58h]
  __int64 v27; // [xsp+10h] [xbp-50h]

  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  sub_10004C9E4(a3, &v25, a3, a4, a5, a6, a7, a8);
  v12 = *(_QWORD *)(a1 + 8);
  v10 = (_QWORD *)(a1 + 8);
  v11 = v12;
  v13 = v25;
  if ( !v12 )
  {
    v19 = 0;
    if ( !v25 )
      return v19;
    goto LABEL_30;
  }
  if ( v26 )
    v14 = v25;
  else
    v14 = &byte_10007AE40;
  v15 = v10;
  do
  {
    if ( *(_QWORD *)(v11 + 40) )
      v16 = *(const char **)(v11 + 32);
    else
      v16 = &byte_10007AE40;
    v17 = strcmp(v16, v14);
    if ( v17 >= 0 )
      v15 = (_QWORD *)v11;
    v11 = *(_QWORD *)(v11 + (((unsigned int)v17 >> 28) & 8));
  }
  while ( v11 );
  if ( v15 == v10 )
  {
    v19 = 0;
    goto LABEL_29;
  }
  if ( v15[5] )
    v18 = (const char *)v15[4];
  else
    v18 = &byte_10007AE40;
  v19 = 0;
  if ( strcmp(v14, v18) < 0 || !a2 )
  {
LABEL_29:
    if ( !v13 )
      return v19;
LABEL_30:
    v26 = 0;
    qfree(v13);
    return v19;
  }
  if ( v15 + 7 == a2 )
    goto LABEL_24;
  v20 = v15[8];
  if ( v20 )
    v21 = v20 - 1;
  else
    v21 = 0;
  if ( v20 < 2 )
  {
    a2[1] = 0;
LABEL_24:
    v19 = 1;
    if ( !v13 )
      return v19;
    goto LABEL_30;
  }
  v23 = (const void *)v15[7];
  v24 = (_QWORD *)*a2;
  if ( a2[2] <= v21 )
  {
    v24 = qvector_reserve(a2, v24, v21 + 1, 1u);
    *a2 = v24;
  }
  a2[1] = v21 + 1;
  memmove(v24, v23, v21);
  *(_BYTE *)(*a2 + v21) = 0;
  v19 = 1;
  v13 = v25;
  if ( v25 )
    goto LABEL_30;
  return v19;
}
// 10007AE40: using guessed type char byte_10007AE40;
