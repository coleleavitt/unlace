__int64 __fastcall sub_6370E0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  const char *v7; // rsi
  void (__fastcall *v8)(__int64, const char *, __int64); // rax
  int ordinal_limit; // eax
  __int64 v10; // r14
  __int64 v11; // rbp
  int v12; // r15d
  unsigned __int8 v13; // al
  int v14; // r12d
  int v15; // ebp
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned int v18; // edx
  _BYTE *v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // r8
  unsigned __int64 v23; // r14
  __m128i si128; // xmm0
  char *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-60h]
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v28; // [rsp+10h] [rbp-50h]
  unsigned __int64 v29; // [rsp+20h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v5 = a3 & 8;
  v28 = 0;
  ptr = nullptr;
  if ( !(_DWORD)v5 )
  {
    if ( (a3 & 4) == 0 )
    {
      v6 = *(_QWORD *)a2;
      v7 = haystack;
      v8 = *(void (__fastcall **)(__int64, const char *, __int64))(v6 + 16);
      goto LABEL_4;
    }
    v20 = nullptr;
    v23 = 90;
    v22 = 89;
    v21 = 0;
LABEL_28:
    v26 = v22;
    ptr = (void *)qvector_reserve(&ptr, v20, v23, 1);
    v22 = v26;
    v20 = ptr;
    goto LABEL_24;
  }
  sub_3573A0((char **)&ptr);
  v5 = v28;
  if ( (a3 & 4) == 0 )
    goto LABEL_25;
  v20 = ptr;
  if ( (_QWORD)v28 )
  {
    v21 = v28 - 1;
    v22 = v28 + 88;
    v23 = v28 + 89;
  }
  else
  {
    v21 = 0;
    v23 = 90;
    v22 = 89;
  }
  if ( *((_QWORD *)&v28 + 1) < v23 )
    goto LABEL_28;
LABEL_24:
  *(_QWORD *)&v28 = v23;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383D60);
  v20[v22] = 0;
  v25 = (char *)ptr + v21;
  *(__m128i *)v25 = si128;
  v5 = v28;
  *((__m128i *)v25 + 1) = _mm_load_si128((const __m128i *)&xmmword_2383D70);
  *((__m128i *)v25 + 2) = _mm_load_si128((const __m128i *)&xmmword_2383D80);
  *((__m128i *)v25 + 3) = _mm_load_si128((const __m128i *)&xmmword_2383D90);
  *((__m128i *)v25 + 4) = _mm_load_si128((const __m128i *)&xmmword_2383DA0);
  *(__m128i *)(v25 + 73) = _mm_load_si128((const __m128i *)&xmmword_2383DB0);
LABEL_25:
  v7 = haystack;
  v8 = *(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v5 )
    v7 = (const char *)ptr;
LABEL_4:
  v8(a2, v7, v5);
  ordinal_limit = get_ordinal_limit(*a1);
  if ( ordinal_limit > 1 )
  {
    v10 = (unsigned int)(ordinal_limit - 1);
    v11 = 0;
    v12 = 0;
    do
    {
      while ( (*(_BYTE *)(a1[4] + v11) & 4) == 0 )
      {
        if ( ++v11 == v10 )
          goto LABEL_9;
      }
      v13 = sub_636F40(a1, a2, (int)v11++ + 1);
      v12 += v13;
    }
    while ( v11 != v10 );
LABEL_9:
    if ( v12 > 0 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 16LL))(a2, "\n");
  }
  v14 = a3 & 0x10;
  if ( a1[2] )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = *(_DWORD *)(a1[1] + 4 * v17);
      if ( !v14 || (*(_BYTE *)(a1[4] + v18 - 1) & 0x10) == 0 )
        v16 += (unsigned __int8)sub_636D30(a1, a2, v18);
      v17 = ++v15;
    }
    while ( v15 < (unsigned __int64)a1[2] );
  }
  else
  {
    v16 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v16;
}

