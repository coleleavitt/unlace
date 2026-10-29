__int64 __fastcall sub_A5E110(__m128 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int32 v3; // eax
  char v4; // al
  unsigned __int8 v5; // cl
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __m128 v10; // xmm0
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r8
  char v15; // di
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r11
  _BOOL8 v18; // r10
  unsigned __int64 v19; // rbp
  _BOOL8 v20; // rbx
  __int16 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // cl
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  char v32; // dl
  __int16 v33; // dx
  unsigned __int64 v34; // rax
  __int64 v36; // rbx
  __int64 v37; // r10
  __int64 *v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // zf
  __int64 v43; // r10
  unsigned __int64 v44; // r9
  __int64 v45; // r11
  unsigned __int64 v46; // r9
  double v47[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  a1->m128_i16[0] = *(_WORD *)(a2 + 20) >> 2;
  a1->m128_i8[2] = (BYTE3(v2) >> 7) | a1->m128_i8[2] & 0xFE;
  v3 = 0;
  if ( (v2 & 0x80000000) != 0 )
    v3 = *(_DWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 22) + 48);
  a1[5].m128_i32[0] = v3;
  a1->m128_i8[2] = (2 * BYTE4(v2)) & 4 | (2 * (BYTE4(v2) & 1)) | a1->m128_i8[2] & 0xF9;
  v4 = *(_BYTE *)(a2 + 19);
  v5 = ((unsigned __int8)v4 >> 1) & 0xF;
  v6 = v5;
  if ( v5 == 2 )
  {
    v17 = (a2 + ((SBYTE3(v2) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = ((v2 >> 24) & 0x40) != 0;
    v19 = v17 + 8 * v18;
    if ( ((v2 >> 24) & 0x40) != 0 )
    {
      v20 = (*(_BYTE *)(v17 + 1) & 4) != 0;
      v9 = v19 + 8 * v20;
    }
    else
    {
      v9 = v17 + 8 * v18;
      v20 = 0;
    }
    v21 = *(_WORD *)v17;
    v7 = 0;
    v47[0] = 0.0;
    v8 = (__int64)(v19 + 8 * (v20 + (v21 & 0x3FF)) - v9) >> 3;
    goto LABEL_13;
  }
  if ( (unsigned int)v5 - 6 > 2 )
  {
    if ( v5 == 10 )
    {
      v43 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
      v44 = (a2 + v43 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((v2 >> 24) & 0x40) != 0 )
        v44 += 8 * (((*(_BYTE *)(v44 + 1) & 4) != 0) + 1LL);
      v47[0] = *(double *)v44;
      v45 = (v2 & 0x40000000) != 0;
      v46 = (a2 + v43 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v4 & 0x40) != 0 )
        v45 += (*(_BYTE *)(((a2 + ((v4 >> 5) & 4) + v43 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v9 = 0;
      v7 = *(_QWORD *)(v46 + 8 * v45 + 8);
      v8 = 0;
    }
    else if ( v5 == 9 )
    {
      v36 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
      v37 = (v2 & 0x40000000) != 0;
      if ( (v4 & 0x40) != 0 )
        v37 += (*(_BYTE *)(((a2 + v36 + ((v4 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v38 = (__int64 *)(((a2 + v36 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v37);
      v7 = 0;
      v9 = 0;
      v39 = *v38;
      v8 = 0;
      *(_QWORD *)&v47[0] = v39;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v47[0] = 0.0;
    }
    goto LABEL_13;
  }
  if ( ((v2 >> 24) & 0x40) != 0 )
  {
    if ( v5 != 2 )
      goto LABEL_10;
  }
  else if ( v5 != 2 )
  {
LABEL_10:
    if ( v5 > 1u && ((v5 + 13) & 0xFu) > 8 )
      return sub_A5E7C0();
  }
  v47[0] = 0.0;
  v8 = 0;
  v7 = 0;
  v9 = 0;
LABEL_13:
  v10 = _mm_loadh_ps(v47);
  a1[1].m128_i32[2] = v5;
  a1[2].m128_u64[0] = v9;
  a1[2].m128_u64[1] = v8;
  a1[3] = v10;
  a1[4].m128_u64[0] = v7;
  if ( (v2 & 0x1000000) != 0 )
  {
    v12 = *(unsigned __int16 *)(a2 + 22);
    v13 = 8 * v12 + 48;
    v14 = (v2 & 0x40000000) != 0;
    v15 = v4 & 0x40;
    if ( (v4 & 0x40) != 0 )
      v14 += (*(_BYTE *)(((a2 + v13 + ((v4 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v16 = ((a2 + v13 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v14;
    if ( v5 != 2 )
    {
      switch ( v5 )
      {
        case 0u:
        case 1u:
        case 3u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 0xBu:
          switch ( v5 )
          {
            case 6u:
            case 7u:
            case 8u:
              v16 += 8LL;
              goto LABEL_51;
            case 9u:
              goto LABEL_49;
            case 0xAu:
              goto LABEL_26;
            default:
LABEL_51:
              switch ( v5 )
              {
                case 0u:
                case 1u:
                case 3u:
                case 4u:
                case 5u:
                case 6u:
                case 7u:
                case 8u:
                case 0xBu:
                  goto LABEL_53;
                case 9u:
                  v15 = v4 & 0x40;
                  goto LABEL_49;
                case 0xAu:
                  v15 = v4 & 0x40;
                  goto LABEL_26;
                default:
                  return sub_A5E7C0();
              }
          }
        case 9u:
LABEL_49:
          v22 = v16 + 8;
          v23 = 8;
          goto LABEL_27;
        case 0xAu:
LABEL_26:
          v22 = v16 + 16;
          v23 = 16;
          goto LABEL_27;
        default:
          return sub_A5E7C0();
      }
    }
    v16 += 8LL * (*(_WORD *)((a2 + ((v4 >> 5) & 4) + v13 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_53:
    v22 = v16;
    v23 = 0;
    v15 = v4 & 0x40;
LABEL_27:
    v24 = v16 + v23 + v12;
    if ( (v2 & 0x20000000) != 0 )
      v22 = v24;
    v25 = *(_QWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 16) == 26
      || (v40 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v40 + 16) == 26)
      && (*(_QWORD *)&v47[0] = a2,
          v41 = sub_F63050(a2, a2, v2, v40, v6),
          a2 = *(_QWORD *)&v47[0],
          v42 = v41 == 0,
          v2 = *(_QWORD *)(*(_QWORD *)&v47[0] + 16LL),
          v4 = *(_BYTE *)(*(_QWORD *)&v47[0] + 19LL),
          !v42) )
    {
      v25 = *(_BYTE *)(a2 + 18) >> 5;
    }
    else
    {
      v25 = 0;
    }
    v15 = v4 & 0x40;
  }
  a1->m128_u64[1] = v25;
  v26 = v2 >> 24;
  a1[1].m128_i32[0] = (*(_BYTE *)(a2 + 18) >> 3) & 3;
  if ( (v26 & 0x20) != 0 )
  {
    v27 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
    v28 = v26;
    v29 = (v26 & 0x40) != 0;
    v30 = (a2 + v27 + ((v28 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
      v29 += (*(_BYTE *)(((a2 + v27 + ((v4 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v31 = v30 + 8 * v29;
    v32 = ((unsigned __int8)v4 >> 1) & 0xF;
    if ( v32 != 2 )
    {
      switch ( v32 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( v32 )
          {
            case 6:
            case 7:
            case 8:
              v31 += 8LL;
              goto LABEL_37;
            case 9:
              goto LABEL_47;
            case 10:
              goto LABEL_45;
            default:
LABEL_37:
              switch ( v32 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_39;
                case 9:
                  v15 = v4 & 0x40;
                  goto LABEL_47;
                case 10:
                  v15 = v4 & 0x40;
                  goto LABEL_45;
                default:
                  return sub_A5E7C0();
              }
          }
        case 9:
LABEL_47:
          v31 += 8LL;
          goto LABEL_40;
        case 10:
LABEL_45:
          v31 += 16LL;
          goto LABEL_40;
        default:
          return sub_A5E7C0();
      }
    }
    v31 += 8LL * (*(_WORD *)((a2 + ((v4 >> 5) & 4) + v27 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_39:
    v15 = v4 & 0x40;
  }
  else
  {
    v31 = 0;
  }
LABEL_40:
  a1[4].m128_u64[1] = v31;
  v33 = 0;
  if ( v15 )
  {
    v34 = (a2 + ((v4 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v34 + 1) & 4) != 0 )
      v33 = *(_WORD *)(v34 + 8) & 0x1FF;
  }
  a1->m128_i16[1] = (8 * v33) | a1->m128_i16[1] & 0xF007;
  sub_A5DD60(&a1[5].m128_u64[1], a2);
  return (__int64)a1;
}
