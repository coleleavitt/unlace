__int64 __fastcall sub_81000(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 j; // rbp
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 k; // r12
  __int64 *v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 m; // rbp
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rdi
  __int64 *v41; // r12
  __int64 v42; // rdx
  __int64 *v43; // r13
  __int64 v44; // rax
  __int64 *v45; // rdi
  __int64 *v46; // rdi
  __int64 *v47; // r13
  __int64 *v48; // rdi
  __int64 *v49; // rdi
  __int64 v50; // rax

  v2 = a1[241];
  if ( v2 )
  {
    a1[242] = 0;
    qfree(v2);
  }
  v3 = a1[237];
  if ( v3 )
  {
    v4 = a1[238];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        sub_119360(16 * v6 + v3);
        v3 = a1[237];
      }
    }
    a1[238] = 0;
    qfree(v3);
  }
  v7 = a1[234];
  if ( v7 )
  {
    v8 = a1[235];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = v7 + 40 * j;
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 24) = 0;
          qfree(v11);
        }
        sub_119360(v10);
        v7 = a1[234];
      }
    }
    a1[235] = 0;
    qfree(v7);
  }
  v12 = (unsigned __int64 *)a1[232];
  if ( v12 )
  {
    v13 = *v12;
    if ( !a1[233] )
    {
      *v12 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL | *v12 & 3;
      *(__m128i *)(a1[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)a1[232],
                                      (__m128i)(unsigned __int64)a1[232]);
      *(_QWORD *)a1[232] &= ~1uLL;
      *(_QWORD *)a1[232] |= 2uLL;
      goto LABEL_18;
    }
    v41 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    v42 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v42 & 2) != 0 )
    {
LABEL_77:
      *v12 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL | v13 & 3;
      *(__m128i *)(a1[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)a1[232],
                                      (__m128i)(unsigned __int64)a1[232]);
      *(_QWORD *)a1[232] &= ~1uLL;
      *(_QWORD *)a1[232] |= 2uLL;
      a1[233] = 0;
LABEL_18:
      v14 = a1[232];
      if ( v14 )
        qfree(v14);
      goto LABEL_20;
    }
    v43 = (__int64 *)v41[1];
    v44 = *v43;
    if ( (*v43 & 2) != 0 )
    {
      v47 = (__int64 *)v41[2];
      if ( (*(_BYTE *)v47 & 2) != 0 )
        goto LABEL_73;
      goto LABEL_66;
    }
    v45 = (__int64 *)v43[1];
    if ( (*(_BYTE *)v45 & 2) != 0 )
    {
      v46 = (__int64 *)v43[2];
      if ( (*(_BYTE *)v46 & 2) != 0 )
      {
LABEL_81:
        *v43 = v44 | 2;
LABEL_63:
        if ( v43 )
          qfree(v43);
        v47 = (__int64 *)v41[2];
        if ( (*(_BYTE *)v47 & 2) != 0 )
        {
LABEL_72:
          v42 = *v41;
          if ( (*v41 & 2) != 0 )
          {
LABEL_74:
            if ( v13 > 3 )
              qfree(v13 & 0xFFFFFFFFFFFFFFFCLL);
            v12 = (unsigned __int64 *)a1[232];
            v13 = *v12;
            goto LABEL_77;
          }
LABEL_73:
          *v41 = v42 | 2;
          goto LABEL_74;
        }
LABEL_66:
        v48 = (__int64 *)v47[1];
        if ( (*(_BYTE *)v48 & 2) != 0 )
        {
          v49 = (__int64 *)v47[2];
          if ( (*(_BYTE *)v49 & 2) != 0 )
          {
            v50 = *v47;
LABEL_84:
            *v47 = v50 | 2;
LABEL_70:
            if ( v47 )
              qfree(v47);
            goto LABEL_72;
          }
        }
        else
        {
          sub_770A0(v48);
          v49 = (__int64 *)v47[2];
          if ( (*(_BYTE *)v49 & 2) != 0 )
            goto LABEL_69;
        }
        sub_770A0(v49);
LABEL_69:
        v50 = *v47;
        if ( (*v47 & 2) != 0 )
          goto LABEL_70;
        goto LABEL_84;
      }
    }
    else
    {
      sub_770A0(v45);
      v46 = (__int64 *)v43[2];
      if ( (*(_BYTE *)v46 & 2) != 0 )
        goto LABEL_62;
    }
    sub_770A0(v46);
LABEL_62:
    v44 = *v43;
    if ( (*v43 & 2) != 0 )
      goto LABEL_63;
    goto LABEL_81;
  }
LABEL_20:
  v15 = a1[229];
  if ( v15 )
  {
    v16 = a1[230];
    if ( v16 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = v15 + v17;
        ++v18;
        v17 += 88;
        sub_119360(v19 + 72);
        sub_119360(v19 + 56);
        sub_119360(v19 + 40);
        v15 = a1[229];
      }
      while ( v16 != v18 );
    }
    a1[230] = 0;
    qfree(v15);
  }
  v20 = a1[226];
  if ( v20 )
  {
    v21 = a1[227];
    if ( v21 )
    {
      for ( k = 0; k != v21; ++k )
      {
        v23 = (__int64 *)(v20 + 48 * k);
        v24 = v23[3];
        if ( v24 )
        {
          v23[4] = 0;
          qfree(v24);
        }
        v25 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v25);
        }
        v20 = a1[226];
      }
    }
    a1[227] = 0;
    qfree(v20);
  }
  v26 = a1[222];
  if ( v26 )
  {
    a1[223] = 0;
    qfree(v26);
  }
  qfree(a1[220]);
  v27 = a1[217];
  if ( v27 )
  {
    a1[218] = 0;
    qfree(v27);
  }
  v28 = a1[214];
  if ( v28 )
  {
    a1[215] = 0;
    qfree(v28);
  }
  qfree(a1[212]);
  v29 = a1[209];
  if ( v29 )
  {
    a1[210] = 0;
    qfree(v29);
  }
  qfree(a1[207]);
  v30 = a1[204];
  if ( v30 )
  {
    a1[205] = 0;
    qfree(v30);
  }
  qfree(a1[202]);
  cleanup_argloc(a1 + 200);
  clear_tinfo_t(a1 + 199);
  v31 = a1[196];
  if ( v31 )
  {
    v32 = a1[197];
    if ( v32 )
    {
      for ( m = 0; m != v32; ++m )
      {
        v34 = m;
        sub_119360(16 * v34 + v31);
        v31 = a1[196];
      }
    }
    a1[197] = 0;
    qfree(v31);
  }
  v35 = a1[193];
  if ( v35 )
  {
    v36 = a1[194];
    if ( v36 )
    {
      v37 = 0;
      do
      {
        v38 = v35 + 80 * v37;
        cleanup_argloc(v38 + 56);
        v39 = *(_QWORD *)(v38 + 32);
        if ( v39 )
        {
          *(_QWORD *)(v38 + 40) = 0;
          qfree(v39);
        }
        ++v37;
        clear_tinfo_t(v38 + 24);
        sub_119360(v38);
        v35 = a1[193];
      }
      while ( v36 != v37 );
    }
    a1[194] = 0;
    qfree(v35);
  }
  return sub_80850((__int64)a1);
}
