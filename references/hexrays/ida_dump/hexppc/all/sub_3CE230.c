void __fastcall sub_3CE230(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  __int64 j; // rbp
  __int64 *v14; // r12
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 *v20; // rdi
  __int64 *v21; // rdi

  *a1 = (unsigned __int64)&off_4D5F38;
  v2 = a1[20];
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)v2;
  if ( !a1[21] )
  {
    *(_QWORD *)v2 = *(_QWORD *)v2 & 3LL | v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[20] + 8) = _mm_unpacklo_epi64((__m128i)a1[20], (__m128i)a1[20]);
    *(_QWORD *)a1[20] &= ~1uLL;
    *(_QWORD *)a1[20] |= 2uLL;
    goto LABEL_4;
  }
  v18 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v19 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v19 & 2) == 0 )
  {
    v20 = (__int64 *)v18[1];
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      v21 = (__int64 *)v18[2];
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_39;
    }
    else
    {
      sub_3CB580(v20);
      v21 = (__int64 *)v18[2];
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_32;
    }
    sub_3CB580(v21);
LABEL_32:
    v19 = *v18;
    if ( (*v18 & 2) != 0 )
    {
LABEL_33:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = a1[20];
      v3 = *(_QWORD *)v2;
      goto LABEL_36;
    }
LABEL_39:
    *v18 = v19 | 2;
    goto LABEL_33;
  }
LABEL_36:
  *(_QWORD *)v2 = v3 & 3 | v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20] + 8) = _mm_unpacklo_epi64((__m128i)a1[20], (__m128i)a1[20]);
  *(_QWORD *)a1[20] &= ~1uLL;
  *(_QWORD *)a1[20] |= 2uLL;
  a1[21] = 0;
LABEL_4:
  v4 = a1[20];
  if ( v4 )
    qfree(v4);
LABEL_6:
  v5 = a1[17];
  if ( v5 )
  {
    a1[18] = 0;
    qfree(v5);
  }
  v6 = a1[14];
  if ( v6 )
  {
    v7 = a1[15];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = a1[14];
        }
      }
    }
    a1[15] = 0;
    qfree(v6);
  }
  v11 = a1[11];
  if ( v11 )
  {
    v12 = a1[12];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = *(__int64 **)(v11 + 8 * j);
        if ( v14 )
        {
          v15 = *v14;
          if ( *v14 )
          {
            v14[1] = 0;
            qfree(v15);
          }
          operator delete(v14, 0x38u);
          v11 = a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree(v11);
  }
  v16 = a1[8];
  if ( v16 )
  {
    sub_80850(a1[8]);
    j__qfree(v16);
  }
  v17 = a1[2];
  *a1 = (unsigned __int64)&off_4D5F18;
  if ( v17 )
  {
    a1[3] = 0;
    qfree(v17);
  }
  operator delete(a1, 0xB0u);
}
