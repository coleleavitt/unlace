/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_255CC
// Address: 0x000255CC

//----- (000255CC) --------------------------------------------------------
int __fastcall sub_255CC(char **a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  char **v3; // r4
  char *v4; // r0
  char *v5; // r6
  char *v6; // r7
  char *v7; // r5
  unsigned int v8; // r1
  int v9; // r1
  char *v10; // r0
  size_t v11; // r2
  int v12; // r5
  int v13; // r1
  unsigned int v14; // r7
  unsigned int v15; // r2
  char *v16; // r0
  char *v17; // r1
  int v18; // r2
  char *v19; // r2
  int v20; // r3
  char *v21; // r0
  char *v22; // r1
  int v23; // r0
  char **v24; // r4
  int result; // r0
  std::logic_error *exception; // r4

  v2 = a2;
  v3 = a1;
  v4 = *a1;
  v5 = v3[1];
  if ( v5 != v4 )
  {
    v6 = v3[1];
    goto LABEL_23;
  }
  v7 = v3[2];
  v8 = (unsigned int)v3[3];
  if ( (unsigned int)v7 < v8 )
  {
    v9 = 4 * ((((int)(v8 - (_DWORD)v7) >> 2) + 1) / 2);
    v10 = &v7[v9];
    v11 = v7 - v5;
    if ( v7 == v5 )
    {
      v6 = &v7[v9];
    }
    else
    {
      v6 = &v10[-v11];
      v12 = v9;
      memmove(&v10[-v11], v5, v11);
      v10 = &v3[2][v12];
    }
    v2 = a2;
    v3[1] = v6;
    v3[2] = v10;
    goto LABEL_23;
  }
  v13 = v8 - (_DWORD)v4;
  v14 = 1;
  if ( v13 )
    v14 = v13 >> 1;
  v15 = (v14 + 3) >> 2;
  v16 = nullptr;
  if ( v14 )
  {
    if ( v14 >> 30 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(8u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_DWORD *)exception = &off_DBAE4;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::length_error::~length_error);
    }
    v16 = (char *)operator new(4 * v14);
    v15 = (v14 + 3) >> 2;
  }
  v17 = &v16[4 * v14];
  v18 = 4 * v15;
  v6 = &v16[v18];
  if ( v5 == v7 )
  {
    *v3 = v16;
    v3[1] = v6;
    v24 = v3 + 2;
    *v24 = v6;
    v24[1] = v17;
    v2 = a2;
    v3 = v24 - 2;
    if ( !v5 )
      goto LABEL_23;
LABEL_22:
    operator delete(v5);
    v6 = v3[1];
    goto LABEL_23;
  }
  v19 = &v16[v18];
  do
  {
    v20 = *(_DWORD *)v5;
    v5 += 4;
    *(_DWORD *)v19 = v20;
    v19 += 4;
  }
  while ( v7 != v5 );
  v3[3] = v17;
  v5 = *v3;
  *v3 = v16;
  v21 = v3[1];
  v3[1] = v6;
  v22 = v3[2];
  v3[2] = v19;
  v2 = a2;
  if ( v22 != v21 )
  {
    v23 = v21 - v22;
    do
      v23 += 4;
    while ( v23 );
  }
  if ( v5 )
    goto LABEL_22;
LABEL_23:
  *((_DWORD *)v6 - 1) = *v2;
  result = (int)(v3[1] - 4);
  v3[1] = (char *)result;
  return result;
}
// DBAE4: using guessed type _UNKNOWN *;
// DBAF0: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
