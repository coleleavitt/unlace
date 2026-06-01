__int64 __fastcall sub_7120(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned __int16 *v10; // rax
  int v11; // ecx
  unsigned __int16 *v12; // rcx
  int v13; // edi
  unsigned __int16 *i; // rax
  int v15; // edx
  __int64 result; // rax
  __int16 v17; // dx
  __int64 v18; // rdx
  int v19; // eax
  char *v20; // rcx
  unsigned __int16 v21; // cx
  __int64 v22; // rdx
  void *v23; // rdx
  unsigned __int64 v24; // r10
  int v25; // eax
  __int16 v26; // ax
  __int16 v27; // si
  unsigned __int64 v28; // xmm0_8
  int v29; // eax
  unsigned __int16 v30; // cx
  __m128i v31; // xmm1
  __int64 v32; // rsi
  __int16 v33; // ax
  int v34; // eax
  __int16 v35; // ax
  int v36; // eax
  char *v37; // rdi
  unsigned __int16 v38; // di
  int v39; // r8d
  unsigned __int64 v40; // rsi
  __m128i v41; // xmm1
  int v42; // eax
  int v43; // eax
  int v44; // edi
  unsigned __int64 v45; // r9
  __m128i v46; // xmm1
  unsigned __int64 v47; // r8
  int v48; // eax
  int v49; // eax
  __int16 v50; // ax
  int v51; // eax
  int v52; // eax
  unsigned __int16 v53; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int16 v54; // [rsp+2h] [rbp-76h]
  int v55; // [rsp+4h] [rbp-74h]
  _BYTE v56[12]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v57; // [rsp+14h] [rbp-64h] BYREF
  __int16 v58; // [rsp+20h] [rbp-58h]
  unsigned __int16 v59; // [rsp+22h] [rbp-56h]
  int v60; // [rsp+24h] [rbp-54h]
  int v61; // [rsp+28h] [rbp-50h]
  unsigned int v62; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v63; // [rsp+30h] [rbp-48h]
  unsigned int v64; // [rsp+34h] [rbp-44h]
  unsigned __int64 v65; // [rsp+38h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  *a3 = 0;
  *(_DWORD *)(a1 + 28) = -1;
  v6 = qlsize(*(_QWORD *)(a1 + 8));
  *(_WORD *)(a1 + 57) = -1;
  v7 = v6;
  qlseek(*(_QWORD *)(a1 + 8), a2, 0);
  v8 = qlread(*(_QWORD *)(a1 + 8), &v53, 56);
  if ( v8 <= 3 )
    return 0xFFFFFFFFLL;
  v9 = v8;
  if ( v53 )
    goto LABEL_6;
  if ( !a2 && v54 == 0xF303 )
    return 0xFFFFFFFFLL;
  if ( v54 == 0xFFFF )
  {
    if ( v8 <= 0x37 )
    {
      if ( v8 <= 0x33 )
        return 0xFFFFFFFFLL;
      v26 = v55;
    }
    else
    {
      v26 = v55;
      if ( (unsigned __int16)v55 > 1u )
      {
        if ( !(v57 ^ 0xB8DCA46AF6FA20AFLL | *(_QWORD *)&v56[4] ^ 0x4BA9BAEED1BAA1C7LL) )
        {
          v27 = HIWORD(v55);
          if ( HIWORD(v55) != 0x8664 )
          {
            if ( HIWORD(v55) > 0x8664u )
            {
              if ( HIWORD(v55) != 0xA641 && HIWORD(v55) != 0xAA64 )
                return 0xFFFFFFFFLL;
            }
            else if ( HIWORD(v55) != 332 && HIWORD(v55) != 452 )
            {
              return 0xFFFFFFFFLL;
            }
          }
          if ( v62 && v7 > 0x38 && v62 < (v7 - 56) / 0x28 )
          {
            v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v62), _mm_cvtsi32_si128(v64)).m128i_u64[0];
            if ( v64 )
            {
              if ( v63 >= 40 * (unsigned __int64)v62 + 56 && v63 < v7 && (v7 - v63) / 0x14 >= v64 )
                goto LABEL_60;
            }
            else if ( !v63 )
            {
LABEL_60:
              v29 = *(_DWORD *)v56;
              *(_QWORD *)(a1 + 73) = v63;
              *(_WORD *)(a1 + 59) = 3;
              *(_DWORD *)(a1 + 69) = v29;
              *(_WORD *)(a1 + 57) = v27;
              *(_DWORD *)(a1 + 81) = 0;
              *(_QWORD *)(a1 + 61) = v28;
              return 0;
            }
          }
          return 0xFFFFFFFFLL;
        }
LABEL_64:
        if ( v57 ^ 0xC2532622B6D69BACLL | *(_QWORD *)&v56[4] ^ 0x4DABD9A50CB3FE38LL
          || HIWORD(v55) != 332 && HIWORD(v55) != 0x8664 )
        {
          return 0xFFFFFFFFLL;
        }
        v30 = v59;
        if ( !v59 || v7 <= 0x34 || v59 >= (v7 - 52) / 0x28 )
          return 0xFFFFFFFFLL;
        v31 = _mm_cvtsi32_si128(v62);
        v32 = v61;
        if ( _mm_cvtsi128_si32(v31) )
        {
          if ( v61 < 40 * (unsigned __int64)v59 + 52
            || v61 >= v7
            || (v7 - v61) / 0x14 < (unsigned int)_mm_cvtsi128_si32(v31) )
          {
            return 0xFFFFFFFFLL;
          }
          v50 = v63;
          v32 = v61 + 32LL;
          *(_WORD *)(a1 + 59) = 9;
          *(_WORD *)(a1 + 81) = v50;
          *(_WORD *)(a1 + 57) = v58;
          v34 = v60;
        }
        else
        {
          if ( v61 )
            return 0xFFFFFFFFLL;
          v33 = v63;
          *(_WORD *)(a1 + 59) = 9;
          *(_WORD *)(a1 + 81) = v33;
          *(_WORD *)(a1 + 57) = v58;
          v34 = v60;
        }
        *(_DWORD *)(a1 + 69) = v34;
        v35 = HIWORD(v63);
        *(_QWORD *)(a1 + 73) = v32;
        *(_WORD *)(a1 + 83) = v35;
        *(_QWORD *)(a1 + 61) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), v31).m128i_u64[0];
        return 0;
      }
    }
    if ( !v26 )
      return 0xFFFFFFFFLL;
    goto LABEL_64;
  }
LABEL_6:
  if ( v8 <= 0x17 )
  {
    if ( v8 > 0x13 )
      goto LABEL_12;
    return 0xFFFFFFFFLL;
  }
  v10 = (unsigned __int16 *)((char *)&v57 + 3);
  v11 = -1;
  while ( 1 )
  {
    if ( *(_BYTE *)v10 )
    {
      if ( ++v11 > 0 )
        break;
    }
    if ( &v53 == v10 )
      goto LABEL_12;
    v10 = (unsigned __int16 *)((char *)v10 - 1);
  }
  v19 = 0;
  v20 = (char *)&unk_22400;
  do
  {
    if ( v53 == *(_WORD *)v20 && (unsigned __int8)(v20[2] + 1) <= 1u )
    {
      if ( *((_QWORD *)&unk_22400 + 2 * v19 + 1) )
        goto LABEL_42;
      goto LABEL_12;
    }
    ++v19;
    v20 += 16;
  }
  while ( v19 != 113 );
  if ( !*(_DWORD *)(a1 + 24) )
    goto LABEL_12;
LABEL_42:
  v21 = v54;
  if ( v54 )
  {
    if ( v54 > 0xFEFFu )
      goto LABEL_12;
    goto LABEL_92;
  }
  if ( !v53 )
    goto LABEL_12;
  if ( (unsigned __int16)(v53 - 257) > 7u )
  {
    if ( v53 == 287 || v53 == 265 )
      goto LABEL_12;
LABEL_92:
    if ( v53 == 21020 )
      goto LABEL_12;
    v24 = 1;
    v25 = 24;
    if ( ((v53 - 387) & 0xFFFD) != 0 )
      goto LABEL_46;
LABEL_94:
    v44 = (unsigned __int16)v57;
    v45 = (unsigned int)(unsigned __int16)v57 + v25;
    if ( v45 >= v7 || v54 >= (v7 - v45) / 0x28 )
      goto LABEL_12;
    v46 = _mm_cvtsi32_si128(*(unsigned int *)&v56[8]);
    v47 = *(_QWORD *)v56;
    if ( _mm_cvtsi128_si32(v46) )
    {
      if ( *(_QWORD *)v56 < v45 + 40LL * v54
        || *(_QWORD *)v56 >= v7
        || (v7 - *(_QWORD *)v56) / v24 < (unsigned int)_mm_cvtsi128_si32(v46) )
      {
        goto LABEL_12;
      }
      v51 = v55;
      *(_WORD *)(a1 + 57) = v53;
      *(_BYTE *)(a1 + 59) = 4;
      *(_DWORD *)(a1 + 69) = v51;
      *(_QWORD *)(a1 + 73) = (unsigned int)v47;
      v52 = WORD1(v57) << 16;
      *(_QWORD *)(a1 + 61) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v46).m128i_u64[0];
      *(_DWORD *)(a1 + 81) = v44 | v52;
      *(_BYTE *)(a1 + 60) = HIDWORD(v47) != 0;
      return 0;
    }
    else
    {
      if ( *(_QWORD *)v56 )
        goto LABEL_12;
      v48 = v55;
      *(_WORD *)(a1 + 57) = v53;
      *(_QWORD *)(a1 + 73) = 0;
      *(_DWORD *)(a1 + 69) = v48;
      v49 = WORD1(v57);
      *(_QWORD *)(a1 + 61) = _mm_cvtsi32_si128(v21).m128i_u64[0];
      *(_DWORD *)(a1 + 81) = v44 | (v49 << 16);
      *(_WORD *)(a1 + 59) = 4;
      return 0;
    }
  }
  v22 = 209;
  if ( !_bittest64(&v22, (unsigned int)v53 - 257) )
  {
LABEL_46:
    if ( (unsigned __int16)(v53 - 487) > 0x10u )
    {
      v24 = 18;
      v25 = (unsigned __int16)(v53 - 193) < 2u ? 22 : 20;
    }
    else
    {
      v23 = &loc_10101;
      v24 = 18;
      v25 = _bittest64((const __int64 *)&v23, (unsigned int)v53 - 487) == 0 ? 20 : 24;
    }
    goto LABEL_94;
  }
LABEL_12:
  v12 = (unsigned __int16 *)&v56[11];
  v13 = -1;
  for ( i = (unsigned __int16 *)&v56[11]; ; i = (unsigned __int16 *)((char *)i - 1) )
  {
    if ( *(_BYTE *)i )
    {
      if ( ++v13 > 0 )
        break;
    }
    if ( i == &v53 )
      goto LABEL_17;
  }
  v36 = 0;
  v37 = (char *)&unk_22400;
  while ( v53 != *(_WORD *)v37 || (unsigned __int8)(v37[2] + 1) > 1u )
  {
    ++v36;
    v37 += 16;
    if ( v36 == 113 )
    {
      if ( !*(_DWORD *)(a1 + 24) )
        goto LABEL_17;
      goto LABEL_82;
    }
  }
  if ( !*((_QWORD *)&unk_22400 + 2 * v36 + 1) )
    goto LABEL_17;
LABEL_82:
  v38 = v54;
  if ( v54 <= 0xFEFFu && v53 == 21020 )
  {
    v39 = *(unsigned __int16 *)&v56[8];
    v40 = (unsigned int)*(unsigned __int16 *)&v56[8] + 20;
    if ( v40 < v7 && v54 < (v7 - v40) / 0x28 )
    {
      v41 = _mm_cvtsi32_si128(*(unsigned int *)&v56[4]);
      if ( _mm_cvtsi128_si32(v41) )
      {
        if ( *(unsigned int *)v56 >= v40 + 40LL * v54 && *(unsigned int *)v56 < v7 )
        {
          v15 = -1;
          if ( (v7 - *(unsigned int *)v56) / 0x12 < (unsigned int)_mm_cvtsi128_si32(v41) )
            goto LABEL_20;
          goto LABEL_88;
        }
      }
      else if ( !*(_DWORD *)v56 )
      {
LABEL_88:
        v42 = v55;
        *(_QWORD *)(a1 + 73) = *(unsigned int *)v56;
        *(_DWORD *)(a1 + 57) = 283164;
        *(_DWORD *)(a1 + 69) = v42;
        v43 = *(unsigned __int16 *)&v56[10] << 16;
        *(_QWORD *)(a1 + 61) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), v41).m128i_u64[0];
        *(_DWORD *)(a1 + 81) = v39 | v43;
        return 1;
      }
    }
  }
LABEL_17:
  v15 = -1;
LABEL_20:
  while ( 1 )
  {
    if ( *(_BYTE *)v12 )
    {
      if ( ++v15 > 0 )
        break;
    }
    if ( v12 == &v53 )
      return 0xFFFFFFFFLL;
    v12 = (unsigned __int16 *)((char *)v12 - 1);
  }
  if ( a2 && !(unsigned __int8)sub_52E0(&v53, v7) )
    *(_QWORD *)v56 = 0;
  result = sub_6A50(a1, v7, &v53, a3);
  if ( (_DWORD)result == -1 )
  {
    result = sub_6F60(a1, v7, &v53, a3);
    if ( (_DWORD)result == -1 )
      return 0xFFFFFFFFLL;
  }
  v17 = *(_WORD *)(a1 + 57);
  if ( v17 == 147 )
  {
LABEL_74:
    *(_QWORD *)(a1 + 24) = 0x500000003LL;
  }
  else if ( (unsigned __int16)(v17 - 193) <= 1u && v9 > 0x15 )
  {
    v18 = (unsigned __int16)v57;
    if ( *a3 )
      LOWORD(v18) = __ROL2__(v57, 8);
    LOWORD(v18) = v18 - 146;
    switch ( v18 )
    {
      case 0LL:
      case 6LL:
        *(_QWORD *)(a1 + 24) = 0x100000036LL;
        break;
      case 1LL:
        goto LABEL_74;
      case 5LL:
        *(_QWORD *)(a1 + 24) = 0x3000001D6LL;
        break;
      case 7LL:
        *(_QWORD *)(a1 + 24) = 6;
        break;
      case 10LL:
      case 15LL:
        *(_QWORD *)(a1 + 24) = 0x200000037LL;
        break;
      case 11LL:
        *(_QWORD *)(a1 + 24) = 0x60000001CLL;
        break;
      case 14LL:
        *(_QWORD *)(a1 + 24) = 0x4000001AELL;
        break;
      default:
        return result;
    }
  }
  return result;
}

