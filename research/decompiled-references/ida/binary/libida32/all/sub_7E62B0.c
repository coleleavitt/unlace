__int64 __fastcall sub_7E62B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 22;
    v5 = v3 + 23;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 24;
    v4 = 23;
    if ( (unsigned __int64)a1[2] >= 0x18 )
      goto LABEL_3;
  }
  v11 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v11;
  v6 = v11;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23846A0);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(_QWORD *)(v8 + 15) = 0x20544C555345525FLL;
  sub_7ACD80(a1, 1);
  v9 = sub_7E6040(a1, a2 + 16, 1);
  if ( !(_BYTE)v9 )
    return v9;
  v12 = a1[1];
  if ( v12 )
  {
    v13 = v12 + 7;
    v14 = v12 + 8;
    v15 = *a1;
    --v12;
    if ( a1[2] >= v14 )
      goto LABEL_9;
  }
  else
  {
    v15 = *a1;
    v14 = 9;
    v13 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_9;
  }
  v21 = qvector_reserve(a1, v15, v14, 1);
  *a1 = v21;
  v15 = v21;
LABEL_9:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  *(_QWORD *)(*a1 + v12) = 0x6F666E69202F2F20LL;
  sub_7ACD80(a1, 1);
  v16 = a1[1];
  if ( !v16 )
  {
    v19 = *a1;
    v18 = 1;
    v17 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_13:
    v20 = qvector_reserve(a1, v19, v17, 1);
    *a1 = v20;
    v19 = v20;
    goto LABEL_11;
  }
  v17 = v16 + 1;
  v18 = a1[1];
  v19 = *a1;
  --v16;
  if ( a1[2] < v17 )
    goto LABEL_13;
LABEL_11:
  a1[1] = v17;
  *(_BYTE *)(v19 + v16) = 59;
  *(_BYTE *)(*a1 + v18) = 0;
  return v9;
}

