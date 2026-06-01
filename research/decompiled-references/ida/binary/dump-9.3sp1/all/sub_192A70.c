void __fastcall sub_192A70(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (__int64 *)(v2 + 16 * v4);
        v6 = *v5;
        if ( *v5 )
          break;
LABEL_17:
        if ( v3 == ++v4 )
          goto LABEL_18;
      }
      v7 = *(_QWORD *)v6;
      if ( !v5[1] )
      {
        *(_QWORD *)v6 = *(_QWORD *)v6 & 3LL | v6 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v5 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
        *(_QWORD *)*v5 &= ~1uLL;
        *(_QWORD *)*v5 |= 2uLL;
        goto LABEL_14;
      }
      v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_13:
        *(_QWORD *)v6 = v7 & 3 | v6 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v5 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
        *(_QWORD *)*v5 &= ~1uLL;
        *(_QWORD *)*v5 |= 2uLL;
        v5[1] = 0;
LABEL_14:
        if ( *v5 )
          qfree(*v5);
        v2 = *a1;
        goto LABEL_17;
      }
      v9 = *(__int64 **)(v8 + 8);
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
        v10 = *(__int64 **)(v8 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
          goto LABEL_22;
      }
      else
      {
        sub_190DF0(v9);
        v10 = *(__int64 **)(v8 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_10:
            if ( v7 > 3 )
              qfree(v7 & 0xFFFFFFFFFFFFFFFCLL);
            v6 = *v5;
            v7 = *(_QWORD *)*v5;
            goto LABEL_13;
          }
LABEL_22:
          v11 = *(_QWORD *)(v8 + 40);
          if ( v11 )
          {
            *(_QWORD *)(v8 + 48) = 0;
            qfree(v11);
          }
          *(_QWORD *)v8 |= 2uLL;
          goto LABEL_10;
        }
      }
      sub_190DF0(v10);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_10;
      goto LABEL_22;
    }
LABEL_18:
    a1[1] = 0;
    qfree(v2);
  }
}
