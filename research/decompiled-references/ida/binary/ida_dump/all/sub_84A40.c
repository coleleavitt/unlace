__int64 __fastcall sub_84A40(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 j; // rbp
  __int64 v9; // r12
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 k; // r12
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 m; // rbp
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 *v30; // r12
  __int64 v31; // rdx
  __int64 *v32; // r13
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  __int64 *v36; // r13
  __int64 *v37; // rdi
  __int64 *v38; // rdi
  __int64 v39; // rax

  if ( a1[241] )
  {
    a1[242] = 0;
    qfree();
  }
  v2 = a1[237];
  if ( v2 )
  {
    v3 = a1[238];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        sub_11CDA0(16 * v5 + v2);
        v2 = a1[237];
      }
    }
    a1[238] = 0;
    qfree();
  }
  v6 = a1[234];
  if ( v6 )
  {
    v7 = a1[235];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = v6 + 40 * j;
        if ( *(_QWORD *)(v9 + 16) )
        {
          *(_QWORD *)(v9 + 24) = 0;
          qfree();
        }
        sub_11CDA0(v9);
        v6 = a1[234];
      }
    }
    a1[235] = 0;
    qfree();
  }
  v10 = (unsigned __int64 *)a1[232];
  if ( v10 )
  {
    v11 = *v10;
    if ( !a1[233] )
    {
      *v10 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL | *v10 & 3;
      *(__m128i *)(a1[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)a1[232],
                                      (__m128i)(unsigned __int64)a1[232]);
      *(_QWORD *)a1[232] &= ~1uLL;
      *(_QWORD *)a1[232] |= 2uLL;
      goto LABEL_18;
    }
    v30 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    v31 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v31 & 2) != 0 )
    {
LABEL_77:
      *v10 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL | v11 & 3;
      *(__m128i *)(a1[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)a1[232],
                                      (__m128i)(unsigned __int64)a1[232]);
      *(_QWORD *)a1[232] &= ~1uLL;
      *(_QWORD *)a1[232] |= 2uLL;
      a1[233] = 0;
LABEL_18:
      if ( a1[232] )
        qfree();
      goto LABEL_20;
    }
    v32 = (__int64 *)v30[1];
    v33 = *v32;
    if ( (*v32 & 2) != 0 )
    {
      v36 = (__int64 *)v30[2];
      if ( (*(_BYTE *)v36 & 2) != 0 )
        goto LABEL_73;
      goto LABEL_66;
    }
    v34 = (__int64 *)v32[1];
    if ( (*(_BYTE *)v34 & 2) != 0 )
    {
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
      {
LABEL_81:
        *v32 = v33 | 2;
LABEL_63:
        if ( v32 )
          qfree();
        v36 = (__int64 *)v30[2];
        if ( (*(_BYTE *)v36 & 2) != 0 )
        {
LABEL_72:
          v31 = *v30;
          if ( (*v30 & 2) != 0 )
          {
LABEL_74:
            if ( v11 > 3 )
              qfree();
            v10 = (unsigned __int64 *)a1[232];
            v11 = *v10;
            goto LABEL_77;
          }
LABEL_73:
          *v30 = v31 | 2;
          goto LABEL_74;
        }
LABEL_66:
        v37 = (__int64 *)v36[1];
        if ( (*(_BYTE *)v37 & 2) != 0 )
        {
          v38 = (__int64 *)v36[2];
          if ( (*(_BYTE *)v38 & 2) != 0 )
          {
            v39 = *v36;
LABEL_84:
            *v36 = v39 | 2;
LABEL_70:
            if ( v36 )
              qfree();
            goto LABEL_72;
          }
        }
        else
        {
          sub_7AAE0(v37);
          v38 = (__int64 *)v36[2];
          if ( (*(_BYTE *)v38 & 2) != 0 )
            goto LABEL_69;
        }
        sub_7AAE0(v38);
LABEL_69:
        v39 = *v36;
        if ( (*v36 & 2) != 0 )
          goto LABEL_70;
        goto LABEL_84;
      }
    }
    else
    {
      sub_7AAE0(v34);
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_62;
    }
    sub_7AAE0(v35);
LABEL_62:
    v33 = *v32;
    if ( (*v32 & 2) != 0 )
      goto LABEL_63;
    goto LABEL_81;
  }
LABEL_20:
  v12 = a1[229];
  if ( v12 )
  {
    v13 = a1[230];
    if ( v13 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = v12 + v14;
        ++v15;
        v14 += 88;
        sub_11CDA0(v16 + 72);
        sub_11CDA0(v16 + 56);
        sub_11CDA0(v16 + 40);
        v12 = a1[229];
      }
      while ( v13 != v15 );
    }
    a1[230] = 0;
    qfree();
  }
  v17 = a1[226];
  if ( v17 )
  {
    v18 = a1[227];
    if ( v18 )
    {
      for ( k = 0; k != v18; ++k )
      {
        v20 = (_QWORD *)(v17 + 48 * k);
        if ( v20[3] )
        {
          v20[4] = 0;
          qfree();
        }
        if ( *v20 )
        {
          v20[1] = 0;
          qfree();
        }
        v17 = a1[226];
      }
    }
    a1[227] = 0;
    qfree();
  }
  if ( a1[222] )
  {
    a1[223] = 0;
    qfree();
  }
  qfree();
  if ( a1[217] )
  {
    a1[218] = 0;
    qfree();
  }
  if ( a1[214] )
  {
    a1[215] = 0;
    qfree();
  }
  qfree();
  if ( a1[209] )
  {
    a1[210] = 0;
    qfree();
  }
  qfree();
  if ( a1[204] )
  {
    a1[205] = 0;
    qfree();
  }
  qfree();
  cleanup_argloc();
  clear_tinfo_t();
  v21 = a1[196];
  if ( v21 )
  {
    v22 = a1[197];
    if ( v22 )
    {
      for ( m = 0; m != v22; ++m )
      {
        v24 = m;
        sub_11CDA0(16 * v24 + v21);
        v21 = a1[196];
      }
    }
    a1[197] = 0;
    qfree();
  }
  v25 = a1[193];
  if ( v25 )
  {
    v26 = a1[194];
    if ( v26 )
    {
      v27 = 0;
      do
      {
        v28 = v25 + 80 * v27;
        cleanup_argloc();
        if ( *(_QWORD *)(v28 + 32) )
        {
          *(_QWORD *)(v28 + 40) = 0;
          qfree();
        }
        ++v27;
        clear_tinfo_t();
        sub_11CDA0(v28);
        v25 = a1[193];
      }
      while ( v26 != v27 );
    }
    a1[194] = 0;
    qfree();
  }
  return sub_84290((__int64)a1);
}
