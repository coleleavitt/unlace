void __fastcall sub_9F7080(__int64 *a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rax
  char *v6; // r13
  _BYTE *v7; // rcx
  _BYTE *v8; // r9
  __int64 v9; // rdx
  _BYTE *v10; // r8
  _BYTE *v11; // rdi
  char v12; // si
  char v13; // si
  char v14; // si
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi
  _BYTE *v17; // rsi
  __int64 v18; // rsi
  __m128i v19; // xmm0
  _BYTE *v20; // rsi
  char *v21; // r14
  int v22; // r14d
  __int64 v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (char *)(a1 + 2);
  v4 = sub_22136C0(a1, a1 + 2, a2, 176, v23);
  v5 = (char *)*a1;
  v6 = (char *)(*a1 + 176LL * *((unsigned int *)a1 + 2));
  if ( (char *)*a1 != v6 )
  {
    v7 = v5 + 32;
    v8 = v5 + 144;
    v9 = v4;
    v10 = v5 + 72;
    v11 = v5 + 104;
    do
    {
      v19 = _mm_loadu_si128((const __m128i *)v7 - 2);
      *(_QWORD *)(v9 + 16) = v9 + 32;
      *(__m128i *)v9 = v19;
      v20 = *((_BYTE **)v7 - 2);
      if ( v20 == v7 )
      {
        *(__m128i *)(v9 + 32) = _mm_loadu_si128((const __m128i *)v7);
      }
      else
      {
        *(_QWORD *)(v9 + 16) = v20;
        *(_QWORD *)(v9 + 32) = *(_QWORD *)v7;
      }
      *(_QWORD *)(v9 + 24) = *((_QWORD *)v7 - 1);
      *((_QWORD *)v7 - 2) = v7;
      *((_QWORD *)v7 - 1) = 0;
      *v7 = 0;
      v12 = v5[48] & 1 | *(_BYTE *)(v9 + 48) & 0xFE;
      *(_BYTE *)(v9 + 48) = v12;
      v13 = v5[48] & 2 | v12 & 0xFD;
      *(_BYTE *)(v9 + 48) = v13;
      v14 = v5[48] & 4 | v13 & 0xFB;
      *(_BYTE *)(v9 + 48) = v14;
      *(_BYTE *)(v9 + 48) = v5[48] & 8 | v14 & 0xF7;
      *(_QWORD *)(v9 + 56) = v9 + 72;
      v15 = *((_BYTE **)v7 + 3);
      if ( v15 == v10 )
      {
        *(__m128i *)(v9 + 72) = _mm_loadu_si128((const __m128i *)(v7 + 40));
      }
      else
      {
        *(_QWORD *)(v9 + 56) = v15;
        *(_QWORD *)(v9 + 72) = *((_QWORD *)v7 + 5);
      }
      *(_QWORD *)(v9 + 64) = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 3) = v10;
      *((_QWORD *)v7 + 4) = 0;
      v7[40] = 0;
      *(_BYTE *)(v9 + 120) = 0;
      if ( v7[88] )
      {
        *(_QWORD *)(v9 + 88) = v9 + 104;
        v16 = *((_BYTE **)v7 + 7);
        if ( v16 == v11 )
        {
          *(__m128i *)(v9 + 104) = _mm_loadu_si128((const __m128i *)(v7 + 72));
        }
        else
        {
          *(_QWORD *)(v9 + 88) = v16;
          *(_QWORD *)(v9 + 104) = *((_QWORD *)v7 + 9);
        }
        *(_QWORD *)(v9 + 96) = *((_QWORD *)v7 + 8);
        *((_QWORD *)v7 + 7) = v11;
        *((_QWORD *)v7 + 8) = 0;
        v7[72] = 0;
        *(_BYTE *)(v9 + 120) = 1;
      }
      *(_BYTE *)(v9 + 160) = 0;
      if ( v7[128] )
      {
        *(_QWORD *)(v9 + 128) = v9 + 144;
        v17 = *((_BYTE **)v7 + 12);
        if ( v17 == v8 )
        {
          *(__m128i *)(v9 + 144) = _mm_loadu_si128((const __m128i *)v7 + 7);
        }
        else
        {
          *(_QWORD *)(v9 + 128) = v17;
          *(_QWORD *)(v9 + 144) = *((_QWORD *)v7 + 14);
        }
        *(_QWORD *)(v9 + 136) = *((_QWORD *)v7 + 13);
        *((_QWORD *)v7 + 12) = v8;
        *((_QWORD *)v7 + 13) = 0;
        v7[112] = 0;
        *(_BYTE *)(v9 + 160) = 1;
      }
      v18 = *((_QWORD *)v7 + 17);
      v5 += 176;
      v9 += 176;
      v7 += 176;
      v8 += 176;
      v10 += 176;
      v11 += 176;
      *(_QWORD *)(v9 - 8) = v18;
    }
    while ( v6 != v5 );
    v21 = (char *)*a1;
    v6 = (char *)(*a1 + 176LL * *((unsigned int *)a1 + 2));
    if ( (char *)*a1 != v6 )
    {
      do
      {
        v6 -= 176;
        sub_9E5F30((__int64)(v6 + 16));
      }
      while ( v21 != v6 );
      v6 = (char *)*a1;
    }
  }
  v22 = v23[0];
  if ( v3 != v6 )
    free(v6);
  *a1 = v4;
  *((_DWORD *)a1 + 3) = v22;
}

