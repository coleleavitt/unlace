__int64 __fastcall sub_1A4B80(_QWORD *a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbp

  v3 = (unsigned __int64 *)a1[1];
  if ( !v3 )
    goto LABEL_13;
  v4 = *v3;
  if ( !a1[2] )
  {
    *v3 = *v3 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
    *(_QWORD *)a1[1] &= ~1uLL;
    *(_QWORD *)a1[1] |= 2uLL;
    goto LABEL_14;
  }
  v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
  v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v6 & 2) == 0 )
  {
    v7 = (__int64 *)v5[1];
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_25;
    }
    else
    {
      sub_192250(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_8;
    }
    sub_192250(v8);
LABEL_8:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_9:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = (unsigned __int64 *)a1[1];
      v4 = *v3;
      goto LABEL_12;
    }
LABEL_25:
    *v5 = v6 | 2;
    goto LABEL_9;
  }
LABEL_12:
  *v3 = v4 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
  *(_QWORD *)a1[1] &= ~1uLL;
  *(_QWORD *)a1[1] |= 2uLL;
LABEL_13:
  a1[2] = 0;
LABEL_14:
  v9 = a1[7];
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = sub_1A46A0((__int64)a1, a2, v9);
      v11 = a1[7];
      if ( v10 != 1 )
        break;
      v9 = *(_QWORD *)(v11 + 8);
      a1[7] = v9;
      if ( !v9 )
        return *((unsigned int *)a1 + 4);
    }
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      for ( a1[7] = v12; v12; v12 = *(_QWORD *)(v12 + 8) )
      {
        if ( (unsigned int)sub_1A46A0((__int64)a1, a2, v12) == 2 )
          break;
      }
    }
  }
  return *((unsigned int *)a1 + 4);
}
