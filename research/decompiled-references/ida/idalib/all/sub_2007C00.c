__int64 __fastcall sub_2007C00(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  void (__fastcall *v7)(__m128i *, __m128i *, __int64); // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // r13
  volatile signed __int32 *v13; // r12
  signed __int32 v14; // eax
  void **v15; // r12
  void **v16; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r13
  unsigned int v21; // ebx
  __int64 v22; // r12
  signed __int32 v23; // eax
  _QWORD *v24; // [rsp+8h] [rbp-80h] BYREF
  __m128 v25; // [rsp+10h] [rbp-78h] BYREF
  __m128i v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  __m128i v29; // [rsp+40h] [rbp-48h] BYREF
  void (__fastcall *v30)(__m128i *, __m128i *, __int64); // [rsp+50h] [rbp-38h]
  __int64 v31; // [rsp+58h] [rbp-30h]

  v3 = a3->m128i_i64[1];
  if ( v3 == a3[1].m128i_i64[0] )
  {
    v26.m128i_i64[0] = (__int64)"[StandaloneToolExecutorPlugin] No positional argument found.";
    v29.m128i_i16[0] = 259;
    v18 = sub_2220490(a1);
    v20 = v19;
    v21 = v18;
    v22 = operator new(0x40u);
    sub_2220590(v22, &v26, v21, v20);
    *(_QWORD *)a1 = v22;
    *(_BYTE *)(a1 + 8) |= 1u;
    return a1;
  }
  else
  {
    v27 = a3[1].m128i_i64[0];
    v4 = a3[1].m128i_i64[1];
    v5 = a3->m128i_i64[0];
    v26.m128i_i64[1] = v3;
    v6 = v31;
    v28 = v4;
    v7 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a3[3].m128i_i64[0];
    v8 = _mm_load_si128(&v29);
    a3->m128i_i64[0] = 0;
    a3->m128i_i64[1] = 0;
    v9 = _mm_loadu_si128(a3 + 2);
    a3[1].m128i_i64[0] = 0;
    a3[1].m128i_i64[1] = 0;
    a3[3].m128i_i64[0] = 0;
    v30 = v7;
    v10 = a3[3].m128i_i64[1];
    a3[3].m128i_i64[1] = v6;
    a3[2] = v8;
    v26.m128i_i64[0] = v5;
    v29 = v9;
    v31 = v10;
    v25.m128_u64[0] = 0;
    v11 = (_QWORD *)operator new(0x80u);
    v11[1] = 0x100000001LL;
    *v11 = off_2C71350;
    sub_1FE2A60((__int64)(v11 + 2), *(double *)v9.m128i_i64, *(double *)v8.m128i_i64);
    v24 = v11;
    v25 = _mm_loadh_ps((const double *)&v24);
    v12 = operator new(0x1C8u);
    sub_2007930(v12, &v26, (__int64 *)&v25);
    v13 = (volatile signed __int32 *)v25.m128_u64[1];
    if ( v25.m128_u64[1] )
    {
      if ( &_pthread_key_create )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25.m128_u64[1] + 8), 0xFFFFFFFF);
      }
      else
      {
        v14 = *(_DWORD *)(v25.m128_u64[1] + 8);
        *(_DWORD *)(v25.m128_u64[1] + 8) = v14 - 1;
      }
      if ( v14 == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        if ( &_pthread_key_create )
        {
          v23 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
        }
        else
        {
          v23 = *((_DWORD *)v13 + 3);
          *((_DWORD *)v13 + 3) = v23 - 1;
        }
        if ( v23 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
      }
    }
    if ( v30 )
      v30(&v29, &v29, 3);
    v15 = (void **)v27;
    v16 = (void **)v26.m128i_i64[1];
    if ( v27 != v26.m128i_i64[1] )
    {
      do
      {
        while ( *v16 != v16 + 2 )
        {
          operator delete(*v16);
          v16 += 4;
          if ( v15 == v16 )
            goto LABEL_11;
        }
        v16 += 4;
      }
      while ( v15 != v16 );
LABEL_11:
      v16 = (void **)v26.m128i_i64[1];
    }
    if ( v16 )
      operator delete(v16);
    if ( v26.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26.m128i_i64[0] + 8LL))(v26.m128i_i64[0]);
    *(_QWORD *)a1 = v12;
    *(_BYTE *)(a1 + 8) &= ~1u;
    return a1;
  }
}
