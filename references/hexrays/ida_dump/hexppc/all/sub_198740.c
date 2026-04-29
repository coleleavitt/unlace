__int64 __fastcall sub_198740(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 *v11; // rdi

  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3);
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4);
  }
  result = a1[1];
  if ( result )
  {
    v6 = *(_QWORD *)result;
    if ( !a1[2] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_10;
    }
    v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v9 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 2) != 0 )
    {
LABEL_20:
      *(_QWORD *)result = v6 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      a1[2] = 0;
LABEL_10:
      v7 = a1[1];
      if ( v7 )
        return qfree(v7);
      return result;
    }
    v10 = (__int64 *)v8[1];
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_23;
    }
    else
    {
      sub_192A10(v10);
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_16;
    }
    sub_192A10(v11);
LABEL_16:
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
    {
LABEL_17:
      if ( v6 > 3 )
        qfree(v6 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[1];
      v6 = *(_QWORD *)result;
      goto LABEL_20;
    }
LABEL_23:
    *v8 = v9 | 2;
    goto LABEL_17;
  }
  return result;
}
