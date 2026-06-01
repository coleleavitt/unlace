unsigned __int64 __fastcall sub_4DE4B0(
        const __m128i *a1,
        __int64 *a2,
        char a3,
        char a4,
        const __m128i *a5,
        const __m128i *a6,
        double a7,
        double a8,
        __m128 a9)
{
  const __m128i *v12; // r14
  __int64 *search_utils; // rdi
  __int64 v14; // rax
  void (__fastcall *v15)(__int64 *, __m128 *, const __m128i *, __int64 *, __m128i *, __m128i *); // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  __m128 v18; // xmm0
  unsigned __int64 v19; // xmm2_8
  _OWORD *v20; // rsi
  volatile signed __int32 *v21; // r12
  volatile signed __int32 *v22; // rdx
  signed __int32 v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rdx
  signed __int32 v28; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  int v32; // edx
  __int64 v33; // [rsp+8h] [rbp-80h] BYREF
  __m128 v34; // [rsp+10h] [rbp-78h] BYREF
  __m128i v35; // [rsp+20h] [rbp-68h] BYREF
  __m128i v36; // [rsp+30h] [rbp-58h] BYREF
  void (__fastcall *v37)(__m128i *, __m128i *, __int64); // [rsp+40h] [rbp-48h]
  __int64 v38; // [rsp+48h] [rbp-40h]
  unsigned __int64 v39; // [rsp+58h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  if ( a4 )
  {
    v12 = (const __m128i *)((char *)a1 + 360);
    if ( a3 )
      v12 = a1 + 29;
  }
  else
  {
    v12 = (const __m128i *)((char *)a1 + 152);
    if ( a3 )
      v12 = a1 + 16;
  }
  search_utils = (__int64 *)get_search_utils();
  v14 = *search_utils;
  v36 = 0;
  v35 = _mm_loadu_si128(a6);
  v15 = *(void (__fastcall **)(__int64 *, __m128 *, const __m128i *, __int64 *, __m128i *, __m128i *))(v14 + 24);
  *a6 = 0;
  v16 = a5[1].m128i_i64[1];
  v37 = nullptr;
  v38 = v16;
  if ( a5[1].m128i_i64[0] )
  {
    v17 = _mm_loadu_si128(a5);
    v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a5[1].m128i_i64[0];
    a5[1] = 0;
    v36 = v17;
  }
  v33 = *a2;
  *a2 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
  v18 = (__m128)_mm_loadu_si128(a1);
  v19 = _mm_movehl_ps(a9, v18).m128_u64[0];
  v34 = v18;
  if ( v19 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
    else
      ++*(_DWORD *)(v19 + 8);
  }
  v20 = &v34;
  v15(search_utils, &v34, v12, &v33, &v36, &v35);
  v21 = (volatile signed __int32 *)v34.m128_u64[1];
  if ( v34.m128_u64[1] )
  {
    v22 = (volatile signed __int32 *)(v34.m128_u64[1] + 8);
    if ( *(_QWORD *)(v34.m128_u64[1] + 8) == 0x100000001LL )
    {
      *(_QWORD *)(v34.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __m128 *, volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(
        v21,
        &v34,
        v22);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
      v24 = v33;
      v25 = v33 - 24;
      if ( (_UNKNOWN *)(v33 - 24) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_16;
      goto LABEL_31;
    }
    if ( &_pthread_key_create )
    {
      v23 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
    }
    else
    {
      v23 = *(_DWORD *)(v34.m128_u64[1] + 8);
      *(_DWORD *)(v34.m128_u64[1] + 8) = v23 - 1;
    }
    if ( v23 == 1 )
      sub_434350(v21);
  }
  v24 = v33;
  v25 = v33 - 24;
  if ( (_UNKNOWN *)(v33 - 24) == &std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_16;
LABEL_31:
  if ( &_pthread_key_create )
  {
    v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 - 8), 0xFFFFFFFF);
  }
  else
  {
    v32 = *(_DWORD *)(v24 - 8);
    *(_DWORD *)(v24 - 8) = v32 - 1;
  }
  if ( v32 <= 0 )
  {
    v20 = &v34;
    std::string::_Rep::_M_destroy(v25, &v34);
  }
LABEL_16:
  if ( v37 )
  {
    v20 = &v36;
    v37(&v36, &v36, 3);
  }
  v26 = (volatile signed __int32 *)v35.m128i_i64[1];
  if ( v35.m128i_i64[1] )
  {
    v27 = (volatile signed __int32 *)(v35.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v35.m128i_i64[1] + 8) == 0x100000001LL )
    {
      v30 = *(_QWORD *)v35.m128i_i64[1];
      v31 = v35.m128i_i64[1];
      *(_QWORD *)(v35.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(__int64, _OWORD *, volatile signed __int32 *))(v30 + 16))(v31, v20, v27);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 24LL))(v26);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v28 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      }
      else
      {
        v28 = *(_DWORD *)(v35.m128i_i64[1] + 8);
        *(_DWORD *)(v35.m128i_i64[1] + 8) = v28 - 1;
      }
      if ( v28 == 1 )
        sub_434350(v26);
    }
  }
  return v39 - __readfsqword(0x28u);
}
