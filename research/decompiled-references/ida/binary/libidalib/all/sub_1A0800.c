unsigned __int64 __fastcall sub_1A0800(__int64 a1, __int64 a2)
{
  size_t v4; // rbp
  void *v5; // r13
  size_t v6; // r15
  void *v7; // r14
  __int64 v8; // rdx
  char v9; // r8
  __int64 v10; // rsi
  __int16 v11; // bx
  __int64 v12; // rax
  unsigned __int64 result; // rax
  TView *v14; // rdi
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r13
  const void *v18; // r15
  void *v19; // rax
  const void *v20; // r15
  void *v21; // rdi
  __int64 v22; // rax
  char v23; // [rsp+Fh] [rbp-39h]

  if ( !*(_BYTE *)(a2 + 50) || !(_QWORD)xmmword_256FF8 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = nullptr;
    if ( v4 )
    {
      v7 = nullptr;
      v5 = (void *)qalloc_or_throw();
      memcpy(v5, *(const void **)a2, v4);
      v6 = *(_QWORD *)(a2 + 32);
      if ( !v6 )
        goto LABEL_5;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 32);
      v7 = nullptr;
      if ( !v6 )
      {
LABEL_5:
        v8 = xmmword_256FF8;
        v9 = *(_BYTE *)(a2 + 50);
        v10 = qword_256FF0;
        v11 = *(_WORD *)(a2 + 48);
        if ( *((_QWORD *)&xmmword_256FF8 + 1) < (unsigned __int64)(xmmword_256FF8 + 1) )
        {
          v23 = v9;
          qword_256FF0 = qvector_reserve();
          v8 = xmmword_256FF8;
          v10 = qword_256FF0;
          v9 = v23;
        }
        v12 = v10 + 56 * v8;
        *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
        *(_QWORD *)v12 = v5;
        *(_QWORD *)&xmmword_256FF8 = xmmword_256FF8 + 1;
        *(_QWORD *)(v12 + 24) = v7;
        *(_WORD *)(v12 + 48) = v11;
        *(_BYTE *)(v12 + 50) = v9;
        *(__m128i *)(v12 + 32) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
        goto LABEL_8;
      }
    }
    v7 = (void *)qalloc_or_throw();
    memcpy(v7, *(const void **)(a2 + 24), v6);
    goto LABEL_5;
  }
  v15 = qword_256FF0 + 56 * xmmword_256FF8 - 56;
  if ( a2 != v15 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 > 1 )
    {
      v20 = *(const void **)a2;
      v21 = *(void **)v15;
      if ( *(_QWORD *)(v15 + 16) < v16 )
      {
        v22 = qvector_reserve();
        *(_QWORD *)v15 = v22;
        v21 = (void *)v22;
      }
      *(_QWORD *)(v15 + 8) = v16;
      memmove(v21, v20, v16 - 1);
      *(_BYTE *)(*(_QWORD *)v15 + v16 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v15 + 8) = 0;
    }
  }
  if ( v15 + 24 != a2 + 24 )
  {
    v17 = *(_QWORD *)(a2 + 32);
    if ( v17 > 1 )
    {
      v18 = *(const void **)(a2 + 24);
      v19 = *(void **)(v15 + 24);
      if ( *(_QWORD *)(v15 + 40) < v17 )
      {
        v19 = (void *)qvector_reserve();
        *(_QWORD *)(v15 + 24) = v19;
      }
      *(_QWORD *)(v15 + 32) = v17;
      memmove(v19, v18, v17 - 1);
      *(_BYTE *)(*(_QWORD *)(v15 + 24) + v17 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v15 + 32) = 0;
    }
  }
  *(_BYTE *)(v15 + 48) = *(_BYTE *)(a2 + 48);
  *(_BYTE *)(v15 + 49) = *(_BYTE *)(a2 + 49);
  *(_BYTE *)(v15 + 50) = *(_BYTE *)(a2 + 50);
LABEL_8:
  result = *(_QWORD *)(a1 + 8);
  v14 = *(TView **)(result + 240);
  if ( v14 )
  {
    result = xmmword_256FF8;
    if ( (_QWORD)xmmword_256FF8 )
      return sub_1A04F0(v14, qword_256FF0 + 56 * xmmword_256FF8 - 56);
  }
  return result;
}

