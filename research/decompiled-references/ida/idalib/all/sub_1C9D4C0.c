__int64 __fastcall sub_1C9D4C0(
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
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 *v23; // r13
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // r14

  v14 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 8), 1, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v14 == 1 )
    return 1;
  v19 = v14;
  v23 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), a3, a4, v15, v16, v17);
  if ( v23 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v26 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 24), 0, a3, a4, a5, a6, v24, v25, a9, a10, v20, v21, v22);
  if ( v26 == 1 )
    return 1;
  result = sub_1A89A90(
             *(__int64 **)(*a1 + 736),
             *(unsigned int *)(a2 + 32),
             v19 & 0xFFFFFFFFFFFFFFFELL,
             (_QWORD *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)(a2 + 36),
             a3,
             a4);
  if ( result != 1 )
    return sub_1A86060(*(_QWORD *)(*a1 + 736), result & 0xFFFFFFFFFFFFFFFELL, v26 & 0xFFFFFFFFFFFFFFFELL);
  return result;
}
