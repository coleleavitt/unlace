__int64 __fastcall sub_2228F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi

  *a1 = off_4B2278;
  v2 = a1[34];
  if ( v2 )
  {
    a1[35] = 0;
    qfree(v2);
  }
  clear_tinfo_t(a1 + 29);
  v3 = a1[26];
  if ( v3 )
  {
    a1[27] = 0;
    qfree(v3);
  }
  clear_tinfo_t(a1 + 21);
  v4 = a1[18];
  if ( v4 )
  {
    a1[19] = 0;
    qfree(v4);
  }
  result = a1[11];
  if ( result )
  {
    v6 = *(_QWORD *)result;
    if ( !a1[12] )
    {
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)result & 3LL;
      *(__m128i *)(a1[11] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[11],
                                     (__m128i)(unsigned __int64)a1[11]);
      *(_QWORD *)a1[11] &= ~1uLL;
      result = a1[11];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_10;
    }
    v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_33:
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | v6 & 3;
      *(__m128i *)(a1[11] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[11],
                                     (__m128i)(unsigned __int64)a1[11]);
      *(_QWORD *)a1[11] &= ~1uLL;
      result = a1[11];
      *(_QWORD *)result |= 2uLL;
      a1[12] = 0;
LABEL_10:
      v7 = a1[11];
      if ( v7 )
        return qfree(v7);
      return result;
    }
    v9 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v8 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_35;
      goto LABEL_28;
    }
    v10 = *(_QWORD **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_17:
        v12 = *(_QWORD *)(v9 + 88);
        if ( v12 )
        {
          *(_QWORD *)(v9 + 96) = 0;
          qfree(v12);
        }
        clear_tinfo_t(v9 + 48);
        v13 = *(_QWORD *)(v9 + 24);
        if ( v13 )
        {
          *(_QWORD *)(v9 + 32) = 0;
          qfree(v13);
        }
        *(_QWORD *)v9 |= 2uLL;
LABEL_25:
        if ( v9 )
          qfree(v9);
        v14 = *(_QWORD **)(v8 + 16);
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
LABEL_29:
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_30:
            if ( v6 > 3 )
              qfree(v6 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[11];
            v6 = *(_QWORD *)result;
            goto LABEL_33;
          }
LABEL_35:
          v15 = *(_QWORD *)(v8 + 88);
          if ( v15 )
          {
            *(_QWORD *)(v8 + 96) = 0;
            qfree(v15);
          }
          clear_tinfo_t(v8 + 48);
          v16 = *(_QWORD *)(v8 + 24);
          if ( v16 )
          {
            *(_QWORD *)(v8 + 32) = 0;
            qfree(v16);
          }
          *(_QWORD *)v8 |= 2uLL;
          goto LABEL_30;
        }
LABEL_28:
        sub_222770(v14);
        goto LABEL_29;
      }
    }
    else
    {
      sub_222770(v10);
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_24;
    }
    sub_222770(v11);
LABEL_24:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_25;
    goto LABEL_17;
  }
  return result;
}
