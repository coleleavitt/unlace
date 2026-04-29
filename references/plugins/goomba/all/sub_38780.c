__int64 __fastcall sub_38780(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  volatile signed __int32 *v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // rdx
  int v8; // r14d
  int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rsi
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdi
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __int64 v18; // r12
  __int64 v19; // rbp
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rax
  __m128 v22; // xmm0
  volatile signed __int32 *v23; // r12
  __m128 v24; // xmm2
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  struct _Unwind_Exception *v31; // rbx
  volatile signed __int32 *v32; // [rsp+8h] [rbp-E0h]
  __m128i v33; // [rsp+20h] [rbp-C8h] BYREF
  __m128 v34; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+50h] [rbp-98h] BYREF
  __m128i v37; // [rsp+60h] [rbp-88h] BYREF
  __m128 v38; // [rsp+70h] [rbp-78h] BYREF
  __m128i v39; // [rsp+80h] [rbp-68h] BYREF
  __m128i v40; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 104) != 2 )
    return 0;
  v5 = *(__int64 **)(a1 + 56);
  v6 = *(__int64 **)(a1 + 96);
  v8 = *((_DWORD *)v5 + 2);
  v9 = *((_DWORD *)v6 + 2);
  v10 = *v5;
  v11 = *v6;
  if ( v9 == v8 && v10 == v11 )
  {
    v11 = v6[2];
    v9 = *((_DWORD *)v6 + 6);
  }
  v12 = *(_QWORD *)(a1 + 64);
  if ( v12 > 0x40 )
  {
LABEL_52:
    v31 = (struct _Unwind_Exception *)sub_31CE0();
    if ( v4 )
    {
      sub_1C430(v4);
      sub_1C430(v4);
    }
    _Unwind_Resume(v31);
  }
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    v14 = 0;
    v12 = 0;
    do
    {
      while ( *((_DWORD *)v5 + 2) != v9 || *v5 != v11 )
      {
        ++v14;
        v5 += 2;
        if ( v14 == v13 )
          goto LABEL_10;
      }
      v5 += 2;
      v15 = 1LL << v14++;
      v12 |= v15;
    }
    while ( v14 != v13 );
  }
LABEL_10:
  sub_35840(&v33, byte_4E9E0, *(_DWORD *)(a1 + 16), v12);
  v16 = (__m128)_mm_load_si128(&v33);
  v17 = _mm_movehl_ps(a3, v16);
  v38 = v16;
  v4 = (volatile signed __int32 *)v17.m128_u64[0];
  if ( v17.m128_u64[0] )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v17.m128_u64[0] + 8), 1u);
    else
      ++*(_DWORD *)(v17.m128_u64[0] + 8);
  }
  if ( v8 != v9 )
  {
    sub_31CA0();
LABEL_51:
    sub_31CC0();
    goto LABEL_52;
  }
  v18 = v11 - v10;
  if ( (unsigned int)(v8 - 1) <= 1 || v8 == 4 )
  {
    v18 &= ~(-1LL << (8 * (unsigned __int8)v9));
    goto LABEL_17;
  }
  if ( v8 != 8 )
    goto LABEL_51;
LABEL_17:
  v19 = operator new(0x20u);
  *(_QWORD *)(v19 + 16) = off_4D960;
  *(_QWORD *)(v19 + 8) = 0x100000001LL;
  *(_QWORD *)v19 = off_4DA48;
  *(_QWORD *)(v19 + 24) = v18;
  v37.m128i_i64[0] = v19 + 16;
  v37.m128i_i64[1] = v19;
  sub_38200(&v39, &v37, (const __m128i *)&v38, *(double *)v16.m128_u64, v17, a4);
  v20 = (volatile signed __int32 *)v39.m128i_i64[1];
  v21 = (volatile signed __int32 *)operator new(0x20u);
  v22 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
  v23 = v21;
  v35.m128i_i64[1] = (__int64)v21;
  *((_QWORD *)v21 + 1) = 0x100000001LL;
  v24 = _mm_movehl_ps(a4, v22);
  *(_QWORD *)v21 = off_4DA48;
  *((_QWORD *)v21 + 3) = v10;
  *((_QWORD *)v21 + 2) = off_4D960;
  v35.m128i_i64[0] = (__int64)(v21 + 4);
  v34 = v22;
  if ( v24.m128_u64[0] )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v24.m128_u64[0] + 8), 1u);
    else
      ++*(_DWORD *)(v24.m128_u64[0] + 8);
  }
  sub_38330(&v36, (const __m128i *)&v34, &v35, *(double *)v22.m128_u64, v17, v24);
  v39.m128i_i64[1] = (__int64)v20;
  v32 = (volatile signed __int32 *)v36.m128i_i64[1];
  sub_38330(&v40, &v36, &v39, *(double *)v22.m128_u64, v17, v24);
  v25 = *(volatile signed __int32 **)(a1 + 88);
  *(__m128i *)(a1 + 80) = _mm_load_si128(&v40);
  if ( v25 )
    sub_1C430(v25);
  if ( v32 )
    sub_1C430(v32);
  if ( v24.m128_u64[0] )
    sub_1C430((volatile signed __int32 *)v24.m128_u64[0]);
  if ( v23 )
    sub_1C430(v23);
  if ( v20 )
    sub_1C430(v20);
  if ( v19 )
    sub_1C430((volatile signed __int32 *)v19);
  if ( v17.m128_u64[0] )
    sub_1C430((volatile signed __int32 *)v17.m128_u64[0]);
  v26 = *(_QWORD **)(a1 + 56);
  v27 = &v26[2 * *(_QWORD *)(a1 + 64)];
  if ( v26 != v27 )
  {
    if ( ((16 * *(_BYTE *)(a1 + 64)) & 0x10) == 0 || (*v26 = 0, v26 += 2, v27 != v26) )
    {
      do
      {
        *v26 = 0;
        v26 += 4;
        *(v26 - 2) = 0;
      }
      while ( v27 != v26 );
    }
  }
  sub_32600((__int64 *)(a1 + 32), (unsigned __int64 *)(a1 + 56));
  sub_35940((_QWORD *)a1, (__m128i *)(a1 + 56), v28, v29);
  if ( v17.m128_u64[0] )
    sub_1C430((volatile signed __int32 *)v17.m128_u64[0]);
  return 1;
}
