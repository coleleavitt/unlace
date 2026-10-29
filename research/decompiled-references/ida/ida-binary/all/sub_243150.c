__int64 __fastcall sub_243150(
        int a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 result; // rax
  __int64 v21; // rdx
  char *v22; // rcx
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5

  if ( !a1 )
    return 0;
  v14 = qword_8CC430;
  v15 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v15 )
    return 0;
  while ( a1 != *(_DWORD *)v14 )
  {
    v14 += 256;
    if ( v15 == v14 )
      return 0;
  }
  if ( !v14 )
    return 0;
  v16 = *(_QWORD *)(v14 + 40);
  if ( !v16 )
    goto LABEL_21;
  v17 = (char *)dbg;
  v18 = *(_QWORD *)(v16 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v19 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *((_DWORD *)qword_8CC600 + 4) = dword_8BA594;
        *v19 = v18;
        v19[1] = v16;
        if ( (unsigned int)sub_23D480((__int64)v19, 11, v16, v17, *(double *)a5.m128_u64) == 1 )
        {
          v18 = *(_QWORD *)qword_8CC600;
          goto LABEL_13;
        }
LABEL_21:
        if ( a2 != -1 )
          goto LABEL_14;
        goto LABEL_17;
      }
    }
  }
LABEL_13:
  if ( a2 != v18 )
  {
LABEL_14:
    result = sub_23D8E0(v14, a2, 2, nullptr, 0, 0, *(double *)a5.m128_u64, a6, a7, a8, a9, a10, a11, a12);
    goto LABEL_15;
  }
LABEL_17:
  v25 = operator new(0x80u);
  a5 = 0;
  *(_QWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 24) = 96;
  *(_QWORD *)(v25 + 32) = 0;
  *(_QWORD *)(v25 + 56) = -1;
  *(_QWORD *)(v25 + 64) = 0;
  *(_OWORD *)(v25 + 40) = 0;
  *(_QWORD *)(v25 + 80) = -1;
  *(_QWORD *)(v25 + 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v25 + 88) = 4;
  *(_QWORD *)(v25 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v25 + 96) = 9;
  *(_QWORD *)(v25 + 112) = 0;
  *(_QWORD *)v25 = &thread_run_to;
  *(_QWORD *)(v25 + 120) = a2;
  if ( (unsigned int)sub_236A00(v14, v25, 0, 0.0) != 1 )
    return 0;
  result = sub_241C80(
             v14,
             (a4 == 0 ? 4096 : 36864) | (8 * (unsigned int)a3),
             v26,
             v27,
             v28,
             v29,
             (__m128)0LL,
             a6,
             a7,
             a8,
             v30,
             v31,
             a11,
             a12);
LABEL_15:
  if ( (int)result > 0 )
    return sub_243000(a3, (const void *)a4, a5, a6, a7, a8, v23, v24, a11, a12, v21, v22);
  return result;
}
