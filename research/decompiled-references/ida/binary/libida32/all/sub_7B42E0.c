void __fastcall __noreturn sub_7B42E0(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        unsigned int a11)
{
  __int64 v11; // rbp
  _BYTE *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  void *v29; // r13
  __m128i v30; // xmm0
  unsigned __int64 v31; // rax
  void *v32; // rdi
  __m128i v33; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  void *v35[2]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v36; // [rsp+30h] [rbp-58h]
  char v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+40h] [rbp-48h] BYREF
  __int128 v39; // [rsp+48h] [rbp-40h]
  unsigned __int64 v40; // [rsp+58h] [rbp-30h]
  __int64 v41; // [rsp+70h] [rbp-18h]

  v41 = v11;
  v40 = __readfsqword(0x28u);
  v37 = 31;
  v38 = 0;
  v36 = (__int64)&off_2B11A70;
  ptr = nullptr;
  v39 = 0;
  *(_OWORD *)v35 = 0;
  v14 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v14;
  v35[0] = &byte_6;
  *(_DWORD *)v14 = 1701145715;
  v14[4] = 112;
  *((_BYTE *)ptr + 5) = 0;
  v15 = v39;
  v16 = v38;
  v17 = v39 + 1;
  if ( (unsigned __int64)&ptr >= v38 && (unsigned __int64)&ptr < v38 + 24LL * *((_QWORD *)&v39 + 1) )
  {
    a5 = 0;
    v29 = ptr;
    v30 = _mm_loadl_epi64((const __m128i *)v35);
    ptr = nullptr;
    a4 = (__m128)_mm_loadl_epi64((const __m128i *)&v35[1]);
    *(_OWORD *)v35 = 0;
    if ( *((_QWORD *)&v39 + 1) < v17 )
    {
      v33.m128i_i64[1] = a4.m128_u64[0];
      v33.m128i_i64[0] = v30.m128i_i64[0];
      v38 = qvector_reserve(&v38, v38, v39 + 1, 24);
      v16 = v38;
      a4 = (__m128)_mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
      v15 = v39;
      v30 = _mm_loadl_epi64(&v33);
    }
    v31 = v16 + 24 * v15;
    *(_QWORD *)v31 = v29;
    v32 = ptr;
    *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v30, (__m128i)a4);
    v20 = v39 + 1;
    *(_QWORD *)&v39 = v39 + 1;
    if ( v32 )
    {
      v35[0] = nullptr;
      qfree(v32);
      v20 = v39;
      v21 = v38;
      v22 = v39 + 1;
      if ( *((_QWORD *)&v39 + 1) >= (unsigned __int64)(v39 + 1) )
        goto LABEL_7;
      goto LABEL_12;
    }
  }
  else
  {
    if ( *((_QWORD *)&v39 + 1) < v17 )
    {
      v38 = qvector_reserve(&v38, v38, v39 + 1, 24);
      v16 = v38;
      v15 = v39;
    }
    v18 = _mm_loadu_si128((const __m128i *)v35);
    v19 = v16 + 24 * v15;
    *(_QWORD *)v19 = ptr;
    *(__m128i *)(v19 + 8) = v18;
    v20 = v39 + 1;
    *(_QWORD *)&v39 = v39 + 1;
  }
  v21 = v38;
  v22 = v20 + 1;
  if ( *((_QWORD *)&v39 + 1) >= (unsigned __int64)(v20 + 1) )
    goto LABEL_7;
LABEL_12:
  v38 = qvector_reserve(&v38, v21, v22, 24);
  v20 = v39;
  v21 = v38;
LABEL_7:
  v23 = v21 + 24 * v20;
  *(_QWORD *)v23 = 0;
  *(_OWORD *)(v23 + 8) = 0;
  *(_QWORD *)&v39 = v39 + 1;
  sub_3573A0((char **)v23);
  sub_79C9B0(
    a1,
    (__m128)0LL,
    a4,
    a5,
    a6,
    v27,
    v28,
    a9,
    a10,
    (__int64)"Sleeping %u msec...",
    a11,
    v24,
    v25,
    v26,
    v33.m128i_i8[0]);
}

