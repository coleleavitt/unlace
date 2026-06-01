void __fastcall sub_7D850(__int64 a1, __int64 a2)
{
  __int64 i; // r13
  int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r12
  bool v7; // cf
  int v8; // ebp
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm2
  __int64 v12; // r15
  unsigned __int64 v13; // rbp
  void *v14; // rdi
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rsi
  char *v18; // rdi
  __m128i v19; // xmm4
  unsigned __int64 v20; // rax
  const char *v21; // rsi
  const char *v22; // rdi
  __m128i v23; // [rsp+0h] [rbp-78h] BYREF
  __int64 v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  __m128i v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+3Ch] [rbp-3Ch]

  v24 = a2;
  if ( a1 != a2 && a2 != a1 + 40 )
  {
    for ( i = a1 + 80; ; i += 40 )
    {
      v4 = *(unsigned __int16 *)(i - 8);
      v5 = i - 40;
      v6 = i;
      v7 = (unsigned __int16)v4 < *(_WORD *)(a1 + 32);
      if ( (_WORD)v4 == *(_WORD *)(a1 + 32) )
      {
        v8 = *(unsigned __int16 *)(i - 6);
        v7 = (unsigned __int16)v8 < *(_WORD *)(a1 + 34);
        if ( (_WORD)v8 == *(_WORD *)(a1 + 34) )
          break;
      }
      if ( v7 )
      {
        v8 = *(unsigned __int16 *)(i - 6);
        v27 = *(_QWORD *)(i - 16);
LABEL_9:
        v10 = *(_QWORD *)(i - 40);
        v11 = _mm_loadu_si128((const __m128i *)(i - 32));
        v28 = v4 | (v8 << 16);
        v12 = i;
        v25 = v10;
        v13 = 0xCCCCCCCCCCCCCCCDLL * ((v5 - a1) >> 3);
        *(_QWORD *)(i - 40) = 0;
        v26 = v11;
        *(_OWORD *)(i - 32) = 0;
        if ( v5 - a1 > 0 )
        {
          do
          {
            v14 = *(void **)(v12 - 40);
            v12 -= 40;
            v15 = *(_QWORD *)(v12 - 40);
            v16 = _mm_loadu_si128((const __m128i *)(v12 - 32));
            *(_QWORD *)(v12 - 40) = 0;
            *(_OWORD *)(v12 - 32) = 0;
            if ( v14 )
            {
              *(_QWORD *)(v12 + 8) = 0;
              v23 = v16;
              j__free(v14);
              v16 = _mm_load_si128(&v23);
            }
            v17 = *(_QWORD *)(v12 - 16);
            *(_QWORD *)v12 = v15;
            *(__m128i *)(v12 + 8) = v16;
            *(_QWORD *)(v12 + 24) = v17;
            *(_WORD *)(v12 + 32) = *(_WORD *)(v12 - 8);
            *(_WORD *)(v12 + 34) = *(_WORD *)(v12 - 6);
            --v13;
          }
          while ( v13 );
        }
        v18 = *(char **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          j__free(v18);
        }
        v19 = _mm_load_si128(&v26);
        *(_QWORD *)a1 = v25;
        v20 = v27;
        *(__m128i *)(a1 + 8) = v19;
        *(_QWORD *)(a1 + 24) = v20;
        *(_DWORD *)(a1 + 32) = v28;
        goto LABEL_16;
      }
LABEL_19:
      sub_7D6F0(v5);
LABEL_16:
      if ( v24 == v6 )
        return;
    }
    v9 = *(_QWORD *)(i - 16);
    v27 = v9;
    if ( v9 != *(_QWORD *)(a1 + 24) )
    {
      LOBYTE(v9) = v9 < *(_QWORD *)(a1 + 24);
      goto LABEL_8;
    }
    v21 = haystack;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v21 = *(const char **)a1;
      if ( !*(_QWORD *)(i - 32) )
        goto LABEL_23;
    }
    else if ( !*(_QWORD *)(i - 32) )
    {
LABEL_23:
      v23.m128i_i64[0] = i - 40;
      LODWORD(v9) = strcmp(haystack, v21);
      v5 = v23.m128i_i64[0];
      LODWORD(v9) = (unsigned int)v9 >> 31;
      goto LABEL_8;
    }
    v22 = *(const char **)(i - 40);
    v23.m128i_i64[0] = i - 40;
    LODWORD(v9) = strcmp(v22, v21);
    v5 = v23.m128i_i64[0];
    LODWORD(v9) = (unsigned int)v9 >> 31;
LABEL_8:
    if ( (_BYTE)v9 )
      goto LABEL_9;
    goto LABEL_19;
  }
}

