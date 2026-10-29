__int64 __fastcall sub_721020(
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
  unsigned int v15; // r12d
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 *v27; // rax
  __int64 *v28; // rbx
  unsigned __int64 v29; // rax
  __int64 *v30; // rsi
  double v31; // xmm4_8
  double v32; // xmm5_8
  unsigned __int64 v33; // rax
  __int64 v34; // rax

  v14 = *(_QWORD *)(a2 + 48);
  if ( v14 && !(unsigned __int8)sub_709840(a1, v14, a6, a7, a8, a9, a10, a11, a12, a13) )
    return 0;
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
    {
      qword_2CCC420 = 0;
      qword_2CCC428 = 0;
      qword_2CCC438 = 0;
      __cxa_guard_release(&byte_2CCC408);
    }
    v29 = *(_QWORD *)(a2 + 72);
    v30 = &qword_2CCC420;
    if ( v29 <= 7 )
    {
LABEL_21:
      if ( !(unsigned __int8)sub_718840(a1, (int *)v30, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)
        || !(unsigned __int8)sub_7154D0(a1, *(_QWORD *)(a2 + 56), a6, a7, a8, a9, v31, v32, a12, a13) )
      {
        return 0;
      }
      goto LABEL_8;
    }
    v33 = v29 & 0xFFFFFFFFFFFFFFF8LL;
    a3 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( a3 == 2 )
    {
      v34 = *(_QWORD *)(v33 + 72);
      v30 = nullptr;
      if ( !v34 )
        goto LABEL_21;
      v30 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v34 & 6) != 4 || !v30 )
        goto LABEL_21;
    }
    else
    {
      v30 = (__int64 *)v33;
      if ( a3 != 4 )
        goto LABEL_21;
    }
    v30 = (__int64 *)v30[1];
    goto LABEL_21;
  }
  if ( !(unsigned __int8)sub_7154D0(a1, *(_QWORD *)(a2 + 56), a6, a7, a8, a9, a10, a11, a12, a13) )
    return 0;
LABEL_8:
  v19 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v19 = sub_B8D340(a2, 0);
  v15 = sub_70A970(a1, v19, a6, a7, a8, a9, v17, v18, a12, a13);
  if ( !(_BYTE)v15 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v20 = sub_B8C3D0(a2);
    v25 = *(unsigned int *)(v20 + 8);
    v26 = *(_QWORD *)v20 + 8 * v25;
    v27 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v27 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v26 != v27 )
    {
      v28 = v27;
      while ( (unsigned __int8)sub_71D160(a1, *v28, a6, a7, a8, a9, v23, v24, a12, a13, v25, v21, v22) )
      {
        if ( (__int64 *)v26 == ++v28 )
          return v15;
      }
      return 0;
    }
  }
  return v15;
}
