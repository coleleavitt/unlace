void __fastcall sub_1BD93E0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rbp
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  char *v19; // rdi
  int v20; // r14d
  _QWORD *v21; // [rsp+8h] [rbp-50h]
  __int64 v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 168, v22);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = *v5;
      v5 += 21;
      v8 += 168;
      *(_QWORD *)(v8 - 168) = v9;
      *(_QWORD *)(v8 - 160) = *(v5 - 20);
      *(_QWORD *)(v8 - 152) = *(v5 - 19);
      *(_QWORD *)(v8 - 144) = *(v5 - 18);
      *(_QWORD *)(v8 - 136) = *(v5 - 17);
      *(_QWORD *)(v8 - 128) = *(v5 - 16);
      v10 = _mm_loadu_si128((const __m128i *)(v5 - 15));
      *(_QWORD *)(v8 - 96) = 0;
      *(__m128i *)(v8 - 120) = v10;
      *(_QWORD *)(v8 - 88) = 0;
      *(_QWORD *)(v8 - 104) = 0;
      *(_QWORD *)(v8 - 104) = *(v5 - 13);
      v11 = *(v5 - 12);
      *(v5 - 13) = 0;
      v12 = *(_QWORD *)(v8 - 96);
      *(_QWORD *)(v8 - 96) = v11;
      v13 = *(v5 - 11);
      *(v5 - 12) = v12;
      v14 = *(_QWORD *)(v8 - 88);
      *(_QWORD *)(v8 - 88) = v13;
      *(v5 - 11) = v14;
      *(_DWORD *)(v8 - 80) = *((_DWORD *)v5 - 20);
      *(_DWORD *)(v8 - 76) = *((_DWORD *)v5 - 19);
      *(_QWORD *)(v8 - 72) = *(v5 - 9);
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 1 | *(_BYTE *)(v8 - 64) & 0xFE;
      *(_BYTE *)(v8 - 64) = v14;
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 2 | v14 & 0xFD;
      *(_BYTE *)(v8 - 64) = v14;
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 4 | v14 & 0xFB;
      *(_BYTE *)(v8 - 64) = v14;
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 8 | v14 & 0xF7;
      *(_BYTE *)(v8 - 64) = v14;
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 0x10 | v14 & 0xEF;
      *(_BYTE *)(v8 - 64) = v14;
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 0x20 | v14 & 0xDF;
      *(_BYTE *)(v8 - 64) = v14;
      LOBYTE(v14) = *(_BYTE *)(v5 - 8) & 0x40 | v14 & 0xBF;
      *(_BYTE *)(v8 - 64) = v14;
      *(_BYTE *)(v8 - 64) = *(_BYTE *)(v5 - 8) & 0x80 | v14 & 0x7F;
      *(_BYTE *)(v8 - 63) = *((_BYTE *)v5 - 63) & 3 | *(_BYTE *)(v8 - 63) & 0xFC;
      *(_DWORD *)(v8 - 64) = *(_DWORD *)(v5 - 8) & 0x3FC00 | *(_DWORD *)(v8 - 64) & 0xFFFC03FF;
      *(_DWORD *)(v8 - 60) = *((_DWORD *)v5 - 15);
      *(__m128i *)(v8 - 56) = _mm_loadu_si128((const __m128i *)(v5 - 7));
      *(__m128i *)(v8 - 40) = _mm_loadu_si128((const __m128i *)(v5 - 5));
      *(__m128i *)(v8 - 24) = _mm_loadu_si128((const __m128i *)(v5 - 3));
      *(_QWORD *)(v8 - 8) = *(v5 - 1);
    }
    while ( v7 != v5 );
    v15 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 21;
          v16 = (_QWORD *)v7[8];
          v17 = (_QWORD *)v7[9];
          v18 = v16;
          if ( v17 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v19 = (char *)v18[3];
                if ( v19 == (char *)(v18 + 5) )
                  break;
                v21 = v17;
                v18 += 8;
                operator delete(v19);
                v17 = v21;
                if ( v21 == v18 )
                  goto LABEL_8;
              }
              v18 += 8;
            }
            while ( v17 != v18 );
LABEL_8:
            v16 = (_QWORD *)v7[8];
          }
          if ( !v16 )
            break;
          operator delete(v16);
          if ( v15 == v7 )
            goto LABEL_11;
        }
      }
      while ( v15 != v7 );
LABEL_11:
      v7 = *(_QWORD **)a1;
    }
  }
  v20 = v22[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v20;
}
