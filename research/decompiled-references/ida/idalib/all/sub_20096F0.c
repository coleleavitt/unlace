__int64 __fastcall sub_20096F0(
        __int64 a1,
        __int64 a2,
        signed __int64 *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int64 *a6,
        __int64 *a7)
{
  signed __int64 *v9; // r13
  unsigned __int64 v10; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  _BYTE *v14; // rsi
  signed __int64 v15; // r12
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // rdi
  __int64 v22; // r12
  _DWORD *v23; // rax
  __m128i si128; // xmm0
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  __int64 result; // rax
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rdi
  __int64 v31; // rax
  _DWORD *v32; // r12
  volatile signed __int32 *v33; // rdi
  signed __int64 *v34; // [rsp+0h] [rbp-78h]
  signed __int64 *src; // [rsp+8h] [rbp-70h]
  volatile signed __int32 *v36; // [rsp+18h] [rbp-60h] BYREF
  __m128 v37; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v38[9]; // [rsp+30h] [rbp-48h] BYREF

  v9 = a3;
  v10 = 4 * a4;
  *(_QWORD *)a1 = a2;
  v34 = &a3[4 * a4];
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (32 * a4) >> 5 )
  {
    if ( (unsigned __int64)((32 * a4) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    src = a3;
    v12 = (_QWORD *)operator new(v10 * 8);
    a3 = src;
    v13 = v12;
  }
  else
  {
    v13 = nullptr;
  }
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 24) = &v13[v10];
  if ( a3 != v34 )
  {
    v14 = (_BYTE *)*a3;
    v15 = a3[1];
    *v13 = v13 + 2;
    if ( &v14[v15] )
      goto LABEL_11;
    while ( (unsigned __int64)v15 <= 0xF )
    {
      v16 = (_BYTE *)*v13;
      if ( v15 == 1 )
      {
        *v16 = *v14;
        v16 = (_BYTE *)*v13;
        goto LABEL_9;
      }
      if ( v15 )
        goto LABEL_17;
LABEL_9:
      v13[1] = v15;
      v9 += 4;
      v13 += 4;
      v16[v15] = 0;
      if ( v34 == v9 )
        goto LABEL_18;
      v14 = (_BYTE *)*v9;
      v15 = v9[1];
      *v13 = v13 + 2;
      if ( &v14[v15] )
      {
LABEL_11:
        if ( !v14 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
    }
    if ( v15 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v16 = (_BYTE *)operator new(v15 + 1);
    v13[2] = v15;
    *v13 = v16;
LABEL_17:
    memcpy(v16, v14, v15);
    v16 = (_BYTE *)*v13;
    goto LABEL_9;
  }
LABEL_18:
  v17 = *a5;
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 32) = v17;
  v18 = a5[1];
  *(_OWORD *)a5 = 0;
  *(_QWORD *)(a1 + 40) = v18;
  v19 = *a6;
  *a6 = 0;
  v37.m128_u64[0] = v19;
  v20 = operator new(0x28u);
  sub_2267E70(v20, &v37);
  *(_QWORD *)(a1 + 48) = v20;
  _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
  v21 = v37.m128_u64[0];
  if ( v37.m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)(v37.m128_u64[0] + 8), 1u) )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = operator new(0x40u);
  sub_2262BE0(v22, 1);
  *(_QWORD *)(a1 + 56) = v22;
  _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
  v23 = (_DWORD *)*a7;
  if ( *a7 )
  {
    *(_QWORD *)(a1 + 64) = v23;
    ++*v23;
  }
  else
  {
    LOBYTE(v38[0]) = 0;
    v37.m128_u64[0] = (unsigned __int64)v38;
    v31 = *(_QWORD *)(a1 + 48);
    v37.m128_u64[1] = 0;
    if ( v31 )
      _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
    v36 = (volatile signed __int32 *)v31;
    v32 = (_DWORD *)operator new(0x328u);
    sub_FD68E0((__int64)v32, (__int64)&v37, (__int64 *)&v36);
    v33 = v36;
    *(_QWORD *)(a1 + 64) = v32;
    ++*v32;
    if ( v33 && !_InterlockedSub(v33 + 2, 1u) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    if ( (_QWORD *)v37.m128_u64[0] != v38 )
      operator delete((void *)v37.m128_u64[0]);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v25 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  v26 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(__m128i *)(a1 + 104) = si128;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 160) = 1;
  if ( v25 )
    _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
  v37.m128_u64[0] = v25;
  sub_2267D50(v26, &v37);
  v27 = v37.m128_u64[0];
  if ( v37.m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)(v37.m128_u64[0] + 8), 1u) )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 8LL))(v27);
  sub_1FF1100(&v37);
  sub_2009580(a1, (__m128i *)&v37);
  if ( v38[0] )
    ((void (__fastcall *)(__m128 *, __m128 *, __int64))v38[0])(&v37, &v37, 3);
  sub_1FF10D0(&v37);
  sub_2009580(a1, (__m128i *)&v37);
  if ( v38[0] )
    ((void (__fastcall *)(__m128 *, __m128 *, __int64))v38[0])(&v37, &v37, 3);
  sub_1FF1130(&v37);
  sub_2009580(a1, (__m128i *)&v37);
  if ( v38[0] )
    ((void (__fastcall *)(__m128 *, __m128 *, __int64))v38[0])(&v37, &v37, 3);
  result = *a7;
  if ( *a7 )
  {
    v29 = *(_QWORD *)(a1 + 48);
    if ( v29 )
      _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
    v30 = *(volatile signed __int32 **)(result + 8);
    *(_QWORD *)(result + 8) = v29;
    if ( v30 && !_InterlockedSub(v30 + 2, 1u) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
  }
  return result;
}
