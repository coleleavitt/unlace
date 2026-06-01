__int64 __fastcall sub_8065F0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __m128i si128; // xmm0
  __m128i *v16; // r13
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax

  sub_7D01E0(a1, a3);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = a1[1];
    v7 = *a1;
    --v4;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v7 = *a1;
    v6 = 1;
    v5 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v10 = qvector_reserve(a1, v7, v5, 1);
  *a1 = v10;
  v7 = v10;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v7 + v4) = 123;
  *(_BYTE *)(*a1 + v6) = 0;
  sub_7D01E0(a1, a3 + 1);
  v8 = sub_7D0270(a1);
  if ( (_BYTE)v8 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      v12 = v11 + 19;
      v13 = v11 + 20;
      v14 = *a1;
      --v11;
      if ( a1[2] >= v13 )
        goto LABEL_9;
    }
    else
    {
      v14 = *a1;
      v13 = 21;
      v12 = 20;
      if ( (unsigned __int64)a1[2] >= 0x15 )
        goto LABEL_9;
    }
    v22 = qvector_reserve(a1, v14, v13, 1);
    *a1 = v22;
    v14 = v22;
LABEL_9:
    a1[1] = v13;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8620);
    *(_BYTE *)(v14 + v12) = 0;
    v16 = (__m128i *)(*a1 + v11);
    v16[1].m128i_i32[0] = 1936025454;
    *v16 = si128;
    sub_7D01E0(a1, a3);
    v17 = a1[1];
    if ( v17 )
    {
      v18 = v17 + 1;
      v19 = a1[1];
      v20 = *a1;
      --v17;
      if ( a1[2] >= v18 )
      {
LABEL_11:
        a1[1] = v18;
        *(_BYTE *)(v20 + v17) = 125;
        *(_BYTE *)(*a1 + v19) = 0;
        return v8;
      }
    }
    else
    {
      v20 = *a1;
      v19 = 1;
      v18 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_11;
    }
    v21 = qvector_reserve(a1, v20, v18, 1);
    *a1 = v21;
    v20 = v21;
    goto LABEL_11;
  }
  return v8;
}
