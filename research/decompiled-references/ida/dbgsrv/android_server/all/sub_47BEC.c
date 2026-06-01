/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BEC
// Address: 0x0000000000047BEC

//----- (0000000000047BEC) ----------------------------------------------------
void __fastcall sub_47BEC(char **a1, _QWORD *a2)
{
  char *v2; // x21
  char *v5; // x22
  unsigned __int64 v6; // x9
  char *v7; // x23
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x24
  size_t v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  char *v14; // x0
  char *v15; // x8
  char *v16; // x9
  __int64 v17; // t1
  char *v18; // x10
  char *v19; // x11
  __int64 v20; // x8
  std::logic_error *exception; // x19

  v2 = a1[1];
  if ( v2 != *a1 )
  {
    v5 = a1[1];
    goto LABEL_26;
  }
  v7 = a1[2];
  v6 = (unsigned __int64)a1[3];
  if ( (unsigned __int64)v7 < v6 )
  {
    v8 = (__int64)(v6 - (_QWORD)v7) >> 3;
    if ( v8 + 1 >= 0 )
      v9 = v8 + 1;
    else
      v9 = v8 + 2;
    v10 = v9 >> 1;
    v11 = v7 - v2;
    v12 = (__int64)&v7[8 * (v9 >> 1)];
    if ( v7 == v2 )
    {
      v5 = (char *)v12;
    }
    else
    {
      v5 = (char *)(v12 - v11);
      memmove((void *)(v12 - v11), v2, v11);
      v12 = (__int64)&a1[2][8 * v10];
    }
    a1[1] = v5;
    a1[2] = (char *)v12;
    goto LABEL_26;
  }
  if ( (char *)v6 == *a1 )
    v13 = 1;
  else
    v13 = (__int64)(v6 - (_QWORD)*a1) >> 2;
  if ( v13 )
  {
    if ( v13 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_161528;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::out_of_range::~out_of_range);
    }
    v14 = (char *)operator new(8 * v13);
  }
  else
  {
    v14 = nullptr;
  }
  v5 = &v14[8 * ((v13 + 3) >> 2)];
  v15 = &v14[8 * v13];
  if ( v2 == v7 )
  {
    *a1 = v14;
    a1[1] = v5;
    a1[2] = v5;
    a1[3] = v15;
    if ( !v2 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v16 = &v14[8 * ((v13 + 3) >> 2)];
  do
  {
    v17 = *(_QWORD *)v2;
    v2 += 8;
    *(_QWORD *)v16 = v17;
    v16 += 8;
  }
  while ( v7 != v2 );
  v2 = *a1;
  v18 = a1[1];
  v19 = a1[2];
  *a1 = v14;
  a1[1] = v5;
  a1[2] = v16;
  a1[3] = v15;
  if ( v19 != v18 )
  {
    v20 = v18 - v19;
    do
      v20 += 8;
    while ( v20 );
  }
  if ( v2 )
  {
LABEL_25:
    operator delete(v2);
    v5 = a1[1];
  }
LABEL_26:
  *((_QWORD *)v5 - 1) = *a2;
  a1[1] -= 8;
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
