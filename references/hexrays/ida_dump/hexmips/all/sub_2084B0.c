void __fastcall sub_2084B0(unsigned __int64 **a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = *v1;
    if ( !a1[1] )
    {
      *v1 = *v1 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      goto LABEL_4;
    }
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *v1 = v3 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      a1[1] = nullptr;
LABEL_4:
      if ( *a1 )
        qfree(*a1);
      return;
    }
    v5 = *(_QWORD *)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v8 = *(__int64 **)(v4 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_24;
      goto LABEL_16;
    }
    v6 = *(__int64 **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_28:
        v10 = *(_QWORD *)(v5 + 24);
        if ( v10 )
        {
          *(_QWORD *)(v5 + 32) = 0;
          qfree(v10);
        }
        *(_QWORD *)v5 |= 2uLL;
LABEL_13:
        if ( v5 )
          qfree(v5);
        v8 = *(__int64 **)(v4 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_17:
          if ( (*(_BYTE *)v4 & 2) != 0 )
          {
LABEL_18:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            v1 = *a1;
            v3 = **a1;
            goto LABEL_21;
          }
LABEL_24:
          v9 = *(_QWORD *)(v4 + 24);
          if ( v9 )
          {
            *(_QWORD *)(v4 + 32) = 0;
            qfree(v9);
          }
          *(_QWORD *)v4 |= 2uLL;
          goto LABEL_18;
        }
LABEL_16:
        sub_208280(v8);
        goto LABEL_17;
      }
    }
    else
    {
      sub_208280(v6);
      v7 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_12;
    }
    sub_208280(v7);
LABEL_12:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_28;
  }
}
