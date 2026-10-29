__int64 __fastcall sub_29F190(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r12
  _BYTE *v10; // rdi
  _BYTE *v11; // rdi

  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  v2 = (unsigned __int64 *)a1[4];
  if ( v2 )
  {
    v3 = *v2;
    if ( !a1[5] )
    {
      *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[4] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
      *(_QWORD *)a1[4] &= ~1uLL;
      *(_QWORD *)a1[4] |= 2uLL;
      goto LABEL_6;
    }
    v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[4] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
      *(_QWORD *)a1[4] &= ~1uLL;
      *(_QWORD *)a1[4] |= 2uLL;
      a1[5] = 0;
LABEL_6:
      if ( a1[4] )
        qfree();
      goto LABEL_8;
    }
    v7 = *(_QWORD **)(v6 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = *(_QWORD **)(v6 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_299640(v7);
      v8 = *(_QWORD **)(v6 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_17;
    }
    sub_299640(v8);
LABEL_17:
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_18:
      if ( v3 > 3 )
        qfree();
      v2 = (unsigned __int64 *)a1[4];
      v3 = *v2;
      goto LABEL_21;
    }
LABEL_35:
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)v6 |= 2uLL;
    goto LABEL_18;
  }
LABEL_8:
  result = a1[2];
  if ( !result )
    return result;
  v5 = *(_QWORD *)result;
  if ( !a1[3] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
    *(_QWORD *)a1[2] &= ~1uLL;
    result = a1[2];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_11;
  }
  v9 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v10 = *(_BYTE **)(v9 + 8);
    if ( (*v10 & 2) != 0 )
    {
      v11 = *(_BYTE **)(v9 + 16);
      if ( (*v11 & 2) != 0 )
        goto LABEL_34;
    }
    else
    {
      sub_29F060((__int64)v10);
      v11 = *(_BYTE **)(v9 + 16);
      if ( (*v11 & 2) != 0 )
        goto LABEL_25;
    }
    sub_29F060((__int64)v11);
LABEL_25:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
LABEL_26:
      if ( v5 > 3 )
        qfree();
      result = a1[2];
      v5 = *(_QWORD *)result;
      goto LABEL_29;
    }
LABEL_34:
    *(_DWORD *)(v9 + 56) = -1;
    sub_29EC30(v9 + 40);
    sub_29EC30(v9 + 24);
    *(_QWORD *)v9 |= 2uLL;
    goto LABEL_26;
  }
LABEL_29:
  *(_QWORD *)result = v5 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
  *(_QWORD *)a1[2] &= ~1uLL;
  result = a1[2];
  *(_QWORD *)result |= 2uLL;
  a1[3] = 0;
LABEL_11:
  if ( a1[2] )
    return qfree();
  return result;
}
