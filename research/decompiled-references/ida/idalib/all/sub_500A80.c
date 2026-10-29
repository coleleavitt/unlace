unsigned __int64 __fastcall sub_500A80(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        double a7,
        double a8,
        __m128 a9,
        unsigned __int64 a10,
        unsigned __int64 a11)
{
  __int64 v13; // rax
  Elf64_Sym *v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // r14
  __m128i v19; // xmm1
  char v20; // al
  void *v21; // rdi
  __int64 v23; // rdx
  void *v24; // rdi
  int v25; // r13d
  __int64 v26; // r15
  int v27; // r14d
  __m128i *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  _QWORD *v36; // r15
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rsi
  _QWORD *v41; // r15
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r13
  __m128i v45; // [rsp+0h] [rbp-88h] BYREF
  __int64 v46; // [rsp+18h] [rbp-70h]
  __int64 ptr; // [rsp+20h] [rbp-68h] BYREF
  __m128i ptr_8; // [rsp+28h] [rbp-60h] BYREF
  char v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v13 = *(_QWORD *)(a1 + 8);
  v50 = __readfsqword(0x28u);
  v15 = &stru_10000;
  v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v13 + 32) + 24LL) - 1);
  if ( (unsigned int)v16 <= 7 )
  {
    LODWORD(v15) = dword_23AE1C0[v16];
    if ( (_DWORD)v15 != (_DWORD)&stru_10000 )
    {
      LODWORD(v15) = a4 | (unsigned int)v15;
      if ( a4 >= (unsigned int)&stru_10000 )
        v15 = &stru_10000;
    }
  }
  sub_5001E0((__int64)&ptr, a1, a10, a11, (unsigned __int32)v15, 0, 0);
  v17 = *(_QWORD **)a2;
  v18 = ptr;
  ptr = 0;
  v19 = _mm_loadu_si128(&ptr_8);
  ptr_8 = 0;
  if ( v17 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v45 = v19;
    qfree(v17);
    v19 = _mm_load_si128(&v45);
    v20 = v49;
    *(_QWORD *)a2 = v18;
    v21 = (void *)ptr;
    *(_BYTE *)(a2 + 24) = v20;
    *(__m128i *)(a2 + 8) = v19;
    if ( v21 )
    {
      ptr_8.m128i_i64[0] = 0;
      qfree(v21);
      v20 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v20 = v49;
    *(_QWORD *)a2 = v18;
    *(__m128i *)(a2 + 8) = v19;
    *(_BYTE *)(a2 + 24) = v20;
  }
  if ( !v20 )
  {
    if ( !under_debugger )
      interr(2911);
LABEL_50:
    BUG();
  }
  if ( (unsigned __int8)(v20 - 1) <= 1u )
    return v50 - __readfsqword(0x28u);
  if ( (unsigned __int8)(v20 - 3) <= 6u )
    goto LABEL_19;
  if ( a3 == 10 )
  {
    if ( (unsigned __int8)(v20 - 10) <= 1u )
    {
      v30 = *(_QWORD *)(a2 + 8);
      ptr = 0;
      ptr_8 = 0;
      if ( v30 )
      {
        ptr = qvector_reserve(&ptr, 0, v30, 8);
        v35 = ptr;
        v36 = *(_QWORD **)a2;
        v37 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 != v37 )
        {
          v38 = ptr_8.m128i_i64[0];
          while ( 1 )
          {
            v39 = -*v36;
            v46 = v39;
            if ( ptr_8.m128i_i64[1] < (unsigned __int64)(v38 + 1) )
            {
              v45.m128i_i64[0] = v37;
              ptr = qvector_reserve(&ptr, v35, v38 + 1, 8);
              v35 = ptr;
              v37 = v45.m128i_i64[0];
              v38 = ptr_8.m128i_i64[0];
            }
            *(_QWORD *)(v35 + 8 * v38) = v39;
            v36 += 3;
            v38 = ++ptr_8.m128i_i64[0];
            if ( (_QWORD *)v37 == v36 )
              break;
            v35 = ptr;
          }
        }
      }
      sub_4F7DC0((__int64 *)a2, (__int64)&ptr, a5, 0.0, *(double *)v19.m128i_i64, a9);
      v24 = (void *)ptr;
      if ( ptr )
        goto LABEL_18;
      return v50 - __readfsqword(0x28u);
    }
LABEL_19:
    *(_BYTE *)(a2 + 24) = 4;
    v25 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    ptr = -1;
    v26 = *(_QWORD *)(a5 + 16);
    ptr_8.m128i_i64[0] = v26;
    v27 = *(unsigned __int16 *)(a5 + 24);
    ptr_8.m128i_i16[4] = *(_WORD *)(a5 + 24);
    if ( *(_BYTE *)(a5 + 81) == 5 )
      v25 = *(_BYTE *)(a5 + 121) == 0;
    ptr_8.m128i_i16[5] = v25;
    v28 = *(__m128i **)a2;
    v29 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&ptr < *(_QWORD *)a2 || &ptr >= &v28->m128i_i64[3 * v29] )
    {
      if ( !v29 )
      {
        v31 = qvector_reserve(a2, v28, 1, 24);
        v32 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v31;
        v28 = (__m128i *)(v31 + 24 * v32);
      }
      *v28 = _mm_load_si128((const __m128i *)&ptr);
      v28[1].m128i_i64[0] = ptr_8.m128i_i64[1];
    }
    else
    {
      if ( !v29 )
      {
        v33 = qvector_reserve(a2, v28, 1, 24);
        v34 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v33;
        v28 = (__m128i *)(v33 + 24 * v34);
      }
      v28->m128i_i64[0] = -1;
      v28->m128i_i64[1] = v26;
      v28[1].m128i_i32[0] = v27 | (v25 << 16);
    }
    ++*(_QWORD *)(a2 + 8);
    return v50 - __readfsqword(0x28u);
  }
  if ( a3 != 11 )
  {
    if ( !under_debugger )
      interr(2912);
    goto LABEL_50;
  }
  if ( (unsigned __int8)(v20 - 10) > 1u )
    goto LABEL_19;
  v23 = *(_QWORD *)(a2 + 8);
  ptr = 0;
  ptr_8 = 0;
  if ( v23 )
  {
    ptr = qvector_reserve(&ptr, 0, v23, 8);
    v40 = ptr;
    v41 = *(_QWORD **)a2;
    v42 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)a2 != v42 )
    {
      v43 = ptr_8.m128i_i64[0];
      while ( 1 )
      {
        v44 = ~*v41;
        v46 = v44;
        if ( ptr_8.m128i_i64[1] < (unsigned __int64)(v43 + 1) )
        {
          v45.m128i_i64[0] = v42;
          ptr = qvector_reserve(&ptr, v40, v43 + 1, 8);
          v40 = ptr;
          v42 = v45.m128i_i64[0];
          v43 = ptr_8.m128i_i64[0];
        }
        *(_QWORD *)(v40 + 8 * v43) = v44;
        v41 += 3;
        v43 = ++ptr_8.m128i_i64[0];
        if ( (_QWORD *)v42 == v41 )
          break;
        v40 = ptr;
      }
    }
  }
  sub_4F7DC0((__int64 *)a2, (__int64)&ptr, a5, 0.0, *(double *)v19.m128i_i64, a9);
  v24 = (void *)ptr;
  if ( ptr )
  {
LABEL_18:
    ptr_8.m128i_i64[0] = 0;
    qfree(v24);
  }
  return v50 - __readfsqword(0x28u);
}
