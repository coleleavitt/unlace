/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017668
// Address: 0x0000000100017668

//----- (0000000100017668) ----------------------------------------------------
__int64 __fastcall sub_100017668(__int64 a1)
{
  _DWORD *v1; // x20
  __int64 v2; // x21
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x22
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x20
  __int64 v14; // x21
  char v15; // w8
  int v16; // w9
  __int64 v17; // x10
  bool v18; // zf
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x10
  unsigned __int64 v21; // x10
  unsigned __int64 v22; // x10
  unsigned __int64 v23; // x10
  unsigned __int64 v24; // x11
  __int64 result; // x0
  __int64 v26; // x11
  unsigned __int64 v27; // x9
  __int64 v28; // x8

  *(_OWORD *)(a1 + 88) = 0u;
  v1 = (_DWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 120) = 0u;
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 == -1 )
    return 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v2,
         v1,
         4,
         0) != 4 )
    return 0;
  if ( !*v1 )
    return 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v2 + 4,
         a1 + 92,
         4,
         0) != 4 )
    return 0;
  v4 = v2 + 8;
  v5 = *(int *)(a1 + 20);
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v4,
         a1 + 96,
         v5,
         0) != v5 )
    return 0;
  v6 = *(int *)(a1 + 20);
  v7 = v4 + v6;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v7,
         a1 + 104,
         v6,
         0) != v6 )
    return 0;
  if ( *v1 < 2u )
    return 0;
  v8 = *(int *)(a1 + 20);
  v9 = v7 + 2 * v8;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v9,
         a1 + 112,
         v8,
         0) != v8 )
    return 0;
  if ( *v1 < 9u )
    return 0;
  v10 = *(int *)(a1 + 20);
  v11 = v9 + 9 * (int)v10;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v11,
         a1 + 120,
         v10,
         0) != v10 )
    return 0;
  if ( *v1 >= 0xFu )
  {
    v12 = *(int *)(a1 + 20);
    v13 = v11 + 6 * (int)v12;
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
           *(_QWORD *)(a1 + 8),
           v13,
           a1 + 128,
           v12,
           0) != v12 )
      return 0;
    v14 = *(int *)(a1 + 20);
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
           *(_QWORD *)(a1 + 8),
           v13 + (int)v14 + 16,
           a1 + 136,
           v14,
           0) != v14 )
      return 0;
  }
  v15 = *(_BYTE *)(a1 + 24);
  if ( (v15 & 1) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 16);
    v17 = 0xFFFFFFFFFFFFLL;
    if ( v16 )
      v17 = -1;
    v18 = v16 == 13;
    v19 = 0xFFFFFFFFFLL;
    if ( !v18 )
      v19 = v17;
    v20 = *(_QWORD *)(a1 + 96);
    if ( v20 > v19 )
      *(_QWORD *)(a1 + 96) = v19 & v20;
    v21 = *(_QWORD *)(a1 + 104);
    if ( v21 > v19 )
      *(_QWORD *)(a1 + 104) = v19 & v21;
    v22 = *(_QWORD *)(a1 + 112);
    if ( v22 > v19 )
      *(_QWORD *)(a1 + 112) = v19 & v22;
    v23 = *(_QWORD *)(a1 + 120);
    if ( v23 > v19 )
    {
      v23 &= v19;
      *(_QWORD *)(a1 + 120) = v23;
    }
    v24 = *(_QWORD *)(a1 + 136);
    if ( v24 > v19 )
      *(_QWORD *)(a1 + 136) = v19 & v24;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 120);
  }
  v26 = *(_QWORD *)(a1 + 72);
  v27 = v26 - v23;
  if ( v26 != v23 )
  {
    *(_QWORD *)(a1 + 112) += v27;
    *(_QWORD *)(a1 + 120) = v26;
    *(int64x2_t *)(a1 + 96) = vaddq_s64(*(int64x2_t *)(a1 + 96), vdupq_n_s64(v27));
  }
  result = 1;
  if ( *(_DWORD *)(a1 + 16) == 13 && (v15 & 1) == 0 )
  {
    v28 = *(_QWORD *)(a1 + 104);
    if ( (v28 & 1) != 0 )
      *(_QWORD *)(a1 + 104) = v28 & 0xFFFFFFFFFFFFFFFELL;
  }
  return result;
}
