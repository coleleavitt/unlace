__int64 __fastcall sub_1B52E0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  *a1 = &off_4BEF68;
  qfree(a1[8]);
  result = a1[6];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[7] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_4;
    }
    v5 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      a1[7] = 0;
LABEL_4:
      v4 = a1[6];
      if ( v4 )
        return qfree(v4);
      return result;
    }
    v6 = *(_QWORD *)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v9 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_23;
      goto LABEL_16;
    }
    v7 = *(__int64 **)(v6 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = *(__int64 **)(v6 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
      {
LABEL_27:
        v11 = *(_QWORD *)(v6 + 32);
        if ( v11 )
        {
          *(_QWORD *)(v6 + 40) = 0;
          qfree(v11);
        }
        *(_QWORD *)v6 |= 2uLL;
LABEL_13:
        if ( v6 )
          qfree(v6);
        v9 = *(__int64 **)(v5 + 16);
        if ( (*(_BYTE *)v9 & 2) != 0 )
        {
LABEL_17:
          if ( (*(_BYTE *)v5 & 2) != 0 )
          {
LABEL_18:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[6];
            v3 = *(_QWORD *)result;
            goto LABEL_21;
          }
LABEL_23:
          v10 = *(_QWORD *)(v5 + 32);
          if ( v10 )
          {
            *(_QWORD *)(v5 + 40) = 0;
            qfree(v10);
          }
          *(_QWORD *)v5 |= 2uLL;
          goto LABEL_18;
        }
LABEL_16:
        sub_1B4740(v9);
        goto LABEL_17;
      }
    }
    else
    {
      sub_1B4740(v7);
      v8 = *(__int64 **)(v6 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_12;
    }
    sub_1B4740(v8);
LABEL_12:
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_27;
  }
  return result;
}
