void __fastcall sub_9F4B80(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // r13
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  char v11; // al
  char v12; // al
  char v13; // al
  _QWORD *v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  int v21; // r14d
  __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_22136C0(a1, a1 + 16, a2, 88, v22);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v5 + 4;
    v9 = v5 + 9;
    v10 = v4;
    do
    {
      v16 = _mm_loadu_si128((const __m128i *)v8 - 2);
      *(_QWORD *)(v10 + 16) = v10 + 32;
      *(__m128i *)v10 = v16;
      v17 = (_QWORD *)*(v8 - 2);
      if ( v17 == v8 )
      {
        *(__m128i *)(v10 + 32) = _mm_loadu_si128((const __m128i *)v8);
      }
      else
      {
        *(_QWORD *)(v10 + 16) = v17;
        *(_QWORD *)(v10 + 32) = *v8;
      }
      *(_QWORD *)(v10 + 24) = *(v8 - 1);
      *(v8 - 2) = v8;
      *(v8 - 1) = 0;
      *(_BYTE *)v8 = 0;
      v11 = v5[6] & 1 | *(_BYTE *)(v10 + 48) & 0xFE;
      *(_BYTE *)(v10 + 48) = v11;
      v12 = v5[6] & 2 | v11 & 0xFD;
      *(_BYTE *)(v10 + 48) = v12;
      v13 = v5[6] & 4 | v12 & 0xFB;
      *(_BYTE *)(v10 + 48) = v13;
      *(_BYTE *)(v10 + 48) = v5[6] & 8 | v13 & 0xF7;
      *(_QWORD *)(v10 + 56) = v10 + 72;
      v14 = (_QWORD *)v8[3];
      if ( v14 == v9 )
      {
        *(__m128i *)(v10 + 72) = _mm_loadu_si128((const __m128i *)(v8 + 5));
      }
      else
      {
        *(_QWORD *)(v10 + 56) = v14;
        *(_QWORD *)(v10 + 72) = v8[5];
      }
      v15 = v8[4];
      v5 += 11;
      v10 += 88;
      v8 += 11;
      *(_QWORD *)(v10 - 24) = v15;
      *(v8 - 8) = v9;
      v9 += 11;
      *(v8 - 7) = 0;
      *((_BYTE *)v8 - 48) = 0;
    }
    while ( v7 != v5 );
    v18 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 11;
          v19 = (_QWORD *)v7[7];
          if ( v19 != v7 + 9 )
            operator delete(v19);
          v20 = (_QWORD *)v7[2];
          if ( v20 == v7 + 4 )
            break;
          operator delete(v20);
          if ( v18 == v7 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_15;
          }
        }
      }
      while ( v18 != v7 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_15:
  v21 = v22[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v21;
}

