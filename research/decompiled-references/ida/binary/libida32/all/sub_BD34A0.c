__int64 __fastcall sub_BD34A0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  const __m128i *v18; // rdx
  __m128i *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  const __m128i *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  double v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  const __m128i *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  double v36[2]; // [rsp+0h] [rbp-58h] BYREF
  int v37; // [rsp+10h] [rbp-48h] BYREF
  __m128 v38; // [rsp+18h] [rbp-40h]

  v5 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_WORD *)a1 & 0x1FF;
      switch ( v9 )
      {
        case 0x14u:
LABEL_2:
          v8 = *(_QWORD *)(a1 + 24);
          goto LABEL_3;
        case 4u:
          if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
            return a1;
          v8 = *(_QWORD *)(a1 + 16);
          goto LABEL_3;
        case 0x39u:
          a4 = *(unsigned int *)(a1 + 16);
          if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
            return a1;
          v8 = *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + (((unsigned int)a4 >> 15) & 0x7FFF)) + 32);
          goto LABEL_3;
      }
      if ( v9 != 77 )
        break;
      if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
        return a1;
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        goto LABEL_2;
      v8 = *(_QWORD *)(a1 + 32);
LABEL_3:
      if ( a1 == v8 )
      {
        v9 = *(_WORD *)a1 & 0x1FF;
        goto LABEL_23;
      }
      a1 = v8;
    }
    if ( v9 == 18 )
      break;
LABEL_23:
    if ( v9 <= 0x4Eu )
    {
      if ( v9 != 46 )
        return a1;
      if ( (*(_QWORD *)a1 & 0x80000LL) != 0 )
        return a1;
      v20 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 49 > 2
        || (*(_BYTE *)(v20 + 68) & 1) != 0
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
        return a1;
      }
      v21 = *(unsigned int *)(a3 + 8);
      v22 = *(_QWORD *)a3;
      v38.m128_u64[0] = *(_QWORD *)(a1 + 24);
      a2 = *(unsigned int *)(a3 + 12);
      a1 = *(_QWORD *)(a1 + 16);
      v37 = 1;
      v23 = v21 + 1;
      a4 = v22 + 24 * v21;
      v24 = (const __m128i *)&v37;
      if ( v23 > a2 )
      {
        a2 = a3 + 16;
        if ( v22 > (unsigned __int64)&v37 || a4 <= (unsigned __int64)&v37 )
        {
          sub_22134E0(a3, a2, v23, 24);
          a4 = *(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8);
          v24 = (const __m128i *)&v37;
        }
        else
        {
          sub_22134E0(a3, a2, v23, 24);
          v24 = (const __m128i *)((char *)&v37 + *(_QWORD *)a3 - v22);
          a4 = *(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8);
        }
      }
      *(__m128i *)a4 = _mm_loadu_si128(v24);
      *(_QWORD *)(a4 + 16) = v24[1].m128i_i64[0];
      ++*(_DWORD *)(a3 + 8);
LABEL_37:
      if ( !a1 )
        BUG();
    }
    else
    {
      if ( v9 > 0x58u )
      {
        if ( ((v9 + 394) & 0x1FFu) > 1 )
          return a1;
        if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) != 0 )
        {
          if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) != 0x20 )
            return a1;
          v25 = *(unsigned int *)(v5 + 8);
          a4 = *(unsigned int *)(v5 + 12);
          v26 = *(_QWORD *)(a1 + 16);
          if ( v25 + 1 > a4 )
          {
            a2 = v5 + 16;
            sub_22134E0(v5, v5 + 16, v25 + 1, 8);
            v25 = *(unsigned int *)(v5 + 8);
          }
          *(_QWORD *)(*(_QWORD *)v5 + 8 * v25) = v26;
          ++*(_DWORD *)(v5 + 8);
          a1 = *(_QWORD *)(a1 + 24);
        }
        else
        {
          v27 = *(double *)(a1 + 24);
          v28 = *(_QWORD *)(a1 + 16);
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v27 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v29 + 16) != 33 )
          {
            v34 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v34 + 16) == 33 )
            {
              v29 = sub_F3F310(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v27 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                      a2,
                      *(_QWORD *)&v27,
                      v34);
              v27 = *(double *)(a1 + 24);
            }
            else
            {
              v29 = 0;
            }
          }
          v30 = *(_QWORD *)a3;
          a2 = *(unsigned int *)(a3 + 12);
          *(_QWORD *)&v36[0] = v29;
          v31 = *(unsigned int *)(a3 + 8);
          v36[0] = v27;
          v37 = 2;
          v32 = v31 + 1;
          a4 = v30 + 24 * v31;
          v33 = (const __m128i *)&v37;
          v38 = _mm_loadh_ps(v36);
          if ( v32 > a2 )
          {
            a2 = a3 + 16;
            if ( v30 > (unsigned __int64)&v37 || a4 <= (unsigned __int64)&v37 )
            {
              sub_22134E0(a3, a2, v32, 24);
              a4 = *(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8);
              v33 = (const __m128i *)&v37;
            }
            else
            {
              sub_22134E0(a3, a2, v32, 24);
              v33 = (const __m128i *)((char *)&v37 + *(_QWORD *)a3 - v30);
              a4 = *(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8);
            }
          }
          a1 = v28;
          *(__m128i *)a4 = _mm_loadu_si128(v33);
          *(_QWORD *)(a4 + 16) = v33[1].m128i_i64[0];
          ++*(_DWORD *)(a3 + 8);
        }
        goto LABEL_37;
      }
      v11 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
      v12 = (unsigned int)(v11 - 7);
      if ( (unsigned int)v12 > 1 )
      {
        if ( v11 != 5 )
          return a1;
        a1 = *(_QWORD *)(a1 + 16);
        goto LABEL_37;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
        return a1;
      v13 = *(_QWORD *)(a1 + 16);
      v14 = sub_F3D1D0(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              v12,
              a4,
              a5);
      *(_QWORD *)&v36[1] = a1;
      v15 = *(unsigned int *)(a3 + 12);
      *(_QWORD *)&v36[0] = v14;
      v16 = *(unsigned int *)(a3 + 8);
      v37 = 0;
      v17 = v16 + 1;
      v38 = _mm_loadh_ps(v36);
      if ( v16 + 1 > v15 )
      {
        v35 = *(_QWORD *)a3;
        a2 = a3 + 16;
        if ( *(_QWORD *)a3 <= (unsigned __int64)&v37 && (unsigned __int64)&v37 < v35 + 24 * v16 )
        {
          sub_22134E0(a3, a2, v17, 24);
          a4 = *(_QWORD *)a3;
          v16 = *(unsigned int *)(a3 + 8);
          v18 = (const __m128i *)((char *)&v37 + *(_QWORD *)a3 - v35);
        }
        else
        {
          sub_22134E0(a3, a2, v17, 24);
          a4 = *(_QWORD *)a3;
          v16 = *(unsigned int *)(a3 + 8);
          v18 = (const __m128i *)&v37;
        }
      }
      else
      {
        a4 = *(_QWORD *)a3;
        v18 = (const __m128i *)&v37;
      }
      a1 = v13;
      v19 = (__m128i *)(a4 + 24 * v16);
      *v19 = _mm_loadu_si128(v18);
      v19[1].m128i_i64[0] = v18[1].m128i_i64[0];
      ++*(_DWORD *)(a3 + 8);
    }
  }
  if ( (*(_QWORD *)a1 & 0x1000000) != 0 && (BYTE2(*(_QWORD *)a1) & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
      goto LABEL_3;
  }
  return a1;
}

