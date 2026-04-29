__int64 __fastcall sub_132180(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi

  *a1 = off_4B05F0;
  result = a1[15];
  if ( !result )
    goto LABEL_6;
  v3 = *(_QWORD *)result;
  if ( !a1[16] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[15],
                                   (__m128i)(unsigned __int64)a1[15]);
    *(_QWORD *)a1[15] &= ~1uLL;
    result = a1[15];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_4;
  }
  v10 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v10 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_23;
    }
    v12 = *(_QWORD **)(v11 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
LABEL_32:
        sub_1188E0(v11 + 32);
        *(_QWORD *)v11 |= 2uLL;
LABEL_20:
        if ( v11 )
          qfree(v11);
        v14 = *(_QWORD **)(v10 + 16);
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
LABEL_24:
          if ( (*(_BYTE *)v10 & 2) != 0 )
          {
LABEL_25:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[15];
            v3 = *(_QWORD *)result;
            goto LABEL_28;
          }
LABEL_30:
          sub_1188E0(v10 + 32);
          *(_QWORD *)v10 |= 2uLL;
          goto LABEL_25;
        }
LABEL_23:
        sub_131980(v14);
        goto LABEL_24;
      }
    }
    else
    {
      sub_131980(v12);
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_19;
    }
    sub_131980(v13);
LABEL_19:
    if ( (*(_BYTE *)v11 & 2) != 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
LABEL_28:
  *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[15], (__m128i)(unsigned __int64)a1[15]);
  *(_QWORD *)a1[15] &= ~1uLL;
  result = a1[15];
  *(_QWORD *)result |= 2uLL;
  a1[16] = 0;
LABEL_4:
  v4 = a1[15];
  if ( v4 )
    result = qfree(v4);
LABEL_6:
  v5 = a1[12];
  if ( v5 )
  {
    a1[13] = 0;
    result = qfree(v5);
  }
  v6 = a1[9];
  if ( v6 )
  {
    v7 = a1[10];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = i;
        sub_1188E0(16 * v9 + v6);
        v6 = a1[9];
      }
    }
    a1[10] = 0;
    return qfree(v6);
  }
  return result;
}
