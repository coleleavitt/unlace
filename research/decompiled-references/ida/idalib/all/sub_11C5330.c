void __fastcall sub_11C5330(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, size_t a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  void **v11; // rbp
  void **v12; // rbx
  __int64 i; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i *v17; // rbx
  __m128i *v18; // rdx
  __m128i *v19; // rax
  char *v20; // rbx
  __int64 v21; // r15
  size_t v22; // rbp
  char *v23; // r14
  char *v24; // rax
  unsigned __int64 v25; // rsi
  char *v26; // rbx
  size_t v27; // rsi
  _BYTE *v28; // rdi
  _BYTE *v29; // rdi
  _BYTE *v30; // rdi
  size_t v31; // r12
  unsigned __int64 v32; // rax
  _BYTE *v33; // rdi
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  __int64 v37; // [rsp+18h] [rbp-130h]
  signed __int64 v38; // [rsp+20h] [rbp-128h]
  __int32 v39; // [rsp+20h] [rbp-128h]
  __int32 v40; // [rsp+28h] [rbp-120h]
  void *v41; // [rsp+30h] [rbp-118h] BYREF
  size_t v42; // [rsp+38h] [rbp-110h]
  _QWORD v43[2]; // [rsp+40h] [rbp-108h] BYREF
  __m128i v44; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v45; // [rsp+70h] [rbp-D8h]
  __m128i v46[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int16 v47; // [rsp+A0h] [rbp-A8h]
  __m128i v48; // [rsp+B0h] [rbp-98h] BYREF
  _BYTE v49[32]; // [rsp+C0h] [rbp-88h] BYREF
  void *ptr; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-60h]
  _BYTE v52[88]; // [rsp+F0h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 60) & 4) == 0 )
    return;
  v6 = a1 + 32;
  v7 = *(_QWORD *)(a1 + 40);
  v37 = (__int64)a4;
  ptr = v52;
  v51 = 0x100000000LL;
  if ( !v7 )
  {
LABEL_9:
    LOBYTE(v43[0]) = 0;
    v42 = 0;
    v41 = v43;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v7 + 32);
    if ( v9 <= 3 )
    {
      v8 = *(_QWORD *)(v7 + 24);
      if ( !v8 )
        goto LABEL_9;
      goto LABEL_5;
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( v9 == 4 )
      break;
    v6 = v7;
    if ( !v8 )
      goto LABEL_9;
LABEL_5:
    v7 = v8;
  }
  for ( i = *(_QWORD *)(v7 + 24); i; i = *(_QWORD *)(i + 24) )
  {
    while ( *(int *)(i + 32) > 4 )
    {
      v6 = i;
      i = *(_QWORD *)(i + 16);
      if ( !i )
        goto LABEL_24;
    }
  }
LABEL_24:
  while ( v8 )
  {
    while ( *(int *)(v8 + 32) > 3 )
    {
      v7 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v8 )
        goto LABEL_27;
    }
    v8 = *(_QWORD *)(v8 + 24);
  }
LABEL_27:
  if ( v6 == v7 )
    goto LABEL_9;
  do
  {
    v14 = *(_QWORD *)(v7 + 40);
    v48.m128i_i64[0] = (__int64)v49;
    sub_11BA820(&v48, *(_BYTE **)(v14 + 16), *(_QWORD *)(v14 + 16) + *(_QWORD *)(v14 + 24));
    v15 = (unsigned int)v51;
    v16 = (unsigned int)v51 + 1LL;
    if ( v16 > HIDWORD(v51) )
    {
      if ( ptr > &v48 || &v48 >= (__m128i *)((char *)ptr + 32 * (unsigned int)v51) )
      {
        v17 = (__m128i *)sub_2237400(&ptr, v52, v16, 32, v46);
        sub_10E9550((__int64)&ptr, v17);
        if ( ptr == v52 )
        {
          ptr = v17;
          v15 = (unsigned int)v51;
          v18 = &v48;
          HIDWORD(v51) = v46[0].m128i_i32[0];
        }
        else
        {
          v39 = v46[0].m128i_i32[0];
          free(ptr);
          ptr = v17;
          v18 = &v48;
          v15 = (unsigned int)v51;
          HIDWORD(v51) = v39;
        }
      }
      else
      {
        v38 = (char *)&v48 - (_BYTE *)ptr;
        v17 = (__m128i *)sub_2237400(&ptr, v52, v16, 32, v46);
        sub_10E9550((__int64)&ptr, v17);
        if ( ptr == v52 )
        {
          ptr = v17;
          HIDWORD(v51) = v46[0].m128i_i32[0];
        }
        else
        {
          v40 = v46[0].m128i_i32[0];
          free(ptr);
          ptr = v17;
          HIDWORD(v51) = v40;
        }
        v15 = (unsigned int)v51;
        v18 = (__m128i *)((char *)v17 + v38);
      }
    }
    else
    {
      v17 = (__m128i *)ptr;
      v18 = &v48;
    }
    v19 = &v17[2 * v15];
    v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
    if ( (__m128i *)v18->m128i_i64[0] == &v18[1] )
    {
      v19[1] = _mm_loadu_si128(v18 + 1);
    }
    else
    {
      v19->m128i_i64[0] = v18->m128i_i64[0];
      v19[1].m128i_i64[0] = v18[1].m128i_i64[0];
    }
    v19->m128i_i64[1] = v18->m128i_i64[1];
    v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
    v18->m128i_i64[1] = 0;
    v18[1].m128i_i8[0] = 0;
    LODWORD(v51) = v51 + 1;
    if ( (_BYTE *)v48.m128i_i64[0] != v49 )
      operator delete((void *)v48.m128i_i64[0]);
    v7 = std::_Rb_tree_increment(v7);
  }
  while ( v6 != v7 );
  v20 = (char *)ptr;
  LOBYTE(v43[0]) = 0;
  v42 = 0;
  v21 = 32LL * (unsigned int)v51;
  v22 = j__strlen(",");
  v23 = &v20[v21];
  v41 = v43;
  if ( &v20[v21] != v20 )
  {
    v24 = v20;
    v25 = v22 * ((v21 >> 5) - 1);
    do
    {
      v25 += *((_QWORD *)v24 + 1);
      v24 += 32;
    }
    while ( v24 != v23 );
    v26 = v20 + 32;
    sub_995C30((__int64)&v41, v25);
    sub_9EE560(&v41, *((_BYTE **)v26 - 4), *((_QWORD *)v26 - 3));
    if ( v26 != v23 )
    {
      v27 = v42;
      if ( v22 > 0x7FFFFFFFFFFFFFFFLL - v42 )
LABEL_78:
        std::__throw_length_error("basic_string::append");
      while ( 1 )
      {
        v29 = v41;
        v34 = v22 + v27;
        v35 = v41 == v43 ? 15LL : v43[0];
        if ( v34 <= v35 )
        {
          if ( v22 )
          {
            v28 = (char *)v41 + v27;
            if ( v22 == 1 )
              *v28 = 44;
            else
              memcpy(v28, ",", v22);
            v29 = v41;
          }
        }
        else
        {
          sub_998B30((__int64)&v41, v27, 0, ",", v22);
          v29 = v41;
        }
        v42 = v22 + v27;
        v29[v34] = 0;
        a5 = *((_QWORD *)v26 + 1);
        v30 = v41;
        a4 = *(_BYTE **)v26;
        v31 = a5 + v42;
        v32 = v41 == v43 ? 15LL : v43[0];
        if ( v31 > v32 )
        {
          sub_998B30((__int64)&v41, v42, 0, a4, a5);
          v30 = v41;
        }
        else if ( a5 )
        {
          v33 = (char *)v41 + v42;
          if ( a5 == 1 )
            *v33 = *a4;
          else
            memcpy(v33, *(const void **)v26, *((_QWORD *)v26 + 1));
          v30 = v41;
        }
        v26 += 32;
        v42 = v31;
        v30[v31] = 0;
        if ( v26 == v23 )
          break;
        v27 = v42;
        if ( v22 > 0x7FFFFFFFFFFFFFFFLL - v42 )
          goto LABEL_78;
      }
    }
  }
LABEL_10:
  v47 = 260;
  v45 = 262;
  v46[0].m128i_i64[0] = (__int64)&v41;
  v44.m128i_i64[0] = (__int64)"--offload-targets=";
  v44.m128i_i64[1] = 18;
  sub_A41580(&v48, &v44, v46, (__int64)a4, a5, a6);
  v10 = sub_10DA6C0(a3, (__int64)&v48);
  sub_10DC5D0(v37, v10);
  if ( v41 != v43 )
    operator delete(v41);
  v11 = (void **)ptr;
  v12 = (void **)((char *)ptr + 32 * (unsigned int)v51);
  if ( ptr != v12 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 4;
        if ( *v12 == v12 + 2 )
          break;
        operator delete(*v12);
        if ( v11 == v12 )
          goto LABEL_15;
      }
    }
    while ( v11 != v12 );
LABEL_15:
    v12 = (void **)ptr;
  }
  if ( v12 != (void **)v52 )
    free(v12);
}
