__m128i *__fastcall sub_9CBF30(__m128i *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v7; // rax
  __m128i *v8; // rax
  size_t v9; // rcx
  size_t v10; // r13
  __m128i *v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rdi
  size_t v15; // rax
  __m128i *v16; // rax
  size_t v17; // rcx
  size_t v18; // r14
  _BYTE *v19; // rax
  unsigned __int64 v20; // rdx
  _OWORD *v21; // rcx
  size_t v22; // r8
  unsigned __int64 v23; // rax
  bool v24; // zf
  size_t v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __m128i *v28; // rax
  size_t v29; // rcx
  size_t v30; // rax
  __m128i *v31; // rdx
  size_t v32; // r9
  unsigned __int64 v33; // rcx
  __m128i *v34; // rdi
  __m128i v35; // xmm3
  size_t v36; // [rsp+0h] [rbp-138h]
  size_t v37; // [rsp+8h] [rbp-130h]
  _QWORD v38[2]; // [rsp+10h] [rbp-128h] BYREF
  void *v39[2]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v40[16]; // [rsp+30h] [rbp-108h] BYREF
  void *v41; // [rsp+40h] [rbp-F8h] BYREF
  size_t v42; // [rsp+48h] [rbp-F0h]
  __m128i v43; // [rsp+50h] [rbp-E8h] BYREF
  void *v44; // [rsp+60h] [rbp-D8h] BYREF
  size_t v45; // [rsp+68h] [rbp-D0h]
  __m128i v46; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE *v47; // [rsp+80h] [rbp-B8h] BYREF
  size_t v48; // [rsp+88h] [rbp-B0h]
  _QWORD v49[2]; // [rsp+90h] [rbp-A8h] BYREF
  __m128i *v50; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-90h]
  __m128i v52; // [rsp+B0h] [rbp-88h] BYREF
  void *v53[2]; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v54[16]; // [rsp+D0h] [rbp-68h] BYREF
  __m128i *v55; // [rsp+E0h] [rbp-58h] BYREF
  size_t v56; // [rsp+E8h] [rbp-50h]
  __m128i v57[4]; // [rsp+F0h] [rbp-48h] BYREF

  v38[0] = a4;
  v38[1] = a5;
  if ( (_BYTE)a5 )
  {
    sub_F4DEF0(&v47, v38);
    v39[0] = v40;
    if ( a2 )
    {
      sub_9C77B0(v39, a2, (__int64)&a2[a3]);
    }
    else
    {
      v39[1] = nullptr;
      v40[0] = 0;
    }
    v15 = j__strlen("std::span<");
    v16 = (__m128i *)sub_978080(v39, 0, 0, "std::span<", v15);
    v41 = &v43;
    if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
    {
      v43 = _mm_loadu_si128(v16 + 1);
    }
    else
    {
      v41 = (void *)v16->m128i_i64[0];
      v43.m128i_i64[0] = v16[1].m128i_i64[0];
    }
    v17 = v16->m128i_u64[1];
    v16[1].m128i_i8[0] = 0;
    v42 = v17;
    v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
    v16->m128i_i64[1] = 0;
    v18 = v42;
    if ( v42 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v19 = v41;
      if ( v41 == &v43 )
        v20 = 15;
      else
        v20 = v43.m128i_i64[0];
      if ( v42 + 1 > v20 )
      {
        sub_974DF0((__int64)&v41, v42, 0, nullptr, 1u);
        v19 = v41;
      }
      v19[v18] = 32;
      v42 = v18 + 1;
      *((_BYTE *)v41 + v18 + 1) = 0;
      v21 = v41;
      v44 = &v46;
      if ( v41 == &v43 )
      {
        v22 = v42;
        v35 = _mm_load_si128(&v43);
        v21 = &v46;
        v43.m128i_i8[0] = 0;
        v25 = v48;
        v23 = 15;
        v42 = 0;
        v46 = v35;
        v45 = v22;
        v26 = v48 + v22;
      }
      else
      {
        v22 = v42;
        v23 = v43.m128i_i64[0];
        v24 = v41 == &v46;
        v41 = &v43;
        v25 = v48;
        v44 = v21;
        v45 = v42;
        v42 = 0;
        v26 = v48 + v45;
        v43.m128i_i8[0] = 0;
        v46.m128i_i64[0] = v23;
        if ( v24 )
          v23 = 15;
      }
      if ( v23 < v26 && (v47 == (_BYTE *)v49 ? (v27 = 15) : (v27 = v49[0]), v27 >= v26) )
        v28 = (__m128i *)sub_978080(&v47, 0, 0, v21, v22);
      else
        v28 = (__m128i *)sub_9CA820(&v44, v47, v25);
      v50 = &v52;
      if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
      {
        v52 = _mm_loadu_si128(v28 + 1);
      }
      else
      {
        v50 = (__m128i *)v28->m128i_i64[0];
        v52.m128i_i64[0] = v28[1].m128i_i64[0];
      }
      v29 = v28->m128i_u64[1];
      v28[1].m128i_i8[0] = 0;
      v51 = v29;
      v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
      v28->m128i_i64[1] = 0;
      v30 = v51;
      if ( v51 != 0x7FFFFFFFFFFFFFFFLL )
      {
        v31 = v50;
        v32 = v51 + 1;
        if ( v50 == &v52 )
          v33 = 15;
        else
          v33 = v52.m128i_i64[0];
        if ( v32 > v33 )
        {
          v37 = v51 + 1;
          v36 = v51;
          sub_974DF0((__int64)&v50, v51, 0, nullptr, 1u);
          v32 = v37;
          v30 = v36;
          v31 = v50;
        }
        v31->m128i_i8[v30] = 62;
        v51 = v32;
        v50->m128i_i8[v30 + 1] = 0;
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( v50 == &v52 )
        {
          a1[1] = _mm_load_si128(&v52);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)v50;
          a1[1].m128i_i64[0] = v52.m128i_i64[0];
        }
        v34 = (__m128i *)v44;
        a1->m128i_i64[1] = v51;
        if ( v34 != &v46 )
          operator delete(v34);
        if ( v41 != &v43 )
          operator delete(v41);
        if ( v39[0] != v40 )
          operator delete(v39[0]);
        v13 = v47;
        if ( v47 != (_BYTE *)v49 )
          goto LABEL_14;
        return a1;
      }
    }
LABEL_63:
    std::__throw_length_error("basic_string::_M_replace_aux");
  }
  v53[0] = v54;
  if ( a2 )
  {
    sub_9C77B0(v53, a2, (__int64)&a2[a3]);
  }
  else
  {
    v53[1] = nullptr;
    v54[0] = 0;
  }
  v7 = j__strlen("std::span<");
  v8 = (__m128i *)sub_978080(v53, 0, 0, "std::span<", v7);
  v55 = v57;
  if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
  {
    v57[0] = _mm_loadu_si128(v8 + 1);
  }
  else
  {
    v55 = (__m128i *)v8->m128i_i64[0];
    v57[0].m128i_i64[0] = v8[1].m128i_i64[0];
  }
  v9 = v8->m128i_u64[1];
  v8[1].m128i_i8[0] = 0;
  v56 = v9;
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  v8->m128i_i64[1] = 0;
  v10 = v56;
  if ( v56 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_63;
  v11 = v55;
  if ( v55 == v57 )
    v12 = 15;
  else
    v12 = v57[0].m128i_i64[0];
  if ( v56 + 1 > v12 )
  {
    sub_974DF0((__int64)&v55, v56, 0, nullptr, 1u);
    v11 = v55;
  }
  v11->m128i_i8[v10] = 62;
  v56 = v10 + 1;
  v55->m128i_i8[v10 + 1] = 0;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v55 == v57 )
  {
    a1[1] = _mm_load_si128(v57);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v55;
    a1[1].m128i_i64[0] = v57[0].m128i_i64[0];
  }
  v13 = v53[0];
  a1->m128i_i64[1] = v56;
  if ( v13 != v54 )
LABEL_14:
    operator delete(v13);
  return a1;
}

