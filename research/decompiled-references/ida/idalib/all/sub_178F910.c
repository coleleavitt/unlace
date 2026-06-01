void __fastcall sub_178F910(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  const __m128i ***v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const __m128i **v13; // rdx
  unsigned __int64 v14; // rax
  const __m128i **v15; // rax
  __int64 v16; // rcx
  __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  const __m128i ***v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  const __m128i **v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  const __m128i *v34; // rdi
  const __m128i **v35; // rdx
  __m128i *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rax
  __int64 v47; // rcx
  const __m128i **v48; // rax
  __int64 v49; // rcx

  v6 = *(_QWORD *)(a3 + 48);
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    return;
  v7 = *a1;
  v8 = a2;
  v9 = (const __m128i ***)sub_B8C3D0(*(_QWORD *)(a3 + 48), a2, a3, a4, a5, a6);
  v13 = *v9;
  v14 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( (unsigned __int64)v13 >= v14 )
  {
    if ( v13 == (const __m128i **)v14 )
      goto LABEL_12;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 163 )
    {
      v15 = (const __m128i **)(v14 + 8);
      do
      {
        v10 = (__int64)v15;
        if ( v13 == v15 )
          goto LABEL_12;
        v16 = (__int64)*v15++;
      }
      while ( *(_WORD *)(v16 + 36) != 163 );
    }
LABEL_10:
    while ( (*v13)[2].m128i_i16[2] != 163 )
      ++v13;
    v17 = sub_B23FC0(*v13, *(_QWORD *)(v7 + 248));
    v17[2].m128i_i8[6] |= 1u;
    a2 = (__int64)v17;
    sub_B8CC60(v8, (__int64)v17, v18, v19, v20, v21);
    goto LABEL_12;
  }
  v10 = (__int64)v13;
  while ( 1 )
  {
    a2 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 163 )
      break;
    v10 += 8;
    if ( v14 == v10 )
      goto LABEL_12;
  }
  if ( v14 != v10 )
    goto LABEL_10;
LABEL_12:
  v22 = *a1;
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    return;
  v23 = (const __m128i ***)sub_B8C3D0(v6, a2, (__int64)v13, v10, v11, v12);
  v27 = *v23;
  v28 = (unsigned __int64)&(*v23)[*((unsigned int *)v23 + 2)];
  if ( (unsigned __int64)v27 < v28 )
  {
    v24 = (__int64)v27;
    while ( 1 )
    {
      a2 = *(_QWORD *)v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 165 )
        break;
      v24 += 8;
      if ( v28 == v24 )
        goto LABEL_17;
    }
    if ( v28 == v24 )
      goto LABEL_17;
LABEL_36:
    while ( (*v27)[2].m128i_i16[2] != 165 )
      ++v27;
    v41 = sub_B240A0(*v27, *(_QWORD *)(v22 + 248));
    v41[2].m128i_i8[6] |= 1u;
    a2 = (__int64)v41;
    sub_B8CC60(v8, (__int64)v41, v42, v43, v44, v45);
    goto LABEL_17;
  }
  if ( v27 == (const __m128i **)v28 )
    goto LABEL_17;
  if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 165 )
    goto LABEL_36;
  v48 = (const __m128i **)(v28 + 8);
  while ( 1 )
  {
    v24 = (__int64)v48;
    if ( v27 == v48 )
      break;
    v49 = (__int64)*v48++;
    if ( *(_WORD *)(v49 + 36) == 165 )
      goto LABEL_36;
  }
LABEL_17:
  v29 = *a1;
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    return;
  v30 = sub_B8C3D0(v6, a2, (__int64)v27, v24, v25, v26);
  v31 = *v30;
  v32 = *v30 + 8LL * *((unsigned int *)v30 + 2);
  if ( v31 >= v32 )
  {
    if ( v31 == v32 )
      return;
    if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 160 )
      goto LABEL_29;
    v46 = (__int64 *)(v32 + 8);
    while ( v46 != (__int64 *)v31 )
    {
      v47 = *v46++;
      if ( *(_WORD *)(v47 + 36) == 160 )
        goto LABEL_29;
    }
  }
  else
  {
    v33 = v31;
    while ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 160 )
    {
      v33 += 8LL;
      if ( v32 == v33 )
        return;
    }
    if ( v32 != v33 )
    {
LABEL_29:
      v34 = *(const __m128i **)v31;
      if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 160 )
      {
        v35 = (const __m128i **)(v31 + 8);
        do
          v34 = *v35++;
        while ( v34[2].m128i_i16[2] != 160 );
      }
      v36 = sub_B23E70(v34, *(_QWORD *)(v29 + 248));
      v36[2].m128i_i8[6] |= 1u;
      sub_B8CC60(v8, (__int64)v36, v37, v38, v39, v40);
    }
  }
}
