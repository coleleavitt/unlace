__int64 __fastcall sub_2733E0(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 *v9; // rax
  __int64 v10; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_8;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_27:
      v7 = *(unsigned __int64 **)(v2 + 32);
      if ( v7 )
      {
        if ( *(_QWORD *)(v2 + 40) )
        {
          sub_272BB0((_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL));
          **(_QWORD **)(v2 + 32) = *(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v2 + 32) & 3LL;
          *(__m128i *)(*(_QWORD *)(v2 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32));
          **(_QWORD **)(v2 + 32) &= ~1uLL;
          **(_QWORD **)(v2 + 32) |= 2uLL;
          *(_QWORD *)(v2 + 40) = 0;
        }
        else
        {
          *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(*(_QWORD *)(v2 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32));
          **(_QWORD **)(v2 + 32) &= ~1uLL;
          **(_QWORD **)(v2 + 32) |= 2uLL;
        }
        v8 = *(_QWORD *)(v2 + 32);
        if ( v8 )
          qfree(v8);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_6;
    }
  }
  else
  {
    sub_2733E0();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_5;
  }
  sub_2733E0();
LABEL_5:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_27;
LABEL_6:
  if ( v2 )
    qfree(v2);
LABEL_8:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_15;
  if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
    {
LABEL_34:
      v9 = *(unsigned __int64 **)(v3 + 32);
      if ( v9 )
      {
        if ( *(_QWORD *)(v3 + 40) )
        {
          sub_272BB0((_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL));
          **(_QWORD **)(v3 + 32) = *(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v3 + 32) & 3LL;
          *(__m128i *)(*(_QWORD *)(v3 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v3 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v3 + 32));
          **(_QWORD **)(v3 + 32) &= ~1uLL;
          **(_QWORD **)(v3 + 32) |= 2uLL;
          *(_QWORD *)(v3 + 40) = 0;
        }
        else
        {
          *v9 = *v9 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(*(_QWORD *)(v3 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v3 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v3 + 32));
          **(_QWORD **)(v3 + 32) &= ~1uLL;
          **(_QWORD **)(v3 + 32) |= 2uLL;
        }
        v10 = *(_QWORD *)(v3 + 32);
        if ( v10 )
          qfree(v10);
      }
      *(_QWORD *)v3 |= 2uLL;
      goto LABEL_13;
    }
  }
  else
  {
    sub_2733E0();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_12;
  }
  sub_2733E0();
LABEL_12:
  if ( (*(_BYTE *)v3 & 2) == 0 )
    goto LABEL_34;
LABEL_13:
  if ( v3 )
    qfree(v3);
LABEL_15:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      if ( a1[5] )
      {
        sub_272BB0((_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL));
        *(_QWORD *)a1[4] = a1[4] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a1[4] & 3LL;
        *(__m128i *)(a1[4] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
        *(_QWORD *)a1[4] &= ~1uLL;
        *(_QWORD *)a1[4] |= 2uLL;
        a1[5] = 0;
      }
      else
      {
        *(_QWORD *)v5 = *(_QWORD *)v5 & 3LL | v5 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(a1[4] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
        *(_QWORD *)a1[4] &= ~1uLL;
        *(_QWORD *)a1[4] |= 2uLL;
      }
      v6 = a1[4];
      if ( v6 )
        qfree(v6);
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
