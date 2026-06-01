__int64 __fastcall sub_21F9970(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  unsigned __int64 v6; // r15
  _BYTE *v7; // rbx
  _BYTE *v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE *v19; // rsi
  unsigned int v20; // r12d
  int v21; // eax
  int v23; // [rsp+4h] [rbp-64h]
  _BYTE src[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64;
  v23 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v2 > 0x7F )
  {
    v5 = v2 >> 6;
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 8LL * v5;
  }
  else
  {
    v3 = a1 + 8;
    v4 = 8;
    v5 = 1;
  }
  v6 = a2 + 8;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
    v6 = *(_QWORD *)(a2 + 8);
  if ( v5 <= 2 )
  {
    v7 = src;
    v8 = &src[v4];
LABEL_7:
    v9 = 0;
    do
    {
      *(_QWORD *)&v7[8 * v9] = *(_QWORD *)(v3 + 8 * v9);
      *(_QWORD *)&v8[8 * v9] = *(_QWORD *)(v6 + 8 * v9);
      *(_QWORD *)(v3 + 8 * v9++) = 0;
    }
    while ( v5 > (unsigned int)v9 );
    goto LABEL_16;
  }
  v10 = operator new[](16LL * v5);
  v8 = (_BYTE *)(v10 + v4);
  v7 = (_BYTE *)v10;
  v23 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v7 < v3 + 16 && v3 < (unsigned __int64)(v7 + 16)
    || (unsigned __int64)v8 < v3 + 16 && (unsigned __int64)(v8 + 16) > v3
    || (unsigned __int64)v7 < v6 + 16 && v6 < v10 + 16
    || v3 < v6 + 16 && v6 < v3 + 16
    || (unsigned __int64)(v8 + 16) > v6 && (unsigned __int64)v8 < v6 + 16
    || v10 < (unsigned __int64)(v8 + 16) && (unsigned __int64)v8 < v10 + 16 )
  {
    goto LABEL_7;
  }
  v11 = 0;
  do
  {
    *(__m128i *)&v7[v11] = _mm_loadu_si128((const __m128i *)(v3 + v11));
    *(__m128i *)&v8[v11] = _mm_loadu_si128((const __m128i *)(v6 + v11));
    *(_OWORD *)(v3 + v11) = 0;
    v11 += 16;
  }
  while ( v11 != 16LL * (v5 >> 1) );
  v12 = v5 & 0xFFFFFFFE;
  if ( v5 != (_DWORD)v12 )
  {
    v13 = (_QWORD *)(v3 + 8 * v12);
    *(_QWORD *)&v7[8 * v12] = *v13;
    *(_QWORD *)&v8[8 * v12] = *(_QWORD *)(v6 + 8 * v12);
    *v13 = 0;
  }
LABEL_16:
  *(_DWORD *)(a1 + 16) -= *(_DWORD *)(a2 + 16);
  v14 = sub_2209890(v8, v5);
  v15 = v23 - 1;
  if ( v23 - 1 != v14 )
  {
    *(_DWORD *)(a1 + 16) += v23 - 1 - v14;
    sub_220A060(v8);
  }
  v16 = sub_2209890(v7, v5);
  if ( v15 != v16 )
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) + v16 - v15;
    sub_220A060(v7);
  }
  if ( (int)sub_220BA00(v7, v8, v5) < 0 )
  {
    --*(_DWORD *)(a1 + 16);
    sub_220A060(v7);
  }
  if ( v23 )
  {
    while ( 1 )
    {
      if ( (int)sub_220BA00(v7, v8, v5) >= 0 )
      {
        sub_2209980(v7, v8, 0, v5, v17, v18);
        sub_2209800(v3, v15);
      }
      sub_220A060(v7);
      if ( !v15 )
        break;
      --v15;
    }
  }
  v19 = v8;
  v20 = 3;
  v21 = sub_220BA00(v7, v19, v5);
  if ( v21 <= 0 )
  {
    v20 = 2;
    if ( v21 )
    {
      v20 = (unsigned __int8)sub_2209790(v7, v5) ^ 1;
      if ( v5 <= 2 )
        return v20;
LABEL_34:
      operator delete[](v7);
      return v20;
    }
  }
  if ( v5 > 2 )
    goto LABEL_34;
  return v20;
}
