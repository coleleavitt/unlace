unsigned __int64 __fastcall sub_4C7370(
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
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rdx
  signed __int32 v27; // eax
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  __int64 v32; // [rsp+8h] [rbp-80h] BYREF
  __m128 v33; // [rsp+10h] [rbp-78h] BYREF
  __m128i v34; // [rsp+20h] [rbp-68h] BYREF
  __m128i v35; // [rsp+30h] [rbp-58h] BYREF
  void (__fastcall *v36)(__m128i *, __m128i *, __int64); // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+48h] [rbp-40h]
  unsigned __int64 v38; // [rsp+58h] [rbp-30h]

  v38 = __readfsqword(0x28u);
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
  v35 = 0;
  v34 = _mm_loadu_si128(a6);
  v15 = *(void (__fastcall **)(__int64 *, __m128 *, const __m128i *, __int64 *, __m128i *, __m128i *))(v14 + 24);
  *a6 = 0;
  v16 = a5[1].m128i_i64[1];
  v36 = nullptr;
  v37 = v16;
  if ( a5[1].m128i_i64[0] )
  {
    v17 = _mm_loadu_si128(a5);
    v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a5[1].m128i_i64[0];
    a5[1] = 0;
    v35 = v17;
  }
  v32 = *a2;
  *a2 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
  v18 = (__m128)_mm_loadu_si128(a1);
  v19 = _mm_movehl_ps(a9, v18).m128_u64[0];
  v33 = v18;
  if ( v19 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
    else
      ++*(_DWORD *)(v19 + 8);
  }
  v20 = &v33;
  v15(search_utils, &v33, v12, &v32, &v35, &v34);
  v21 = (volatile signed __int32 *)v33.m128_u64[1];
  if ( v33.m128_u64[1] )
  {
    v22 = (volatile signed __int32 *)(v33.m128_u64[1] + 8);
    if ( *(_QWORD *)(v33.m128_u64[1] + 8) == 0x100000001LL )
    {
      *(_QWORD *)(v33.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __m128 *, volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(
        v21,
        &v33,
        v22);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
      v24 = v32;
      if ( (_UNKNOWN *)(v32 - 24) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_16;
      goto LABEL_31;
    }
    if ( &_pthread_key_create )
    {
      v23 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
    }
    else
    {
      v23 = *(_DWORD *)(v33.m128_u64[1] + 8);
      *(_DWORD *)(v33.m128_u64[1] + 8) = v23 - 1;
    }
    if ( v23 == 1 )
      sub_420480(v21);
  }
  v24 = v32;
  if ( (_UNKNOWN *)(v32 - 24) == &std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_16;
LABEL_31:
  if ( &_pthread_key_create )
  {
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 - 8), 0xFFFFFFFF);
  }
  else
  {
    v31 = *(_DWORD *)(v24 - 8);
    *(_DWORD *)(v24 - 8) = v31 - 1;
  }
  if ( v31 <= 0 )
  {
    v20 = &v33;
    std::string::_Rep::_M_destroy();
  }
LABEL_16:
  if ( v36 )
  {
    v20 = &v35;
    v36(&v35, &v35, 3);
  }
  v25 = (volatile signed __int32 *)v34.m128i_i64[1];
  if ( v34.m128i_i64[1] )
  {
    v26 = (volatile signed __int32 *)(v34.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v34.m128i_i64[1] + 8) == 0x100000001LL )
    {
      v29 = *(_QWORD *)v34.m128i_i64[1];
      v30 = v34.m128i_i64[1];
      *(_QWORD *)(v34.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(__int64, _OWORD *, volatile signed __int32 *))(v29 + 16))(v30, v20, v26);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 24LL))(v25);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v27 = _InterlockedExchangeAdd(v26, 0xFFFFFFFF);
      }
      else
      {
        v27 = *(_DWORD *)(v34.m128i_i64[1] + 8);
        *(_DWORD *)(v34.m128i_i64[1] + 8) = v27 - 1;
      }
      if ( v27 == 1 )
        sub_420480(v25);
    }
  }
  return v38 - __readfsqword(0x28u);
}

