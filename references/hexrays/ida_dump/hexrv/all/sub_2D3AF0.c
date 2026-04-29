unsigned __int64 __fastcall sub_2D3AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi

  v2 = a1 + 32;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = 3 * i;
        sub_2B4D80((_QWORD *)(32 * v7 + v4));
        v4 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v8 = *(unsigned __int64 **)(a1 + 56);
  if ( !v8 )
    goto LABEL_18;
  v9 = *v8;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_17:
      *v8 = v9 & 3 | (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 56) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 56),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 56));
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
LABEL_18:
      *(_QWORD *)(a1 + 64) = 0;
      goto LABEL_19;
    }
    v11 = *(_QWORD **)(v10 + 8);
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v12 = *(_QWORD **)(v10 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_21;
    }
    else
    {
      sub_2ABC20(v11);
      v12 = *(_QWORD **)(v10 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_13;
    }
    sub_2ABC20(v12);
LABEL_13:
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
LABEL_14:
      if ( v9 > 3 )
        qfree(v9 & 0xFFFFFFFFFFFFFFFCLL);
      v8 = *(unsigned __int64 **)(a1 + 56);
      v9 = *v8;
      goto LABEL_17;
    }
LABEL_21:
    cleanup_argloc(v10 + 48);
    cleanup_argloc(v10 + 24);
    *(_QWORD *)v10 |= 2uLL;
    goto LABEL_14;
  }
  *v8 = *v8 & 3 | (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 56) + 8LL) = _mm_unpacklo_epi64(
                                               (__m128i)*(unsigned __int64 *)(a1 + 56),
                                               (__m128i)*(unsigned __int64 *)(a1 + 56));
  **(_QWORD **)(a1 + 56) &= ~1uLL;
  **(_QWORD **)(a1 + 56) |= 2uLL;
LABEL_19:
  *(_QWORD *)(a1 + 72) = 0;
  v13 = *(_QWORD **)(a1 + 88);
  *(_DWORD *)(a1 + 80) = 1;
  sub_2D3720(v13, v2);
  *(_QWORD *)(a1 + 24) = v2;
  return sub_2B7240(a2, *(_QWORD *)(a1 + 8), v2, nullptr);
}
