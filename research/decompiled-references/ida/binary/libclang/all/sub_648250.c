__int64 __fastcall sub_648250(__int64 a1, __int64 a2, __int64 *a3)
{
  const __m128i *v5; // rbx
  __m128i *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v11; // cf
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r12
  _BYTE *v16; // r9
  void *v17; // rdi
  size_t v18; // r15
  void *v19; // r15
  void **v20; // rbp
  void **v21; // r12
  void **v22; // rdi
  __m128i *v23; // r15
  const __m128i *i; // rbp
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  __m128i *v28; // rdi
  __m128i *v29; // rdx
  const __m128i *v30; // rax
  unsigned int v31; // ecx
  __int8 *v32; // r15
  unsigned __int64 v34; // rax
  char *v35; // rdx
  char *v36; // rdi
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+10h] [rbp-78h]
  _BYTE *v44; // [rsp+18h] [rbp-70h]
  void *v45; // [rsp+30h] [rbp-58h] BYREF
  void **v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = (__int64)v5->m128i_i64 - *(_QWORD *)a1;
  v8 = 0x6DB6DB6DB6DB6DB7LL * (v7 >> 3);
  if ( v8 == 0x249249249249249LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v9 = 1;
  if ( v8 )
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v11 = __CFADD__(v9, v8);
  v12 = v9 + v8;
  if ( v11 )
  {
    v42 = 0x7FFFFFFFFFFFFFF8LL;
    v13 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v12 > 0x249249249249249LL )
      v12 = 0x249249249249249LL;
    v42 = 56 * v12;
    v13 = 56 * v12;
  }
  v14 = operator new(v13);
  v15 = (__int64 *)(v14 + v7);
  v43 = v14;
  sub_644390((__int64)&v45, a3);
  v16 = *(_BYTE **)a2;
  v17 = v15 + 2;
  v18 = *(_QWORD *)(a2 + 8);
  *v15 = (__int64)(v15 + 2);
  if ( !v16 && v18 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( v18 > 0xF )
  {
    v44 = v16;
    v41 = std::string::_M_create();
    v16 = v44;
    *v15 = v41;
    v17 = (void *)v41;
    v15[2] = v18;
  }
  else
  {
    if ( v18 == 1 )
    {
      *((_BYTE *)v15 + 16) = *v16;
      goto LABEL_13;
    }
    if ( !v18 )
      goto LABEL_13;
  }
  memcpy(v17, v16, v18);
  v17 = (void *)*v15;
LABEL_13:
  v15[1] = v18;
  *((_BYTE *)v17 + v18) = 0;
  sub_644390((__int64)(v15 + 4), (__int64 *)&v45);
  v19 = v45;
  v20 = v46;
  v21 = (void **)v45;
  if ( v46 != v45 )
  {
    do
    {
      v22 = (void **)v21[5];
      if ( v22 != v21 + 7 )
        operator delete(v22, (unsigned __int64)v21[7] + 1);
      if ( *v21 != v21 + 2 )
        operator delete(*v21, (unsigned __int64)v21[2] + 1);
      v21 += 10;
    }
    while ( v20 != v21 );
  }
  if ( v19 )
    operator delete(v19, v47 - (_QWORD)v19);
  if ( v6 != v5 )
  {
    v23 = (__m128i *)v43;
    for ( i = v6 + 1; ; i = (const __m128i *)((char *)i + 56) )
    {
      v29 = v23 + 1;
      v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
      v30 = (const __m128i *)i[-1].m128i_i64[0];
      if ( i != v30 )
        break;
      v25 = i[-1].m128i_i64[1];
      v31 = v25 + 1;
      if ( (unsigned int)(v25 + 1) >= 8 )
      {
        v29->m128i_i64[0] = i->m128i_i64[0];
        *(__int64 *)((char *)&v29->m128i_i64[-1] + v31) = *(__int64 *)((char *)&i->m128i_i64[-1] + v31);
        v34 = (unsigned __int64)&v23[1].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v35 = &v29->m128i_i8[-v34];
        v36 = (char *)((char *)i - v35);
        v37 = ((_DWORD)v35 + v31) & 0xFFFFFFF8;
        if ( v37 >= 8 )
        {
          v38 = v37 & 0xFFFFFFF8;
          v39 = 0;
          do
          {
            v40 = v39;
            v39 += 8;
            *(_QWORD *)(v34 + v40) = *(_QWORD *)&v36[v40];
          }
          while ( v39 < v38 );
        }
        goto LABEL_24;
      }
      if ( (v31 & 4) != 0 )
      {
        v29->m128i_i32[0] = i->m128i_i32[0];
        *(__int32 *)((char *)&v29->m128i_i32[-1] + v31) = *(__int32 *)((char *)&i->m128i_i32[-1] + v31);
        v25 = i[-1].m128i_i64[1];
      }
      else if ( (_DWORD)v25 != -1 )
      {
        v29->m128i_i8[0] = i->m128i_i8[0];
        if ( (v31 & 2) == 0 )
          goto LABEL_24;
        *(__int16 *)((char *)&v29->m128i_i16[-1] + v31) = *(__int16 *)((char *)&i->m128i_i16[-1] + v31);
        v25 = i[-1].m128i_i64[1];
      }
LABEL_25:
      v23->m128i_i64[1] = v25;
      v26 = _mm_loadu_si128(i + 1);
      v27 = i[2].m128i_i64[0];
      i[-1].m128i_i64[0] = (__int64)i;
      i[-1].m128i_i64[1] = 0;
      i->m128i_i8[0] = 0;
      v23[3].m128i_i64[0] = v27;
      v23[2] = v26;
      v28 = (__m128i *)i[-1].m128i_i64[0];
      i[2].m128i_i64[0] = 0;
      i[1] = 0;
      if ( i != v28 )
        operator delete(v28, i->m128i_i64[0] + 1);
      v23 = (__m128i *)((char *)v23 + 56);
      if ( v5 == (const __m128i *)&i[2].m128i_u64[1] )
        goto LABEL_37;
    }
    v23->m128i_i64[0] = (__int64)v30;
    v23[1].m128i_i64[0] = i->m128i_i64[0];
LABEL_24:
    v25 = i[-1].m128i_i64[1];
    goto LABEL_25;
  }
  v23 = (__m128i *)v43;
LABEL_37:
  v32 = &v23[3].m128i_i8[8];
  if ( v6 )
    operator delete(v6, *(_QWORD *)(a1 + 16) - (_QWORD)v6);
  *(_QWORD *)(a1 + 8) = v32;
  *(_QWORD *)a1 = v43;
  *(_QWORD *)(a1 + 16) = v43 + v42;
  return v43;
}

