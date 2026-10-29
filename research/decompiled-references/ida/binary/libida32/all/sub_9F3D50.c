void __fastcall sub_9F3D50(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // r12
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  _QWORD *v12; // r9
  __m128i v13; // xmm0
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  char v16; // cl
  char v17; // cl
  char v18; // cl
  _QWORD *v19; // rcx
  char v20; // cl
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // r14
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  int v27; // r14d
  __m128i v28; // xmm3
  __int64 v29[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_22136C0(a1, a1 + 16, a2, 128, v29);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v5 + 4;
    v9 = v5 + 14;
    v10 = v6;
    v11 = v5 + 9;
    v12 = v7 + 4;
    do
    {
      while ( 1 )
      {
        v13 = _mm_loadu_si128((const __m128i *)v8 - 2);
        v14 = v8 - 4;
        *(_QWORD *)(v10 + 16) = v10 + 32;
        *(__m128i *)v10 = v13;
        v15 = (_QWORD *)*(v8 - 2);
        if ( v15 == v8 )
        {
          *(__m128i *)(v10 + 32) = _mm_loadu_si128((const __m128i *)v8);
        }
        else
        {
          *(_QWORD *)(v10 + 16) = v15;
          *(_QWORD *)(v10 + 32) = *v8;
        }
        *(_QWORD *)(v10 + 24) = *(v8 - 1);
        *(v8 - 2) = v8;
        *(v8 - 1) = 0;
        *(_BYTE *)v8 = 0;
        v16 = v14[6] & 1 | *(_BYTE *)(v10 + 48) & 0xFE;
        *(_BYTE *)(v10 + 48) = v16;
        v17 = v14[6] & 2 | v16 & 0xFD;
        *(_BYTE *)(v10 + 48) = v17;
        v18 = v14[6] & 4 | v17 & 0xFB;
        *(_BYTE *)(v10 + 48) = v18;
        *(_BYTE *)(v10 + 48) = v14[6] & 8 | v18 & 0xF7;
        *(_QWORD *)(v10 + 56) = v10 + 72;
        v19 = (_QWORD *)v8[3];
        if ( v19 == v11 )
        {
          *(__m128i *)(v10 + 72) = _mm_loadu_si128((const __m128i *)(v8 + 5));
        }
        else
        {
          *(_QWORD *)(v10 + 56) = v19;
          *(_QWORD *)(v10 + 72) = v8[5];
        }
        *(_QWORD *)(v10 + 64) = v8[4];
        v8[3] = v11;
        v8[4] = 0;
        *((_BYTE *)v8 + 40) = 0;
        v20 = v14[11] & 1 | *(_BYTE *)(v10 + 88) & 0xFE;
        *(_BYTE *)(v10 + 88) = v20;
        *(_BYTE *)(v10 + 88) = v14[11] & 6 | v20 & 0xF9;
        *(_QWORD *)(v10 + 96) = v10 + 112;
        v21 = (_QWORD *)v8[8];
        if ( v21 == v9 )
          break;
        *(_QWORD *)(v10 + 96) = v21;
        v22 = v8[10];
        v8 += 16;
        v10 += 128;
        v11 += 16;
        *(_QWORD *)(v10 - 16) = v22;
        *(_QWORD *)(v10 - 24) = *(v8 - 7);
        *(v8 - 8) = v9;
        v9 += 16;
        *(v8 - 7) = 0;
        *((_BYTE *)v8 - 48) = 0;
        if ( v8 == v12 )
          goto LABEL_9;
      }
      v28 = _mm_loadu_si128((const __m128i *)v8 + 5);
      v8 += 16;
      v10 += 128;
      v11 += 16;
      *(__m128i *)(v10 - 16) = v28;
      *(_QWORD *)(v10 - 24) = *(v8 - 7);
      *(v8 - 8) = v9;
      v9 += 16;
      *(v8 - 7) = 0;
      *((_BYTE *)v8 - 48) = 0;
    }
    while ( v12 != v8 );
LABEL_9:
    v23 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 16;
          v24 = (_QWORD *)v7[12];
          if ( v24 != v7 + 14 )
            operator delete(v24);
          v25 = (_QWORD *)v7[7];
          if ( v25 != v7 + 9 )
            operator delete(v25);
          v26 = (_QWORD *)v7[2];
          if ( v26 == v7 + 4 )
            break;
          operator delete(v26);
          if ( v23 == v7 )
            goto LABEL_16;
        }
      }
      while ( v23 != v7 );
LABEL_16:
      v7 = *(_QWORD **)a1;
    }
  }
  v27 = v29[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v27;
}

