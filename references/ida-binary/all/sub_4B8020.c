__int64 __fastcall sub_4B8020(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  const char *v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __m128i si128; // xmm1
  unsigned __int64 v13; // rbp
  __int64 v15; // rax
  const char *v16; // r13
  void *v17; // rax

  v3 = xmmword_8D1D08;
  if ( !(_QWORD)xmmword_8D1D08 )
  {
LABEL_10:
    v10 = 0;
    if ( a2 )
    {
      if ( a3 )
        *a3 = v3;
      v11 = qword_8D1D00;
      if ( *((_QWORD *)&xmmword_8D1D08 + 1) < (unsigned __int64)(v3 + 1) )
      {
        v15 = qvector_reserve(&qword_8D1D00, qword_8D1D00, v3 + 1, 120);
        v3 = xmmword_8D1D08;
        qword_8D1D00 = v15;
        v11 = v15;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      v10 = v11 + 120 * v3;
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)&xmmword_8D1D08 = xmmword_8D1D08 + 1;
      *(_QWORD *)(v10 + 48) = 0;
      *(_QWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 112) = 0;
      *(_OWORD *)(v10 + 32) = 0;
      *(_OWORD *)(v10 + 56) = 0;
      *(__m128i *)(v10 + 72) = si128;
      *(_OWORD *)(v10 + 88) = 0;
      if ( v10 != a1 )
      {
        v13 = *(_QWORD *)(a1 + 8);
        if ( v13 > 1 )
        {
          v16 = *(const char **)a1;
          v17 = (void *)qvector_reserve(v10, *(_QWORD *)v10, *(_QWORD *)(a1 + 8), 1);
          *(_QWORD *)(v10 + 8) = v13;
          *(_QWORD *)v10 = v17;
          memmove(v17, v16, v13 - 1);
          *(_BYTE *)(*(_QWORD *)v10 + v13 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v10 + 8) = 0;
        }
      }
    }
    return v10;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = qword_8D1D00;
  v6 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + 8);
    v10 = v5;
    if ( v4 )
    {
      v7 = &s1;
      v8 = *(const char **)a1;
      if ( !v9 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v9 )
      break;
    v8 = &s1;
LABEL_9:
    v7 = *(const char **)v5;
LABEL_4:
    if ( !strcmp(v7, v8) )
      break;
    ++v6;
    v5 += 120;
    if ( v3 == v6 )
      goto LABEL_10;
  }
  if ( a3 )
    *a3 = v6;
  return v10;
}
