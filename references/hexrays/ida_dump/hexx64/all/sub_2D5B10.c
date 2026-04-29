__m128i *__fastcall sub_2D5B10(unsigned __int8 **a1, unsigned __int64 a2, __int64 a3, double a4, double a5)
{
  _QWORD *exception; // rdi
  _QWORD *v6; // rdi
  unsigned __int8 *v7; // rax
  __m128i v8; // xmm0
  unsigned __int8 v9; // dl
  int v10; // ebp
  __m128i *v11; // rax
  __m128i *v12; // r14
  int v13; // r13d
  unsigned __int64 *v14; // r15
  bool v15; // cf
  __int64 v16; // r12
  int v17; // ebp
  int v18; // eax
  unsigned __int64 *v19; // rsi
  int v20; // edx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  char v24; // dl
  __int64 v25; // rax
  __m128i v26; // xmm1
  char v28; // r12
  char v29; // dl
  unsigned __int64 *v30; // rax
  unsigned __int64 *v31; // r12
  unsigned __int64 *v32; // rdx
  __int64 v33; // rax
  __m128i v34; // xmm1
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  const __m128i *v44; // [rsp+20h] [rbp-70h] BYREF
  __m128i v45; // [rsp+28h] [rbp-68h] BYREF
  __int64 v46; // [rsp+38h] [rbp-58h] BYREF
  int v47; // [rsp+40h] [rbp-50h]
  int v48; // [rsp+48h] [rbp-48h]
  unsigned __int64 v49; // [rsp+50h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v7 = *a1;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)a2);
  v45 = v8;
  if ( (unsigned __int64)v7 < a2 )
  {
    v9 = *v7;
    v45.m128i_i64[0] = (__int64)(v7 + 1);
    if ( v9 > 1u )
      return nullptr;
  }
  v10 = unpack_dd(&v45);
  if ( v45.m128i_i64[1] - v45.m128i_i64[0] < (unsigned __int64)v10 )
    return nullptr;
  v11 = (__m128i *)qalloc(16);
  v12 = v11;
  if ( !v11 )
    sub_4F618(*(double *)v8.m128i_i64, a5);
  v11->m128i_i64[0] = 0;
  v13 = v10 - 1;
  v14 = nullptr;
  v11->m128i_i64[1] = 0;
  if ( v10 <= 0 )
    goto LABEL_26;
LABEL_8:
  while ( 2 )
  {
    v16 = sub_3323C0(&v45, a3);
    v17 = unpack_dd(&v45);
    v18 = unpack_dd(&v45);
    if ( !v18 )
      goto LABEL_7;
    v48 = v18;
    v46 = v16;
    v47 = v17;
    v19 = (unsigned __int64 *)v12->m128i_i64[0];
    v44 = (const __m128i *)&v46;
    if ( v19 )
    {
      if ( !v12->m128i_i64[1] )
        goto LABEL_25;
      if ( !v14 )
      {
LABEL_29:
        v28 = 1;
        v14 = (unsigned __int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
          v29 = 1;
LABEL_31:
          v14 = (unsigned __int64 *)sub_2D59C0(v12, v19, v29, &v44);
          goto LABEL_7;
        }
        while ( 1 )
        {
          if ( (int)sub_257C40((__int64)&v46, (__int64)(v14 + 3)) >= 0 )
          {
            if ( (int)sub_257C40((__int64)(v14 + 3), (__int64)&v46) >= 0 )
            {
              if ( !v14 )
              {
LABEL_36:
                v29 = v28;
                v19 = v14;
                goto LABEL_31;
              }
LABEL_7:
              v15 = v13-- == 0;
              if ( v15 )
                goto LABEL_26;
              goto LABEL_8;
            }
            v30 = (unsigned __int64 *)v14[2];
            v28 = 0;
          }
          else
          {
            v30 = (unsigned __int64 *)v14[1];
            v28 = 1;
          }
          if ( (*(_BYTE *)v30 & 2) != 0 )
            goto LABEL_36;
          v14 = v30;
        }
      }
      if ( v19 == v14 )
      {
        v31 = (unsigned __int64 *)v14[2];
        if ( (*(_BYTE *)v31 & 2) != 0 )
          goto LABEL_47;
        if ( (int)sub_257C40((__int64)(v31 + 3), (__int64)&v46) < 0 )
        {
          v14 = v31;
          v24 = 0;
          goto LABEL_48;
        }
        if ( (int)sub_257C40((__int64)(v31 + 3), (__int64)&v46) >= 0
          && (int)sub_257C40((__int64)&v46, (__int64)(v31 + 3)) >= 0 )
        {
          if ( v31 )
          {
            v14 = v31;
            goto LABEL_7;
          }
LABEL_47:
          v24 = 1;
LABEL_48:
          v14 = (unsigned __int64 *)sub_2D59C0(v12, v14, v24, &v44);
          goto LABEL_7;
        }
LABEL_42:
        v19 = (unsigned __int64 *)v12->m128i_i64[0];
        goto LABEL_43;
      }
      if ( (int)sub_257C40((__int64)(v14 + 3), (__int64)&v46) >= 0
        && (int)sub_257C40((__int64)&v46, (__int64)(v14 + 3)) >= 0 )
      {
        goto LABEL_7;
      }
      v20 = sub_257C40((__int64)&v46, (__int64)(v14 + 3));
      v21 = *v14;
      v22 = *v14 & 2;
      if ( v20 >= 0 )
      {
        if ( v22 )
        {
          if ( (unsigned __int64 *)v12->m128i_i64[0] != v14 )
          {
            v23 = (unsigned __int64)v14;
            goto LABEL_18;
          }
          v24 = 0;
          if ( (*(_BYTE *)v14[2] & 2) != 0 )
            goto LABEL_48;
LABEL_81:
          v19 = v14;
LABEL_44:
          if ( !v12->m128i_i64[1] )
            goto LABEL_45;
          goto LABEL_29;
        }
        v32 = (unsigned __int64 *)v14[2];
        if ( (*(_BYTE *)v32 & 2) != 0 )
        {
          v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
          v37 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v37 & 2) == 0 )
          {
            v38 = (unsigned __int64)v14;
            do
            {
              if ( *(_QWORD *)(v23 + 16) != v38 )
                break;
              v38 = v23;
              v39 = v37 & 0xFFFFFFFFFFFFFFFCLL;
              v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
              v23 = v39;
            }
            while ( (v37 & 2) == 0 );
          }
          if ( v12->m128i_i64[0] == v23 )
          {
LABEL_79:
            v24 = 0;
            goto LABEL_48;
          }
        }
        else
        {
          do
          {
            v19 = v32;
            v32 = (unsigned __int64 *)v32[1];
          }
          while ( (*(_BYTE *)v32 & 2) == 0 );
          v23 = (unsigned __int64)v19;
          if ( v19 == (unsigned __int64 *)v12->m128i_i64[0] )
          {
LABEL_43:
            if ( !v19 )
            {
              v33 = qalloc(48);
              v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
              if ( !v33 )
              {
                exception = __cxa_allocate_exception(8u);
                *exception = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_OWORD *)(v33 + 16) = 0;
              *(_OWORD *)(v33 + 32) = 0;
              *(__m128i *)(v33 + 8) = v34;
              *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | 2;
              v12->m128i_i64[0] = v33;
              *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v33 & 3LL;
              *(__m128i *)(v12->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                      (__m128i)v12->m128i_u64[0],
                                                      (__m128i)v12->m128i_u64[0]);
              *(_QWORD *)v12->m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v12->m128i_i64[0] |= 2uLL;
LABEL_45:
              v14 = (unsigned __int64 *)sub_2D59C0(v12, (unsigned __int64 *)v12->m128i_i64[0], 1, &v44);
              goto LABEL_7;
            }
            goto LABEL_44;
          }
        }
LABEL_18:
        if ( (int)sub_257C40((__int64)&v46, v23 + 24) < 0 )
        {
          if ( (*(_BYTE *)v14[2] & 2) != 0 )
            goto LABEL_79;
          v19 = (unsigned __int64 *)v12->m128i_i64[0];
          if ( v12->m128i_i64[0] != v23 && (**(_BYTE **)(v23 + 8) & 2) != 0 )
          {
            v14 = (unsigned __int64 *)v23;
            v24 = 1;
            goto LABEL_48;
          }
          goto LABEL_43;
        }
        goto LABEL_42;
      }
      if ( v22 )
      {
        if ( (unsigned __int64 *)v12->m128i_i64[0] == v14 )
        {
          if ( (*(_BYTE *)v14[1] & 2) != 0 )
            goto LABEL_47;
          goto LABEL_81;
        }
        v36 = (unsigned __int64)v14;
      }
      else
      {
        v35 = v14[1];
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v36 = v21 & 0xFFFFFFFFFFFFFFFCLL;
          v40 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v40 & 2) == 0 )
          {
            v41 = (unsigned __int64)v14;
            do
            {
              if ( *(_QWORD *)(v36 + 8) != v41 )
                break;
              v41 = v36;
              v42 = v40 & 0xFFFFFFFFFFFFFFFCLL;
              v40 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
              v36 = v42;
            }
            while ( (v40 & 2) == 0 );
          }
          if ( v12->m128i_i64[0] == v36 )
            goto LABEL_47;
        }
        else
        {
          do
          {
            v36 = v35;
            v35 = *(_QWORD *)(v35 + 16);
          }
          while ( (*(_BYTE *)v35 & 2) == 0 );
          if ( v36 == v12->m128i_i64[0] )
          {
            v19 = (unsigned __int64 *)v36;
            goto LABEL_43;
          }
        }
      }
      if ( (int)sub_257C40(v36 + 24, (__int64)&v46) < 0 )
      {
        if ( (*(_BYTE *)v14[1] & 2) != 0 )
          goto LABEL_47;
        v19 = (unsigned __int64 *)v12->m128i_i64[0];
        if ( v12->m128i_i64[0] != v36 && (**(_BYTE **)(v36 + 16) & 2) != 0 )
        {
          v14 = (unsigned __int64 *)v36;
          v24 = 0;
          goto LABEL_48;
        }
        goto LABEL_43;
      }
      goto LABEL_42;
    }
    v25 = qalloc(48);
    v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
    if ( !v25 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v25 + 16) = 0;
    *(_OWORD *)(v25 + 32) = 0;
    *(__m128i *)(v25 + 8) = v26;
    *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v12->m128i_i64[0] = v25;
    *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
    *(__m128i *)(v12->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v12->m128i_u64[0], (__m128i)v12->m128i_u64[0]);
    *(_QWORD *)v12->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v12->m128i_i64[0] |= 2uLL;
    v19 = (unsigned __int64 *)v12->m128i_i64[0];
LABEL_25:
    v14 = (unsigned __int64 *)sub_2D59C0(v12, v19, 1, &v44);
    v15 = v13-- == 0;
    if ( !v15 )
      continue;
    break;
  }
LABEL_26:
  *a1 = (unsigned __int8 *)v45.m128i_i64[0];
  return v12;
}
