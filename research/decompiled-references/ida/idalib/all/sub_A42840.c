void __fastcall sub_A42840(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  char v20; // al
  char v21; // al
  char v22; // al
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r15
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 <= 0xEEEEEEEEEEEEEEEFLL * ((a1[2] - v2) >> 3) )
    {
      v28 = a1[1];
      v29 = a2;
      do
      {
        *(_QWORD *)(v28 + 8) = 0;
        *(_QWORD *)v28 = v28 + 16;
        *(_QWORD *)(v28 + 40) = v28 + 56;
        *(_BYTE *)(v28 + 16) = 0;
        *(_BYTE *)(v28 + 32) &= 0xF0u;
        *(_QWORD *)(v28 + 48) = 0;
        *(_BYTE *)(v28 + 56) = 0;
        *(_BYTE *)(v28 + 72) &= 0xF8u;
        *(_QWORD *)(v28 + 80) = v28 + 96;
        *(_QWORD *)(v28 + 88) = 0;
        *(_BYTE *)(v28 + 96) = 0;
        *(_BYTE *)(v28 + 112) &= 0x80u;
        v28 += 120;
        --v29;
      }
      while ( v29 );
      a1[1] = v2 + 120 * a2;
    }
    else
    {
      v5 = v2 - *a1;
      v6 = 0xEEEEEEEEEEEEEEEFLL * (v5 >> 3);
      if ( 0x222222222222222LL - v6 < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v7 = 0xEEEEEEEEEEEEEEEFLL * (v5 >> 3);
      if ( a2 >= v6 )
        v7 = a2;
      v8 = v6 + v7;
      if ( v8 > 0x222222222222222LL )
        v8 = 0x222222222222222LL;
      v33 = 120 * v8;
      v9 = operator new(120 * v8);
      v10 = a2;
      v11 = v9;
      v12 = v9 + v5;
      do
      {
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)v12 = v12 + 16;
        *(_QWORD *)(v12 + 40) = v12 + 56;
        *(_BYTE *)(v12 + 16) = 0;
        *(_BYTE *)(v12 + 32) &= 0xF0u;
        *(_QWORD *)(v12 + 48) = 0;
        *(_BYTE *)(v12 + 56) = 0;
        *(_BYTE *)(v12 + 72) &= 0xF8u;
        *(_QWORD *)(v12 + 80) = v12 + 96;
        *(_QWORD *)(v12 + 88) = 0;
        *(_BYTE *)(v12 + 96) = 0;
        *(_BYTE *)(v12 + 112) &= 0x80u;
        v12 += 120;
        --v10;
      }
      while ( v10 );
      v13 = a1[1];
      v14 = *a1;
      if ( v13 != *a1 )
      {
        v15 = *a1;
        v16 = v14 + 16;
        v17 = v14 + 96;
        v18 = v11;
        v19 = v14 + 56;
        do
        {
          *(_QWORD *)v18 = v18 + 16;
          v27 = *(_QWORD *)(v16 - 16);
          if ( v27 == v16 )
          {
            *(__m128i *)(v18 + 16) = _mm_loadu_si128((const __m128i *)v16);
          }
          else
          {
            *(_QWORD *)v18 = v27;
            *(_QWORD *)(v18 + 16) = *(_QWORD *)v16;
          }
          *(_QWORD *)(v18 + 8) = *(_QWORD *)(v16 - 8);
          *(_QWORD *)(v16 - 16) = v16;
          *(_QWORD *)(v16 - 8) = 0;
          *(_BYTE *)v16 = 0;
          v20 = *(_BYTE *)(v15 + 32) & 1 | *(_BYTE *)(v18 + 32) & 0xFE;
          *(_BYTE *)(v18 + 32) = v20;
          v21 = *(_BYTE *)(v15 + 32) & 2 | v20 & 0xFD;
          *(_BYTE *)(v18 + 32) = v21;
          v22 = *(_BYTE *)(v15 + 32) & 4 | v21 & 0xFB;
          *(_BYTE *)(v18 + 32) = v22;
          *(_BYTE *)(v18 + 32) = *(_BYTE *)(v15 + 32) & 8 | v22 & 0xF7;
          *(_QWORD *)(v18 + 40) = v18 + 56;
          v23 = *(_QWORD *)(v16 + 24);
          if ( v23 == v19 )
          {
            *(__m128i *)(v18 + 56) = _mm_loadu_si128((const __m128i *)(v16 + 40));
          }
          else
          {
            *(_QWORD *)(v18 + 40) = v23;
            *(_QWORD *)(v18 + 56) = *(_QWORD *)(v16 + 40);
          }
          *(_QWORD *)(v18 + 48) = *(_QWORD *)(v16 + 32);
          *(_QWORD *)(v16 + 24) = v19;
          *(_QWORD *)(v16 + 32) = 0;
          *(_BYTE *)(v16 + 40) = 0;
          v24 = *(_BYTE *)(v15 + 72) & 1 | *(_BYTE *)(v18 + 72) & 0xFE;
          *(_BYTE *)(v18 + 72) = v24;
          *(_BYTE *)(v18 + 72) = *(_BYTE *)(v15 + 72) & 6 | v24 & 0xF9;
          *(_QWORD *)(v18 + 80) = v18 + 96;
          v25 = *(_QWORD *)(v16 + 64);
          if ( v25 == v17 )
          {
            *(__m128i *)(v18 + 96) = _mm_loadu_si128((const __m128i *)(v16 + 80));
          }
          else
          {
            *(_QWORD *)(v18 + 80) = v25;
            *(_QWORD *)(v18 + 96) = *(_QWORD *)(v16 + 80);
          }
          v26 = *(_QWORD *)(v16 + 72);
          v15 += 120;
          v18 += 120;
          v16 += 120;
          v19 += 120;
          *(_QWORD *)(v18 - 32) = v26;
          *(_QWORD *)(v16 - 56) = v17;
          v17 += 120;
          *(_QWORD *)(v16 - 48) = 0;
          *(_BYTE *)(v16 - 40) = 0;
          LOBYTE(v26) = *(_BYTE *)(v15 - 8) & 1 | *(_BYTE *)(v18 - 8) & 0xFE;
          *(_BYTE *)(v18 - 8) = v26;
          LOBYTE(v26) = *(_BYTE *)(v15 - 8) & 2 | v26 & 0xFD;
          *(_BYTE *)(v18 - 8) = v26;
          LOBYTE(v26) = *(_BYTE *)(v15 - 8) & 4 | v26 & 0xFB;
          *(_BYTE *)(v18 - 8) = v26;
          LOBYTE(v26) = *(_BYTE *)(v15 - 8) & 8 | v26 & 0xF7;
          *(_BYTE *)(v18 - 8) = v26;
          *(_BYTE *)(v18 - 8) = *(_BYTE *)(v15 - 8) & 0x70 | v26 & 0x8F;
        }
        while ( v13 != v15 );
        v30 = a1[1];
        v14 = *a1;
        if ( v30 != *a1 )
        {
          do
          {
            while ( 1 )
            {
              v31 = *(void **)(v14 + 80);
              if ( v31 != (void *)(v14 + 96) )
                operator delete(v31);
              v32 = *(void **)(v14 + 40);
              if ( v32 != (void *)(v14 + 56) )
                operator delete(v32);
              if ( *(_QWORD *)v14 == v14 + 16 )
                break;
              operator delete(*(void **)v14);
              v14 += 120;
              if ( v30 == v14 )
              {
                v14 = *a1;
                goto LABEL_34;
              }
            }
            v14 += 120;
          }
          while ( v14 != v30 );
          v14 = *a1;
        }
      }
LABEL_34:
      if ( v14 )
        operator delete((void *)v14);
      *a1 = v11;
      a1[1] = v11 + 120 * (v6 + a2);
      a1[2] = v33 + v11;
    }
  }
}
