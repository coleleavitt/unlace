__int64 __fastcall sub_65660(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r8d
  int v8; // r11d
  int v9; // r10d
  unsigned int v10; // ecx
  int v11; // r9d
  int v12; // r13d
  char v13; // r8
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // edx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  int v28; // eax
  int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // r14d
  __int64 v32; // rdx
  int v33; // esi
  __int64 v34; // rsi
  char v35; // r9
  int v36; // ebp
  int v37; // edx
  __int16 v38; // cx
  __int64 v39; // rdx
  __int16 v40; // ax
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // edx
  __m128i v45; // xmm0
  __int64 v46; // rax
  int v47; // ecx
  int v48; // eax
  __int64 v49; // rdx
  char v50; // al
  __int64 v51; // rsi
  __int64 v52; // rdx
  int v53; // eax
  int v54; // ecx
  __int64 v55; // rdx
  int v56; // ecx
  __int16 v57; // ax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // esi
  __int64 v62; // rcx
  __int64 v63; // rdx
  int v64; // esi
  __int16 v65; // ax
  _BOOL4 v66; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 192LL);
  v6 = v4 >> 20;
  v7 = v4 >> 8;
  v8 = (v4 & 0x100000) != 0;
  v9 = BYTE1(v4) & 3;
  if ( (v4 & 0x1E00000) == 0x400000 )
  {
    if ( v5 <= 13 )
      goto LABEL_12;
  }
  else if ( v5 <= 13 || (v4 & 0x1E00000) != 0 )
  {
    v10 = v4 >> 21;
    v11 = HIBYTE(v4) & 1;
    v12 = (v4 & 0x800000) != 0;
    v13 = (v4 >> 21) & (v12 == v11);
    if ( v13 )
    {
      if ( (a2 & !(v4 & 0x1000000)) != 0 && v9 == 2 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 879 - v8;
        v14 = *(_QWORD *)(a1 + 8);
        v15 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(v14 + 41) = 1;
        *(_WORD *)(v14 + 46) = v15;
        *(_BYTE *)(v14 + 45) = 2;
        if ( *(_DWORD *)(*(_QWORD *)a1 + 192LL) == 21 )
        {
          v16 = *(_QWORD *)(a1 + 8);
          v17 = *(_DWORD *)(a1 + 52) & 0x80;
          *(_BYTE *)(v16 + 81) = 12;
          *(_WORD *)(v16 + 86) = 61;
          *(_WORD *)(v16 + 113) = 0;
          *(_QWORD *)(v16 + 88) = (-(__int64)(v17 == 0) & 0xFFFFFFFFFFFFFFF0LL) + 32;
        }
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return 0;
    }
    v31 = (unsigned __int8)v4;
    v66 = (v4 & 0x200000) != 0;
    if ( (v11 & ~v10) != 0 )
    {
      v18 = 0;
      if ( (v4 & 0x300) == 0 )
        return v18;
      v46 = *(_QWORD *)(a1 + 8);
      if ( v8 )
        *(_WORD *)(v46 + 24) = 344;
      else
        *(_WORD *)(v46 + 24) = 417;
      v47 = *(_DWORD *)(a1 + 32);
      v48 = *(_DWORD *)(a1 + 20);
      v49 = *(_QWORD *)(a1 + 8);
      if ( v9 == 3 )
      {
        *(_BYTE *)(v49 + 41) = 1;
        *(_WORD *)(v49 + 46) = (v48 | (16 * v47)) + 61;
        v50 = 4;
      }
      else
      {
        *(_BYTE *)(v49 + 41) = 1;
        *(_WORD *)(v49 + 46) = (v47 | (2 * v48)) + 93;
        if ( v9 == 1 )
        {
          *(_BYTE *)(v49 + 45) = 18;
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 4;
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 86LL) = *(_DWORD *)(a1 + 16);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) = 2 * v31;
          if ( !v12 )
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) |= 0x10u;
          sub_1E470(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8) + 80LL, 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -126;
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        v50 = 3;
      }
      *(_BYTE *)(v49 + 45) = v50;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 4;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL);
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 86LL) = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) = 4 * v31;
      if ( !v12 )
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) |= 0x10u;
      sub_1E470(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8) + 80LL, 1);
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    if ( v5 == 21 && a2 && (v4 & 0xFFBF0E00) == 0xEC9F0A00 )
    {
      v55 = *(_QWORD *)(a1 + 8);
      if ( v9 != 3 )
      {
        v56 = 93;
        v57 = *(_WORD *)(a1 + 32) | (2 * *(_WORD *)(a1 + 20));
        *(_BYTE *)(v55 + 41) = 1;
        *(_BYTE *)(v55 + 45) = 3;
        *(_WORD *)(v55 + 46) = v57 + 93;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41LL) = 12;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = v31;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 72LL) = 1;
        v58 = *(_QWORD *)(a1 + 8);
        v59 = *(unsigned __int16 *)(v58 + 46);
        goto LABEL_77;
      }
      if ( (v4 & 1) == 0 )
      {
        v56 = 61;
        v65 = *(_WORD *)(a1 + 20) | (16 * *(_WORD *)(a1 + 32));
        *(_BYTE *)(v55 + 41) = 1;
        *(_BYTE *)(v55 + 45) = 4;
        *(_WORD *)(v55 + 46) = v65 + 61;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41LL) = 12;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = v31 >> 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 72LL) = 1;
        v58 = *(_QWORD *)(a1 + 8);
        v59 = *(unsigned __int16 *)(v58 + 46);
LABEL_77:
        if ( (unsigned __int64)(*(_QWORD *)(v58 + 48) + v59 - v56) <= 0x20 )
        {
          *(_WORD *)(v58 + 24) = 1063;
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        return (unsigned int)-1;
      }
      if ( (v4 & 0x100000) != 0 )
      {
        *(_WORD *)(v55 + 24) = 343;
        v63 = *(_QWORD *)(a1 + 8);
        v64 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(v63 + 41) = 1;
        *(_WORD *)(v63 + 46) = v64;
        *(_BYTE *)(v63 + 45) = 2;
        v36 = *(_DWORD *)(a1 + 32);
        v37 = *(_DWORD *)(a1 + 20);
        v34 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        *(_WORD *)(v55 + 24) = 416;
        v60 = *(_QWORD *)(a1 + 8);
        v61 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(v60 + 41) = 1;
        *(_WORD *)(v60 + 46) = v61;
        *(_BYTE *)(v60 + 45) = 2;
        v34 = *(_QWORD *)(a1 + 8);
        v36 = *(_DWORD *)(a1 + 32);
        v37 = *(_DWORD *)(a1 + 20);
      }
      goto LABEL_81;
    }
    v18 = 0;
    if ( !(((v4 & 0x200000) != 0) | HIBYTE(v4) & 1 | ((v4 & 0x800000) != 0)) )
      return v18;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (v4 & 0x100000) == 0 ? 416 : 343;
    v32 = *(_QWORD *)(a1 + 8);
    v33 = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(v32 + 41) = 1;
    *(_WORD *)(v32 + 46) = v33;
    *(_BYTE *)(v32 + 45) = 2;
    v34 = *(_QWORD *)(a1 + 8);
    v35 = v10 & (HIBYTE(v4) ^ v6) & 1;
    if ( (v4 & 0x300) != 0 )
    {
      v36 = *(_DWORD *)(a1 + 32);
      v37 = *(_DWORD *)(a1 + 20);
      if ( v9 == 3 )
      {
LABEL_81:
        *(_BYTE *)(v34 + 81) = 1;
        *(_BYTE *)(v34 + 85) = 4;
        *(_WORD *)(v34 + 86) = (v37 | (16 * v36)) + 61;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 12;
        if ( ((unsigned __int8)v10 & (unsigned __int8)(v6 ^ HIBYTE(v4)) & 1) != 0 )
        {
          if ( v12 == v8 )
            v13 = *(_DWORD *)(a1 + 16) == 13;
        }
        else
        {
          v13 = 0;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) = (unsigned __int8)v4 >> 1;
        v39 = *(_QWORD *)(a1 + 8);
        if ( (v4 & 1) != 0 )
        {
          *(_WORD *)(v39 + 24) = (v4 & 0x100000) == 0 ? 141 : 117;
          v39 = *(_QWORD *)(a1 + 8);
          v62 = *(_QWORD *)(v39 + 88);
          if ( !v62 || v62 + (unsigned __int64)(unsigned __int16)(*(_WORD *)(v39 + 86) - 61) > 0x20 )
            return (unsigned int)-1;
LABEL_63:
          if ( !v66 || (*(_DWORD *)(v39 + 28) |= 0x40u, v39 = *(_QWORD *)(a1 + 8), *(_WORD *)(v39 + 46) != 15) )
          {
            v54 = *(_DWORD *)(v39 + 28);
            v53 = v54 | 0x10;
            LOBYTE(v54) = v54 | 0x80;
            if ( v12 )
              v53 = v54;
            *(_DWORD *)(v39 + 28) = v53;
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return (unsigned int)-1;
        }
        v40 = *(_WORD *)(v39 + 86);
        v38 = 61;
        goto LABEL_38;
      }
      *(_BYTE *)(v34 + 81) = 1;
      *(_BYTE *)(v34 + 85) = 3;
      *(_WORD *)(v34 + 86) = (v36 | (2 * v37)) + 93;
      if ( v9 == 1 )
      {
        *(_BYTE *)(v34 + 85) = 18;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 12;
        if ( v35 )
          goto LABEL_35;
LABEL_37:
        v38 = 93;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) = (unsigned __int8)v4;
        v39 = *(_QWORD *)(a1 + 8);
        v40 = *(_WORD *)(v39 + 86);
LABEL_38:
        v41 = v40 - v38;
        v42 = *(_QWORD *)(v39 + 88);
        if ( !v42 || v42 + (unsigned __int64)v41 > 0x20 )
          return (unsigned int)-1;
        if ( !v13 )
          goto LABEL_63;
        *(_WORD *)(v39 + 24) = 371 - v8;
        v43 = *(_QWORD *)(a1 + 8);
        v44 = *(_DWORD *)(v43 + 112);
        *(__m128i *)(v43 + 40) = _mm_loadu_si128((const __m128i *)(v43 + 80));
        v45 = _mm_loadu_si128((const __m128i *)(v43 + 96));
        *(_DWORD *)(v43 + 72) = v44;
        *(__m128i *)(v43 + 56) = v45;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 0;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 12;
      if ( !v35 )
        goto LABEL_37;
    }
    else
    {
      *(_BYTE *)(v34 + 81) = 12;
      if ( !v35 )
        goto LABEL_37;
    }
LABEL_35:
    if ( v12 == v8 )
      v13 = *(_DWORD *)(a1 + 16) == 13;
    goto LABEL_37;
  }
  v18 = *(_DWORD *)(a1 + 32);
  if ( v18 )
  {
    v18 = 0;
    if ( (v4 & 0xD0) == 0x10 && (v4 & 0x200) != 0 )
    {
LABEL_12:
      v20 = *(_DWORD *)(a1 + 20);
      v18 = 0;
      if ( v8 )
      {
        if ( v20 == 15 )
          return v18;
        v21 = *(_DWORD *)(a1 + 16);
        if ( v21 == v20 || v21 == 15 )
          return 0;
        if ( v9 != 2 )
        {
          v24 = 1;
          v22 = 2;
          v23 = 0;
          goto LABEL_20;
        }
        v22 = 2;
        v23 = 0;
      }
      else
      {
        if ( v9 != 2 )
        {
          if ( v20 == 15 || *(_DWORD *)(a1 + 16) == 15 )
            return v18;
          v24 = 2;
          v22 = 0;
          v23 = 1;
LABEL_20:
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 351;
          v25 = *(_QWORD *)(a1 + 8) + 40 * v23;
          *(_WORD *)(v25 + 46) = *(_DWORD *)(a1 + 20);
          *(_BYTE *)(v25 + 41) = 1;
          *(_BYTE *)(v25 + 45) = 2;
          v26 = *(_QWORD *)(a1 + 8) + 40LL * v24;
          *(_WORD *)(v26 + 46) = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(v26 + 41) = 1;
          *(_BYTE *)(v26 + 45) = 2;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = *(_DWORD *)(a1 + 24);
          v29 = *(_DWORD *)(a1 + 44);
          if ( (v7 & 1) != 0 )
          {
            v30 = v27 + 40 * v22;
            *(_BYTE *)(v30 + 41) = 1;
            *(_WORD *)(v30 + 46) = (v28 | (16 * v29)) + 61;
            *(_BYTE *)(v30 + 45) = 4;
          }
          else
          {
            v51 = v27 + 40LL * (int)v22;
            *(_BYTE *)(v51 + 41) = 1;
            *(_WORD *)(v51 + 46) = (v29 | (2 * v28)) + 93;
            *(_BYTE *)(v51 + 45) = 3;
            if ( v9 == 2 )
            {
              v52 = *(_QWORD *)(a1 + 8) + 40LL * ((int)v22 + 1);
              *(_WORD *)(v52 + 46) = ((1 - *(_WORD *)(a1 + 44))
                                    | (2 * (*(_WORD *)(a1 + 24) - ((*(_DWORD *)(a1 + 44) == 0) - 1))))
                                   + 93;
              *(_BYTE *)(v52 + 41) = 1;
              *(_BYTE *)(v52 + 45) = 3;
            }
          }
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        if ( v20 == 15 || *(_DWORD *)(a1 + 16) == 15 )
          return v18;
        v22 = 0;
        v23 = 2;
      }
      if ( *(_DWORD *)(a1 + 24) == 15 )
      {
        v18 = 0;
        if ( *(_DWORD *)(a1 + 44) == 1 )
          return v18;
      }
      v24 = v23 + 1;
      goto LABEL_20;
    }
  }
  return v18;
}
