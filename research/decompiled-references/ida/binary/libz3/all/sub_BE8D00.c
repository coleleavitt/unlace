_QWORD *__fastcall sub_BE8D00(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // ecx
  unsigned int v6; // r15d
  size_t v7; // r14
  _BYTE *v8; // r13
  unsigned __int64 v9; // rdi
  _BYTE *v10; // rax
  _QWORD *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r12
  size_t v18; // r12
  void *v19; // r15
  unsigned __int64 v20; // rdi
  _WORD *v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // r14
  void *v24; // rsi
  __int64 v25; // r12
  _QWORD *v26; // rdx
  _OWORD *v27; // rax
  void *v28; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  size_t v32; // rax
  _OWORD *v33; // rdi
  unsigned int v34; // eax
  _WORD *v35; // rax
  unsigned __int64 v36; // rsi
  char *v37; // rdx
  char *v38; // r13
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rdi
  unsigned int v43; // edx
  unsigned __int64 v44; // rsi
  char *v45; // rcx
  char *v46; // rdi
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // [rsp+0h] [rbp-138h]
  size_t v52; // [rsp+0h] [rbp-138h]
  _OWORD *v53; // [rsp+8h] [rbp-130h]
  void *src; // [rsp+10h] [rbp-128h]
  size_t n; // [rsp+18h] [rbp-120h]
  _QWORD v56[2]; // [rsp+20h] [rbp-118h] BYREF
  void *v57[2]; // [rsp+30h] [rbp-108h]
  _OWORD dest[10]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v59[5]; // [rsp+E0h] [rbp-58h]

  v4 = *a3;
  if ( *a3 <= 9 )
  {
    LOBYTE(v56[0]) = 0;
    v7 = 1;
    src = v56;
    v8 = v56;
LABEL_18:
    v17 = v4 + 48;
    goto LABEL_19;
  }
  v5 = *a3;
  v6 = 1;
  while ( 1 )
  {
    if ( v5 <= 0x63 )
    {
      ++v6;
      goto LABEL_9;
    }
    if ( v5 <= 0x3E7 )
    {
      v6 += 2;
      goto LABEL_9;
    }
    if ( v5 <= 0x270F )
      break;
    v6 += 4;
    if ( v5 <= 0x1869F )
      goto LABEL_9;
    v5 /= 0x2710u;
  }
  v6 += 3;
LABEL_9:
  LOBYTE(v56[0]) = 0;
  v7 = v6;
  src = v56;
  v8 = v56;
  n = 0;
  if ( v6 > 0xF )
  {
    if ( v6 <= 0x1DuLL )
    {
      v51 = 30;
      v9 = 31;
    }
    else
    {
      v51 = v6;
      v9 = v6 + 1LL;
    }
    v10 = (_BYTE *)operator new(v9);
    v11 = src;
    v8 = v10;
    *v10 = *(_BYTE *)src;
    if ( v11 != v56 )
      operator delete(v11, v56[0] + 1LL);
    src = v8;
    v56[0] = v51;
  }
  v12 = v6 - 1;
  *(__m128i *)v57 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  dest[0] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  dest[1] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
  dest[2] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  dest[3] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  dest[4] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  dest[5] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  dest[6] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  dest[7] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  dest[8] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  dest[9] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v59[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)v59 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  if ( v4 > 0x63 )
  {
    do
    {
      v13 = v4 % 0x64;
      v14 = v4;
      v4 /= 0x64u;
      v15 = 2 * v13;
      v8[v12] = *((_BYTE *)v57 + (unsigned int)(v15 + 1));
      v16 = v12 - 1;
      v12 -= 2;
      v8[v16] = *((_BYTE *)v57 + v15);
    }
    while ( v14 > 0x270F );
    if ( v14 <= 0x3E7 )
      goto LABEL_18;
  }
  v25 = 2 * v4;
  v8[1] = *((_BYTE *)v57 + (unsigned int)(v25 + 1));
  v17 = *((_BYTE *)v57 + v25);
LABEL_19:
  *v8 = v17;
  n = v7;
  *((_BYTE *)src + v7) = 0;
  v18 = n;
  v57[0] = dest;
  v19 = (void *)(n + 2);
  strcpy((char *)dest, "id");
  v57[1] = &dword_0 + 2;
  if ( n + 2 <= 0xF )
  {
    if ( n <= 0x7FFFFFFFFFFFFFFDLL )
    {
      if ( n )
      {
        if ( n == 1 )
          BYTE2(dest[0]) = *(_BYTE *)src;
        else
          memcpy((char *)dest + 2, src, n);
      }
      v23 = dest;
      goto LABEL_33;
    }
    goto LABEL_81;
  }
  if ( src == v56 )
  {
    v35 = (_WORD *)operator new(0x1Fu);
    v22 = v57[0];
    v23 = v35;
    v24 = src;
    v52 = 30;
    *v35 = *(_WORD *)v57[0];
LABEL_62:
    v53 = v22;
    memcpy((char *)v23 + 2, v24, v18);
    v22 = v53;
LABEL_26:
    if ( v22 != dest )
      operator delete(v22, *(_QWORD *)&dest[0] + 1LL);
    v57[0] = v23;
    *(_QWORD *)&dest[0] = v52;
LABEL_33:
    v57[1] = v19;
    v26 = a1 + 2;
    *((_BYTE *)v23 + v18 + 2) = 0;
    v27 = v57[0];
    *a1 = a1 + 2;
    v28 = v57[1];
    if ( v27 == dest )
    {
      v34 = LODWORD(v57[1]) + 1;
      if ( (unsigned int)(LODWORD(v57[1]) + 1) >= 8 )
      {
        a1[2] = *(_QWORD *)&dest[0];
        *(_QWORD *)((char *)v26 + v34 - 8) = *(void **)((char *)&v57[1] + v34);
        v36 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v37 = (char *)v26 - v36;
        v38 = (char *)((char *)dest - v37);
        v39 = ((_DWORD)v37 + v34) & 0xFFFFFFF8;
        if ( v39 >= 8 )
        {
          v40 = v39 & 0xFFFFFFF8;
          v41 = 0;
          do
          {
            v42 = v41;
            v41 += 8;
            *(_QWORD *)(v36 + v42) = *(_QWORD *)&v38[v42];
          }
          while ( v41 < v40 );
        }
      }
      else if ( (v34 & 4) != 0 )
      {
        *((_DWORD *)a1 + 4) = dest[0];
        *(_DWORD *)((char *)v26 + v34 - 4) = *(_DWORD *)((char *)&v57[1] + v34 + 4);
      }
      else if ( LODWORD(v57[1]) != -1 )
      {
        *((_BYTE *)a1 + 16) = dest[0];
        if ( (v34 & 2) != 0 )
          *(_WORD *)((char *)v26 + v34 - 2) = *(_WORD *)((char *)&v57[1] + v34 + 6);
      }
    }
    else
    {
      *a1 = v27;
      a1[2] = *(_QWORD *)&dest[0];
    }
    a1[1] = v28;
    goto LABEL_36;
  }
  if ( v56[0] < (unsigned __int64)v19 )
  {
    if ( n <= 0x7FFFFFFFFFFFFFFDLL )
    {
      if ( (unsigned __int64)v19 <= 0x1D )
      {
        v52 = 30;
        v20 = 31;
      }
      else
      {
        v52 = n + 2;
        v20 = n + 3;
        if ( (__int64)(n + 3) < 0 )
          std::__throw_bad_alloc();
      }
      v21 = (_WORD *)operator new(v20);
      v22 = v57[0];
      v23 = v21;
      v24 = src;
      *v21 = *(_WORD *)v57[0];
      if ( !v24 )
        goto LABEL_26;
      goto LABEL_62;
    }
LABEL_81:
    std::__throw_length_error("basic_string::append");
  }
  if ( n == 0x7FFFFFFFFFFFFFFFLL || n == 9223372036854775806LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( dest < src || (char *)src + n < (char *)dest )
  {
    memmove((char *)src + 2, src, n);
    *(_WORD *)src = dest[0];
  }
  else
  {
    std::string::_M_replace_cold();
  }
  n = (size_t)v19;
  v30 = a1 + 2;
  *((_BYTE *)src + v18 + 2) = 0;
  v31 = src;
  *a1 = a1 + 2;
  v32 = n;
  if ( v31 == v56 )
  {
    v43 = n + 1;
    if ( (unsigned int)(n + 1) >= 8 )
    {
      a1[2] = v56[0];
      *(_QWORD *)((char *)v30 + v43 - 8) = *(_QWORD *)((char *)&v56[-1] + v43);
      v44 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v45 = (char *)v30 - v44;
      v46 = (char *)((char *)v56 - v45);
      v47 = ((_DWORD)v45 + v43) & 0xFFFFFFF8;
      if ( v47 >= 8 )
      {
        v48 = v47 & 0xFFFFFFF8;
        v49 = 0;
        do
        {
          v50 = v49;
          v49 += 8;
          *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
        }
        while ( v49 < v48 );
      }
    }
    else if ( (v43 & 4) != 0 )
    {
      *((_DWORD *)a1 + 4) = v56[0];
      *(_DWORD *)((char *)v30 + v43 - 4) = *(_DWORD *)((char *)&n + v43 + 4);
    }
    else if ( (_DWORD)n != -1 )
    {
      *((_BYTE *)a1 + 16) = v56[0];
      if ( (v43 & 2) != 0 )
        *(_WORD *)((char *)v30 + v43 - 2) = *(_WORD *)((char *)&n + v43 + 6);
    }
  }
  else
  {
    *a1 = v31;
    a1[2] = v56[0];
  }
  v33 = v57[0];
  a1[1] = v32;
  src = v56;
  n = 0;
  LOBYTE(v56[0]) = 0;
  if ( v33 != dest )
    operator delete(v33, *(_QWORD *)&dest[0] + 1LL);
LABEL_36:
  if ( src != v56 )
    operator delete(src, v56[0] + 1LL);
  return a1;
}

