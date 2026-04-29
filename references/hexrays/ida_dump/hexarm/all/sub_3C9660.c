__int64 (__fastcall **__fastcall sub_3C9660(_QWORD *a1))()
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  __int64 *v14; // rdi

  *a1 = off_4E3318;
  v2 = (unsigned __int64 *)a1[9];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[10] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[9] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[9], (__m128i)(unsigned __int64)a1[9]);
    *(_QWORD *)a1[9] &= ~1uLL;
    *(_QWORD *)a1[9] |= 2uLL;
    goto LABEL_4;
  }
  v8 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v9 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 2) == 0 )
  {
    v10 = (__int64 *)v8[1];
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
    {
      v14 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    v12 = (__int64 *)v10[1];
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
LABEL_29:
        *v10 = v11 | 2;
LABEL_17:
        if ( v10 )
          qfree(v10);
        v14 = (__int64 *)v8[2];
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
LABEL_21:
          v9 = *v8;
          if ( (*v8 & 2) != 0 )
          {
LABEL_22:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            v2 = (unsigned __int64 *)a1[9];
            v3 = *v2;
            goto LABEL_25;
          }
LABEL_27:
          *v8 = v9 | 2;
          goto LABEL_22;
        }
LABEL_20:
        sub_3C9570(v14);
        goto LABEL_21;
      }
    }
    else
    {
      sub_3C9570(v12);
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_16;
    }
    sub_3C9570(v13);
LABEL_16:
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
LABEL_25:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[9] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[9], (__m128i)(unsigned __int64)a1[9]);
  *(_QWORD *)a1[9] &= ~1uLL;
  *(_QWORD *)a1[9] |= 2uLL;
  a1[10] = 0;
LABEL_4:
  v4 = a1[9];
  if ( v4 )
    qfree(v4);
LABEL_6:
  v5 = a1[5];
  result = off_4D63B8;
  *a1 = off_4D63B8;
  if ( v5 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v5);
  }
  v7 = a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v7);
  }
  return result;
}
