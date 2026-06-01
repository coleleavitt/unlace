/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49310
// Address: 0x0000000000049310

//----- (0000000000049310) ----------------------------------------------------
__int64 __fastcall sub_49310(_BYTE **a1, __int64 *a2)
{
  __int64 *v2; // r14
  char *v4; // r13
  char *v5; // rax
  _BYTE *v6; // r12
  char *v7; // rbx
  __int64 v8; // rbp
  char *v9; // r12
  signed __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  char *v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // rbp
  char *v17; // rsi
  char *v18; // rcx
  _BYTE *v19; // rdi
  _BYTE *v20; // rbp
  __int64 v21; // rdi
  __int64 result; // rax
  std::logic_error *exception; // rbx

  v2 = a2;
  v4 = a1[2];
  v5 = a1[3];
  if ( v4 != v5 )
    goto LABEL_20;
  v6 = *a1;
  v7 = a1[1];
  if ( v7 > *a1 )
  {
    v8 = (__int64)(((v7 - *a1) >> 3) + ((unsigned __int64)(((v7 - *a1) >> 3) + 1) >> 63) + 1) >> 1;
    v9 = &v7[-8 * v8];
    v10 = v4 - v7;
    v11 = (__int64)v9;
    if ( v10 )
    {
      memmove(v9, v7, v10);
      v11 = (__int64)&a1[1][-8 * v8];
    }
    v4 = &v9[8 * (v10 >> 3)];
    a1[2] = v4;
    a1[1] = (_BYTE *)v11;
    v2 = a2;
    goto LABEL_20;
  }
  v12 = v5 - v6;
  v13 = 1;
  if ( v12 )
    v13 = v12 >> 2;
  if ( v13 )
  {
    if ( v13 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_1516A8;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::length_error::~length_error);
    }
    v14 = (char *)operator new(8 * v13);
  }
  else
  {
    v14 = nullptr;
  }
  v15 = &v14[8 * v13];
  v16 = v13 >> 2;
  v17 = &v14[8 * v16];
  if ( v7 == v4 )
  {
    *a1 = v14;
    a1[1] = v17;
    a1[2] = v17;
    a1[3] = v15;
    v4 = &v14[8 * v16];
    if ( !v6 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v18 = &v14[8 * v16];
  do
  {
    *(_QWORD *)v18 = *(_QWORD *)v7;
    v18 += 8;
    v7 += 8;
  }
  while ( v4 != v7 );
  v6 = *a1;
  v19 = a1[1];
  v20 = a1[2];
  *a1 = v14;
  a1[1] = v17;
  a1[2] = v18;
  a1[3] = v15;
  if ( v20 != v19 )
  {
    v21 = v19 - v20;
    do
      v21 += 8;
    while ( v21 );
  }
  v4 = v18;
  if ( v6 )
  {
LABEL_19:
    operator delete(v6);
    v4 = a1[2];
  }
LABEL_20:
  result = *v2;
  *(_QWORD *)v4 = *v2;
  a1[2] += 8;
  return result;
}
// 1516A8: using guessed type void (__fastcall *off_1516A8[2])(std::length_error *__hidden this);
// 1516C0: using guessed type void (__fastcall *`typeinfo for'std::length_error)(std::type_info *__hidden this);
