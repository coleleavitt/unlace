__int64 __fastcall sub_E15280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  int v8; // eax
  size_t v9; // rbp
  size_t v10; // r14
  const void *v11; // rcx
  const void *v12; // r15
  size_t v13; // r8
  int v14; // eax
  __m128i v15; // xmm1
  __int64 v16; // rax
  __m128i v17; // xmm0
  void *s2; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]

  v6 = a1;
  if ( a4 != a3 )
  {
    v7 = a3;
    if ( a2 != a1 )
    {
      do
      {
        v9 = *(_QWORD *)(v6 + 8);
        v10 = *(_QWORD *)(v7 + 8);
        v11 = *(const void **)v6;
        v12 = *(const void **)v7;
        v13 = v10;
        if ( v9 <= v10 )
          v13 = *(_QWORD *)(v6 + 8);
        if ( v13
          && (n = v13,
              s2 = *(void **)v6,
              v14 = memcmp(*(const void **)v6, *(const void **)v7, v13),
              v11 = s2,
              v13 = n,
              v14) )
        {
          if ( v14 >= 0 )
          {
            v8 = memcmp(v12, s2, n);
            if ( !v8 )
            {
              if ( v9 == v10 )
                goto LABEL_7;
LABEL_6:
              if ( v9 <= v10 )
                goto LABEL_7;
LABEL_8:
              v7 += 16;
              if ( a2 == v6 )
                break;
              continue;
            }
LABEL_26:
            if ( v8 >= 0 )
              goto LABEL_7;
            goto LABEL_8;
          }
        }
        else
        {
          if ( v9 == v10 )
          {
            if ( !v9 || (v8 = memcmp(v12, v11, v9)) == 0 )
            {
LABEL_7:
              v6 += 16;
              goto LABEL_8;
            }
            goto LABEL_26;
          }
          if ( v9 >= v10 )
          {
            if ( !v13 )
              goto LABEL_6;
            v8 = memcmp(v12, v11, v13);
            if ( !v8 )
              goto LABEL_6;
            goto LABEL_26;
          }
        }
        v15 = _mm_loadu_si128((const __m128i *)v6);
        a5 += 16;
        v6 += 16;
        *(__m128i *)(a5 - 16) = v15;
        if ( a2 == v6 )
          break;
      }
      while ( a4 != v7 );
    }
  }
  v16 = (a2 - v6) >> 4;
  if ( a2 - v6 > 0 )
  {
    do
    {
      v17 = _mm_loadu_si128((const __m128i *)v6);
      a5 += 16;
      v6 += 16;
      *(__m128i *)(a5 - 16) = v17;
      --v16;
    }
    while ( v16 );
  }
  return a5;
}

