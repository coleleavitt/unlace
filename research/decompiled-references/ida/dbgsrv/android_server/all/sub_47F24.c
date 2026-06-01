/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F24
// Address: 0x0000000000047F24

//----- (0000000000047F24) ----------------------------------------------------
void __fastcall sub_47F24(_BYTE **a1, _QWORD *a2)
{
  char *v2; // x8
  char *v3; // x23
  _BYTE *v6; // x21
  char *v7; // x22
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x8
  bool v11; // zf
  size_t v12; // x2
  __int64 v13; // x8
  char *v14; // x21
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  char *v21; // x0
  char *v22; // x10
  char *v23; // x9
  char *v24; // x8
  __int64 v25; // t1
  _BYTE *v26; // x11
  _BYTE *v27; // x12
  __int64 v28; // x9
  std::logic_error *exception; // x19

  v3 = a1[2];
  v2 = a1[3];
  if ( v3 != v2 )
    goto LABEL_25;
  v6 = *a1;
  v7 = a1[1];
  v8 = v7 - *a1;
  if ( v7 > *a1 )
  {
    v9 = v8 >> 3;
    if ( (v8 >> 3) + 1 >= 0 )
      v10 = v9 + 1;
    else
      v10 = v9 + 2;
    v12 = v3 - v7;
    v11 = v3 == v7;
    v13 = v10 >> 1;
    v14 = &v7[-8 * v13];
    v15 = (v3 - v7) >> 3;
    if ( v11 )
    {
      v17 = (__int64)&v7[-8 * v13];
    }
    else
    {
      v16 = -v13;
      memmove(&v7[-8 * v13], a1[1], v12);
      v17 = (__int64)&a1[1][8 * v16];
    }
    v3 = &v14[8 * v15];
    a1[1] = (_BYTE *)v17;
    a1[2] = v3;
    goto LABEL_25;
  }
  v18 = v2 - v6;
  v11 = v18 == 0;
  v19 = v18 >> 2;
  if ( v11 )
    v20 = 1;
  else
    v20 = v19;
  if ( v20 )
  {
    if ( v20 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_161528;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::out_of_range::~out_of_range);
    }
    v21 = (char *)operator new(8 * v20);
  }
  else
  {
    v21 = nullptr;
  }
  v22 = &v21[8 * (v20 >> 2)];
  v23 = &v21[8 * v20];
  if ( v7 == v3 )
  {
    *a1 = v21;
    a1[1] = v22;
    a1[2] = v22;
    a1[3] = v23;
    v3 = &v21[8 * (v20 >> 2)];
    if ( !v6 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v24 = &v21[8 * (v20 >> 2)];
  do
  {
    v25 = *(_QWORD *)v7;
    v7 += 8;
    *(_QWORD *)v24 = v25;
    v24 += 8;
  }
  while ( v3 != v7 );
  v6 = *a1;
  v26 = a1[1];
  v27 = a1[2];
  *a1 = v21;
  a1[1] = v22;
  a1[2] = v24;
  a1[3] = v23;
  if ( v27 != v26 )
  {
    v28 = v26 - v27;
    do
      v28 += 8;
    while ( v28 );
  }
  v3 = v24;
  if ( v6 )
  {
LABEL_24:
    operator delete(v6);
    v3 = a1[2];
  }
LABEL_25:
  *(_QWORD *)v3 = *a2;
  a1[2] += 8;
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
