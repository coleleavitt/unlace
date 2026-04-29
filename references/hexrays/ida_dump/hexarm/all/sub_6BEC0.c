void *__fastcall sub_6BEC0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 i; // rbp
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 j; // rbp
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  void *result; // rax
  __int64 *v32; // r12
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 *v38; // r13
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  __int64 *v42; // r13
  __int64 *v43; // rdi
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 *v49; // rdi

  v2 = a1[42];
  *a1 = off_4E7C38;
  while ( v2 )
  {
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 224);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = a1[38];
  a1[42] = 0;
  a1[22] = 0;
  if ( v4 )
  {
    a1[39] = 0;
    qfree(v4);
  }
  v5 = a1[35];
  if ( v5 )
  {
    a1[36] = 0;
    qfree(v5);
  }
  v6 = a1[32];
  if ( v6 )
  {
    a1[33] = 0;
    qfree(v6);
  }
  v7 = (unsigned __int64 *)a1[30];
  if ( v7 )
  {
    v8 = *v7;
    if ( !a1[31] )
    {
      *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[30] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[30],
                                     (__m128i)(unsigned __int64)a1[30]);
      *(_QWORD *)a1[30] &= ~1uLL;
      *(_QWORD *)a1[30] |= 2uLL;
      goto LABEL_12;
    }
    v32 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v33 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v33 & 2) != 0 )
    {
LABEL_57:
      *v7 = v8 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[30] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[30],
                                     (__m128i)(unsigned __int64)a1[30]);
      *(_QWORD *)a1[30] &= ~1uLL;
      *(_QWORD *)a1[30] |= 2uLL;
      a1[31] = 0;
LABEL_12:
      v9 = a1[30];
      if ( v9 )
        qfree(v9);
      goto LABEL_14;
    }
    v34 = (__int64 *)v32[1];
    if ( (*(_BYTE *)v34 & 2) != 0 )
    {
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_93;
    }
    else
    {
      sub_6B6C0(v34);
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_53;
    }
    sub_6B6C0(v35);
LABEL_53:
    v33 = *v32;
    if ( (*v32 & 2) != 0 )
    {
LABEL_54:
      if ( v8 > 3 )
        qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = (unsigned __int64 *)a1[30];
      v8 = *v7;
      goto LABEL_57;
    }
LABEL_93:
    *v32 = v33 | 2;
    goto LABEL_54;
  }
LABEL_14:
  v10 = (unsigned __int64 *)a1[28];
  if ( !v10 )
    goto LABEL_19;
  v11 = *v10;
  if ( !a1[29] )
  {
    *v10 = *v10 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[28] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[28],
                                   (__m128i)(unsigned __int64)a1[28]);
    *(_QWORD *)a1[28] &= ~1uLL;
    *(_QWORD *)a1[28] |= 2uLL;
    goto LABEL_17;
  }
  v46 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
  v47 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v47 & 2) == 0 )
  {
    v48 = (__int64 *)v46[1];
    if ( (*(_BYTE *)v48 & 2) != 0 )
    {
      v49 = (__int64 *)v46[2];
      if ( (*(_BYTE *)v49 & 2) != 0 )
        goto LABEL_91;
    }
    else
    {
      sub_6B6C0(v48);
      v49 = (__int64 *)v46[2];
      if ( (*(_BYTE *)v49 & 2) != 0 )
        goto LABEL_83;
    }
    sub_6B6C0(v49);
LABEL_83:
    v47 = *v46;
    if ( (*v46 & 2) != 0 )
    {
LABEL_84:
      if ( v11 > 3 )
        qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = (unsigned __int64 *)a1[28];
      v11 = *v10;
      goto LABEL_87;
    }
LABEL_91:
    *v46 = v47 | 2;
    goto LABEL_84;
  }
LABEL_87:
  *v10 = v11 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[28] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[28], (__m128i)(unsigned __int64)a1[28]);
  *(_QWORD *)a1[28] &= ~1uLL;
  *(_QWORD *)a1[28] |= 2uLL;
  a1[29] = 0;
LABEL_17:
  v12 = a1[28];
  if ( v12 )
    qfree(v12);
LABEL_19:
  v13 = a1[25];
  if ( v13 )
  {
    a1[26] = 0;
    qfree(v13);
  }
  v14 = (unsigned __int64 *)a1[23];
  if ( v14 )
  {
    v15 = *v14;
    if ( !a1[24] )
    {
      *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | *v14 & 3;
      *(__m128i *)(a1[23] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[23],
                                     (__m128i)(unsigned __int64)a1[23]);
      *(_QWORD *)a1[23] &= ~1uLL;
      *(_QWORD *)a1[23] |= 2uLL;
      goto LABEL_24;
    }
    v36 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    v37 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v37 & 2) != 0 )
    {
LABEL_78:
      *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | v15 & 3;
      *(__m128i *)(a1[23] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[23],
                                     (__m128i)(unsigned __int64)a1[23]);
      *(_QWORD *)a1[23] &= ~1uLL;
      *(_QWORD *)a1[23] |= 2uLL;
      a1[24] = 0;
LABEL_24:
      v16 = a1[23];
      if ( v16 )
        qfree(v16);
      goto LABEL_26;
    }
    v38 = (__int64 *)v36[1];
    v39 = *v38;
    if ( (*v38 & 2) != 0 )
    {
      v42 = (__int64 *)v36[2];
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_74;
      goto LABEL_67;
    }
    v40 = (__int64 *)v38[1];
    if ( (*(_BYTE *)v40 & 2) != 0 )
    {
      v41 = (__int64 *)v38[2];
      if ( (*(_BYTE *)v41 & 2) != 0 )
      {
LABEL_95:
        *v38 = v39 | 2;
LABEL_64:
        if ( v38 )
          qfree(v38);
        v42 = (__int64 *)v36[2];
        if ( (*(_BYTE *)v42 & 2) != 0 )
        {
LABEL_73:
          v37 = *v36;
          if ( (*v36 & 2) != 0 )
          {
LABEL_75:
            if ( v15 > 3 )
              qfree(v15 & 0xFFFFFFFFFFFFFFFCLL);
            v14 = (unsigned __int64 *)a1[23];
            v15 = *v14;
            goto LABEL_78;
          }
LABEL_74:
          *v36 = v37 | 2;
          goto LABEL_75;
        }
LABEL_67:
        v43 = (__int64 *)v42[1];
        if ( (*(_BYTE *)v43 & 2) != 0 )
        {
          v44 = (__int64 *)v42[2];
          if ( (*(_BYTE *)v44 & 2) != 0 )
          {
            v45 = *v42;
LABEL_98:
            *v42 = v45 | 2;
LABEL_71:
            if ( v42 )
              qfree(v42);
            goto LABEL_73;
          }
        }
        else
        {
          sub_6B7F0(v43);
          v44 = (__int64 *)v42[2];
          if ( (*(_BYTE *)v44 & 2) != 0 )
            goto LABEL_70;
        }
        sub_6B7F0(v44);
LABEL_70:
        v45 = *v42;
        if ( (*v42 & 2) != 0 )
          goto LABEL_71;
        goto LABEL_98;
      }
    }
    else
    {
      sub_6B7F0(v40);
      v41 = (__int64 *)v38[2];
      if ( (*(_BYTE *)v41 & 2) != 0 )
        goto LABEL_63;
    }
    sub_6B7F0(v41);
LABEL_63:
    v39 = *v38;
    if ( (*v38 & 2) != 0 )
      goto LABEL_64;
    goto LABEL_95;
  }
LABEL_26:
  v17 = a1[19];
  *a1 = off_4E7B78;
  if ( v17 )
  {
    a1[20] = 0;
    qfree(v17);
  }
  v18 = a1[15];
  if ( v18 )
  {
    a1[16] = 0;
    qfree(v18);
  }
  v19 = a1[12];
  if ( v19 )
  {
    a1[13] = 0;
    qfree(v19);
  }
  v20 = a1[9];
  if ( v20 )
  {
    v21 = a1[10];
    if ( v21 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v23 = (__int64 *)(v20 + 24 * i);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24);
          v20 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v20);
  }
  v25 = a1[6];
  if ( v25 )
  {
    v26 = a1[7];
    if ( v26 )
    {
      for ( j = 0; j != v26; ++j )
      {
        v28 = (__int64 *)(v25 + 24 * j);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29);
          v25 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v25);
  }
  v30 = a1[1];
  result = &unk_4E86E8;
  *a1 = &unk_4E86E8;
  if ( v30 )
  {
    a1[2] = 0;
    return (void *)qfree(v30);
  }
  return result;
}
