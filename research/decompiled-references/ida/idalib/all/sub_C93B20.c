__int64 __fastcall sub_C93B20(__int64 a1, __int64 a2)
{
  const __m128i *v3; // rax
  unsigned __int16 v4; // dx
  unsigned int v5; // ecx
  int v6; // edx
  __m128i v7; // xmm1
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  const __m128i *v11; // rax
  __int8 v12; // dl
  __int64 v13; // rdx
  double v14; // rcx
  __int64 v15; // rdx
  __m128i v16; // xmm2
  __int8 v17; // dl
  __int64 v18; // rdx
  double v19[4]; // [rsp+8h] [rbp-20h] BYREF

  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v3 = (const __m128i *)sub_BFB900(*(_QWORD *)(a2 + 16));
  v4 = v3->m128i_i16[0] & 0x1FF;
  if ( v4 == 4 )
  {
    v3 = (const __m128i *)sub_BFB900(v3[1].m128i_u64[0]);
    if ( (v3->m128i_i16[0] & 0x1FFu) <= 0x75 )
    {
      switch ( (((unsigned __int8)v3->m128i_i8[3] >> 1) + 48) & 0x3F )
      {
        case 0:
          goto LABEL_23;
        case 1:
          goto LABEL_22;
        case 0xE:
          v5 = 1;
          *(_DWORD *)a1 = 15;
          goto LABEL_19;
        case 0x10:
          goto LABEL_21;
        case 0x11:
          goto LABEL_20;
        case 0x12:
          goto LABEL_18;
        default:
          goto LABEL_26;
      }
    }
    v5 = 1;
    v6 = 15;
    goto LABEL_4;
  }
  if ( v4 > 0x75u )
  {
    v6 = ((unsigned __int16)v3->m128i_i16[1] >> 3) & 0x3F;
    v5 = v6 - 14;
LABEL_4:
    v7 = _mm_loadu_si128(v3 + 1);
    v8 = v3[1].m128i_u64[0];
    *(_QWORD *)(a1 + 24) = v3;
    *(_DWORD *)a1 = v6;
    v9 = v3[1].m128i_u64[1];
    *(__m128i *)(a1 + 8) = v7;
    goto LABEL_5;
  }
  switch ( (((unsigned __int8)v3->m128i_i8[3] >> 1) + 48) & 0x3F )
  {
    case 0:
LABEL_23:
      *(_DWORD *)a1 = 10;
      v5 = -4;
      break;
    case 1:
LABEL_22:
      *(_DWORD *)a1 = 11;
      v5 = -3;
      break;
    case 0xE:
      v5 = 0;
      *(_DWORD *)a1 = 14;
      break;
    case 0x10:
LABEL_21:
      *(_DWORD *)a1 = 12;
      v5 = -2;
      break;
    case 0x11:
LABEL_20:
      *(_DWORD *)a1 = 13;
      v5 = -1;
      break;
    case 0x12:
LABEL_18:
      *(_DWORD *)a1 = 9;
      v5 = -5;
      break;
    default:
LABEL_26:
      BUG();
  }
LABEL_19:
  v17 = v3->m128i_i8[2];
  *(_QWORD *)(a1 + 24) = v3;
  v18 = ((v17 & 8) != 0) + 1LL;
  v8 = v3[2].m128i_u64[v18];
  v9 = v3[2].m128i_u64[v18 + 1];
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = v9;
LABEL_5:
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    *(_QWORD *)&v19[0] = v8;
    v8 = v9;
    *(__m128 *)(a1 + 8) = _mm_loadh_ps(v19);
  }
  if ( v5 > 1 )
  {
    v11 = (const __m128i *)sub_BFDAF0(v8);
    if ( (v11->m128i_i16[0] & 0x1FFu) > 0x75 )
    {
      v16 = _mm_loadu_si128(v11 + 1);
      v14 = *(double *)v11[1].m128i_i64;
      *(_QWORD *)(a1 + 24) = v11;
      *(__m128i *)(a1 + 8) = v16;
    }
    else
    {
      v12 = v11->m128i_i8[2];
      *(_QWORD *)(a1 + 24) = v11;
      v13 = ((v12 & 8) != 0) + 1LL;
      v14 = *(double *)&v11[2].m128i_i64[v13];
      v15 = v11[2].m128i_i64[v13 + 1];
      *(double *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v15;
    }
    if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
    {
      v19[0] = v14;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps(v19);
    }
  }
  return a1;
}
