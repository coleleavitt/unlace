__int64 __fastcall sub_7DBBD0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rbp
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = v1 + 18;
    v3 = v1 + 19;
    v4 = *a1;
    --v1;
    if ( a1[2] >= v3 )
      goto LABEL_3;
  }
  else
  {
    v4 = *a1;
    v3 = 20;
    v2 = 19;
    if ( (unsigned __int64)a1[2] >= 0x14 )
      goto LABEL_3;
  }
  v9 = qvector_reserve(a1, v4, v3, 1);
  *a1 = v9;
  v4 = v9;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384520);
  a1[1] = v3;
  *(_BYTE *)(v4 + v2) = 0;
  v6 = *a1 + v1;
  *(__m128i *)v6 = si128;
  *(_DWORD *)(v6 + 15) = 542395477;
  sub_7ACD80(a1, 1);
  v7 = sub_7ACE10(a1);
  if ( !(_BYTE)v7 )
    return v7;
  v10 = a1[1];
  if ( v10 )
  {
    v11 = v10 + 11;
    v12 = v10 + 12;
    v13 = *a1;
    --v10;
    if ( a1[2] >= v12 )
      goto LABEL_9;
  }
  else
  {
    v13 = *a1;
    v12 = 13;
    v11 = 12;
    if ( (unsigned __int64)a1[2] >= 0xD )
      goto LABEL_9;
  }
  v19 = qvector_reserve(a1, v13, v12, 1);
  *a1 = v19;
  v13 = v19;
LABEL_9:
  a1[1] = v12;
  *(_BYTE *)(v13 + v11) = 0;
  qmemcpy((void *)(*a1 + v10), " // ndeleted", 12);
  sub_7ACD80(a1, 1);
  v14 = a1[1];
  if ( !v14 )
  {
    v17 = *a1;
    v16 = 1;
    v15 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_13:
    v18 = qvector_reserve(a1, v17, v15, 1);
    *a1 = v18;
    v17 = v18;
    goto LABEL_11;
  }
  v15 = v14 + 1;
  v16 = a1[1];
  v17 = *a1;
  --v14;
  if ( a1[2] < v15 )
    goto LABEL_13;
LABEL_11:
  a1[1] = v15;
  *(_BYTE *)(v17 + v14) = 59;
  *(_BYTE *)(*a1 + v16) = 0;
  return v7;
}

