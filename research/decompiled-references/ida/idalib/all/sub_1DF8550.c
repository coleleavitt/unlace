__int64 __fastcall sub_1DF8550(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int16 *v24; // r13
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r14
  _QWORD *v30; // rcx

  v14 = sub_1DF6720(a1, *(_WORD **)(a2 + 8), (char *)&dword_0 + 1, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v14 == 1 )
    return 1;
  v20 = v14;
  v24 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), v15, v16, v17, v18, a3, a4);
  if ( v24 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v27 = sub_1DF6720(a1, *(_WORD **)(a2 + 24), nullptr, a3, a4, a5, a6, v25, v26, a9, a10, v21, v22, v23);
  if ( v27 == 1 )
    return 1;
  v28 = v20 & 0xFFFFFFFFFFFFFFFELL;
  v29 = v27 & 0xFFFFFFFFFFFFFFFELL;
  v30 = (_QWORD *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632)
    || *(_QWORD *)(a2 + 8) != v28
    || *(_QWORD **)(a2 + 16) != v30
    || (result = a2, *(_QWORD *)(a2 + 24) != v29) )
  {
    result = sub_1A89A90(*(__int64 **)(*a1 + 736), *(unsigned int *)(a2 + 32), v28, v30, *(_DWORD *)(a2 + 36), a3, a4);
    if ( result != 1 )
      return sub_1A86060(*(_QWORD *)(*a1 + 736), result & 0xFFFFFFFFFFFFFFFELL, v29);
  }
  return result;
}
