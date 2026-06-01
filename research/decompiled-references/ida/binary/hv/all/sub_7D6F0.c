__int64 __fastcall sub_7D6F0(__int64 a1)
{
  __int64 v1; // r15
  __m128i v2; // xmm2
  unsigned int v3; // eax
  char *v4; // r14
  unsigned __int64 v5; // r12
  __m128i v6; // xmm3
  unsigned __int16 epi16; // bp
  char *v8; // rax
  unsigned __int16 v9; // bx
  unsigned int v10; // eax
  void *v11; // rdi
  __int64 v12; // r13
  __m128i v13; // xmm0
  unsigned __int16 v14; // cx
  __int64 v15; // rax
  bool v16; // cf
  void *v17; // rdi
  __m128i si128; // xmm4
  __int64 result; // rax
  const char *v20; // rsi
  unsigned int v21; // eax
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  char *s1; // [rsp+10h] [rbp-58h]
  unsigned int v24; // [rsp+1Ch] [rbp-4Ch]
  __m128i v25[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1;
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_DWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(char **)a1;
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = 0;
  v6 = _mm_cvtsi32_si128(v3);
  v24 = v3;
  v25[0] = v2;
  epi16 = _mm_extract_epi16(v6, 1);
  v8 = (char *)haystack;
  if ( v2.m128i_i64[0] )
    v8 = v4;
  v9 = _mm_extract_epi16(v6, 0);
  s1 = v8;
  while ( 1 )
  {
    v14 = *(_WORD *)(v1 - 8);
    v16 = v9 < v14;
    if ( v9 != v14 )
      break;
    LOWORD(v10) = *(_WORD *)(v1 - 6);
    if ( (_WORD)v10 == epi16 )
    {
      v16 = v5 < *(_QWORD *)(v1 - 16);
      if ( v5 != *(_QWORD *)(v1 - 16) )
        break;
      v20 = haystack;
      if ( *(_QWORD *)(v1 - 32) )
        v20 = *(const char **)(v1 - 40);
      v22.m128i_i32[0] = *(unsigned __int16 *)(v1 - 8);
      v21 = strcmp(s1, v20);
      v14 = v22.m128i_i16[0];
      v10 = v21 >> 31;
    }
    else
    {
      LOBYTE(v10) = epi16 < (unsigned __int16)v10;
    }
    if ( !(_BYTE)v10 )
      goto LABEL_12;
LABEL_7:
    v11 = *(void **)v1;
    v12 = *(_QWORD *)(v1 - 40);
    *(_QWORD *)(v1 - 40) = 0;
    v13 = _mm_loadu_si128((const __m128i *)(v1 - 32));
    *(_OWORD *)(v1 - 32) = 0;
    if ( v11 )
    {
      *(_QWORD *)(v1 + 8) = 0;
      v22 = v13;
      j__free(v11);
      v14 = *(_WORD *)(v1 - 8);
      v13 = _mm_load_si128(&v22);
    }
    v15 = *(_QWORD *)(v1 - 16);
    *(_QWORD *)v1 = v12;
    v1 -= 40;
    *(_WORD *)(v1 + 72) = v14;
    *(_QWORD *)(v1 + 64) = v15;
    LOWORD(v15) = *(_WORD *)(v1 + 34);
    *(__m128i *)(v1 + 48) = v13;
    *(_WORD *)(v1 + 74) = v15;
  }
  if ( v16 )
    goto LABEL_7;
LABEL_12:
  v17 = *(void **)v1;
  if ( *(_QWORD *)v1 )
  {
    *(_QWORD *)(v1 + 8) = 0;
    j__free(v17);
  }
  si128 = _mm_load_si128(v25);
  result = v24;
  *(_QWORD *)v1 = v4;
  *(_QWORD *)(v1 + 24) = v5;
  *(_DWORD *)(v1 + 32) = result;
  *(__m128i *)(v1 + 8) = si128;
  return result;
}

