unsigned __int64 __fastcall sub_4E9680(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  signed __int32 v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // r14
  __m128i v18; // xmm1
  char v19; // al
  void *v20; // rdi
  __int64 v22; // rdx
  void *v23; // rdi
  int v24; // r13d
  __int32 v25; // r15d
  int v26; // r14d
  __m128i *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // r15
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r8
  _QWORD *v43; // r15
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r13
  __m128i v48; // [rsp+0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+18h] [rbp-70h]
  __int64 ptr; // [rsp+20h] [rbp-68h] BYREF
  __m128i ptr_8; // [rsp+28h] [rbp-60h] BYREF
  char v52; // [rsp+38h] [rbp-50h]
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v13 = 0x10000;
  v14 = *(_QWORD *)(a1 + 8);
  v53 = __readfsqword(0x28u);
  v15 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 8LL) - 1);
  if ( (unsigned int)v15 <= 7 )
  {
    v13 = dword_238A060[v15];
    if ( v13 != 0x10000 )
    {
      v13 |= a4;
      if ( a4 >= 0x10000 )
        v13 = 0x10000;
    }
  }
  sub_4E7970((__int64)&ptr, a1, a6, v13, 0, 0);
  v16 = *(_QWORD **)a2;
  v17 = ptr;
  ptr = 0;
  v18 = _mm_loadu_si128(&ptr_8);
  ptr_8 = 0;
  if ( v16 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v48 = v18;
    qfree(v16);
    v18 = _mm_load_si128(&v48);
    v19 = v52;
    *(_QWORD *)a2 = v17;
    v20 = (void *)ptr;
    *(_BYTE *)(a2 + 24) = v19;
    *(__m128i *)(a2 + 8) = v18;
    if ( v20 )
    {
      ptr_8.m128i_i64[0] = 0;
      qfree(v20);
      v19 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v19 = v52;
    *(_QWORD *)a2 = v17;
    *(__m128i *)(a2 + 8) = v18;
    *(_BYTE *)(a2 + 24) = v19;
  }
  if ( !v19 )
  {
    if ( !under_debugger )
      interr(2911);
LABEL_50:
    BUG();
  }
  if ( (unsigned __int8)(v19 - 1) <= 1u )
    return v53 - __readfsqword(0x28u);
  if ( (unsigned __int8)(v19 - 3) <= 6u )
    goto LABEL_19;
  if ( a3 == 10 )
  {
    if ( (unsigned __int8)(v19 - 10) <= 1u )
    {
      v29 = *(_QWORD *)(a2 + 8);
      ptr = 0;
      ptr_8 = 0;
      if ( v29 )
      {
        v34 = qvector_reserve(&ptr, 0, v29, 8);
        v35 = *(_QWORD *)(a2 + 8);
        v36 = *(_QWORD **)a2;
        ptr = v34;
        v37 = v34;
        v38 = (__int64)&v36[2 * v35];
        if ( v36 != (_QWORD *)v38 )
        {
          v39 = ptr_8.m128i_i64[0];
          while ( 1 )
          {
            v40 = -*v36;
            v49 = v40;
            if ( ptr_8.m128i_i64[1] < (unsigned __int64)(v39 + 1) )
            {
              v48.m128i_i64[0] = v38;
              ptr = qvector_reserve(&ptr, v37, v39 + 1, 8);
              v37 = ptr;
              v38 = v48.m128i_i64[0];
              v39 = ptr_8.m128i_i64[0];
            }
            *(_QWORD *)(v37 + 8 * v39) = v40;
            v36 += 2;
            v39 = ++ptr_8.m128i_i64[0];
            if ( (_QWORD *)v38 == v36 )
              break;
            v37 = ptr;
          }
        }
      }
      sub_4E1940((__int64 *)a2, (__int64)&ptr, a5, 0.0, *(double *)v18.m128i_i64, a9);
      v23 = (void *)ptr;
      if ( ptr )
        goto LABEL_18;
      return v53 - __readfsqword(0x28u);
    }
LABEL_19:
    *(_BYTE *)(a2 + 24) = 4;
    v24 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    ptr = 0xFFFFFFFFLL;
    v25 = *(_DWORD *)(a5 + 8);
    ptr_8.m128i_i32[0] = v25;
    v26 = *(unsigned __int16 *)(a5 + 12);
    ptr_8.m128i_i16[2] = *(_WORD *)(a5 + 12);
    if ( *(_BYTE *)(a5 + 49) == 5 )
      v24 = *(_BYTE *)(a5 + 73) == 0;
    ptr_8.m128i_i16[3] = v24;
    v27 = *(__m128i **)a2;
    v28 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&ptr < *(_QWORD *)a2 || &ptr >= v27[v28].m128i_i64 )
    {
      if ( !v28 )
      {
        v30 = qvector_reserve(a2, v27, 1, 16);
        v31 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v30;
        v27 = (__m128i *)(v30 + 16 * v31);
      }
      *v27 = _mm_load_si128((const __m128i *)&ptr);
    }
    else
    {
      if ( !v28 )
      {
        v32 = qvector_reserve(a2, v27, 1, 16);
        v33 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v32;
        v27 = (__m128i *)(v32 + 16 * v33);
      }
      v27->m128i_i32[2] = v25;
      v27->m128i_i64[0] = 0xFFFFFFFFLL;
      v27->m128i_i32[3] = v26 | (v24 << 16);
    }
    ++*(_QWORD *)(a2 + 8);
    return v53 - __readfsqword(0x28u);
  }
  if ( a3 != 11 )
  {
    if ( !under_debugger )
      interr(2912);
    goto LABEL_50;
  }
  if ( (unsigned __int8)(v19 - 10) > 1u )
    goto LABEL_19;
  v22 = *(_QWORD *)(a2 + 8);
  ptr = 0;
  ptr_8 = 0;
  if ( v22 )
  {
    v41 = qvector_reserve(&ptr, 0, v22, 8);
    v42 = *(_QWORD *)(a2 + 8);
    v43 = *(_QWORD **)a2;
    ptr = v41;
    v44 = v41;
    v45 = (__int64)&v43[2 * v42];
    if ( v43 != (_QWORD *)v45 )
    {
      v46 = ptr_8.m128i_i64[0];
      while ( 1 )
      {
        v47 = ~*v43;
        v49 = v47;
        if ( ptr_8.m128i_i64[1] < (unsigned __int64)(v46 + 1) )
        {
          v48.m128i_i64[0] = v45;
          ptr = qvector_reserve(&ptr, v44, v46 + 1, 8);
          v44 = ptr;
          v45 = v48.m128i_i64[0];
          v46 = ptr_8.m128i_i64[0];
        }
        *(_QWORD *)(v44 + 8 * v46) = v47;
        v43 += 2;
        v46 = ++ptr_8.m128i_i64[0];
        if ( (_QWORD *)v45 == v43 )
          break;
        v44 = ptr;
      }
    }
  }
  sub_4E1940((__int64 *)a2, (__int64)&ptr, a5, 0.0, *(double *)v18.m128i_i64, a9);
  v23 = (void *)ptr;
  if ( ptr )
  {
LABEL_18:
    ptr_8.m128i_i64[0] = 0;
    qfree(v23);
  }
  return v53 - __readfsqword(0x28u);
}

