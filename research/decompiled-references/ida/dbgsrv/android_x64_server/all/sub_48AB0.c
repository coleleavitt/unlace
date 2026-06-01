/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48AB0
// Address: 0x0000000000048AB0

//----- (0000000000048AB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_48AB0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rax
  char *v12; // r13
  char *v13; // rcx
  char *v14; // r12
  void *v15; // r15
  char *v16; // rbx
  __int64 v17; // rbp
  char *v18; // r15
  __int64 v19; // r12
  char *v20; // rax
  unsigned __int64 v21; // rbp
  char *v22; // rax
  char *v23; // rdx
  unsigned __int64 v24; // rbp
  char *v25; // rsi
  char *v26; // rcx
  char *v27; // rdi
  char *v28; // rbp
  char *v29; // rdi
  char *v30; // rdi
  _BYTE *v31; // rax
  char *v32; // rdx
  __int64 v33; // rax
  std::logic_error *v35; // r14
  std::logic_error *exception; // r14
  void *v37; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h]
  char *v40; // [rsp+18h] [rbp-50h]
  char *v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  unsigned __int64 v43; // [rsp+30h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v3 - v2;
  v5 = 56 * ((v3 - v2) >> 3) - 1;
  if ( v3 == v2 )
    v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v5 - (v6 + *(_QWORD *)(a1 + 40))) >= 0x38 )
  {
    *(_QWORD *)(a1 + 32) = v6 + 56;
    ptr = *(void **)(v3 - 8);
    *(_QWORD *)(a1 + 16) = v3 - 8;
    sub_48F90((char **)a1, (__int64 *)&ptr);
    return __readfsqword(0x28u);
  }
  v7 = *(_QWORD *)(a1 + 24) - *(_QWORD *)a1;
  if ( v4 < v7 )
  {
    if ( v2 == *(_QWORD *)a1 )
    {
      ptr = operator new(0xFC0u);
      sub_49310((_BYTE **)a1, (__int64 *)&ptr);
      v8 = *(_QWORD *)(a1 + 16);
      ptr = *(void **)(v8 - 8);
      *(_QWORD *)(a1 + 16) = v8 - 8;
      sub_48F90((char **)a1, (__int64 *)&ptr);
    }
    else
    {
      ptr = operator new(0xFC0u);
      sub_49150((char **)a1, (__int64 *)&ptr);
    }
    if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8) == 8 )
      v11 = 28;
    else
      v11 = *(_QWORD *)(a1 + 32) + 56LL;
    *(_QWORD *)(a1 + 32) = v11;
    return __readfsqword(0x28u);
  }
  v9 = 1;
  if ( v7 )
    v9 = v7 >> 2;
  v41 = nullptr;
  v42 = a1 + 24;
  if ( v9 )
  {
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_1516A8;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::length_error::~length_error);
    }
    v10 = (char *)operator new(8 * v9);
  }
  else
  {
    v10 = nullptr;
  }
  ptr = v10;
  v40 = v10;
  src = v10;
  v41 = &v10[8 * v9];
  v37 = operator new(0xFC0u);
  sub_494F0((_BYTE **)&ptr, (__int64 *)&v37);
  v12 = *(char **)(a1 + 8);
  v13 = *(char **)(a1 + 16);
  if ( v12 != v13 )
  {
    v14 = v40;
    while ( 1 )
    {
      if ( v14 == v41 )
      {
        v15 = ptr;
        v16 = (char *)src;
        if ( src > ptr )
        {
          v17 = (__int64)((((_BYTE *)src - (_BYTE *)ptr) >> 3)
                        + ((unsigned __int64)((((_BYTE *)src - (_BYTE *)ptr) >> 3) + 1) >> 63)
                        + 1) >> 1;
          v18 = (char *)src - 8 * v17;
          v19 = (v41 - (_BYTE *)src) >> 3;
          v20 = v18;
          if ( v41 != src )
          {
            memmove(v18, src, v41 - (_BYTE *)src);
            v20 = (char *)src - 8 * v17;
          }
          v14 = &v18[8 * v19];
          v40 = v14;
          src = v20;
          goto LABEL_41;
        }
        v21 = (v41 - (_BYTE *)ptr) >> 2;
        if ( v41 == ptr )
          v21 = 1;
        if ( v21 )
        {
          if ( v21 > 0x1FFFFFFFFFFFFFFFLL )
          {
            v35 = (std::logic_error *)_cxa_allocate_exception(0x10u);
            std::logic_error::logic_error(v35, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
            *(_QWORD *)v35 = off_1516A8;
            _cxa_throw(
              v35,
              (struct type_info *)&`typeinfo for'std::length_error,
              (void (*)(void *))std::length_error::~length_error);
          }
          v22 = (char *)operator new(8 * v21);
        }
        else
        {
          v22 = nullptr;
        }
        v23 = &v22[8 * v21];
        v24 = v21 >> 2;
        v25 = &v22[8 * v24];
        v26 = v25;
        if ( v16 == v14 )
        {
          ptr = v22;
          src = &v22[8 * v24];
          v40 = (char *)src;
          v41 = v23;
          v14 = (char *)src;
          if ( !v15 )
            goto LABEL_41;
        }
        else
        {
          do
          {
            *(_QWORD *)v26 = *(_QWORD *)v16;
            v26 += 8;
            v16 += 8;
          }
          while ( v14 != v16 );
          v15 = ptr;
          v27 = (char *)src;
          v28 = v40;
          ptr = v22;
          src = v25;
          v40 = v26;
          v41 = v23;
          if ( v28 != v27 )
          {
            v29 = (char *)(v27 - v28);
            do
              v29 += 8;
            while ( v29 );
          }
          v14 = v26;
          if ( !v15 )
            goto LABEL_41;
        }
        operator delete(v15);
        v14 = v40;
      }
LABEL_41:
      *(_QWORD *)v14 = *(_QWORD *)v12;
      v14 = v40 + 8;
      v40 += 8;
      v12 += 8;
      v13 = *(char **)(a1 + 16);
      if ( v12 == v13 )
      {
        v12 = *(char **)(a1 + 8);
        goto LABEL_44;
      }
    }
  }
  v14 = v40;
LABEL_44:
  v30 = *(char **)a1;
  *(_QWORD *)a1 = ptr;
  ptr = v30;
  v31 = src;
  *(_QWORD *)(a1 + 8) = src;
  src = v12;
  *(_QWORD *)(a1 + 16) = v14;
  v40 = v13;
  v32 = *(char **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v41;
  v41 = v32;
  if ( v14 - v31 == 8 )
    v33 = 28;
  else
    v33 = *(_QWORD *)(a1 + 32) + 56LL;
  *(_QWORD *)(a1 + 32) = v33;
  if ( v13 != v12 )
  {
    do
      v13 -= 8;
    while ( v12 != v13 );
    v40 = v12;
  }
  if ( v30 )
    operator delete(v30);
  return __readfsqword(0x28u);
}
// 1516A8: using guessed type void (__fastcall *off_1516A8[2])(std::length_error *__hidden this);
// 1516C0: using guessed type void (__fastcall *`typeinfo for'std::length_error)(std::type_info *__hidden this);
