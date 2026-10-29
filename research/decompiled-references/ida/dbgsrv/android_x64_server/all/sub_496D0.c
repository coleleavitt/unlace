/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_496D0
// Address: 0x00000000000496D0

//----- (00000000000496D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_496D0(__int64 a1)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rbx
  char *v4; // r14
  __int64 v5; // r13
  char *v6; // rbx
  char *v7; // rax
  char *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rbp
  char *v11; // r12
  signed __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  char *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  char *v20; // rax
  unsigned __int64 v21; // r14
  char *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __int64 *i; // rbx
  __int64 *v26; // rax
  char *v27; // rdi
  __int128 v28; // xmm0
  __m128i v29; // xmm1
  __int64 *v30; // rax
  char *v31; // rdx
  unsigned __int64 v32; // rbp
  char *v33; // rsi
  char *v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rbp
  __int64 v37; // rdi
  unsigned __int64 v39; // rbp
  __int64 v40; // rdi
  __int64 v41; // rbp
  __int64 v42; // rdi
  std::logic_error *exception; // r14
  void *v44; // [rsp+8h] [rbp-70h] BYREF
  __int128 v45; // [rsp+10h] [rbp-68h] BYREF
  __m128i v46; // [rsp+20h] [rbp-58h]
  __int64 v47; // [rsp+30h] [rbp-48h]
  unsigned __int64 v48; // [rsp+40h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 >= 0x38 )
  {
    *(_QWORD *)(a1 + 32) = v2 - 56;
    v3 = *(_QWORD **)(a1 + 8);
    v4 = *(char **)(a1 + 16);
    v5 = *v3;
    v6 = (char *)(v3 + 1);
    *(_QWORD *)(a1 + 8) = v6;
    v7 = *(char **)(a1 + 24);
    if ( v4 != v7 )
      goto LABEL_45;
    v8 = *(char **)a1;
    v9 = (__int64)&v6[-*(_QWORD *)a1];
    if ( (unsigned __int64)v6 > *(_QWORD *)a1 )
    {
LABEL_4:
      v10 = (__int64)((v9 >> 3) + ((unsigned __int64)((v9 >> 3) + 1) >> 63) + 1) >> 1;
      v11 = &v6[-8 * v10];
      v12 = v4 - v6;
      v13 = (__int64)v11;
      if ( v12 )
      {
        memmove(v11, v6, v12);
        v13 = *(_QWORD *)(a1 + 8) - 8 * v10;
      }
      v4 = &v11[8 * (v12 >> 3)];
      *(_QWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 8) = v13;
      goto LABEL_45;
    }
    v23 = v7 - v8;
    v24 = 1;
    if ( v23 )
      v24 = v23 >> 2;
    if ( !v24 )
    {
      v20 = nullptr;
LABEL_37:
      v31 = &v20[8 * v24];
      v32 = v24 >> 2;
      v33 = &v20[8 * v32];
      if ( v6 != v4 )
      {
        v34 = &v20[8 * v32];
        do
        {
          *(_QWORD *)v34 = *(_QWORD *)v6;
          v34 += 8;
          v6 += 8;
        }
        while ( v4 != v6 );
        v8 = *(char **)a1;
        v35 = *(_QWORD *)(a1 + 8);
        v36 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v20;
        *(_QWORD *)(a1 + 8) = v33;
        *(_QWORD *)(a1 + 16) = v34;
        *(_QWORD *)(a1 + 24) = v31;
        if ( v36 != v35 )
        {
          v37 = v35 - v36;
          do
            v37 += 8;
          while ( v37 );
        }
        goto LABEL_43;
      }
      goto LABEL_55;
    }
    if ( !(v24 >> 61) )
    {
      v20 = (char *)operator new(8 * v24);
      goto LABEL_37;
    }
    goto LABEL_57;
  }
  v14 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 3;
  v15 = *(_QWORD *)(a1 + 24) - *(_QWORD *)a1;
  if ( v14 >= v15 >> 3 )
  {
    v21 = 1;
    if ( v15 )
      v21 = v15 >> 2;
    v46.m128i_i64[1] = 0;
    v47 = a1 + 24;
    if ( v21 )
    {
      if ( v21 >> 61 )
      {
LABEL_57:
        exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
        std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
        goto LABEL_58;
      }
      v22 = (char *)operator new(8 * v21);
    }
    else
    {
      v22 = nullptr;
    }
    *(_QWORD *)&v45 = v22;
    v46.m128i_i64[0] = (__int64)&v22[8 * v14];
    *((_QWORD *)&v45 + 1) = v46.m128i_i64[0];
    v46.m128i_i64[1] = (__int64)&v22[8 * v21];
    v44 = operator new(0xFC0u);
    sub_494F0((_BYTE **)&v45, (__int64 *)&v44);
    for ( i = *(__int64 **)(a1 + 16); ; sub_49BE0((char **)&v45, i) )
    {
      v26 = *(__int64 **)(a1 + 8);
      if ( i == v26 )
        break;
      --i;
    }
    v27 = *(char **)a1;
    v28 = v45;
    *(_QWORD *)&v45 = *(_QWORD *)a1;
    *(_OWORD *)a1 = v28;
    *((_QWORD *)&v45 + 1) = v26;
    v29 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    *(__m128i *)(a1 + 16) = v46;
    v46 = v29;
    v30 = (__int64 *)v29.m128i_i64[0];
    if ( (__int64 *)v29.m128i_i64[0] != i )
    {
      do
        --v30;
      while ( i != v30 );
      v46.m128i_i64[0] = (__int64)i;
    }
    if ( v27 )
      operator delete(v27);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)&v45 = operator new(0xFC0u);
      sub_49150((char **)a1, (__int64 *)&v45);
      v16 = *(_QWORD **)(a1 + 8);
      v4 = *(char **)(a1 + 16);
      v5 = *v16;
      v6 = (char *)(v16 + 1);
      *(_QWORD *)(a1 + 8) = v6;
      v17 = *(char **)(a1 + 24);
      if ( v4 != v17 )
        goto LABEL_45;
      v8 = *(char **)a1;
      v9 = (__int64)&v6[-*(_QWORD *)a1];
      if ( (unsigned __int64)v6 > *(_QWORD *)a1 )
        goto LABEL_4;
      v18 = v17 - v8;
      v19 = 1;
      if ( v18 )
        v19 = v18 >> 2;
      if ( v19 )
      {
        if ( v19 >> 61 )
        {
          exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
          std::logic_error::logic_error(
            exception,
            "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
LABEL_58:
          *(_QWORD *)exception = off_1516A8;
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::length_error,
            (void (*)(void *))std::length_error::~length_error);
        }
        v20 = (char *)operator new(8 * v19);
      }
      else
      {
        v20 = nullptr;
      }
      v31 = &v20[8 * v19];
      v39 = v19 >> 2;
      v33 = &v20[8 * v39];
      if ( v6 != v4 )
      {
        v34 = &v20[8 * v39];
        do
        {
          *(_QWORD *)v34 = *(_QWORD *)v6;
          v34 += 8;
          v6 += 8;
        }
        while ( v4 != v6 );
        v8 = *(char **)a1;
        v40 = *(_QWORD *)(a1 + 8);
        v41 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v20;
        *(_QWORD *)(a1 + 8) = v33;
        *(_QWORD *)(a1 + 16) = v34;
        *(_QWORD *)(a1 + 24) = v31;
        if ( v41 != v40 )
        {
          v42 = v40 - v41;
          do
            v42 += 8;
          while ( v42 );
        }
LABEL_43:
        v4 = v34;
        if ( v8 )
        {
LABEL_44:
          operator delete(v8);
          v4 = *(char **)(a1 + 16);
        }
LABEL_45:
        *(_QWORD *)v4 = v5;
        *(_QWORD *)(a1 + 16) += 8LL;
        return __readfsqword(0x28u);
      }
LABEL_55:
      *(_QWORD *)a1 = v20;
      *(_QWORD *)(a1 + 8) = v33;
      *(_QWORD *)(a1 + 16) = v33;
      *(_QWORD *)(a1 + 24) = v31;
      v4 = v33;
      if ( !v8 )
        goto LABEL_45;
      goto LABEL_44;
    }
    *(_QWORD *)&v45 = operator new(0xFC0u);
    sub_49310((_BYTE **)a1, (__int64 *)&v45);
  }
  return __readfsqword(0x28u);
}
// 1516A8: using guessed type void (__fastcall *off_1516A8[2])(std::length_error *__hidden this);
// 1516C0: using guessed type void (__fastcall *`typeinfo for'std::length_error)(std::type_info *__hidden this);
