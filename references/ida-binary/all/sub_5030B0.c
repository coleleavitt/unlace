__m128i *__fastcall sub_5030B0(__m128i *a1, __int64 *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = *a2;
  v10 = a2[2];
  v24[1] = __readfsqword(0x28u);
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    v13 = v10;
    if ( v12 >= v10 )
      v13 = *(_QWORD *)(v9 + 8);
    v14 = a3 + v13;
    v15 = v14 - 0xAAAAAAAAAAAAAAABLL * ((__int64)(a2[1] - ((v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 5);
    if ( !a4 )
      v15 = v14 + v10 - v12 - 0x5555555555555555LL * ((__int64)(a2[1] - ((v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 5);
    v16 = *(_QWORD *)(v9 + 8);
    if ( v15 >= v12 )
      v16 = v15;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
      v15 = v16;
  }
  else
  {
    v22 = 0;
    if ( v10 >= 0 )
      v22 = v10;
    v12 = 0;
    v15 = a3 + v22;
  }
  v17 = QT::QArrayData::allocate(v24, 96, 16, v15, v15 <= v12, a6);
  v18 = v24[0];
  if ( !v24[0] || !v17 )
  {
    a1[1].m128i_i64[0] = 0;
    *a1 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v17);
    return a1;
  }
  v19 = *a2;
  if ( a4 == 1 )
  {
    v23 = (*(_QWORD *)(v24[0] + 8LL) - a3 - a2[2]) / 2;
    if ( v23 < 0 )
      v23 = 0;
    v17 += 96 * (a3 + v23);
    if ( v19 )
      goto LABEL_15;
LABEL_25:
    v20 = 0;
    goto LABEL_16;
  }
  if ( !v19 )
    goto LABEL_25;
  v17 = a2[1] + v17 - ((v19 + 31) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_15:
  v20 = *(_DWORD *)(v19 + 4);
LABEL_16:
  *(_DWORD *)(v24[0] + 4LL) = v20;
  a1[1].m128i_i64[0] = 0;
  *a1 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v17);
  return a1;
}
