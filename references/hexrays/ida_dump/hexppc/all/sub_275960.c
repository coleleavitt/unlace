unsigned __int64 *__fastcall sub_275960(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 v8; // r13
  unsigned __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  unsigned __int64 *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 *v15; // rax
  __int64 v16; // rdi

  result = *a1;
  if ( !*a1 )
    goto LABEL_24;
  v3 = *result;
  if ( !a1[1] )
  {
    *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | *result & 3;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v8 = *(_QWORD *)(v4 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_14;
      goto LABEL_26;
    }
    v6 = *(__int64 **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_35:
        v15 = *(unsigned __int64 **)(v5 + 32);
        if ( v15 )
        {
          if ( *(_QWORD *)(v5 + 40) )
          {
            sub_2742F0((_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL));
            **(_QWORD **)(v5 + 32) = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v5 + 32) & 3LL;
            *(__m128i *)(*(_QWORD *)(v5 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                         (__m128i)*(unsigned __int64 *)(v5 + 32),
                                                         (__m128i)*(unsigned __int64 *)(v5 + 32));
            **(_QWORD **)(v5 + 32) &= ~1uLL;
            **(_QWORD **)(v5 + 32) |= 2uLL;
            *(_QWORD *)(v5 + 40) = 0;
          }
          else
          {
            *v15 = *v15 & 3 | (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(v5 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                         (__m128i)*(unsigned __int64 *)(v5 + 32),
                                                         (__m128i)*(unsigned __int64 *)(v5 + 32));
            **(_QWORD **)(v5 + 32) &= ~1uLL;
            **(_QWORD **)(v5 + 32) |= 2uLL;
          }
          v16 = *(_QWORD *)(v5 + 32);
          if ( v16 )
            qfree(v16);
        }
        *(_QWORD *)v5 |= 2uLL;
LABEL_10:
        if ( v5 )
          qfree(v5);
        v8 = *(_QWORD *)(v4 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_13:
          if ( (*(_BYTE *)v4 & 2) != 0 )
          {
LABEL_20:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            result = *a1;
            v3 = **a1;
            goto LABEL_23;
          }
LABEL_14:
          v9 = *(unsigned __int64 **)(v4 + 32);
          if ( v9 )
          {
            if ( *(_QWORD *)(v4 + 40) )
            {
              sub_2742F0((_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL));
              **(_QWORD **)(v4 + 32) = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v4 + 32) & 3LL;
              *(__m128i *)(*(_QWORD *)(v4 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                           (__m128i)*(unsigned __int64 *)(v4 + 32),
                                                           (__m128i)*(unsigned __int64 *)(v4 + 32));
              **(_QWORD **)(v4 + 32) &= ~1uLL;
              **(_QWORD **)(v4 + 32) |= 2uLL;
              *(_QWORD *)(v4 + 40) = 0;
            }
            else
            {
              *v9 = *v9 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
              *(__m128i *)(*(_QWORD *)(v4 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                           (__m128i)*(unsigned __int64 *)(v4 + 32),
                                                           (__m128i)*(unsigned __int64 *)(v4 + 32));
              **(_QWORD **)(v4 + 32) &= ~1uLL;
              **(_QWORD **)(v4 + 32) |= 2uLL;
            }
            v10 = *(_QWORD *)(v4 + 32);
            if ( v10 )
              qfree(v10);
          }
          *(_QWORD *)v4 |= 2uLL;
          goto LABEL_20;
        }
LABEL_26:
        v11 = *(__int64 **)(v8 + 8);
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          v12 = *(__int64 **)(v8 + 16);
          if ( (*(_BYTE *)v12 & 2) != 0 )
            goto LABEL_28;
        }
        else
        {
          sub_274B20(v11);
          v12 = *(__int64 **)(v8 + 16);
          if ( (*(_BYTE *)v12 & 2) != 0 )
            goto LABEL_43;
        }
        sub_274B20(v12);
LABEL_43:
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_44:
          if ( v8 )
            qfree(v8);
          goto LABEL_13;
        }
LABEL_28:
        v13 = *(unsigned __int64 **)(v8 + 32);
        if ( v13 )
        {
          if ( *(_QWORD *)(v8 + 40) )
          {
            sub_2742F0((_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL));
            **(_QWORD **)(v8 + 32) = *(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v8 + 32) & 3LL;
            *(__m128i *)(*(_QWORD *)(v8 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                         (__m128i)*(unsigned __int64 *)(v8 + 32),
                                                         (__m128i)*(unsigned __int64 *)(v8 + 32));
            **(_QWORD **)(v8 + 32) &= ~1uLL;
            **(_QWORD **)(v8 + 32) |= 2uLL;
            *(_QWORD *)(v8 + 40) = 0;
          }
          else
          {
            *v13 = *v13 & 3 | (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(v8 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                         (__m128i)*(unsigned __int64 *)(v8 + 32),
                                                         (__m128i)*(unsigned __int64 *)(v8 + 32));
            **(_QWORD **)(v8 + 32) &= ~1uLL;
            **(_QWORD **)(v8 + 32) |= 2uLL;
          }
          v14 = *(_QWORD *)(v8 + 32);
          if ( v14 )
            qfree(v14);
        }
        *(_QWORD *)v8 |= 2uLL;
        goto LABEL_44;
      }
    }
    else
    {
      sub_274B20(v6);
      v7 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_9;
    }
    sub_274B20(v7);
LABEL_9:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_10;
    goto LABEL_35;
  }
LABEL_23:
  *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | v3 & 3;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_24:
  a1[1] = nullptr;
  return result;
}
