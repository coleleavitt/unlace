__int64 __fastcall sub_186A10(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int64 v12; // rdi

  v2 = a1[16];
  if ( v2 )
  {
    a1[17] = 0;
    qfree(v2);
  }
  v3 = a1[13];
  if ( v3 )
  {
    a1[14] = 0;
    qfree(v3);
  }
  qfree(a1[11]);
  v4 = a1[8];
  if ( v4 )
  {
    a1[9] = 0;
    qfree(v4);
  }
  qfree(a1[6]);
  v5 = a1[3];
  if ( v5 )
  {
    a1[4] = 0;
    qfree(v5);
  }
  result = a1[1];
  if ( result )
  {
    v7 = *(_QWORD *)result;
    if ( !a1[2] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_12;
    }
    v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_22:
      *(_QWORD *)result = v7 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      a1[2] = 0;
LABEL_12:
      v8 = a1[1];
      if ( v8 )
        return qfree(v8);
      return result;
    }
    v10 = *(__int64 **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(__int64 **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_25;
    }
    else
    {
      sub_185690(v10);
      v11 = *(__int64 **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_18;
    }
    sub_185690(v11);
LABEL_18:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
LABEL_19:
      if ( v7 > 3 )
        qfree(v7 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[1];
      v7 = *(_QWORD *)result;
      goto LABEL_22;
    }
LABEL_25:
    v12 = *(_QWORD *)(v9 + 32);
    if ( v12 )
    {
      *(_QWORD *)(v9 + 40) = 0;
      qfree(v12);
    }
    *(_QWORD *)v9 |= 2uLL;
    goto LABEL_19;
  }
  return result;
}
