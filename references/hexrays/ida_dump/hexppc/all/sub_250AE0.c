__int64 (__fastcall **__fastcall sub_250AE0(_QWORD *a1))()
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi

  *a1 = off_4CCEF8;
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
  v8 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v12 = *(_QWORD **)(v8 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    v10 = *(_QWORD **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_29:
        clear_tinfo_t(v9 + 32);
        *(_QWORD *)v9 |= 2uLL;
LABEL_17:
        if ( v9 )
          qfree(v9);
        v12 = *(_QWORD **)(v8 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
LABEL_21:
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_22:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            v2 = (unsigned __int64 *)a1[9];
            v3 = *v2;
            goto LABEL_25;
          }
LABEL_27:
          clear_tinfo_t(v8 + 32);
          *(_QWORD *)v8 |= 2uLL;
          goto LABEL_22;
        }
LABEL_20:
        sub_24F840(v12);
        goto LABEL_21;
      }
    }
    else
    {
      sub_24F840(v10);
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_16;
    }
    sub_24F840(v11);
LABEL_16:
    if ( (*(_BYTE *)v9 & 2) != 0 )
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
  result = off_4C8E58;
  *a1 = off_4C8E58;
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
