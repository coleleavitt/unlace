void __fastcall sub_E17190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 **v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  const void *v17; // r8
  signed __int64 v18; // r13
  __int64 v19; // rbp
  int v20; // ebp
  const void *v21; // r13
  __int64 v22; // rax
  signed __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  char *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rsi
  const __m128i *v29; // rbp
  __int64 v30; // rax
  __m128i *v31; // rbx
  __int64 v32; // rdx
  __m128i v33; // xmm1
  __int64 v34; // rax
  __m128i *v35; // rbp
  void *v36; // rdi
  unsigned __int64 v37; // r13
  const void *v38; // rsi
  __int64 v39; // rax
  __m128i v40; // xmm0
  _BYTE *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 *v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 **v47; // rax
  __int64 *v48; // rdx
  unsigned __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rcx
  const void *v55; // [rsp+0h] [rbp-A8h]
  __m128i v56; // [rsp+10h] [rbp-98h] BYREF
  void *base; // [rsp+20h] [rbp-88h] BYREF
  __int64 v58; // [rsp+28h] [rbp-80h]
  _BYTE v59[120]; // [rsp+30h] [rbp-78h] BYREF

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  v11 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( (_BYTE)v11 != 24 )
  {
    v58 = 0x400000000LL;
    base = v59;
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    {
      v12 = (__int64 **)sub_B68690(v7, a2, (__int64)v59, v8, v9, v10);
      v13 = *v12;
      v14 = (unsigned __int64)&(*v12)[*((unsigned int *)v12 + 2)];
      if ( (unsigned __int64)v13 >= v14 )
      {
        if ( v13 != (__int64 *)v14 )
        {
          if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 410 )
          {
            v45 = (__int64 *)(v14 + 8);
            while ( v13 != v45 )
            {
              v46 = *v45++;
              if ( *(_WORD *)(v46 + 36) == 410 )
                goto LABEL_40;
            }
            if ( !a4 )
              goto LABEL_17;
            goto LABEL_8;
          }
          goto LABEL_40;
        }
      }
      else
      {
        v15 = v13;
        while ( *(_WORD *)(*v15 + 36) != 410 )
        {
          if ( (__int64 *)v14 == ++v15 )
            goto LABEL_7;
        }
        if ( (__int64 *)v14 != v15 )
        {
LABEL_40:
          v43 = *v13;
          if ( *(_WORD *)(*v13 + 36) != 410 )
          {
            v44 = v13 + 1;
            do
              v43 = *v44++;
            while ( *(_WORD *)(v43 + 36) != 410 );
          }
          sub_E16EB0(
            (__int64 *)a1,
            (char *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8)),
            *(char **)(v43 + 48),
            (char *)(*(_QWORD *)(v43 + 48) + 16LL * *(unsigned int *)(v43 + 40)));
          sub_E16EB0(
            (__int64 *)&base,
            (char *)base + 16 * (unsigned int)v58,
            *(char **)(v43 + 48),
            (char *)(*(_QWORD *)(v43 + 48) + 16LL * *(unsigned int *)(v43 + 40)));
          if ( !a4 )
            goto LABEL_17;
          goto LABEL_8;
        }
      }
    }
LABEL_7:
    if ( !a4 )
    {
LABEL_17:
      v27 = (unsigned int)v58;
      v25 = (char *)base;
LABEL_18:
      v28 = 16 * v27;
      if ( (unsigned __int64)v28 > 0x10 )
      {
        qsort(v25, v28 >> 4, 0x10u, (__compar_fn_t)sub_E15630);
        v25 = (char *)base;
        v28 = 16LL * (unsigned int)v58;
      }
      v29 = (const __m128i *)&v25[v28];
      v30 = sub_E14F00((__int64)v25, (__int64)&v25[v28]);
      v31 = (__m128i *)base;
      v32 = ((_BYTE *)base + 16 * (unsigned int)v58 - &v25[v28]) >> 4;
      if ( (_BYTE *)base + 16 * (unsigned int)v58 - &v25[v28] > 0 )
      {
        do
        {
          v33 = _mm_loadu_si128(v29);
          v30 += 16;
          ++v29;
          *(__m128i *)(v30 - 16) = v33;
          --v32;
        }
        while ( v32 );
        v31 = (__m128i *)base;
      }
      LODWORD(v58) = (v30 - (__int64)v31) >> 4;
      v34 = (unsigned int)v58;
      v35 = &v31[v34];
      if ( &v31[v34] != v31 )
      {
        do
        {
          while ( 1 )
          {
            v39 = *(unsigned int *)(a1 + 88);
            v40 = _mm_loadu_si128(v31);
            if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 92) )
            {
              v56 = v40;
              sub_22134E0(a1 + 80, a1 + 96, v39 + 1, 16);
              v39 = *(unsigned int *)(a1 + 88);
              v40 = _mm_load_si128(&v56);
            }
            *(__m128i *)(*(_QWORD *)(a1 + 80) + 16 * v39) = v40;
            v41 = *(_BYTE **)(a2 + 32);
            ++*(_DWORD *)(a1 + 88);
            if ( *(_BYTE **)(a2 + 24) == v41 )
            {
              sub_22581D0(a2, "B", 1);
            }
            else
            {
              *v41 = 66;
              ++*(_QWORD *)(a2 + 32);
            }
            sub_2257BD0(a2, v31->m128i_i64[1]);
            v36 = *(void **)(a2 + 32);
            v37 = v31->m128i_u64[1];
            v38 = (const void *)v31->m128i_i64[0];
            if ( *(_QWORD *)(a2 + 24) - (_QWORD)v36 >= v37 )
              break;
            v42 = v31->m128i_i64[1];
            ++v31;
            sub_22581D0(a2, v38, v42);
            if ( v35 == v31 )
              goto LABEL_35;
          }
          if ( v37 )
          {
            memcpy(v36, v38, v31->m128i_u64[1]);
            *(_QWORD *)(a2 + 32) += v37;
          }
          ++v31;
        }
        while ( v35 != v31 );
LABEL_35:
        v31 = (__m128i *)base;
      }
      if ( v31 != (__m128i *)v59 )
        free(v31);
      return;
    }
LABEL_8:
    v16 = *(unsigned int *)(a1 + 8);
    v17 = *(const void **)a4;
    v18 = 16LL * *(unsigned int *)(a4 + 8);
    v19 = v18 >> 4;
    if ( v16 + (v18 >> 4) > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v55 = *(const void **)a4;
      sub_22134E0(a1, a1 + 16, v16 + v19, 16);
      v16 = *(unsigned int *)(a1 + 8);
      v17 = v55;
    }
    if ( v18 )
    {
      memcpy((void *)(*(_QWORD *)a1 + 16 * v16), v17, v18);
      LODWORD(v16) = *(_DWORD *)(a1 + 8);
    }
    v20 = v16 + v19;
    v21 = *(const void **)a4;
    v22 = (unsigned int)v58;
    *(_DWORD *)(a1 + 8) = v20;
    v23 = 16LL * *(unsigned int *)(a4 + 8);
    v24 = v22 + (v23 >> 4);
    if ( v24 > HIDWORD(v58) )
    {
      sub_22134E0(&base, v59, v24, 16);
      v22 = (unsigned int)v58;
    }
    v25 = (char *)base;
    if ( v23 )
    {
      memcpy((char *)base + 16 * v22, v21, v23);
      LODWORD(v22) = v58;
      v25 = (char *)base;
    }
    v26 = (v23 >> 4) + v22;
    v27 = v26;
    LODWORD(v58) = v26;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return;
  v47 = (__int64 **)sub_B68690(v7, a2, v11, v8, v9, v10);
  v48 = *v47;
  v49 = (unsigned __int64)&(*v47)[*((unsigned int *)v47 + 2)];
  if ( (unsigned __int64)v48 >= v49 )
  {
    if ( v48 == (__int64 *)v49 )
      return;
    if ( *(_WORD *)(*(_QWORD *)v49 + 36LL) == 410 )
      goto LABEL_58;
    v53 = (__int64 *)(v49 + 8);
    while ( v48 != v53 )
    {
      v54 = *v53++;
      if ( *(_WORD *)(v54 + 36) == 410 )
        goto LABEL_58;
    }
  }
  else
  {
    v50 = v48;
    while ( *(_WORD *)(*v50 + 36) != 410 )
    {
      if ( (__int64 *)v49 == ++v50 )
        return;
    }
    if ( (__int64 *)v49 != v50 )
    {
LABEL_58:
      v51 = *v48;
      if ( *(_WORD *)(*v48 + 36) != 410 )
      {
        v52 = v48 + 1;
        do
          v51 = *v52++;
        while ( *(_WORD *)(v51 + 36) != 410 );
      }
      sub_E16EB0(
        (__int64 *)a1,
        (char *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8)),
        *(char **)(v51 + 48),
        (char *)(*(_QWORD *)(v51 + 48) + 16LL * *(unsigned int *)(v51 + 40)));
    }
  }
}

