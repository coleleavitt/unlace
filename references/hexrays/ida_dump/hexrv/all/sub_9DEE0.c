__int64 __fastcall sub_9DEE0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 *v11; // rdi

  if ( *a1 )
    sub_100950();
  result = a1[2];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[3] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *(_QWORD *)a1[2] &= ~1uLL;
      result = a1[2];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_6;
    }
    v5 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v6 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 2) != 0 )
    {
LABEL_23:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *(_QWORD *)a1[2] &= ~1uLL;
      result = a1[2];
      *(_QWORD *)result |= 2uLL;
      a1[3] = 0;
LABEL_6:
      v4 = a1[2];
      if ( v4 )
        return qfree(v4);
      return result;
    }
    v7 = (__int64 *)v5[1];
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
      v11 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
      {
LABEL_27:
        *v7 = v8 | 2;
LABEL_15:
        if ( v7 )
          qfree(v7);
        v11 = (__int64 *)v5[2];
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
LABEL_19:
          v6 = *v5;
          if ( (*v5 & 2) != 0 )
          {
LABEL_20:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[2];
            v3 = *(_QWORD *)result;
            goto LABEL_23;
          }
LABEL_25:
          *v5 = v6 | 2;
          goto LABEL_20;
        }
LABEL_18:
        sub_9CC60(v11);
        goto LABEL_19;
      }
    }
    else
    {
      sub_9CC60(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_14;
    }
    sub_9CC60(v10);
LABEL_14:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
      goto LABEL_15;
    goto LABEL_27;
  }
  return result;
}
