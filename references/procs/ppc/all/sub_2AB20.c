__int64 __fastcall sub_2AB20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // r11
  unsigned __int8 *v4; // rdx
  char v5; // di
  int v6; // r10d
  __int64 v7; // r9
  int v8; // ecx
  unsigned __int8 v9; // si
  int v10; // ebx
  __int16 v11; // di
  int v12; // edi
  int v13; // ebx
  __int16 v14; // di
  int v15; // ebx
  __m128i v16; // xmm0
  int v17; // ebx
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  int v20; // edi
  int v21; // edi
  int v22; // ebx
  int v23; // edi
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  unsigned __int16 v27; // dx
  __m128i v28; // xmm1

  result = a2;
  v3 = 0;
  v4 = (unsigned __int8 *)&unk_6AA60;
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_WORD *)(a2 + 86) & 3;
  v7 = *(_QWORD *)(a2 + 48) & 1LL;
  while ( 1 )
  {
    v8 = (unsigned __int8)(v5 & v4[1]);
    if ( *v4 == v8 )
      break;
    v4 += 6;
    if ( v4 == (unsigned __int8 *)&unk_6AAC6 )
      return result;
  }
LABEL_3:
  v9 = v4[2];
  if ( v9 == 0xFF || v9 == v6 )
  {
    v10 = (unsigned __int8)(v5 & v4[3]);
    v11 = *(_WORD *)(result + 24);
    switch ( v11 )
    {
      case 15:
        if ( (v8 & 0xFFFFFFF7) != 4 && v8 != 20 || *(_QWORD *)(result + 128) )
          return result;
        v20 = *(_DWORD *)(result + 28);
        *(_BYTE *)(result + 124) &= ~8u;
        *(_BYTE *)(result + 121) = 8;
        *(_QWORD *)(result + 128) = 9;
        *(_DWORD *)(result + 28) = v20 | 0x200;
        if ( !v10 )
          goto LABEL_28;
        v22 = v20;
        v21 = v20 | 0x1200;
        BYTE1(v22) |= 0xAu;
        if ( (_DWORD)v7 )
          v21 = v22;
        break;
      case 16:
        if ( *(_QWORD *)(result + 128) )
          return result;
        v23 = *(_DWORD *)(result + 28);
        *(_BYTE *)(result + 124) &= ~8u;
        *(_BYTE *)(result + 121) = 8;
        *(_QWORD *)(result + 128) = 8;
        *(_DWORD *)(result + 28) = v23 | 0x100;
        if ( !v10 )
          goto LABEL_28;
        v26 = v23;
        v21 = v23 | 0x1100;
        BYTE1(v26) |= 9u;
        if ( (_DWORD)v7 )
          v21 = v26;
        break;
      case 2082:
        if ( !*(_QWORD *)(result + 128) )
        {
          v24 = *(_DWORD *)(result + 28);
          *(_BYTE *)(result + 124) &= ~8u;
          *(_QWORD *)(result + 48) &= ~1uLL;
          v25 = v24;
          BYTE1(v24) |= 8u;
          BYTE1(v25) |= 0x10u;
          if ( !(_DWORD)v7 )
            v24 = v25;
          *(_DWORD *)(result + 28) = v24;
        }
        return result;
      default:
        v3 = *(_QWORD *)(result + 136) < *(_QWORD *)(result + 16);
        if ( v10 )
        {
          v13 = *(_DWORD *)(result + 28);
          v12 = v13 | 0x1000;
          BYTE1(v13) |= 8u;
          if ( (_DWORD)v7 )
            v12 = v13;
          *(_DWORD *)(result + 28) = v12;
          goto LABEL_12;
        }
LABEL_28:
        if ( (_DWORD)v7 )
          *(_DWORD *)(result + 28) |= !v3 ? 2048 : 4096;
        goto LABEL_12;
    }
    *(_DWORD *)(result + 28) = v21;
LABEL_12:
    v14 = *((_WORD *)v4 + 2);
    v15 = *(_DWORD *)(result + 112);
    *(__m128i *)(result + 40) = _mm_loadu_si128((const __m128i *)(result + 80));
    v16 = _mm_loadu_si128((const __m128i *)(result + 96));
    *(_DWORD *)(result + 72) = v15;
    v17 = *(_DWORD *)(result + 152);
    *(__m128i *)(result + 56) = v16;
    v18 = _mm_loadu_si128((const __m128i *)(result + 120));
    *(_WORD *)(result + 24) = v14;
    *(__m128i *)(result + 80) = v18;
    v19 = _mm_loadu_si128((const __m128i *)(result + 136));
    *(_BYTE *)(result + 40) = 0;
    *(_DWORD *)(result + 112) = v17;
    *(_BYTE *)(result + 80) = 1;
    *(_BYTE *)(result + 121) = 0;
    *(__m128i *)(result + 96) = v19;
    if ( v9 == 0xFF )
    {
      v5 = v8;
      goto LABEL_14;
    }
    if ( v14 == 320 )
    {
      v28 = _mm_loadu_si128((const __m128i *)(result + 80));
      *(_DWORD *)(result + 72) = v17;
      *(_BYTE *)(result + 81) = 0;
      *(__m128i *)(result + 40) = v28;
      *(__m128i *)(result + 56) = v19;
      *(_BYTE *)(result + 40) = 0;
    }
    else
    {
      *(_BYTE *)(result + 41) = 11;
      if ( (v8 & 0xFFFFFFF7) != 4 || (v27 = *(_WORD *)(result + 46), *(_WORD *)(result + 46) = v27 >> 2, v27 <= 3u) )
        *(_BYTE *)(result + 44) &= ~8u;
    }
    return result;
  }
LABEL_14:
  while ( 1 )
  {
    v4 += 6;
    if ( v4 == (unsigned __int8 *)&unk_6AAC6 )
      return result;
    v8 = (unsigned __int8)(v5 & v4[1]);
    if ( *v4 == v8 )
      goto LABEL_3;
  }
}
