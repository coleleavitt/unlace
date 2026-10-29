__m128i *__fastcall sub_10C23E0(__m128i *a1, __int64 a2, __int64 **a3, __int64 a4)
{
  _BYTE **v5; // r13
  char v6; // r14
  size_t v7; // r8
  __m128i *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __m128i *v13; // rax
  char *v14; // rdi
  unsigned __int64 v16; // rax
  _BYTE *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-1D0h]
  size_t n; // [rsp+20h] [rbp-1B8h]
  size_t na; // [rsp+20h] [rbp-1B8h]
  __m128i *src; // [rsp+28h] [rbp-1B0h]
  _QWORD v23[4]; // [rsp+40h] [rbp-198h] BYREF
  __int16 v24; // [rsp+60h] [rbp-178h]
  _BYTE v25[32]; // [rsp+70h] [rbp-168h] BYREF
  __int16 v26; // [rsp+90h] [rbp-148h]
  void *v27[2]; // [rsp+A0h] [rbp-138h] BYREF
  _WORD v28[16]; // [rsp+B0h] [rbp-128h] BYREF
  void *v29; // [rsp+D0h] [rbp-108h] BYREF
  unsigned __int64 v30; // [rsp+D8h] [rbp-100h]
  __m128i v31; // [rsp+E0h] [rbp-F8h] BYREF
  __int16 v32; // [rsp+F0h] [rbp-E8h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-D0h]
  _BYTE v35[192]; // [rsp+118h] [rbp-C0h] BYREF

  v18 = *(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8);
  if ( *(_QWORD *)a4 == v18 )
  {
LABEL_25:
    a1[2].m128i_i8[0] = 0;
    return a1;
  }
  v5 = *(_BYTE ***)a4;
  while ( !v5[1] )
  {
LABEL_14:
    v5 += 4;
    if ( (_BYTE **)v18 == v5 )
      goto LABEL_25;
  }
  if ( **v5 == 61 )
  {
    v27[0] = v28;
    v12 = v5[1];
    if ( !v12 )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    sub_10B5070(v27, *v5 + 1, (__int64)&v12[(_QWORD)*v5]);
    v13 = (__m128i *)sub_978080(v27, 0, 0, *(_BYTE **)(*(_QWORD *)a2 + 488LL), *(_QWORD *)(*(_QWORD *)a2 + 496LL));
    v29 = &v31;
    if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
    {
      v31 = _mm_loadu_si128(v13 + 1);
    }
    else
    {
      v29 = (void *)v13->m128i_i64[0];
      v31.m128i_i64[0] = v13[1].m128i_i64[0];
    }
    v6 = 1;
    v30 = v13->m128i_u64[1];
    v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
    v13->m128i_i64[1] = 0;
    v13[1].m128i_i8[0] = 0;
  }
  else
  {
    v6 = 0;
    v29 = &v31;
    sub_10B4F90(&v29, *v5, (__int64)&v5[1][(_QWORD)*v5]);
  }
  v7 = v30;
  ptr = v35;
  v8 = (__m128i *)v29;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  if ( v30 > 0x80 )
  {
    src = (__m128i *)v29;
    n = v30;
    sub_22130D0(&ptr, v35, v30, 1);
    v7 = n;
    v8 = src;
    v14 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v30 )
      goto LABEL_6;
    v14 = v35;
  }
  na = v7;
  memcpy(v14, v8, v7);
  v8 = (__m128i *)v29;
  v7 = si128.m128i_i64[0] + na;
LABEL_6:
  si128.m128i_i64[0] = v7;
  if ( v8 != &v31 )
    operator delete(v8);
  if ( v6 && v27[0] != v28 )
    operator delete(v27[0]);
  v32 = 257;
  v9 = *a3;
  v28[8] = 257;
  v10 = *v9;
  v11 = v9[1];
  v24 = 261;
  v26 = 257;
  v23[0] = v10;
  v23[1] = v11;
  sub_2266670(&ptr, v23, v25, v27, &v29);
  v32 = 261;
  v29 = ptr;
  v30 = si128.m128i_i64[0];
  if ( (unsigned int)sub_22684A0(&v29, 0) )
  {
    if ( ptr != v35 )
      free(ptr);
    goto LABEL_14;
  }
  v29 = &v31;
  sub_10B5070(&v29, ptr, (__int64)ptr + si128.m128i_i64[0]);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v29 == &v31 )
  {
    a1[1] = _mm_load_si128(&v31);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v29;
    a1[1].m128i_i64[0] = v31.m128i_i64[0];
  }
  v16 = v30;
  v17 = ptr;
  a1[2].m128i_i8[0] = 1;
  a1->m128i_i64[1] = v16;
  if ( v17 != v35 )
    free(v17);
  return a1;
}

