__int64 *__fastcall sub_A14AA0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // si
  char v19; // al
  char *v20; // r13
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r12
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // si
  char v34; // al
  unsigned __int64 i; // r12
  char *v36; // r13
  char *j; // r12
  unsigned __int64 k; // r12
  unsigned __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // rdx
  char v43; // dl
  char v44; // al
  char v45; // al
  char v46; // al
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // r12
  unsigned __int64 v53; // [rsp+0h] [rbp-48h]
  __int64 v54; // [rsp+0h] [rbp-48h]
  unsigned int v55; // [rsp+Ch] [rbp-3Ch]

  if ( a1 == a2 )
    return a1;
  v2 = *a2;
  v4 = *a1;
  v5 = *((unsigned int *)a1 + 2);
  if ( a2 + 2 == (__int64 *)*a2 )
  {
    v55 = *((_DWORD *)a2 + 2);
    v6 = v55;
    if ( v55 <= v5 )
    {
      v22 = *a1;
      if ( v55 )
      {
        v23 = *a1;
        v54 = 176LL * v55;
        v24 = v2 + v54;
        do
        {
          *(__m128i *)v23 = _mm_loadu_si128((const __m128i *)v2);
          sub_A0AAD0(v23 + 16, (_QWORD *)(v2 + 16));
          v25 = *(_BYTE *)(v2 + 48) & 1 | *(_BYTE *)(v23 + 48) & 0xFE;
          *(_BYTE *)(v23 + 48) = v25;
          v26 = *(_BYTE *)(v2 + 48) & 2 | v25 & 0xFD;
          *(_BYTE *)(v23 + 48) = v26;
          v27 = *(_BYTE *)(v2 + 48) & 4 | v26 & 0xFB;
          *(_BYTE *)(v23 + 48) = v27;
          *(_BYTE *)(v23 + 48) = *(_BYTE *)(v2 + 48) & 8 | v27 & 0xF7;
          sub_A0AAD0(v23 + 56, (_QWORD *)(v2 + 56));
          sub_A0AB90((__m128i *)(v23 + 88), (__m128i *)(v2 + 88));
          sub_A0AB90((__m128i *)(v23 + 128), (__m128i *)(v2 + 128));
          v28 = *(_BYTE *)(v2 + 168) & 1 | *(_BYTE *)(v23 + 168) & 0xFE;
          *(_BYTE *)(v23 + 168) = v28;
          v29 = *(_BYTE *)(v2 + 168) & 6 | v28 & 0xF9;
          *(_BYTE *)(v23 + 168) = v29;
          v30 = *(_BYTE *)(v2 + 168) & 8 | v29 & 0xF7;
          *(_BYTE *)(v23 + 168) = v30;
          v31 = *(_BYTE *)(v2 + 168) & 0x10 | v30 & 0xEF;
          *(_BYTE *)(v23 + 168) = v31;
          v32 = *(_BYTE *)(v2 + 168) & 0x20 | v31 & 0xDF;
          *(_BYTE *)(v23 + 168) = v32;
          v33 = *(_BYTE *)(v2 + 168) & 0x40;
          v2 += 176;
          v23 += 176;
          v34 = v33 | v32 & 0xBF;
          *(_BYTE *)(v23 - 8) = v34;
          *(_BYTE *)(v23 - 8) = *(_BYTE *)(v2 - 8) & 0x80 | v34 & 0x7F;
        }
        while ( v2 != v24 );
        v22 = *a1;
        v5 = *((unsigned int *)a1 + 2);
        v4 += v54;
      }
      for ( i = v22 + 176 * v5; v4 != i; sub_A09C70(i + 16) )
        i -= 176LL;
      v36 = (char *)*a2;
      *((_DWORD *)a1 + 2) = v55;
      for ( j = &v36[176 * *((unsigned int *)a2 + 2)]; v36 != j; sub_A09C70((__int64)(j + 16)) )
        j -= 176;
    }
    else
    {
      if ( v55 > (unsigned __int64)*((unsigned int *)a1 + 3) )
      {
        for ( k = v4 + 176 * v5; k != v4; sub_A09C70(k + 16) )
          k -= 176LL;
        *((_DWORD *)a1 + 2) = 0;
        sub_A14160(a1, v55);
        v2 = *a2;
        v6 = *((unsigned int *)a2 + 2);
        v5 = 0;
        v4 = *a1;
        v7 = *a2;
      }
      else
      {
        v7 = *a2;
        if ( *((_DWORD *)a1 + 2) )
        {
          v8 = 176 * v5;
          v5 = v8;
          v9 = v4 + v8;
          do
          {
            v53 = v5;
            *(__m128i *)v4 = _mm_loadu_si128((const __m128i *)v2);
            sub_A0AAD0(v4 + 16, (_QWORD *)(v2 + 16));
            v10 = *(_BYTE *)(v2 + 48) & 1 | *(_BYTE *)(v4 + 48) & 0xFE;
            *(_BYTE *)(v4 + 48) = v10;
            v11 = *(_BYTE *)(v2 + 48) & 2 | v10 & 0xFD;
            *(_BYTE *)(v4 + 48) = v11;
            v12 = *(_BYTE *)(v2 + 48) & 4 | v11 & 0xFB;
            *(_BYTE *)(v4 + 48) = v12;
            *(_BYTE *)(v4 + 48) = *(_BYTE *)(v2 + 48) & 8 | v12 & 0xF7;
            sub_A0AAD0(v4 + 56, (_QWORD *)(v2 + 56));
            sub_A0AB90((__m128i *)(v4 + 88), (__m128i *)(v2 + 88));
            sub_A0AB90((__m128i *)(v4 + 128), (__m128i *)(v2 + 128));
            v5 = v53;
            v13 = *(_BYTE *)(v2 + 168) & 1 | *(_BYTE *)(v4 + 168) & 0xFE;
            *(_BYTE *)(v4 + 168) = v13;
            v14 = *(_BYTE *)(v2 + 168) & 6 | v13 & 0xF9;
            *(_BYTE *)(v4 + 168) = v14;
            v15 = *(_BYTE *)(v2 + 168) & 8 | v14 & 0xF7;
            *(_BYTE *)(v4 + 168) = v15;
            v16 = *(_BYTE *)(v2 + 168) & 0x10 | v15 & 0xEF;
            *(_BYTE *)(v4 + 168) = v16;
            v17 = *(_BYTE *)(v2 + 168) & 0x20 | v16 & 0xDF;
            *(_BYTE *)(v4 + 168) = v17;
            v18 = *(_BYTE *)(v2 + 168) & 0x40;
            v4 += 176;
            v2 += 176;
            v19 = v18 | v17 & 0xBF;
            *(_BYTE *)(v4 - 8) = v19;
            *(_BYTE *)(v4 - 8) = *(_BYTE *)(v2 - 8) & 0x80 | v19 & 0x7F;
          }
          while ( v4 != v9 );
          v2 = *a2;
          v6 = *((unsigned int *)a2 + 2);
          v4 = *a1;
          v7 = *a2 + v8;
        }
      }
      v39 = v5 + v4;
      v40 = v2 + 176 * v6;
      if ( v7 != v40 )
      {
        v41 = v7;
        do
        {
          *(__m128i *)v39 = _mm_loadu_si128((const __m128i *)v41);
          sub_A09F20(v39 + 16, v41 + 16);
          *(_BYTE *)(v39 + 120) = 0;
          if ( *(_BYTE *)(v41 + 120) )
          {
            *(_QWORD *)(v39 + 88) = v39 + 104;
            v51 = *(_QWORD *)(v41 + 88);
            if ( v51 == v41 + 104 )
            {
              *(__m128i *)(v39 + 104) = _mm_loadu_si128((const __m128i *)(v41 + 104));
            }
            else
            {
              *(_QWORD *)(v39 + 88) = v51;
              *(_QWORD *)(v39 + 104) = *(_QWORD *)(v41 + 104);
            }
            *(_QWORD *)(v39 + 96) = *(_QWORD *)(v41 + 96);
            *(_QWORD *)(v41 + 88) = v41 + 104;
            *(_QWORD *)(v41 + 96) = 0;
            *(_BYTE *)(v41 + 104) = 0;
            *(_BYTE *)(v39 + 120) = 1;
          }
          *(_BYTE *)(v39 + 160) = 0;
          if ( *(_BYTE *)(v41 + 160) )
          {
            *(_QWORD *)(v39 + 128) = v39 + 144;
            v42 = *(_QWORD *)(v41 + 128);
            if ( v42 == v41 + 144 )
            {
              *(__m128i *)(v39 + 144) = _mm_loadu_si128((const __m128i *)(v41 + 144));
            }
            else
            {
              *(_QWORD *)(v39 + 128) = v42;
              *(_QWORD *)(v39 + 144) = *(_QWORD *)(v41 + 144);
            }
            *(_QWORD *)(v39 + 136) = *(_QWORD *)(v41 + 136);
            *(_QWORD *)(v41 + 128) = v41 + 144;
            *(_QWORD *)(v41 + 136) = 0;
            *(_BYTE *)(v41 + 144) = 0;
            *(_BYTE *)(v39 + 160) = 1;
          }
          v43 = *(_BYTE *)(v41 + 168);
          v44 = *(_BYTE *)(v39 + 168);
          v41 += 176;
          v39 += 176LL;
          v45 = v43 & 1 | v44 & 0xFE;
          *(_BYTE *)(v39 - 8) = v45;
          v46 = *(_BYTE *)(v41 - 8) & 6 | v45 & 0xF9;
          *(_BYTE *)(v39 - 8) = v46;
          v47 = *(_BYTE *)(v41 - 8) & 8 | v46 & 0xF7;
          *(_BYTE *)(v39 - 8) = v47;
          v48 = *(_BYTE *)(v41 - 8) & 0x10 | v47 & 0xEF;
          *(_BYTE *)(v39 - 8) = v48;
          v49 = *(_BYTE *)(v41 - 8) & 0x20 | v48 & 0xDF;
          *(_BYTE *)(v39 - 8) = v49;
          v50 = *(_BYTE *)(v41 - 8) & 0x40 | v49 & 0xBF;
          *(_BYTE *)(v39 - 8) = v50;
          *(_BYTE *)(v39 - 8) = *(_BYTE *)(v41 - 8) & 0x80 | v50 & 0x7F;
        }
        while ( v40 != v41 );
        v2 = *a2;
      }
      *((_DWORD *)a1 + 2) = v55;
      v52 = v2 + 176LL * *((unsigned int *)a2 + 2);
      if ( v52 != v2 )
      {
        do
        {
          v52 -= 176;
          sub_A09C70(v52 + 16);
        }
        while ( v52 != v2 );
        *((_DWORD *)a2 + 2) = 0;
        return a1;
      }
    }
    *((_DWORD *)a2 + 2) = 0;
    return a1;
  }
  v20 = (char *)(v4 + 176 * v5);
  if ( (char *)v4 != v20 )
  {
    do
    {
      v20 -= 176;
      sub_A09C70((__int64)(v20 + 16));
    }
    while ( (char *)v4 != v20 );
    v20 = (char *)*a1;
  }
  if ( v20 != (char *)(a1 + 2) )
    free(v20);
  *a1 = *a2;
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
  *a2 = (__int64)(a2 + 2);
  a2[1] = 0;
  return a1;
}
