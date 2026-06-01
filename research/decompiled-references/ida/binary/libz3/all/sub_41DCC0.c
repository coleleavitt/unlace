__int64 __fastcall sub_41DCC0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // ecx
  unsigned int i; // ebx
  unsigned int v6; // eax
  _BYTE *v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  char v19; // bp
  _BYTE *v20; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  _OWORD v24[11]; // [rsp+0h] [rbp-108h]
  __m128i v25[5]; // [rsp+B0h] [rbp-58h]

  v3 = a2;
  if ( a2 <= 9 )
  {
    v7 = (_BYTE *)(a1 + 16);
    *(_BYTE *)(a1 + 16) = 0;
    v8 = 1;
    *(_QWORD *)a1 = a1 + 16;
  }
  else
  {
    v4 = a2;
    for ( i = 1; ; i += 4 )
    {
      if ( v4 <= 0x63 )
      {
        v6 = i + 1;
        goto LABEL_9;
      }
      if ( v4 <= 0x3E7 )
      {
        v6 = i + 2;
        ++i;
        goto LABEL_9;
      }
      if ( v4 <= 0x270F )
      {
        v6 = i + 3;
        i += 2;
        goto LABEL_9;
      }
      v6 = i + 4;
      if ( v4 <= 0x1869F )
        break;
      v4 /= 0x2710u;
    }
    i += 3;
LABEL_9:
    v7 = (_BYTE *)(a1 + 16);
    *(_BYTE *)(a1 + 16) = 0;
    v8 = v6;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0;
    if ( v6 > 0xF )
    {
      if ( v6 <= 0x1DuLL )
      {
        v10 = 30;
        v9 = 31;
      }
      else
      {
        v9 = v6 + 1LL;
        v10 = v6;
      }
      v11 = operator new(v9);
      v12 = *(_BYTE **)a1;
      v7 = (_BYTE *)v11;
      v13 = *(_QWORD *)(a1 + 8);
      if ( v13 )
      {
        if ( v13 != -1 )
          memcpy(v7, v12, v13 + 1);
      }
      else
      {
        *v7 = *v12;
      }
      sub_233E40(a1);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v10;
    }
    v24[0] = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
    v24[1] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
    v24[2] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
    v24[3] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
    v24[4] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
    v24[5] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
    v24[6] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
    v24[7] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
    v24[8] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
    v24[9] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
    v24[10] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
    v25[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
    *(__m128i *)((char *)v25 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
    if ( v3 <= 0x63 )
      goto LABEL_21;
    do
    {
      v14 = v3 % 0x64;
      v15 = v3;
      v3 /= 0x64u;
      v16 = 2 * v14;
      v17 = (unsigned int)(v16 + 1);
      LOBYTE(v16) = *((_BYTE *)v24 + v16);
      v7[i] = *((_BYTE *)v24 + v17);
      v18 = i - 1;
      i -= 2;
      v7[v18] = v16;
    }
    while ( v15 > 0x270F );
    if ( v15 > 0x3E7 )
    {
LABEL_21:
      v22 = 2 * v3;
      v23 = (unsigned int)(v22 + 1);
      v19 = *((_BYTE *)v24 + v22);
      v7[1] = *((_BYTE *)v24 + v23);
      goto LABEL_20;
    }
  }
  v19 = v3 + 48;
LABEL_20:
  *v7 = v19;
  v20 = *(_BYTE **)a1;
  *(_QWORD *)(a1 + 8) = v8;
  v20[v8] = 0;
  return a1;
}

