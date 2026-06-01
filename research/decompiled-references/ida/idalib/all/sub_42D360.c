unsigned __int64 __fastcall sub_42D360(_QWORD **a1, unsigned __int64 *a2)
{
  _QWORD *v3; // r8
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // r8
  _QWORD *v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  char *v16; // rdi
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  int v20; // r13d
  unsigned __int64 v21; // rdx
  int v22; // r14d
  int v23; // ebp
  char *v24; // r15
  __int64 v25; // r12
  __int64 v26; // r12
  _QWORD *v27; // rax
  char *v28; // r12
  char *v29; // r12
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rax
  char *v34; // r14
  __int64 v35; // rax
  char *v36; // rax
  __m128i v37; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 *v38; // [rsp+18h] [rbp-A0h]
  __int64 v39; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int128 v41; // [rsp+38h] [rbp-80h]
  __m128i v42; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+60h] [rbp-58h]
  int v44; // [rsp+68h] [rbp-50h]
  _QWORD **v45; // [rsp+70h] [rbp-48h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v3 = a1[4];
  v38 = a2;
  v46 = __readfsqword(0x28u);
  v4 = a1[1];
  if ( v3 )
  {
    v5 = a1[3];
    v6 = 2LL * (_QWORD)v3;
    ptr = nullptr;
    v41 = 0;
    v7 = &v5[v6];
    if ( &v5[v6] == v5 )
      goto LABEL_44;
    v8 = 0;
    v9 = 0;
    v10 = nullptr;
    while ( 1 )
    {
      v12 = *v5;
      if ( (unsigned __int64)v4 < *v5 )
      {
        v13 = v8 + 1;
        v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)v12);
        v42 = v14;
        if ( &v42 < v10 || &v42 >= &v10[v9] )
        {
          if ( v9 < v13 )
          {
            ptr = (void *)qvector_reserve(&ptr, v10, v13, 16);
            v10 = (__m128i *)ptr;
            v8 = v41;
          }
          v10[v8] = _mm_load_si128(&v42);
        }
        else
        {
          if ( v9 < v13 )
          {
            v37 = v14;
            ptr = (void *)qvector_reserve(&ptr, v10, v13, 16);
            v10 = (__m128i *)ptr;
            v14 = _mm_load_si128(&v37);
            v8 = v41;
          }
          v10[v8] = v14;
        }
        v9 = *((_QWORD *)&v41 + 1);
        v10 = (__m128i *)ptr;
        v8 = v41 + 1;
        *(_QWORD *)&v41 = v41 + 1;
        v12 = *v5;
      }
      v15 = _mm_loadl_epi64((const __m128i *)(v5 + 1));
      if ( v9 < v8 + 1 )
      {
        v37.m128i_i64[0] = v15.m128i_i64[0];
        ptr = (void *)qvector_reserve(&ptr, v10, v8 + 1, 16);
        v10 = (__m128i *)ptr;
        v15 = _mm_loadl_epi64(&v37);
        v8 = v41;
      }
      v5 += 2;
      v10[v8] = _mm_unpacklo_epi64((__m128i)v12, v15);
      v11 = v41;
      v8 = v41 + 1;
      *(_QWORD *)&v41 = v41 + 1;
      v4 = (_QWORD *)*(v5 - 1);
      if ( v7 == v5 )
        break;
      v10 = (__m128i *)ptr;
      v9 = *((_QWORD *)&v41 + 1);
    }
    if ( !v8 )
    {
LABEL_44:
      if ( !under_debugger )
        interr(2121);
      BUG();
    }
    v16 = (char *)ptr;
    v17 = a1[2];
    v18 = 16 * v8;
    v19 = *((_QWORD *)ptr + 2 * v8 - 1);
    if ( v19 < (unsigned __int64)v17 )
    {
      v31 = v11 + 2;
      v32 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)(unsigned __int64)v17);
      v42 = v32;
      if ( &v42 < ptr || &v42 >= (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v41 + 1)) )
      {
        if ( *((_QWORD *)&v41 + 1) < v31 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v31, 16);
          v16 = (char *)ptr;
          v18 = 16 * v41;
        }
        *(__m128i *)&v16[v18] = _mm_load_si128(&v42);
      }
      else
      {
        if ( *((_QWORD *)&v41 + 1) < v31 )
        {
          v37 = v32;
          v36 = (char *)qvector_reserve(&ptr, ptr, v31, 16);
          v32 = _mm_load_si128(&v37);
          ptr = v36;
          v16 = v36;
          v18 = 16 * v41;
        }
        *(__m128i *)&v16[v18] = v32;
      }
      v17 = a1[2];
      v16 = (char *)ptr;
      LODWORD(v8) = v41 + 1;
      *(_QWORD *)&v41 = v41 + 1;
    }
    v20 = v8;
    v21 = *v38;
    if ( *v38 < (unsigned __int64)v17 )
    {
      v22 = 1;
      if ( v21 > v38[1] )
        v21 = v38[1];
      v23 = 0;
      if ( (unsigned __int64)a1[1] < v21 )
      {
        v23 = v8 - 1;
        v22 = -1;
        v20 = -1;
      }
    }
    else
    {
      v22 = 1;
      v23 = 0;
    }
    v44 = 2;
    v42.m128i_i64[1] = 0;
    v43 = 0;
    v42.m128i_i64[0] = (__int64)off_2B28428;
    v45 = a1;
    if ( v23 != v20 )
    {
      v37.m128i_i64[0] = (__int64)(a1 + 3);
      do
      {
        while ( 1 )
        {
          v24 = &v16[16 * v23];
          v25 = *(_QWORD *)v24;
          v26 = sub_631AD0(**a1, 29) + v25;
          v27 = *a1;
          v39 = v26;
          v28 = (char *)a1[14] + *(_QWORD *)v24;
          v29 = &v28[sub_631AD0(*v27, 29)];
          if ( !(unsigned __int8)rangeset_t_has_common(v37.m128i_i64[0], v24, 0) )
            break;
          netnode_copy2(v39, *((_QWORD *)v24 + 1) - *(_QWORD *)v24, v29, 0, &v42);
          v23 += v22;
          v16 = (char *)ptr;
          if ( v20 == v23 )
            goto LABEL_27;
        }
        sub_7BF7C0(&v39, **a1, v29, *((_QWORD *)v24 + 1) - *(_QWORD *)v24, 1, 0);
        v23 += v22;
        v16 = (char *)ptr;
      }
      while ( v20 != v23 );
    }
LABEL_27:
    if ( v16 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v16);
    }
  }
  else
  {
    v33 = (__int64)v4 + sub_631AD0(**a1, 29);
    v34 = (char *)v4 + (_QWORD)a1[14];
    v42.m128i_i64[0] = v33;
    v35 = sub_631AD0(**a1, 29);
    sub_7BF7C0(&v42, **a1, &v34[v35], (char *)a1[2] - (char *)a1[1], 1, 0);
  }
  return v46 - __readfsqword(0x28u);
}
