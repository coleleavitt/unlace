/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25820
// Address: 0x00025820

//----- (00025820) --------------------------------------------------------
int __fastcall sub_25820(char **a1, _DWORD *a2)
{
  _DWORD *v2; // r6
  char **v3; // r4
  char *v4; // r5
  char *v5; // r0
  char *v6; // r1
  char *v7; // r1
  char *v8; // r7
  char *v9; // r6
  int v10; // r1
  size_t v11; // r2
  int v12; // r5
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r6
  unsigned int v16; // r2
  char *v17; // r0
  char *v18; // r3
  char *v19; // r2
  int v20; // r6
  char *v21; // r3
  char *v22; // r0
  char *v23; // r1
  int v24; // r0
  int result; // r0
  char **v26; // r4
  std::logic_error *exception; // r4
  int v28; // [sp+8h] [bp-8h]
  char *v29; // [sp+8h] [bp-8h]

  v2 = a2;
  v3 = a1;
  v4 = a1[2];
  v5 = a1[3];
  if ( v4 != v5 )
  {
    v6 = v4;
    goto LABEL_20;
  }
  v7 = *v3;
  v8 = v3[1];
  if ( v8 <= *v3 )
  {
    v29 = *v3;
    v14 = v5 - v7;
    v15 = 1;
    if ( v14 )
      v15 = v14 >> 1;
    v16 = v15 >> 2;
    v17 = nullptr;
    if ( v15 )
    {
      if ( v15 >> 30 )
      {
        exception = (std::logic_error *)_cxa_allocate_exception(8u);
        std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
        *(_DWORD *)exception = &off_DBAE4;
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::length_error,
          (void (*)(void *))std::length_error::~length_error);
      }
      v17 = (char *)operator new(4 * v15);
      v16 = v15 >> 2;
    }
    v18 = &v17[4 * v15];
    v6 = &v17[4 * v16];
    if ( v8 == v4 )
    {
      *v3 = v17;
      v3[1] = v6;
      v26 = v3 + 2;
      *v26 = v6;
      v26[1] = v18;
      v2 = a2;
      v21 = v29;
      v3 = v26 - 2;
      if ( !v29 )
        goto LABEL_20;
    }
    else
    {
      v19 = &v17[4 * v16];
      do
      {
        v20 = *(_DWORD *)v8;
        v8 += 4;
        *(_DWORD *)v19 = v20;
        v19 += 4;
      }
      while ( v4 != v8 );
      v3[3] = v18;
      v21 = *v3;
      *v3 = v17;
      v22 = v3[1];
      v3[1] = v6;
      v23 = v3[2];
      v3[2] = v19;
      if ( v23 == v22 )
      {
        v6 = v19;
        v2 = a2;
        if ( !v21 )
          goto LABEL_20;
      }
      else
      {
        v24 = v22 - v23;
        v2 = a2;
        do
          v24 += 4;
        while ( v24 );
        v6 = v19;
        if ( !v21 )
          goto LABEL_20;
      }
    }
    operator delete(v21);
    v6 = v3[2];
    goto LABEL_20;
  }
  v9 = &v8[-4 * ((((v8 - v7) >> 2) + 1) / 2)];
  v10 = (((v8 - v7) >> 2) + 1) / -2;
  v11 = v4 - v8;
  v12 = (v4 - v8) >> 2;
  v13 = (int)v9;
  if ( v11 )
  {
    v28 = v10;
    memmove(v9, v8, v11);
    v13 = (int)&v3[1][4 * v28];
  }
  v6 = &v9[4 * v12];
  v3[1] = (char *)v13;
  v3[2] = v6;
  v2 = a2;
LABEL_20:
  *(_DWORD *)v6 = *v2;
  result = (int)(v3[2] + 4);
  v3[2] = (char *)result;
  return result;
}
// DBAE4: using guessed type _UNKNOWN *off_DBAE4;
// DBAF0: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
