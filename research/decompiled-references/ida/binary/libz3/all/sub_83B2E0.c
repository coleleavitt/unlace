__int64 __fastcall sub_83B2E0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 i; // rbp
  __m128i v4; // xmm1
  bool v5; // al
  __m128i si128; // xmm0
  void *v7; // r13
  int v8; // eax
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a2[1];
  for ( i = v2 + 12LL * *((unsigned int *)a2 + 4); i != v2; v2 += 12LL )
  {
    if ( *(_DWORD *)(v2 + 4) == 2 )
      break;
  }
  v4 = (__m128i)v2;
  v5 = 0;
  si128 = _mm_unpacklo_epi64((__m128i)*a2, v4);
  if ( *a2 )
    v5 = *(_DWORD *)(*a2 - 4) != 0;
  *(_BYTE *)a1 = v5;
  *(_BYTE *)(a1 + 12) &= 0xFCu;
  *(_BYTE *)(a1 + 28) &= 0xFCu;
  *(_DWORD *)(a1 + 8) = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v10[0] = si128;
    sub_182C690(v7, a1 + 8, &qword_1C7F280);
    si128 = _mm_load_si128(v10);
    if ( (qword_1C7F290 & 0x100000000LL) == 0 )
      goto LABEL_9;
LABEL_12:
    v10[0] = si128;
    sub_182C690(v7, a1 + 24, &qword_1C7F290);
    si128 = _mm_load_si128(v10);
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 8) = qword_1C7F280;
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
    goto LABEL_12;
LABEL_9:
  v8 = qword_1C7F290;
  *(_BYTE *)(a1 + 28) &= ~1u;
  *(_DWORD *)(a1 + 24) = v8;
LABEL_10:
  *(_QWORD *)(a1 + 56) = i;
  *(__m128i *)(a1 + 40) = si128;
  return a1;
}

