__int64 __fastcall sub_6FE2B0(
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
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // r12
  int *v18; // rbx
  int *v19; // r12
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rsi
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r12
  _QWORD *v32; // rdi
  int v33; // eax

  v15 = *(_QWORD *)(a2 + 160);
  if ( !v15 )
    goto LABEL_9;
  v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 & 4) != 0 )
  {
    if ( !v16 )
      goto LABEL_9;
    v16 = *(_QWORD *)v16;
  }
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 + 8);
    if ( (_DWORD)v17 )
    {
      v18 = (int *)(v16 + 16);
      v19 = &v18[8 * v17];
      while ( (unsigned __int8)sub_6F8260(a1, v18, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
      {
        v18 += 8;
        if ( v18 == v19 )
          goto LABEL_9;
      }
      return 0;
    }
  }
LABEL_9:
  if ( !(unsigned __int8)sub_6FCA70(a1, a2, a6, a7, a8, a9, a10, a11, a12, a13) )
    return 0;
  v23 = a2 + 64;
  if ( !a2 )
    v23 = 0;
  if ( !(unsigned __int8)sub_6EA390(a1, v23, a6, a7, a8, a9, v21, v22, a12, a13) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v26 = nullptr;
    v27 = sub_B68690(a2);
    v30 = *(unsigned int *)(v27 + 8);
    v31 = *(_QWORD *)v27 + 8 * v30;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v26 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v31 != v26 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v26, a6, a7, a8, a9, v24, v25, a12, a13, v30, v28, v29) )
      {
        if ( (__int64 *)v31 == ++v26 )
          goto LABEL_23;
      }
      return 0;
    }
  }
LABEL_23:
  v32 = (_QWORD *)*a1;
  v33 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v33 - 59) > 2 )
  {
    if ( !(unsigned __int8)sub_6CB220(v32, nullptr, (char *)a2, a6, a7, a8, a9, v24, v25, a12, a13) )
      return 0;
    v32 = (_QWORD *)*a1;
    v33 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  if ( (unsigned int)(v33 - 60) > 1 )
  {
    if ( (unsigned __int8)sub_6C3AC0(v32, nullptr, a2, a6, a7, a8, *(double *)a9.m128_u64, v24, v25, a12, a13) )
    {
      v32 = (_QWORD *)*a1;
      return sub_6CDEF0(v32, nullptr, a2, a6, a7, a8, a9, v24, v25, a12, a13);
    }
    return 0;
  }
  return sub_6CDEF0(v32, nullptr, a2, a6, a7, a8, a9, v24, v25, a12, a13);
}

