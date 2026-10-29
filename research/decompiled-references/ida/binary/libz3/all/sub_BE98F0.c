__int64 *__fastcall sub_BE98F0(__int64 *a1, __int64 a2, unsigned int *a3)
{
  int v6; // edi
  __int64 v7; // rax
  unsigned int **v8; // rcx
  int v9; // edx
  unsigned int **v10; // rsi
  __int64 v11; // rdx
  unsigned int **v12; // r9
  unsigned int **v13; // rax
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  _BYTE *v19; // r12
  __int64 v20; // r13
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  _BYTE *v23; // r8
  _BYTE *v24; // r15
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rcx
  char v32; // bp
  __int64 v33; // rax
  unsigned int *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-118h]
  _BYTE *v39; // [rsp+8h] [rbp-110h]
  _OWORD v40[11]; // [rsp+10h] [rbp-108h]
  __m128i v41[5]; // [rsp+C0h] [rbp-58h]

  v6 = (int)a3;
  v7 = *(unsigned int *)(a2 + 40);
  v8 = *(unsigned int ***)(a2 + 32);
  v9 = v7 - 1;
  v7 *= 16;
  v10 = (unsigned int **)((char *)v8 + v7);
  v11 = 16LL * ((unsigned int)a3 & v9);
  v12 = &v8[(unsigned __int64)v11 / 8];
  if ( v11 == v7 )
  {
LABEL_31:
    while ( v12 != v8 )
    {
      v35 = *v8;
      if ( (unsigned __int64)*v8 > 1 )
      {
        if ( v6 == (_DWORD)v35 && a3 == v35 )
          goto LABEL_9;
      }
      else if ( !v35 )
      {
        break;
      }
      v8 += 2;
    }
LABEL_38:
    sub_BE8D00(a1, a2, a3);
    return a1;
  }
  v13 = &v8[(unsigned __int64)v11 / 8];
  while ( 1 )
  {
    v14 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v14 )
      goto LABEL_38;
LABEL_5:
    v13 += 2;
    if ( v10 == v13 )
      goto LABEL_31;
  }
  if ( v6 != (_DWORD)v14 || a3 != v14 )
    goto LABEL_5;
LABEL_9:
  v15 = sub_BE93F0(a2, (__int64)a3);
  v16 = v15;
  if ( v15 <= 9 )
  {
    v19 = a1 + 2;
    *((_BYTE *)a1 + 16) = 0;
    v20 = 1;
    *a1 = (__int64)(a1 + 2);
    goto LABEL_28;
  }
  v17 = v15;
  v18 = 1;
  while ( 1 )
  {
    if ( v17 <= 0x63 )
    {
      ++v18;
      goto LABEL_17;
    }
    if ( v17 <= 0x3E7 )
    {
      v18 += 2;
      goto LABEL_17;
    }
    if ( v17 <= 0x270F )
      break;
    v18 += 4;
    if ( v17 <= 0x1869F )
      goto LABEL_17;
    v17 /= 0x2710u;
  }
  v18 += 3;
LABEL_17:
  v19 = a1 + 2;
  a1[1] = 0;
  v20 = v18;
  *a1 = (__int64)(a1 + 2);
  *((_BYTE *)a1 + 16) = 0;
  if ( v18 > 0xF )
  {
    if ( v18 <= 0x1DuLL )
    {
      v38 = 30;
      v21 = 31;
    }
    else
    {
      v38 = v18;
      v21 = v18 + 1LL;
    }
    v22 = operator new(v21);
    v23 = (_BYTE *)*a1;
    v24 = (_BYTE *)v22;
    v25 = a1[1];
    if ( v25 )
    {
      if ( v25 == -1 || (v39 = (_BYTE *)*a1, memcpy(v24, (const void *)*a1, v25 + 1), v23 = v39, v19 != v39) )
LABEL_23:
        operator delete(v23, a1[2] + 1);
    }
    else
    {
      *v24 = *v23;
      if ( v19 != v23 )
        goto LABEL_23;
    }
    *a1 = (__int64)v24;
    v19 = v24;
    a1[2] = v38;
  }
  v26 = v18 - 1;
  v40[0] = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  v40[1] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  v40[2] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
  v40[3] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  v40[4] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  v40[5] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  v40[6] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  v40[7] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  v40[8] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  v40[9] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  v40[10] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v41[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)v41 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  if ( v16 <= 0x63 )
    goto LABEL_39;
  do
  {
    v27 = v16 % 0x64;
    v28 = v16;
    v16 /= 0x64u;
    v29 = 2 * v27;
    v30 = (unsigned int)(v29 + 1);
    LOBYTE(v29) = *((_BYTE *)v40 + v29);
    v19[v26] = *((_BYTE *)v40 + v30);
    v31 = v26 - 1;
    v26 -= 2;
    v19[v31] = v29;
  }
  while ( v28 > 0x270F );
  if ( v28 > 0x3E7 )
  {
LABEL_39:
    v36 = 2 * v16;
    v37 = (unsigned int)(v36 + 1);
    v32 = *((_BYTE *)v40 + v36);
    v19[1] = *((_BYTE *)v40 + v37);
  }
  else
  {
LABEL_28:
    v32 = v16 + 48;
  }
  *v19 = v32;
  v33 = *a1;
  a1[1] = v20;
  *(_BYTE *)(v33 + v20) = 0;
  return a1;
}

