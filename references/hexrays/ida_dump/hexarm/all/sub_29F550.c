__int64 __fastcall sub_29F550(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r12
  _BYTE *v13; // rdi
  _BYTE *v14; // rdi

  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  v3 = (unsigned __int64 *)a1[4];
  if ( v3 )
  {
    v4 = *v3;
    if ( !a1[5] )
    {
      *v3 = *v3 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[4] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
      *(_QWORD *)a1[4] &= ~1uLL;
      *(_QWORD *)a1[4] |= 2uLL;
      goto LABEL_6;
    }
    v9 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *v3 = v4 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[4] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
      *(_QWORD *)a1[4] &= ~1uLL;
      *(_QWORD *)a1[4] |= 2uLL;
      a1[5] = 0;
LABEL_6:
      v5 = a1[4];
      if ( v5 )
        qfree(v5);
      goto LABEL_8;
    }
    v10 = *(_QWORD **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_299A00(v10);
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_17;
    }
    sub_299A00(v11);
LABEL_17:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
LABEL_18:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = (unsigned __int64 *)a1[4];
      v4 = *v3;
      goto LABEL_21;
    }
LABEL_35:
    clear_tinfo_t(v9 + 32);
    clear_tinfo_t(v9 + 24);
    *(_QWORD *)v9 |= 2uLL;
    goto LABEL_18;
  }
LABEL_8:
  result = a1[2];
  if ( !result )
    return result;
  v7 = *(_QWORD *)result;
  if ( !a1[3] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
    *(_QWORD *)a1[2] &= ~1uLL;
    result = a1[2];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_11;
  }
  v12 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v13 = *(_BYTE **)(v12 + 8);
    if ( (*v13 & 2) != 0 )
    {
      v14 = *(_BYTE **)(v12 + 16);
      if ( (*v14 & 2) != 0 )
        goto LABEL_34;
    }
    else
    {
      sub_29F420((__int64)v13);
      v14 = *(_BYTE **)(v12 + 16);
      if ( (*v14 & 2) != 0 )
        goto LABEL_25;
    }
    sub_29F420((__int64)v14);
LABEL_25:
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_26:
      if ( v7 > 3 )
        qfree(v7 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[2];
      v7 = *(_QWORD *)result;
      goto LABEL_29;
    }
LABEL_34:
    *(_DWORD *)(v12 + 56) = -1;
    sub_29EFF0(v12 + 40);
    sub_29EFF0(v12 + 24);
    *(_QWORD *)v12 |= 2uLL;
    goto LABEL_26;
  }
LABEL_29:
  *(_QWORD *)result = v7 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
  *(_QWORD *)a1[2] &= ~1uLL;
  result = a1[2];
  *(_QWORD *)result |= 2uLL;
  a1[3] = 0;
LABEL_11:
  v8 = a1[2];
  if ( v8 )
    return qfree(v8);
  return result;
}
