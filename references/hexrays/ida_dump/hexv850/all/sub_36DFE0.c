void __fastcall sub_36DFE0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  _BYTE *v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // r12
  void *v13; // rdi

  if ( a1 )
  {
    v2 = a1[11];
    while ( v2 )
    {
      sub_365B50(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x28u);
    }
    v4 = a1[5];
    while ( v4 )
    {
      sub_365B50(*(_QWORD **)(v4 + 24));
      v5 = (void *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      operator delete(v5, 0x28u);
    }
    v6 = (unsigned __int64 *)a1[1];
    if ( !v6 )
      goto LABEL_11;
    v7 = *v6;
    if ( !a1[2] )
    {
      *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      goto LABEL_9;
    }
    v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *v6 = v7 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      a1[2] = 0;
LABEL_9:
      v8 = a1[1];
      if ( v8 )
        qfree(v8);
LABEL_11:
      operator delete(a1, 0x80u);
      return;
    }
    v10 = *(_BYTE **)(v9 + 8);
    if ( (*v10 & 2) != 0 )
    {
      v11 = *(_BYTE **)(v9 + 16);
      if ( (*v11 & 2) != 0 )
        goto LABEL_23;
    }
    else
    {
      sub_366660((__int64)v10);
      v11 = *(_BYTE **)(v9 + 16);
      if ( (*v11 & 2) != 0 )
        goto LABEL_17;
    }
    sub_366660((__int64)v11);
LABEL_17:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
LABEL_18:
      if ( v7 > 3 )
        qfree(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v6 = (unsigned __int64 *)a1[1];
      v7 = *v6;
      goto LABEL_21;
    }
LABEL_23:
    clear_tinfo_t(v9 + 80);
    v12 = *(_QWORD *)(v9 + 48);
    while ( v12 )
    {
      sub_365B50(*(_QWORD **)(v12 + 24));
      v13 = (void *)v12;
      v12 = *(_QWORD *)(v12 + 16);
      operator delete(v13, 0x28u);
    }
    *(_QWORD *)v9 |= 2uLL;
    goto LABEL_18;
  }
}
