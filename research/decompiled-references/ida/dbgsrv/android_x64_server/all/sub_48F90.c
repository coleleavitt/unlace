/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F90
// Address: 0x0000000000048F90

//----- (0000000000048F90) ----------------------------------------------------
__int64 __fastcall sub_48F90(char **a1, __int64 *a2)
{
  char *v4; // rbx
  char *v5; // r12
  char *v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  size_t v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  char *v13; // rax
  char *v14; // rcx
  char *v15; // rdx
  char *v16; // rsi
  char *v17; // rdi
  __int64 v18; // rsi
  __int64 result; // rax
  std::logic_error *exception; // rbx

  v4 = a1[1];
  if ( v4 != *a1 )
  {
    v5 = a1[1];
    goto LABEL_22;
  }
  v6 = a1[2];
  v7 = (unsigned __int64)a1[3];
  if ( (unsigned __int64)v6 < v7 )
  {
    v8 = (__int64)(((__int64)(v7 - (_QWORD)v6) >> 3)
                 + ((unsigned __int64)(((__int64)(v7 - (_QWORD)v6) >> 3) + 1) >> 63)
                 + 1) >> 1;
    v9 = (__int64)&v6[8 * v8];
    v10 = v6 - v4;
    if ( v10 )
    {
      v5 = (char *)(v9 - v10);
      memmove((void *)(v9 - v10), v4, v10);
      v9 = (__int64)&a1[2][8 * v8];
    }
    else
    {
      v5 = (char *)v9;
    }
    a1[1] = v5;
    a1[2] = (char *)v9;
    goto LABEL_22;
  }
  v11 = v7 - (_QWORD)*a1;
  v12 = 1;
  if ( v11 )
    v12 = v11 >> 2;
  if ( v12 )
  {
    if ( v12 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_1516A8;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::length_error::~length_error);
    }
    v13 = (char *)operator new(8 * v12);
  }
  else
  {
    v13 = nullptr;
  }
  v5 = &v13[8 * ((v12 + 3) >> 2)];
  v14 = &v13[8 * v12];
  if ( v4 == v6 )
  {
    *a1 = v13;
    a1[1] = v5;
    a1[2] = v5;
    a1[3] = v14;
    if ( !v4 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v15 = &v13[8 * ((v12 + 3) >> 2)];
  do
  {
    *(_QWORD *)v15 = *(_QWORD *)v4;
    v15 += 8;
    v4 += 8;
  }
  while ( v6 != v4 );
  v4 = *a1;
  v16 = a1[1];
  v17 = a1[2];
  *a1 = v13;
  a1[1] = v5;
  a1[2] = v15;
  a1[3] = v14;
  if ( v17 != v16 )
  {
    v18 = v16 - v17;
    do
      v18 += 8;
    while ( v18 );
  }
  if ( v4 )
  {
LABEL_21:
    operator delete(v4);
    v5 = a1[1];
  }
LABEL_22:
  result = *a2;
  *((_QWORD *)v5 - 1) = *a2;
  a1[1] -= 8;
  return result;
}
// 1516A8: using guessed type void (__fastcall *off_1516A8[2])(std::length_error *__hidden this);
// 1516C0: using guessed type void (__fastcall *`typeinfo for'std::length_error)(std::type_info *__hidden this);
