void __fastcall sub_3117E0(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  *a1 = (unsigned __int64)&off_4AFB20;
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  v4 = a1[1];
  if ( v4 )
  {
    v5 = *(_QWORD *)v4;
    if ( !a1[2] )
    {
      *(_QWORD *)v4 = *(_QWORD *)v4 & 3LL | v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8) = _mm_unpacklo_epi64((__m128i)a1[1], (__m128i)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      goto LABEL_8;
    }
    v7 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 2) != 0 )
    {
LABEL_18:
      *(_QWORD *)v4 = v5 & 3 | v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8) = _mm_unpacklo_epi64((__m128i)a1[1], (__m128i)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      a1[2] = 0;
LABEL_8:
      v6 = a1[1];
      if ( v6 )
        qfree(v6);
      goto LABEL_10;
    }
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_21;
    }
    else
    {
      sub_311300(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_14;
    }
    sub_311300(v10);
LABEL_14:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
LABEL_15:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v4 = a1[1];
      v5 = *(_QWORD *)v4;
      goto LABEL_18;
    }
LABEL_21:
    *v7 = v8 | 2;
    goto LABEL_15;
  }
LABEL_10:
  operator delete(a1, 0x50u);
}
