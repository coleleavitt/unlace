__int64 __fastcall sub_70F420(
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
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // r13d
  __int64 *v20; // rbx
  __int64 v21; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 *v29; // r14
  __int64 *v30; // rbx
  __int64 v31; // rax
  double v32; // xmm4_8
  double v33; // xmm5_8

  v13 = sub_70EBE0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( !(_BYTE)v13 )
    return 0;
  v19 = v13;
  v20 = (__int64 *)(a2 + 48);
  v21 = a2 + 48 + 8LL * *(unsigned __int16 *)(a2 + 22);
  if ( a2 + 48 != v21 )
  {
    while ( (unsigned __int8)sub_70EBE0(a1, *v20, v14, v15, v16, a6, a7, a8, a9, v17, v18, a12, a13) )
    {
      if ( (__int64 *)v21 == ++v20 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v23 = sub_6F33F0(a2);
  v29 = (__int64 *)(v23 + 8 * v24);
  v30 = (__int64 *)v23;
  if ( v29 != (__int64 *)v23 )
  {
    while ( (unsigned __int8)sub_70EBE0(a1, *v30, v24, v25, v26, a6, a7, a8, a9, v27, v28, a12, a13) )
    {
      if ( v29 == ++v30 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v31 = sub_6F3390(a2);
  if ( !v31 )
    return v19;
  return sub_70DBE0(a1, v31, 0, a6, a7, a8, a9, v32, v33, a12, a13);
}
