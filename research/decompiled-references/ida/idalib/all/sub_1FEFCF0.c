__int64 *__fastcall sub_1FEFCF0(__int64 *a1, char a2, __m128i *a3)
{
  __m128i *v3; // rsi
  void (__fastcall *v4)(__m128i *, __m128i *, __int64); // r13
  __int64 v5; // r12
  __m128i v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm3
  __int64 v9; // rbx
  std::__future_base::_Result_base *v10; // rax
  std::__future_base::_Result_base *v11; // r14
  __m128i v12; // xmm4
  __int64 v13; // rdx
  char v14; // al
  __int64 v16; // rax
  __m128i v17; // xmm1
  std::__future_base::_Result_base *v18; // rax
  std::__future_base::_Result_base *v19; // r12
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __m128i v22; // xmm2
  _QWORD *v23; // rax
  int v24; // eax
  signed __int32 v25; // eax
  __int64 v26; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+8h] [rbp-50h] BYREF
  __m128i v28; // [rsp+10h] [rbp-48h] BYREF
  void (__fastcall *v29)(__m128i *, __m128i *, __int64); // [rsp+20h] [rbp-38h]
  __int64 v30; // [rsp+28h] [rbp-30h]

  v3 = (__m128i *)(a2 & 1);
  v4 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a3[1].m128i_i64[0];
  v5 = a3[1].m128i_i64[1];
  v6 = _mm_loadu_si128(a3);
  if ( (_DWORD)v3 )
  {
    v16 = v30;
    v17 = _mm_load_si128(&v28);
    a3[1].m128i_i64[0] = 0;
    v28 = v6;
    a3[1].m128i_i64[1] = v16;
    *a3 = v17;
    v29 = v4;
    v30 = v5;
    v9 = operator new(0x68u);
    *(_QWORD *)(v9 + 8) = 0x100000001LL;
    *(_QWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 32) = 0;
    *(_QWORD *)v9 = off_2C71388;
    *(_BYTE *)(v9 + 36) = 0;
    *(_DWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_DWORD *)(v9 + 56) = 0;
    *(_QWORD *)(v9 + 16) = &off_2C712F0;
    v18 = (std::__future_base::_Result_base *)operator new(0x10u);
    *(_OWORD *)v18 = 0;
    v19 = v18;
    std::__future_base::_Result_base::_Result_base(v18);
    v20 = _mm_load_si128(&v28);
    *(_QWORD *)(v9 + 64) = v19;
    v21 = *(_QWORD *)(v9 + 96);
    v22 = _mm_loadu_si128((const __m128i *)(v9 + 72));
    v26 = 0;
    *(__m128i *)(v9 + 72) = v20;
    *(_QWORD *)v19 = off_2BE4B70;
    v28 = v22;
    *(_QWORD *)(v9 + 88) = v29;
    v29 = nullptr;
    *(_QWORD *)(v9 + 96) = v30;
    v30 = v21;
    v23 = (_QWORD *)operator new(0x10u);
    v3 = (__m128i *)&v27;
    v23[1] = v9 + 16;
    v27 = v23;
    *v23 = &off_2C713F8;
    std::thread::_M_start_thread(&v26, &v27, &pthread_create);
    if ( v27 )
      (*(void (__fastcall **)(_QWORD *))(*v27 + 8LL))(v27);
    if ( *(_QWORD *)(v9 + 48) )
LABEL_25:
      std::terminate();
    *(_QWORD *)(v9 + 48) = v26;
    if ( v29 )
    {
      v3 = &v28;
      v29(&v28, &v28, 3);
    }
    *a1 = v9 + 16;
    a1[1] = v9;
    if ( &_pthread_key_create )
      goto LABEL_3;
  }
  else
  {
    v7 = v30;
    v8 = _mm_load_si128(&v28);
    a3[1].m128i_i64[0] = 0;
    v28 = v6;
    a3[1].m128i_i64[1] = v7;
    *a3 = v8;
    v9 = operator new(0x58u);
    *(_QWORD *)(v9 + 8) = 0x100000001LL;
    *(_QWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 32) = 0;
    *(_QWORD *)v9 = off_2C713C0;
    *(_BYTE *)(v9 + 36) = 0;
    *(_DWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 16) = &off_2C71320;
    v10 = (std::__future_base::_Result_base *)operator new(0x10u);
    *(_OWORD *)v10 = 0;
    v11 = v10;
    std::__future_base::_Result_base::_Result_base(v10);
    v12 = _mm_load_si128(&v28);
    *(_QWORD *)(v9 + 80) = v5;
    *(_QWORD *)(v9 + 48) = v11;
    *(__m128i *)(v9 + 56) = v12;
    *(_QWORD *)v11 = off_2BE4B70;
    *(_QWORD *)(v9 + 72) = v4;
    *a1 = v9 + 16;
    a1[1] = v9;
    if ( &_pthread_key_create )
    {
LABEL_3:
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      v13 = *a1;
      goto LABEL_4;
    }
  }
  ++*(_DWORD *)(v9 + 8);
  v13 = *a1;
LABEL_4:
  if ( !v13 )
  {
LABEL_24:
    std::__throw_future_error(3);
    goto LABEL_25;
  }
  v14 = *(_BYTE *)(v13 + 20);
  *(_BYTE *)(v13 + 20) = 1;
  if ( v14 )
  {
    std::__throw_future_error(1);
    goto LABEL_24;
  }
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) != 1 )
      return a1;
  }
  else
  {
    v24 = *(_DWORD *)(v9 + 8);
    *(_DWORD *)(v9 + 8) = v24 - 1;
    if ( v24 != 1 )
      return a1;
  }
  (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v9 + 16LL))(v9, v3);
  if ( &_pthread_key_create )
  {
    v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF);
  }
  else
  {
    v25 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)(v9 + 12) = v25 - 1;
  }
  if ( v25 == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  return a1;
}
