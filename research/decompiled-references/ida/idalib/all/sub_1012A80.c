__int64 __fastcall sub_1012A80(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  const void *v9; // rsi
  __int64 v10; // rdx
  size_t v12; // rdx
  size_t v13; // rdx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = (_BYTE *)(a2 + 40);
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v5 = *(_BYTE **)(a2 + 24);
  v6 = *(_BYTE **)(a1 + 24);
  if ( v5 == v4 )
  {
    v12 = *(_QWORD *)(a2 + 32);
    if ( v12 )
    {
      if ( v12 == 1 )
        *v6 = *(_BYTE *)(a2 + 40);
      else
        memcpy(v6, v5, v12);
      v12 = *(_QWORD *)(a2 + 32);
      v6 = *(_BYTE **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = v12;
    v6[v12] = 0;
    v6 = *(_BYTE **)(a2 + 24);
  }
  else
  {
    if ( v6 == (_BYTE *)(a1 + 40) )
    {
      *(_QWORD *)(a1 + 24) = v5;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v5;
      v7 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
      if ( v6 )
      {
        *(_QWORD *)(a2 + 24) = v6;
        *(_QWORD *)(a2 + 40) = v7;
        goto LABEL_5;
      }
    }
    *(_QWORD *)(a2 + 24) = v4;
    v6 = v4;
  }
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  *v6 = 0;
  v8 = *(_BYTE **)(a1 + 64);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v9 = *(const void **)(a2 + 64);
  if ( v9 != (const void *)(a2 + 80) )
  {
    if ( v8 == (_BYTE *)(a1 + 80) )
    {
      *(_QWORD *)(a1 + 64) = v9;
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
    }
    else
    {
      *(_QWORD *)(a1 + 64) = v9;
      v10 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
      if ( v8 )
      {
        *(_QWORD *)(a2 + 64) = v8;
        *(_QWORD *)(a2 + 80) = v10;
        goto LABEL_9;
      }
    }
    *(_QWORD *)(a2 + 64) = a2 + 80;
    v8 = (_BYTE *)(a2 + 80);
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(a2 + 72);
  if ( v13 )
  {
    if ( v13 == 1 )
      *v8 = *(_BYTE *)(a2 + 80);
    else
      memcpy(v8, v9, v13);
    v13 = *(_QWORD *)(a2 + 72);
    v8 = *(_BYTE **)(a1 + 64);
  }
  *(_QWORD *)(a1 + 72) = v13;
  v8[v13] = 0;
  v8 = *(_BYTE **)(a2 + 64);
LABEL_9:
  *(_QWORD *)(a2 + 72) = 0;
  *v8 = 0;
  sub_CEFDD0(a1 + 96, a2 + 96);
  return a1;
}
