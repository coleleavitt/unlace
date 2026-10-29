__int64 __fastcall sub_701090(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rbp
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rsi
  unsigned int v25; // ebx
  __int64 *v27; // rsi
  __int64 *v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rdx
  __int64 v35; // r14

  v14 = *(_QWORD *)(a2 + 48);
  if ( v14 )
  {
    if ( (v14 & 4) != 0 )
    {
      v27 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v27 && !(unsigned __int8)sub_6F74E0(a1, *v27, (__int64)(v27 + 1), a12, a13, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
    }
    else if ( ((v14 >> 2) & 1) == 0 )
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
      {
        if ( !(unsigned __int8)sub_6E9260(a1, v15, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
      }
    }
  }
  v16 = 0;
  v17 = *(unsigned int *)(a2 + 36);
  v18 = 8 * v17;
  if ( (_DWORD)v17 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v16);
      v20 = (__int64 *)(v19 + 24);
      v21 = v19 + (unsigned int)(8 * *(_DWORD *)(v19 + 20)) + 24;
      if ( 8 * *(_DWORD *)(v19 + 20) )
        break;
LABEL_11:
      v16 += 8;
      if ( v16 == v18 )
        goto LABEL_12;
    }
    while ( !*v20 || (unsigned __int8)sub_6E9260(a1, *v20, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( (__int64 *)v21 == ++v20 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_12:
  v24 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v24 = sub_B69600(a2, 0);
  v25 = sub_6EA390(a1, v24, a3, a4, a5, a6, v22, v23, a9, a10);
  if ( !(_BYTE)v25 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v28 = nullptr;
    v29 = sub_B68690(a2);
    v34 = *(unsigned int *)(v29 + 8);
    v35 = *(_QWORD *)v29 + 8 * v34;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v28 = *(__int64 **)sub_B68690(a2);
    while ( (__int64 *)v35 != v28 )
    {
      if ( !(unsigned __int8)sub_6FCB80(a1, *v28, a3, a4, a5, a6, v32, v33, a9, a10, v34, v30, v31) )
        return 0;
      ++v28;
    }
  }
  return v25;
}

