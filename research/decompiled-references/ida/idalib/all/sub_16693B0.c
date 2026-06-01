void __fastcall sub_16693B0(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 *i; // rax
  __int64 v31; // rcx
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  const char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 *v48; // rax
  unsigned __int64 *v49; // rax
  __int64 *v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 *j; // rax
  __int64 v54; // rcx
  __int64 *k; // rax
  __int64 v56; // rcx
  __int64 v57; // [rsp+8h] [rbp-180h] BYREF
  _OWORD v58[23]; // [rsp+10h] [rbp-178h] BYREF

  v2 = (__int64)a2;
  if ( !(_BYTE)byte_2CD8BC8 && __cxa_guard_acquire(&byte_2CD8BC8) )
  {
    qmemcpy(v58, &off_2C8E4E0, 0x160u);
    sub_1668FC0((__int64)&unk_2CD8BD0, v58, 22);
    a2 = &unk_2CD8BD0;
    __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8BD0, &off_2B25620);
    __cxa_guard_release(&byte_2CD8BC8);
  }
  if ( !(_BYTE)byte_2CD8BA8 && __cxa_guard_acquire(&byte_2CD8BA8) )
  {
    *((_QWORD *)&v58[0] + 1) = 17;
    *(_QWORD *)&v58[0] = "basic_string_view";
    *(_QWORD *)&v58[1] = "reference_wrapper";
    *(_QWORD *)&v58[2] = "regex_iterator";
    *(_QWORD *)&v58[3] = "span";
    *((_QWORD *)&v58[1] + 1) = 17;
    *((_QWORD *)&v58[2] + 1) = 14;
    *((_QWORD *)&v58[3] + 1) = 4;
    sub_1668FC0((__int64)&unk_2CD8BB0, v58, 4);
    a2 = &unk_2CD8BB0;
    __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8BB0, &off_2B25620);
    __cxa_guard_release(&byte_2CD8BA8);
  }
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 7) != 0 || (v3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return;
  if ( !sub_B8EC80(v2) )
  {
    sub_1669100(a1, v2, v2);
    return;
  }
  if ( (*(_BYTE *)(v2 + 29) & 1) != 0 )
  {
    v25 = sub_B8C3D0(v2, (__int64)a2, v4, v5, v6, v7);
    v28 = *v25;
    v29 = *v25 + 8LL * *((unsigned int *)v25 + 2);
    if ( *v25 < v29 )
    {
      v42 = (__int64 *)*v25;
      while ( 1 )
      {
        v28 = *v42;
        if ( *(_WORD *)(*v42 + 36) == 323 )
          break;
        if ( (__int64 *)v29 == ++v42 )
          goto LABEL_23;
      }
      if ( (__int64 *)v29 != v42 )
        return;
    }
    else if ( v28 != v29 )
    {
      if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 323 )
        return;
      for ( i = (__int64 *)(v29 + 8); ; ++i )
      {
        v29 = (unsigned __int64)i;
        if ( (__int64 *)v28 == i )
          break;
        v31 = *i;
        if ( *(_WORD *)(v31 + 36) == 323 )
          return;
      }
    }
LABEL_23:
    if ( (*(_BYTE *)(v2 + 29) & 1) != 0 )
    {
      v32 = sub_B8C3D0(v2, (__int64)a2, v28, v29, v26, v27);
      v33 = *v32;
      v34 = *v32 + 8LL * *((unsigned int *)v32 + 2);
      if ( *v32 >= v34 )
      {
        if ( v33 != v34 )
        {
          while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 328 )
          {
            v34 += 8LL;
            if ( v33 == v34 )
              goto LABEL_8;
          }
          return;
        }
      }
      else
      {
        v35 = *v32;
        while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 328 )
        {
          v35 += 8LL;
          if ( v34 == v35 )
            goto LABEL_8;
        }
        if ( v34 != v35 )
          return;
      }
    }
  }
LABEL_8:
  v8 = sub_995750(v2);
  if ( !sub_1668F10((__int64)&unk_2CD8BD0, (__int64)v8, v9) )
  {
    v36 = sub_995750(v2);
    if ( sub_1668F10((__int64)&unk_2CD8BB0, (__int64)v36, v37) )
      sub_1668340(*(_QWORD *)(a1 + 248), v2, v38, v39, v40, v41);
    return;
  }
  v14 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
    goto LABEL_10;
  v43 = sub_B8C3D0(v2, (__int64)v8, v10, v11, v12, v13);
  v46 = *v43;
  v47 = *v43 + 8LL * *((unsigned int *)v43 + 2);
  if ( *v43 >= v47 )
  {
    if ( v46 != v47 )
    {
      if ( *(_WORD *)(*(_QWORD *)v47 + 36LL) == 323 )
        return;
      for ( j = (__int64 *)(v47 + 8); ; ++j )
      {
        v47 = (unsigned __int64)j;
        if ( (__int64 *)v46 == j )
          break;
        v54 = *j;
        if ( *(_WORD *)(v54 + 36) == 323 )
          return;
      }
    }
  }
  else
  {
    v48 = (__int64 *)*v43;
    while ( 1 )
    {
      v46 = *v48;
      if ( *(_WORD *)(*v48 + 36) == 323 )
        break;
      if ( (__int64 *)v47 == ++v48 )
        goto LABEL_45;
    }
    if ( (__int64 *)v47 != v48 )
      return;
  }
LABEL_45:
  if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
    goto LABEL_10;
  v49 = sub_B8C3D0(v2, (__int64)v8, v46, v47, v44, v45);
  v50 = (__int64 *)*v49;
  v51 = *v49 + 8LL * *((unsigned int *)v49 + 2);
  if ( *v49 >= v51 )
  {
    if ( v50 != (__int64 *)v51 )
    {
      if ( *(_WORD *)(*(_QWORD *)v51 + 36LL) == 328 )
        return;
      for ( k = (__int64 *)(v51 + 8); k != v50; ++k )
      {
        v56 = *k;
        if ( *(_WORD *)(v56 + 36) == 328 )
          return;
      }
    }
    goto LABEL_10;
  }
  v52 = *v49;
  while ( *(_WORD *)(*(_QWORD *)v52 + 36LL) != 328 )
  {
    v52 += 8LL;
    if ( v51 == v52 )
      goto LABEL_10;
  }
  if ( v51 == v52 )
  {
LABEL_10:
    v57 = v2;
    v15 = _mm_loadl_epi64((const __m128i *)&v57);
    LOBYTE(v58[1]) = 0;
    v58[0] = _mm_unpacklo_epi64(v15, v15);
    do
    {
      v16 = sub_B31210(v14, 0, 0);
      sub_B8CC60(v2, v16, v17, v18, v19, v20);
      sub_16681B0((unsigned __int64 *)v58, v16, v21, v22, v23, v24);
      v2 = *(_QWORD *)&v58[0];
    }
    while ( *(_QWORD *)&v58[0] );
  }
}
