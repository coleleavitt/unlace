unsigned __int64 __fastcall sub_4F3940(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  pthread_once_t *v5; // rdi
  int v6; // eax
  __m128i v7; // xmm0
  _QWORD *addr; // rax
  bool v9; // zf
  __m128i v10; // xmm0
  volatile signed __int32 *v11; // rdi
  __m128i v13; // [rsp+0h] [rbp-C8h] BYREF
  char v14; // [rsp+1Fh] [rbp-A9h] BYREF
  __int64 v15; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-98h] BYREF
  char *v18; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v20[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-58h] BYREF
  __m128i v22; // [rsp+80h] [rbp-48h]
  unsigned __int64 v23; // [rsp+98h] [rbp-30h]

  v2 = *a2;
  v3 = a2[1];
  v23 = __readfsqword(0x28u);
  *(_OWORD *)a2 = 0;
  v14 = 0;
  v15 = a1;
  v21[0] = a1 + 32;
  v21[1] = &v15;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B037E8), (__m128i)(unsigned __int64)sub_4F36D0);
  v4 = operator new(0x20u);
  v16 = a1;
  *(_OWORD *)(v4 + 16) = 0;
  v18 = &v14;
  v19[0] = sub_425A10;
  v17 = v21;
  v19[1] = 0;
  v20[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)&v16);
  v20[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v17, (__m128i)(unsigned __int64)&v18);
  *(_QWORD *)__tls_get_addr() = v20;
  v5 = (pthread_once_t *)(a1 + 24);
  *(_QWORD *)__tls_get_addr() = sub_424DE0;
  if ( !&_pthread_key_create )
  {
    v6 = -1;
    goto LABEL_13;
  }
  v6 = pthread_once(v5, (void (*)(void))&_once_proxy);
  v7 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v3);
  if ( v6 )
LABEL_13:
    std::__throw_system_error(v6);
  v13 = v7;
  *(_QWORD *)__tls_get_addr() = 0;
  addr = (_QWORD *)__tls_get_addr();
  v9 = v14 == 0;
  v10 = _mm_load_si128(&v13);
  *addr = 0;
  if ( v9 )
    std::__throw_future_error(2);
  v11 = *(volatile signed __int32 **)(v4 + 24);
  *(__m128i *)(v4 + 16) = v10;
  if ( v11 && !_InterlockedSub(v11 + 3, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
  std::__future_base::_State_baseV2::_Make_ready::_M_set((std::__future_base::_State_baseV2::_Make_ready *)v4);
  if ( v22.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v22.m128i_i64[0])(v21, v21, 3);
  return v23 - __readfsqword(0x28u);
}

