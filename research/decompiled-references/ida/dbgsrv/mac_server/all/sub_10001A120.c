/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A120
// Address: 0x000000010001A120

//----- (000000010001A120) ----------------------------------------------------
__int64 __fastcall sub_10001A120(__int64 a1)
{
  __int64 v1; // r15
  _DWORD *v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r8
  _QWORD *v21; // r9
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __m128i *v27; // [rsp+8h] [rbp-48h]
  unsigned __int64 *v28; // [rsp+10h] [rbp-40h]
  unsigned __int64 *v29; // [rsp+18h] [rbp-38h]
  unsigned __int64 *v30; // [rsp+20h] [rbp-30h]

  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 == -1 )
    return 0;
  v3 = (_DWORD *)(a1 + 88);
  v4 = 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v1,
         a1 + 88,
         4,
         0) != 4 )
    return v4;
  if ( !*v3 )
    return 0;
  v4 = 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v1 + 4,
         a1 + 92,
         4,
         0) != 4 )
    return v4;
  v5 = v1 + 8;
  v6 = *(int *)(a1 + 20);
  v4 = 0;
  v27 = (__m128i *)(a1 + 96);
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v5,
         a1 + 96,
         v6,
         0) != v6 )
    return v4;
  v7 = *(int *)(a1 + 20);
  v8 = v7 + v5;
  v4 = 0;
  v28 = (unsigned __int64 *)(a1 + 104);
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v8,
         a1 + 104,
         v7,
         0) != v7 )
    return v4;
  if ( *v3 < 2u )
    return 0;
  v10 = *(int *)(a1 + 20);
  v11 = v8 + 2 * v10;
  v4 = 0;
  v29 = (unsigned __int64 *)(a1 + 112);
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v11,
         a1 + 112,
         v10,
         0) != v10 )
    return v4;
  if ( *v3 < 9u )
    return 0;
  v12 = *(int *)(a1 + 20);
  v13 = 9 * (int)v12 + v11;
  v4 = 0;
  v30 = (unsigned __int64 *)(a1 + 120);
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v13,
         a1 + 120,
         v12,
         0) == v12 )
  {
    if ( *v3 < 0xFu
      || (v14 = *(int *)(a1 + 20),
          v15 = 6 * (int)v14 + v13,
          v4 = 0,
          (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
            *(_QWORD *)(a1 + 8),
            v15,
            a1 + 128,
            v14,
            0) == v14)
      && (v16 = *(int *)(a1 + 20),
          v4 = 0,
          (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
            *(_QWORD *)(a1 + 8),
            (int)v16 + 16 + v15,
            a1 + 136,
            v16,
            0) == v16) )
    {
      v17 = *(_BYTE *)(a1 + 24);
      if ( v17 )
      {
        v18 = 0xFFFFFFFFFLL;
        if ( *(_DWORD *)(a1 + 16) != 13 )
          v18 = -(__int64)(*(_DWORD *)(a1 + 16) != 0) | 0xFFFFFFFFFFFFLL;
        v19 = *(_QWORD *)(a1 + 96);
        v20 = (unsigned __int64 *)(a1 + 112);
        v21 = (_QWORD *)(a1 + 120);
        if ( v19 > v18 )
          v27->i64[0] = v18 & v19;
        v22 = (_QWORD *)(a1 + 104);
        if ( *v28 > v18 )
          *v28 &= v18;
        if ( *v29 > v18 )
          *v29 &= v18;
        v23 = *v30;
        if ( *v30 > v18 )
        {
          v23 &= v18;
          *v30 = v23;
        }
        v24 = *(_QWORD *)(a1 + 136);
        if ( v24 > v18 )
          *(_QWORD *)(a1 + 136) = v24 & v18;
      }
      else
      {
        v21 = (_QWORD *)(a1 + 120);
        v23 = *v30;
        v22 = (_QWORD *)(a1 + 104);
        v20 = v29;
      }
      v25 = *(_QWORD *)(a1 + 72);
      v26 = v25 - v23;
      if ( v25 != v23 )
      {
        *v20 += v26;
        *v21 = v25;
        *v27 = _mm_add_epi64(_mm_shuffle_epi32((__m128i)v26, 68), _mm_loadu_si128(v27));
      }
      LOBYTE(v4) = 1;
      if ( !(v17 | (*(_DWORD *)(a1 + 16) != 13)) && (*v22 & 1) != 0 )
        *v22 &= ~1uLL;
    }
  }
  return v4;
}
