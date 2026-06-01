_QWORD *__fastcall sub_602210(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __m128i v7; // xmm0
  char v9; // r14
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  char v12; // dl

  v6 = *(_DWORD *)(a4 + 4);
  if ( v6 )
  {
    v9 = *(_BYTE *)(a4 + 8);
    if ( (v6 & 0x80000000) == 0 )
    {
      if ( !v9 )
        goto LABEL_3;
LABEL_6:
      v10 = v6;
LABEL_7:
      v6 = sub_1169590(v6, a2, a3) + v10;
      goto LABEL_3;
    }
    if ( (unsigned __int8)sub_CAC7C0(a2, v6, 0) )
    {
      if ( !v9 )
        goto LABEL_3;
    }
    else
    {
      v11 = (unsigned __int64)sub_CACEA0(a2, v6) >> 32;
      v6 = v11;
      if ( !v12 )
        goto LABEL_3;
      if ( !(_DWORD)v11 )
        goto LABEL_2;
      if ( (v11 & 0x80000000) == 0LL )
        goto LABEL_6;
    }
    v10 = v6;
    v6 = sub_CAB1A0(a2, v6);
    goto LABEL_7;
  }
LABEL_2:
  v6 = 0;
LABEL_3:
  v7 = _mm_cvtsi32_si128(*(_DWORD *)a4);
  *a1 = a2;
  a1[1] = a3;
  a1[2] = _mm_unpacklo_epi32(v7, _mm_cvtsi32_si128(v6)).m128i_u64[0];
  return a1;
}

