void __fastcall sub_9F1890(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // r13
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // rdi
  char v11; // cl
  char v12; // cl
  char v13; // cl
  _QWORD *v14; // rcx
  char v15; // cl
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  _QWORD *v19; // rcx
  _QWORD *v20; // r14
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  int v24; // r14d
  __int64 v25[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_22136C0(a1, a1 + 16, a2, 136, v25);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v5 + 4;
    v9 = v5 + 14;
    v10 = v5 + 9;
    do
    {
      v18 = _mm_loadu_si128((const __m128i *)v8 - 2);
      *(_QWORD *)(v4 + 16) = v4 + 32;
      *(__m128i *)v4 = v18;
      v19 = (_QWORD *)*(v8 - 2);
      if ( v19 == v8 )
      {
        *(__m128i *)(v4 + 32) = _mm_loadu_si128((const __m128i *)v8);
      }
      else
      {
        *(_QWORD *)(v4 + 16) = v19;
        *(_QWORD *)(v4 + 32) = *v8;
      }
      *(_QWORD *)(v4 + 24) = *(v8 - 1);
      *(v8 - 2) = v8;
      *(v8 - 1) = 0;
      *(_BYTE *)v8 = 0;
      v11 = v5[6] & 1 | *(_BYTE *)(v4 + 48) & 0xFE;
      *(_BYTE *)(v4 + 48) = v11;
      v12 = v5[6] & 2 | v11 & 0xFD;
      *(_BYTE *)(v4 + 48) = v12;
      v13 = v5[6] & 4 | v12 & 0xFB;
      *(_BYTE *)(v4 + 48) = v13;
      *(_BYTE *)(v4 + 48) = v5[6] & 8 | v13 & 0xF7;
      *(_QWORD *)(v4 + 56) = v4 + 72;
      v14 = (_QWORD *)v8[3];
      if ( v14 == v10 )
      {
        *(__m128i *)(v4 + 72) = _mm_loadu_si128((const __m128i *)(v8 + 5));
      }
      else
      {
        *(_QWORD *)(v4 + 56) = v14;
        *(_QWORD *)(v4 + 72) = v8[5];
      }
      *(_QWORD *)(v4 + 64) = v8[4];
      v8[3] = v10;
      v8[4] = 0;
      *((_BYTE *)v8 + 40) = 0;
      v15 = v5[11] & 1 | *(_BYTE *)(v4 + 88) & 0xFE;
      *(_BYTE *)(v4 + 88) = v15;
      *(_BYTE *)(v4 + 88) = v5[11] & 6 | v15 & 0xF9;
      *(_QWORD *)(v4 + 96) = v4 + 112;
      v16 = (_QWORD *)v8[8];
      if ( v16 == v9 )
      {
        *(__m128i *)(v4 + 112) = _mm_loadu_si128((const __m128i *)v8 + 5);
      }
      else
      {
        *(_QWORD *)(v4 + 96) = v16;
        *(_QWORD *)(v4 + 112) = v8[10];
      }
      v17 = v8[9];
      v5 += 17;
      v4 += 136;
      v8 += 17;
      v10 += 17;
      *(_QWORD *)(v4 - 32) = v17;
      *(v8 - 9) = v9;
      v9 += 17;
      *(v8 - 8) = 0;
      *((_BYTE *)v8 - 56) = 0;
      LOBYTE(v17) = *(_BYTE *)(v5 - 1) & 1 | *(_BYTE *)(v4 - 8) & 0xFE;
      *(_BYTE *)(v4 - 8) = v17;
      *(_BYTE *)(v4 - 8) = *(_BYTE *)(v5 - 1) & 2 | v17 & 0xFD;
    }
    while ( v7 != v5 );
    v20 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 17;
          v21 = (_QWORD *)v7[12];
          if ( v21 != v7 + 14 )
            operator delete(v21);
          v22 = (_QWORD *)v7[7];
          if ( v22 != v7 + 9 )
            operator delete(v22);
          v23 = (_QWORD *)v7[2];
          if ( v23 == v7 + 4 )
            break;
          operator delete(v23);
          if ( v7 == v20 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_19;
          }
        }
      }
      while ( v7 != v20 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_19:
  v24 = v25[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v24;
}

