__int64 __fastcall sub_4241F0(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax
  volatile signed __int32 *v12; // xmm1_8
  __m128 v13; // xmm0
  void (__fastcall *v14)(__m128i *, const __m128i *, __int64); // rax
  volatile signed __int32 *v16; // rdx
  signed __int32 v17; // eax
  __int64 v19; // [rsp+8h] [rbp-80h]
  __m128i v20; // [rsp+10h] [rbp-78h] BYREF
  __m128i v21; // [rsp+20h] [rbp-68h] BYREF
  __m128 v22; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v8 = *a1;
  v13 = (__m128)_mm_loadu_si128(a5);
  v23 = __readfsqword(0x28u);
  v22 = 0u;
  v10 = *(_QWORD **)(v8 + 1688);
  v11 = a5->m128i_i64[1];
  v12 = (volatile signed __int32 *)_mm_movehl_ps(a7, v13).m128_u64[0];
  v20 = (__m128i)v13;
  *a5 = 0;
  v13.m128_u64[0] = 0;
  v19 = v11;
  v14 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v21 = 0;
  if ( v14 )
  {
    v14(&v21, a4, 2);
    v13 = (__m128)_mm_loadu_si128(a4 + 1);
    v22 = v13;
  }
  sub_423B50(v10, a2, a3, &v21, &v20, *(double *)v13.m128_u64, *(double *)&v12, a8);
  if ( v22.m128_u64[0] )
  {
    a2 = &v21;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22.m128_u64[0])(&v21, &v21, 3);
  }
  if ( !v12 )
    return v23 - __readfsqword(0x28u);
  v16 = v12 + 2;
  if ( *((_QWORD *)v12 + 1) == 0x100000001LL )
  {
    *(_QWORD *)(v19 + 8) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, __m128i *, volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(
      v12,
      a2,
      v16);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v17 = _InterlockedExchangeAdd(v16, 0xFFFFFFFF);
    }
    else
    {
      v17 = *((_DWORD *)v12 + 2);
      *((_DWORD *)v12 + 2) = v17 - 1;
    }
    if ( v17 != 1 )
      return v23 - __readfsqword(0x28u);
    return sub_420480(v12);
  }
}

