unsigned __int64 *__fastcall sub_3A9B30(__int64 a1, __int64 a2)
{
  unsigned __int64 **v2; // rbp
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r12
  _BYTE *v8; // rdi
  _BYTE *v9; // rdi
  void *v10; // rdi
  unsigned __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi

  v2 = *(unsigned __int64 ***)(a1 + 1392);
  v3 = *v2;
  if ( *v2 )
  {
    v4 = *v3;
    if ( !v2[1] )
    {
      *v3 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL | *v3 & 3;
      *(__m128i *)(*v2 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v2, (__m128i)(unsigned __int64)*v2);
      **v2 &= ~1uLL;
      **v2 |= 2u;
      v5 = (unsigned __int64)v2[4];
      if ( !v5 )
        goto LABEL_4;
      goto LABEL_15;
    }
    v7 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_13;
    v8 = *(_BYTE **)(v7 + 8);
    if ( (*v8 & 2) != 0 )
    {
      v9 = *(_BYTE **)(v7 + 16);
      if ( (*v9 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_3A9550((__int64)v8, a2);
      v9 = *(_BYTE **)(v7 + 16);
      if ( (*v9 & 2) != 0 )
        goto LABEL_9;
    }
    sub_3A9550((__int64)v9, a2);
LABEL_9:
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
LABEL_10:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = *v2;
      v4 = **v2;
LABEL_13:
      *v3 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL | v4 & 3;
      *(__m128i *)(*v2 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v2, (__m128i)(unsigned __int64)*v2);
      **v2 &= ~1uLL;
      **v2 |= 2u;
      goto LABEL_14;
    }
LABEL_18:
    v11 = *(unsigned __int64 **)(v7 + 48);
    if ( !v11 )
    {
LABEL_23:
      clear_tinfo_t(v7 + 32);
      *(_QWORD *)v7 |= 2uLL;
      goto LABEL_10;
    }
    if ( !*(_QWORD *)(v7 + 56) )
    {
      sub_3A91F0((unsigned __int64 *)(v7 + 48));
      goto LABEL_21;
    }
    v13 = *v11;
    v14 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
LABEL_31:
      sub_3A91F0((unsigned __int64 *)(v7 + 48));
      *(_QWORD *)(v7 + 56) = 0;
LABEL_21:
      v12 = *(_QWORD *)(v7 + 48);
      if ( v12 )
        qfree(v12);
      goto LABEL_23;
    }
    v15 = *(_QWORD **)(v14 + 8);
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
      v16 = *(_QWORD **)(v14 + 16);
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
LABEL_33:
        sub_3A51B0((__int64 *)(v14 + 32));
        *(_QWORD *)v14 |= 2uLL;
LABEL_29:
        if ( v13 > 3 )
          qfree(v14);
        goto LABEL_31;
      }
    }
    else
    {
      sub_3A8FA0(v15, a2);
      v16 = *(_QWORD **)(v14 + 16);
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_28;
    }
    sub_3A8FA0(v16, a2);
LABEL_28:
    if ( (*(_BYTE *)v14 & 2) != 0 )
      goto LABEL_29;
    goto LABEL_33;
  }
LABEL_14:
  v5 = (unsigned __int64)v2[4];
  v2[1] = nullptr;
  if ( !v5 )
    goto LABEL_4;
  do
  {
LABEL_15:
    sub_3A37B0(*(_QWORD **)(v5 + 24));
    v10 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v10, 0x28u);
  }
  while ( v5 );
LABEL_4:
  v2[4] = nullptr;
  v2[5] = (unsigned __int64 *)(v2 + 3);
  v2[6] = (unsigned __int64 *)(v2 + 3);
  v2[7] = nullptr;
  return (unsigned __int64 *)(v2 + 3);
}
