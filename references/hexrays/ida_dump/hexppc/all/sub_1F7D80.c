__int64 __fastcall sub_1F7D80(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int64 *v12; // rdi

  *a1 = &off_4CBEB0;
  v2 = (unsigned __int64 *)a1[6];
  if ( !v2 )
    return j__qfree(a1);
  v3 = *v2;
  if ( !a1[7] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
    *(_QWORD *)a1[6] &= ~1uLL;
    *(_QWORD *)a1[6] |= 2uLL;
    goto LABEL_4;
  }
  v6 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v7 & 2) == 0 )
  {
    v8 = (__int64 *)v6[1];
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
    {
      v12 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_23;
      goto LABEL_16;
    }
    v10 = (__int64 *)v8[1];
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_25:
        *v8 = v9 | 2;
LABEL_13:
        if ( v8 )
          qfree(v8);
        v12 = (__int64 *)v6[2];
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
LABEL_17:
          v7 = *v6;
          if ( (*v6 & 2) != 0 )
          {
LABEL_18:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            v2 = (unsigned __int64 *)a1[6];
            v3 = *v2;
            goto LABEL_21;
          }
LABEL_23:
          *v6 = v7 | 2;
          goto LABEL_18;
        }
LABEL_16:
        sub_1F7A70(v12);
        goto LABEL_17;
      }
    }
    else
    {
      sub_1F7A70(v10);
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_12;
    }
    sub_1F7A70(v11);
LABEL_12:
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_25;
  }
LABEL_21:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
  *(_QWORD *)a1[6] &= ~1uLL;
  *(_QWORD *)a1[6] |= 2uLL;
  a1[7] = 0;
LABEL_4:
  v4 = a1[6];
  if ( v4 )
    qfree(v4);
  return j__qfree(a1);
}
