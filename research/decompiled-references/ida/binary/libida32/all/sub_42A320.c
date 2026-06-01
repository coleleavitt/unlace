unsigned __int64 __fastcall sub_42A320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6, __m128 a7)
{
  __int64 v9; // rax
  std::__future_base::_Result_base *v10; // r13
  _QWORD *v11; // rsi
  void (__fastcall *v12)(__int64, _QWORD *, __int64, _QWORD *, _OWORD *); // rax
  volatile signed __int32 *v13; // rbp
  volatile signed __int32 *v14; // rdx
  signed __int32 v15; // eax
  __m128 v16; // xmm0
  unsigned __int64 v17; // xmm2_8
  char v18; // al
  void *v19; // rdi
  __int64 v20; // r12
  __m128i v21; // xmm0
  volatile signed __int32 *v22; // rbp
  volatile signed __int32 *v23; // rdx
  signed __int32 v24; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __m128i v29; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v30; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v31; // [rsp+20h] [rbp-A8h] BYREF
  std::__future_base::_Result_base *v32; // [rsp+30h] [rbp-98h]
  _OWORD v33[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v35; // [rsp+70h] [rbp-58h]
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v29.m128i_i64[0] = a3;
  v36 = __readfsqword(0x28u);
  v9 = operator new(0x30u);
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 8) = 0x100000001LL;
  *(_DWORD *)(v9 + 32) = 0;
  *(_BYTE *)(v9 + 36) = 0;
  *(_QWORD *)v9 = off_2AFE960;
  *(_DWORD *)(v9 + 40) = 0;
  v31.m128i_i64[1] = v9;
  v9 += 16;
  *(_QWORD *)v9 = &off_2AFE7F8;
  v31.m128i_i64[0] = v9;
  v10 = (std::__future_base::_Result_base *)operator new(0x30u);
  std::__future_base::_Result_base::_Result_base(v10);
  *((_BYTE *)v10 + 40) = 0;
  v32 = v10;
  v34[0] = &v31;
  v11 = (_QWORD *)v29.m128i_i64[0];
  v34[1] = 0;
  *(_QWORD *)v10 = off_2AFE938;
  v12 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD *, _OWORD *))(*(_QWORD *)a1 + 32LL);
  v33[0] = 0;
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFE9C8), (__m128i)(unsigned __int64)sub_427C80);
  v12(a1, v11, a4, v34, v33);
  if ( v35.m128i_i64[0] )
  {
    v11 = v34;
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v35.m128i_i64[0])(v34, v34, 3);
  }
  v13 = *((volatile signed __int32 **)&v33[0] + 1);
  if ( *((_QWORD *)&v33[0] + 1) )
  {
    v14 = (volatile signed __int32 *)(*((_QWORD *)&v33[0] + 1) + 8LL);
    if ( *(_QWORD *)(*((_QWORD *)&v33[0] + 1) + 8LL) == 0x100000001LL )
    {
      v27 = **((_QWORD **)&v33[0] + 1);
      v28 = *((_QWORD *)&v33[0] + 1);
      *(_QWORD *)(*((_QWORD *)&v33[0] + 1) + 8LL) = 0;
      (*(void (__fastcall **)(__int64, _QWORD *, volatile signed __int32 *))(v27 + 16))(v28, v11, v14);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v15 = _InterlockedExchangeAdd(v14, 0xFFFFFFFF);
      }
      else
      {
        v15 = *(_DWORD *)(*((_QWORD *)&v33[0] + 1) + 8LL);
        *(_DWORD *)(*((_QWORD *)&v33[0] + 1) + 8LL) = v15 - 1;
      }
      if ( v15 == 1 )
        sub_420480(v13);
    }
  }
  v16 = (__m128)_mm_load_si128(&v31);
  v17 = _mm_movehl_ps(a7, v16).m128_u64[0];
  if ( v17 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
    else
      ++*(_DWORD *)(v17 + 8);
  }
  if ( !v16.m128_u64[0] )
LABEL_29:
    std::__throw_future_error(3);
  v18 = *(_BYTE *)(v16.m128_u64[0] + 20);
  *(_BYTE *)(v16.m128_u64[0] + 20) = 1;
  if ( v18 )
  {
    std::__throw_future_error(1);
    goto LABEL_29;
  }
  v30 = v16;
  sub_42A140((__int64)v33, (struct _Unwind_Exception **)&v30);
  v19 = *(void **)a2;
  v20 = *(_QWORD *)&v33[0];
  v21 = _mm_loadu_si128((const __m128i *)((char *)v33 + 8));
  v22 = (volatile signed __int32 *)v30.m128_u64[1];
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v29 = v21;
    qfree(v19);
    v21 = _mm_load_si128(&v29);
  }
  *(_QWORD *)a2 = v20;
  *(__m128i *)(a2 + 8) = v21;
  if ( v22 )
  {
    v23 = v22 + 2;
    if ( *((_QWORD *)v22 + 1) == 0x100000001LL )
    {
      v26 = *(_QWORD *)v22;
      *((_QWORD *)v22 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __m128 *, volatile signed __int32 *))(v26 + 16))(
        v22,
        &v30,
        v23);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v24 = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
      }
      else
      {
        v24 = *((_DWORD *)v22 + 2);
        *((_DWORD *)v22 + 2) = v24 - 1;
      }
      if ( v24 == 1 )
        sub_420480(v22);
    }
  }
  sub_429CF0(v31.m128i_i64, (__int64)&v30);
  return v36 - __readfsqword(0x28u);
}

