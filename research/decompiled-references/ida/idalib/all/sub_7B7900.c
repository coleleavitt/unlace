__int64 __fastcall sub_7B7900(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // r13
  unsigned int v10; // ebx
  __m128i *v11; // rax
  __int8 v12; // r8
  __m128i *v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  __m128i *v19; // rax
  __int8 v20; // r8
  __m128i *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r15
  __m128i *v25; // rdi
  __int64 v26; // rax
  __m128i *v27; // rdx
  __m128i v28; // xmm0
  bool v29; // cf
  void *v30; // rdi
  __int64 result; // rax
  char *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r15
  __m128i *v35; // rdi
  __int64 v36; // rax
  __m128i *v37; // rdx
  __m128i v38; // xmm0
  __int64 v39; // r15
  __m128i *v40; // rdi
  __int64 v41; // rax
  __m128i *v42; // rdx
  __m128i v43; // xmm0
  __int64 v44; // r15
  __m128i *v45; // rdi
  __int64 v46; // rax
  __m128i *v47; // rdx
  __m128i v48; // xmm0
  unsigned int v49; // [rsp+0h] [rbp-90h]
  char *v50; // [rsp+0h] [rbp-90h]
  __int64 v51; // [rsp+0h] [rbp-90h]
  __int64 v52; // [rsp+0h] [rbp-90h]
  __int8 v53; // [rsp+0h] [rbp-90h]
  __int64 v55; // [rsp+10h] [rbp-80h]
  __int8 v56; // [rsp+10h] [rbp-80h]
  __int64 v57; // [rsp+10h] [rbp-80h]
  __int64 v59; // [rsp+20h] [rbp-70h]
  __m128i v60; // [rsp+28h] [rbp-68h] BYREF
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v62; // [rsp+40h] [rbp-50h]
  unsigned __int64 v63; // [rsp+50h] [rbp-40h]

  v6 = a3 + a5;
  v63 = __readfsqword(0x28u);
  v62 = 0;
  ptr = nullptr;
  if ( a3 >= a4 || a4 >= v6 )
  {
    if ( a3 )
      v16 = sub_7B7340(a1, a2, a3 - 1, a6);
    else
      v16 = sub_7B72C0(a1, a2, a6);
    v17 = v16;
    v18 = a6;
    BYTE1(v18) = BYTE1(a6) | 0x10;
    v49 = v18;
    while ( v17 < v6 )
    {
      v60.m128i_i8[8] = sub_7B4330(a1, a2, v17, v49);
      v20 = v60.m128i_i8[8];
      v21 = (__m128i *)ptr;
      v22 = v62;
      v60.m128i_i64[0] = v17;
      v23 = v62 + 1;
      if ( &v60 < ptr || &v60 >= (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v62 + 1)) )
      {
        if ( *((_QWORD *)&v62 + 1) < v23 )
        {
          v55 = *((_QWORD *)&v62 + 1);
          v21 = (__m128i *)qvector_reserve(&ptr, 0, v23, 16);
          v24 = *((_QWORD *)&v62 + 1);
          v25 = (__m128i *)ptr;
          *((_QWORD *)&v62 + 1) = v55;
          v26 = v62 - 1;
          if ( (__int64)v62 - 1 >= 0 )
          {
            v27 = v21;
            do
            {
              v28 = _mm_loadu_si128(v25);
              ++v27;
              ++v25;
              v27[-1] = v28;
              v29 = v26-- == 0;
            }
            while ( !v29 );
            v25 = (__m128i *)ptr;
          }
          qfree(v25);
          v22 = v62;
          *((_QWORD *)&v62 + 1) = v24;
          ptr = v21;
        }
        v21[v22] = _mm_load_si128(&v60);
      }
      else
      {
        if ( *((_QWORD *)&v62 + 1) < v23 )
        {
          v59 = *((_QWORD *)&v62 + 1);
          v56 = v60.m128i_i8[8];
          v21 = (__m128i *)qvector_reserve(&ptr, 0, v23, 16);
          v39 = *((_QWORD *)&v62 + 1);
          v40 = (__m128i *)ptr;
          v41 = v62 - 1;
          *((_QWORD *)&v62 + 1) = v59;
          if ( (__int64)v62 - 1 >= 0 )
          {
            v42 = v21;
            do
            {
              v43 = _mm_loadu_si128(v40);
              ++v42;
              ++v40;
              v42[-1] = v43;
              v29 = v41-- == 0;
            }
            while ( !v29 );
            v40 = (__m128i *)ptr;
          }
          qfree(v40);
          v22 = v62;
          *((_QWORD *)&v62 + 1) = v39;
          v20 = v56;
          ptr = v21;
        }
        v19 = &v21[v22];
        v19->m128i_i64[0] = v17;
        v19->m128i_i8[8] = v20;
      }
      *(_QWORD *)&v62 = v62 + 1;
      sub_7B4CA0(a1, a2, v17, a6);
      v17 = sub_7B7340(a1, a2, v17, a6);
    }
  }
  else
  {
    v10 = a6;
    BYTE1(v10) = BYTE1(a6) | 0x10;
    while ( 1 )
    {
      v6 = sub_7B76F0(a1, a2, v6, a6);
      if ( v6 < a3 || v6 == -1 )
        break;
      v60.m128i_i8[8] = sub_7B4330(a1, a2, v6, v10);
      v12 = v60.m128i_i8[8];
      v13 = (__m128i *)ptr;
      v14 = v62;
      v60.m128i_i64[0] = v6;
      v15 = v62 + 1;
      if ( &v60 < ptr || &v60 >= (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v62 + 1)) )
      {
        if ( *((_QWORD *)&v62 + 1) < v15 )
        {
          v52 = *((_QWORD *)&v62 + 1);
          v13 = (__m128i *)qvector_reserve(&ptr, 0, v15, 16);
          v34 = *((_QWORD *)&v62 + 1);
          v35 = (__m128i *)ptr;
          *((_QWORD *)&v62 + 1) = v52;
          v36 = v62 - 1;
          if ( (__int64)v62 - 1 >= 0 )
          {
            v37 = v13;
            do
            {
              v38 = _mm_loadu_si128(v35);
              ++v37;
              ++v35;
              v37[-1] = v38;
              v29 = v36-- == 0;
            }
            while ( !v29 );
            v35 = (__m128i *)ptr;
          }
          qfree(v35);
          v14 = v62;
          *((_QWORD *)&v62 + 1) = v34;
          ptr = v13;
        }
        v13[v14] = _mm_load_si128(&v60);
      }
      else
      {
        if ( *((_QWORD *)&v62 + 1) < v15 )
        {
          v57 = *((_QWORD *)&v62 + 1);
          v53 = v60.m128i_i8[8];
          v13 = (__m128i *)qvector_reserve(&ptr, 0, v15, 16);
          v44 = *((_QWORD *)&v62 + 1);
          v45 = (__m128i *)ptr;
          v46 = v62 - 1;
          *((_QWORD *)&v62 + 1) = v57;
          if ( (__int64)v62 - 1 >= 0 )
          {
            v47 = v13;
            do
            {
              v48 = _mm_loadu_si128(v45);
              ++v47;
              ++v45;
              v47[-1] = v48;
              v29 = v46-- == 0;
            }
            while ( !v29 );
            v45 = (__m128i *)ptr;
          }
          qfree(v45);
          v14 = v62;
          *((_QWORD *)&v62 + 1) = v44;
          v12 = v53;
          ptr = v13;
        }
        v11 = &v13[v14];
        v11->m128i_i64[0] = v6;
        v11->m128i_i8[8] = v12;
      }
      *(_QWORD *)&v62 = v62 + 1;
      sub_7B4CA0(a1, a2, v6, a6);
    }
  }
  v30 = ptr;
  result = v62;
  v32 = (char *)ptr;
  v50 = (char *)ptr + 16 * v62;
  if ( v50 != ptr )
  {
    do
    {
      v33 = a4 - a3 + *(_QWORD *)v32;
      v60.m128i_i8[0] = v32[8];
      sub_7B4100(a1, a2, v33, v60.m128i_i8, 1u, a6);
      v32 += 16;
    }
    while ( v50 != v32 );
    v30 = ptr;
    result = v62;
  }
  if ( v30 )
  {
    v51 = result;
    *(_QWORD *)&v62 = 0;
    qfree(v30);
    return v51;
  }
  return result;
}
