__int64 __fastcall sub_71F340(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  unsigned int v18; // r13d
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned __int64 v28; // rax
  __int64 *v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rax

  v14 = *(_QWORD *)(a2 + 48);
  if ( v14
    && !(unsigned __int8)sub_70EBE0(a1, v14 & 0xFFFFFFFFFFFFFFF0LL, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)
    || (*(_BYTE *)(a2 + 60) & 4) != 0
    && !(unsigned __int8)sub_719220(a1, *(_QWORD *)(a2 + 88), a6, a7, a8, a9, a10, a11, a12, a13) )
  {
    return 0;
  }
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
    {
      qword_2CCC4A0 = 0;
      qword_2CCC4A8 = 0;
      qword_2CCC4B8 = 0;
      __cxa_guard_release(&byte_2CCC480);
    }
    v28 = *(_QWORD *)(a2 + 72);
    v29 = &qword_2CCC4A0;
    if ( v28 <= 7 )
    {
LABEL_20:
      if ( (unsigned __int8)sub_718840(a1, (int *)v29, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
        goto LABEL_7;
      return 0;
    }
    v30 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    a3 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( a3 == 2 )
    {
      v31 = *(_QWORD *)(v30 + 72);
      v29 = nullptr;
      if ( !v31 )
        goto LABEL_20;
      v29 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v31 & 6) != 4 || !v29 )
        goto LABEL_20;
    }
    else
    {
      v29 = (__int64 *)v30;
      if ( a3 != 4 )
        goto LABEL_20;
    }
    v29 = (__int64 *)v29[1];
    goto LABEL_20;
  }
LABEL_7:
  v17 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v17 = sub_B8D340(a2, 0);
  v18 = sub_70A970(a1, v17, a6, a7, a8, a9, v15, v16, a12, a13);
  if ( !(_BYTE)v18 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = nullptr;
    v20 = sub_B8C3D0(a2);
    v25 = *(unsigned int *)(v20 + 8);
    v26 = *(_QWORD *)v20 + 8 * v25;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v19 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v26 != v19 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v19, a6, a7, a8, a9, v23, v24, a12, a13, v25, v21, v22) )
        return 0;
      ++v19;
    }
  }
  return v18;
}
