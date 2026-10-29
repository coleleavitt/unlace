__int64 __fastcall sub_7B7EA0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r14
  __int64 v10; // r15
  __m128i *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 v15; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 *v17; // rax
  __int64 v18; // r8
  __m128i *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  void *v22; // rdi
  __int64 result; // rax
  char *v24; // r15
  char *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  __m128i *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rcx
  __int64 v35; // rsi
  __m128i *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // rsi
  __m128i *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rcx
  __int64 v47; // rsi
  __m128i *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __m128i v51; // xmm0
  __int64 v53; // [rsp+0h] [rbp-90h]
  __int64 v54; // [rsp+8h] [rbp-88h]
  __m128i *v55; // [rsp+8h] [rbp-88h]
  __int64 v56; // [rsp+8h] [rbp-88h]
  __m128i *v57; // [rsp+8h] [rbp-88h]
  __int64 v58; // [rsp+8h] [rbp-88h]
  __int64 v59; // [rsp+8h] [rbp-88h]
  __m128i *v60; // [rsp+8h] [rbp-88h]
  __int64 v61; // [rsp+10h] [rbp-80h]
  __m128i *v62; // [rsp+10h] [rbp-80h]
  __m128i v64; // [rsp+28h] [rbp-68h] BYREF
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v66; // [rsp+40h] [rbp-50h]
  unsigned __int64 v67; // [rsp+50h] [rbp-40h]

  v6 = a3 + a5;
  v67 = __readfsqword(0x28u);
  v66 = 0;
  ptr = nullptr;
  if ( a3 >= a4 || a4 >= v6 )
  {
    if ( a3 )
      v15 = sub_7B7340(a1, a2, a3 - 1, a6);
    else
      v15 = sub_7B72C0(a1, a2, a6);
    for ( i = v15; i < v6; i = sub_7B7340(a1, a2, i, a6) )
    {
      v64.m128i_i64[1] = sub_7B4330(a1, a2, i, a6);
      v18 = v64.m128i_i64[1];
      v19 = (__m128i *)ptr;
      v20 = v66;
      v64.m128i_i64[0] = i;
      v21 = v66 + 1;
      if ( &v64 < ptr || &v64 >= (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v66 + 1)) )
      {
        if ( *((_QWORD *)&v66 + 1) < v21 )
        {
          v56 = *((_QWORD *)&v66 + 1);
          v34 = qvector_reserve(&ptr, 0, v21, 16);
          v35 = *((_QWORD *)&v66 + 1);
          v36 = (__m128i *)ptr;
          *((_QWORD *)&v66 + 1) = v56;
          v37 = v66 - 1;
          if ( (__int64)v66 - 1 >= 0 )
          {
            v38 = v34;
            do
            {
              v39 = _mm_loadu_si128(v36);
              v38 += 16;
              ++v36;
              *(__m128i *)(v38 - 16) = v39;
              v33 = v37-- == 0;
            }
            while ( !v33 );
            v36 = (__m128i *)ptr;
          }
          v57 = (__m128i *)v34;
          qfree(v36);
          v19 = v57;
          v20 = v66;
          ptr = v57;
          *((_QWORD *)&v66 + 1) = v35;
        }
        v19[v20] = _mm_load_si128(&v64);
      }
      else
      {
        if ( *((_QWORD *)&v66 + 1) < v21 )
        {
          v61 = *((_QWORD *)&v66 + 1);
          v58 = v64.m128i_i64[1];
          v40 = qvector_reserve(&ptr, 0, v21, 16);
          v41 = *((_QWORD *)&v66 + 1);
          v42 = (__m128i *)ptr;
          v43 = v66 - 1;
          *((_QWORD *)&v66 + 1) = v61;
          if ( (__int64)v66 - 1 >= 0 )
          {
            v44 = v40;
            do
            {
              v45 = _mm_loadu_si128(v42);
              v44 += 16;
              ++v42;
              *(__m128i *)(v44 - 16) = v45;
              v33 = v43-- == 0;
            }
            while ( !v33 );
            v42 = (__m128i *)ptr;
          }
          v62 = (__m128i *)v40;
          qfree(v42);
          v19 = v62;
          v20 = v66;
          v18 = v58;
          ptr = v62;
          *((_QWORD *)&v66 + 1) = v41;
        }
        v17 = (unsigned __int64 *)&v19[v20];
        *v17 = i;
        v17[1] = v18;
      }
      *(_QWORD *)&v66 = v66 + 1;
      sub_7B4CA0(a1, a2, i, a6);
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = sub_7B76F0(a1, a2, v6, a6);
      if ( v6 < a3 || v6 == -1 )
        break;
      v64.m128i_i64[1] = sub_7B4330(a1, a2, v6, a6);
      v10 = v64.m128i_i64[1];
      v11 = (__m128i *)ptr;
      v12 = v66;
      v64.m128i_i64[0] = v6;
      v13 = v66 + 1;
      if ( &v64 < ptr || &v64 >= (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v66 + 1)) )
      {
        if ( *((_QWORD *)&v66 + 1) < v13 )
        {
          v54 = *((_QWORD *)&v66 + 1);
          v27 = qvector_reserve(&ptr, 0, v13, 16);
          v28 = *((_QWORD *)&v66 + 1);
          v29 = (__m128i *)ptr;
          *((_QWORD *)&v66 + 1) = v54;
          v30 = v66 - 1;
          if ( (__int64)v66 - 1 >= 0 )
          {
            v31 = v27;
            do
            {
              v32 = _mm_loadu_si128(v29);
              v31 += 16;
              ++v29;
              *(__m128i *)(v31 - 16) = v32;
              v33 = v30-- == 0;
            }
            while ( !v33 );
            v29 = (__m128i *)ptr;
          }
          v55 = (__m128i *)v27;
          qfree(v29);
          v11 = v55;
          v12 = v66;
          *((_QWORD *)&v66 + 1) = v28;
          ptr = v55;
        }
        v11[v12] = _mm_load_si128(&v64);
      }
      else
      {
        if ( *((_QWORD *)&v66 + 1) < v13 )
        {
          v59 = *((_QWORD *)&v66 + 1);
          v46 = qvector_reserve(&ptr, 0, v13, 16);
          v47 = *((_QWORD *)&v66 + 1);
          v48 = (__m128i *)ptr;
          *((_QWORD *)&v66 + 1) = v59;
          v49 = v66 - 1;
          if ( (__int64)v66 - 1 >= 0 )
          {
            v50 = v46;
            do
            {
              v51 = _mm_loadu_si128(v48);
              v50 += 16;
              ++v48;
              *(__m128i *)(v50 - 16) = v51;
              v33 = v49-- == 0;
            }
            while ( !v33 );
            v48 = (__m128i *)ptr;
          }
          v60 = (__m128i *)v46;
          qfree(v48);
          v11 = v60;
          v12 = v66;
          ptr = v60;
          *((_QWORD *)&v66 + 1) = v47;
        }
        v14 = (unsigned __int64 *)&v11[v12];
        *v14 = v6;
        v14[1] = v10;
      }
      *(_QWORD *)&v66 = v66 + 1;
      sub_7B4CA0(a1, a2, v6, a6);
    }
  }
  v22 = ptr;
  result = v66;
  v24 = (char *)ptr;
  v25 = (char *)ptr + 16 * v66;
  if ( v25 != ptr )
  {
    do
    {
      v26 = a4 - a3 + *(_QWORD *)v24;
      v64.m128i_i64[0] = *((_QWORD *)v24 + 1);
      sub_7B4100(a1, a2, v26, v64.m128i_i8, 8u, a6);
      v24 += 16;
    }
    while ( v25 != v24 );
    v22 = ptr;
    result = v66;
  }
  if ( v22 )
  {
    v53 = result;
    *(_QWORD *)&v66 = 0;
    qfree(v22);
    return v53;
  }
  return result;
}
