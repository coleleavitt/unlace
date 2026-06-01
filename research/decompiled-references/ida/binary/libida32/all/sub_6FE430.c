__int64 __fastcall sub_6FE430(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  int *v21; // rbx
  int *v22; // r13
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rsi
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r13
  _QWORD *v34; // rdi
  int v35; // eax

  if ( !(unsigned __int8)sub_6F4EF0(a1, *(_QWORD *)(a2 + 184), a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v18 = *(_QWORD *)(a2 + 160);
  v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v18 )
    goto LABEL_27;
  if ( (v18 & 4) == 0 )
  {
    v20 = *(unsigned int *)(v19 + 8);
    goto LABEL_6;
  }
  if ( v19 )
  {
    v19 = *(_QWORD *)v19;
    v20 = *(unsigned int *)(v19 + 8);
  }
  else
  {
LABEL_27:
    v20 = 0;
  }
LABEL_6:
  if ( (_DWORD)v20 )
  {
    v21 = (int *)(v19 + 16);
    v22 = &v21[8 * v20];
    while ( (unsigned __int8)sub_6F8260(a1, v21, v12, v13, v14, a3, a4, a5, a6, v15, v16, a9, a10) )
    {
      v21 += 8;
      if ( v22 == v21 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( !(unsigned __int8)sub_6FCA70(a1, a2, a3, a4, a5, a6, v15, v16, a9, a10) )
    return 0;
  v25 = a2 + 64;
  if ( !a2 )
    v25 = 0;
  if ( !(unsigned __int8)sub_6EA390(a1, v25, a3, a4, a5, a6, v23, v24, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v28 = nullptr;
    v29 = sub_B68690(a2);
    v32 = *(unsigned int *)(v29 + 8);
    v33 = *(_QWORD *)v29 + 8 * v32;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v28 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v33 != v28 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v28, a3, a4, a5, a6, v26, v27, a9, a10, v32, v30, v31) )
      {
        if ( (__int64 *)v33 == ++v28 )
          goto LABEL_20;
      }
      return 0;
    }
  }
LABEL_20:
  v34 = (_QWORD *)*a1;
  v35 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v35 - 59) > 2 )
  {
    if ( !(unsigned __int8)sub_6CB220(v34, nullptr, (char *)a2, a3, a4, a5, a6, v26, v27, a9, a10) )
      return 0;
    v34 = (_QWORD *)*a1;
    v35 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  if ( (unsigned int)(v35 - 60) > 1 )
  {
    if ( (unsigned __int8)sub_6C3AC0(v34, nullptr, a2, a3, a4, a5, *(double *)a6.m128_u64, v26, v27, a9, a10) )
    {
      v34 = (_QWORD *)*a1;
      return sub_6CDEF0(v34, nullptr, a2, a3, a4, a5, a6, v26, v27, a9, a10);
    }
    return 0;
  }
  return sub_6CDEF0(v34, nullptr, a2, a3, a4, a5, a6, v26, v27, a9, a10);
}

