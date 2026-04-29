__int64 __fastcall sub_318770(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  *a1 = &off_4E3320;
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  result = a1[1];
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( !a1[2] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_8;
    }
    v7 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 2) != 0 )
    {
LABEL_18:
      *(_QWORD *)result = v5 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      a1[2] = 0;
LABEL_8:
      v6 = a1[1];
      if ( v6 )
        return qfree(v6);
      return result;
    }
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_21;
    }
    else
    {
      sub_318680(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_14;
    }
    sub_318680(v10);
LABEL_14:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
LABEL_15:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[1];
      v5 = *(_QWORD *)result;
      goto LABEL_18;
    }
LABEL_21:
    *v7 = v8 | 2;
    goto LABEL_15;
  }
  return result;
}
