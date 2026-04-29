__int64 __fastcall sub_192080(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  __int64 *v14; // rdi

  *a1 = off_4B1C90;
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
  v4 = a1[8];
  if ( v4 )
  {
    a1[9] = 0;
    qfree(v4);
  }
  result = a1[6];
  if ( result )
  {
    v6 = *(_QWORD *)result;
    if ( !a1[7] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_10;
    }
    v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v9 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 2) != 0 )
    {
LABEL_27:
      *(_QWORD *)result = v6 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      a1[7] = 0;
LABEL_10:
      v7 = a1[6];
      if ( v7 )
        return qfree(v7);
      return result;
    }
    v10 = (__int64 *)v8[1];
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
    {
      v14 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_29;
      goto LABEL_22;
    }
    v12 = (__int64 *)v10[1];
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
LABEL_31:
        *v10 = v11 | 2;
LABEL_19:
        if ( v10 )
          qfree(v10);
        v14 = (__int64 *)v8[2];
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
LABEL_23:
          v9 = *v8;
          if ( (*v8 & 2) != 0 )
          {
LABEL_24:
            if ( v6 > 3 )
              qfree(v6 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[6];
            v6 = *(_QWORD *)result;
            goto LABEL_27;
          }
LABEL_29:
          *v8 = v9 | 2;
          goto LABEL_24;
        }
LABEL_22:
        sub_1916B0(v14);
        goto LABEL_23;
      }
    }
    else
    {
      sub_1916B0(v12);
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_18;
    }
    sub_1916B0(v13);
LABEL_18:
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
      goto LABEL_19;
    goto LABEL_31;
  }
  return result;
}
