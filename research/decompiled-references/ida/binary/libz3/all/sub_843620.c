_QWORD *__fastcall sub_843620(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 *i; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // edx
  __m128i *v20; // r12
  int v21; // r9d
  __int64 v22; // rcx
  __int64 *v23; // r13
  int v24; // esi
  __int64 v25; // r9
  __m128i *v26; // rdi
  __m128i *v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r13
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // r12
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _QWORD *v42; // rcx
  __int64 v43; // r13
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // r12
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _QWORD *v50; // rcx
  unsigned int v51; // r15d
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // ebx
  unsigned int v56; // ecx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  __m128i *v59; // rax
  int v60; // r10d
  __m128i *v61; // r8
  const __m128i *v62; // r15
  __m128i *v63; // r11
  __int64 v64; // rax
  __m128i *v65; // rdx
  __m128i *v66; // rax
  _QWORD *v67; // rdx
  _QWORD *v68; // rdx
  size_t v69; // [rsp+8h] [rbp-C0h]
  int v70; // [rsp+8h] [rbp-C0h]
  int v71; // [rsp+10h] [rbp-B8h]
  size_t v72; // [rsp+10h] [rbp-B8h]
  int v73; // [rsp+18h] [rbp-B0h]
  char v74[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v75[32]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v76[11]; // [rsp+70h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a1 + 96);
  v7 = *(__int64 **)(a1 + 88);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__int64 *)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( i = &v7[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && a2 == v14 )
          return (_QWORD *)i[1];
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; v7 += 2 )
  {
    v31 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(v31 + 12) == v8 && a2 == v31 )
      {
        i = v7;
        return (_QWORD *)i[1];
      }
    }
    else if ( !v31 )
    {
      break;
    }
  }
LABEL_8:
  sub_16669D0(v74, *(_QWORD *)(a1 + 24));
  sub_16744A0(v75, *(_QWORD *)(a1 + 24));
  v15 = *(_DWORD **)(a2 + 24);
  if ( v15 && *v15 == 5 && v15[1] <= 1u )
  {
    v33 = (_QWORD *)sub_186B270(0x20u);
    v34 = *(_QWORD *)(a1 + 24);
    v16 = v33;
    v33[1] = v34;
    *v33 = off_1C552D0;
    sub_16669D0(v33 + 2, v34);
  }
  else
  {
    v16 = nullptr;
    if ( !(unsigned __int8)sub_1673B10(v75, a2) )
      return v16;
    v17 = (_QWORD *)sub_186B270(0x28u);
    v18 = *(_QWORD *)(a1 + 24);
    v16 = v17;
    v17[1] = v18;
    *v17 = off_1C55300;
    sub_16744A0(v17 + 2, v18);
  }
  v19 = *(_DWORD *)(a1 + 96);
  if ( 3 * v19 < 4 * (*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 104)) )
  {
    v71 = 2 * v19;
    v69 = 32LL * v19;
    v59 = (__m128i *)sub_186B270(v69);
    v22 = v69;
    v60 = v71;
    v20 = v59;
    v61 = &v59[v69 / 0x10];
    if ( v71 )
    {
      if ( (v69 & 0x10) == 0 || (*v59 = 0, ++v59, v59 != v61) )
      {
        do
        {
          *v59 = 0;
          v59 += 2;
          v59[-1] = 0;
        }
        while ( v59 != v61 );
      }
    }
    v62 = *(const __m128i **)(a1 + 88);
    v21 = v71 - 1;
    v23 = (__int64 *)v61;
    v63 = (__m128i *)&v62[*(unsigned int *)(a1 + 96)];
    if ( v62 != v63 )
    {
      do
      {
        if ( v62->m128i_i64[0] > 1uLL )
        {
          v64 = 16LL * (*(_DWORD *)(v62->m128i_i64[0] + 12) & (unsigned int)v21);
          v65 = &v20[(unsigned __int64)v64 / 0x10];
          if ( v69 == v64 )
          {
LABEL_69:
            if ( v20 == v65 )
            {
LABEL_82:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v66 = v20;
            while ( v66->m128i_i64[0] )
            {
              if ( v65 == ++v66 )
                goto LABEL_82;
            }
          }
          else
          {
            v66 = &v20[(unsigned __int64)v64 / 0x10];
            while ( v66->m128i_i64[0] )
            {
              if ( v61 == ++v66 )
                goto LABEL_69;
            }
          }
          *v66 = _mm_loadu_si128(v62);
        }
        ++v62;
      }
      while ( v63 != v62 );
      v63 = *(__m128i **)(a1 + 88);
    }
    if ( v63 )
    {
      v73 = v71;
      v72 = v69;
      v70 = v60 - 1;
      sub_186B220(v63);
      v60 = v73;
      v22 = v72;
      v21 = v70;
    }
    *(_QWORD *)(a1 + 88) = v20;
    *(_DWORD *)(a1 + 96) = v60;
    *(_DWORD *)(a1 + 104) = 0;
  }
  else
  {
    v20 = *(__m128i **)(a1 + 88);
    v21 = v19 - 1;
    v22 = 16LL * v19;
    v23 = (__int64 *)((char *)v20->m128i_i64 + v22);
  }
  v24 = *(_DWORD *)(a2 + 12);
  v25 = 16LL * (v24 & (unsigned int)v21);
  v26 = &v20[(unsigned __int64)v25 / 0x10];
  if ( v25 != v22 )
  {
    v27 = &v20[(unsigned __int64)v25 / 0x10];
    v28 = nullptr;
    while ( 1 )
    {
      v29 = v27->m128i_i64[0];
      if ( v27->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v29 + 12) == v24 && a2 == v29 )
        {
          v27->m128i_i64[0] = a2;
          v27->m128i_i64[1] = (__int64)v16;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_79;
          v28 = (__int64 *)v27;
          goto LABEL_80;
        }
        v28 = (__int64 *)v27;
      }
      if ( ++v27 == (__m128i *)v23 )
        goto LABEL_36;
    }
  }
  v28 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v26 == v20 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v32 = v20->m128i_i64[0];
    if ( v20->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v32 + 12) == v24 && a2 == v32 )
    {
      v20->m128i_i64[0] = a2;
      v20->m128i_i64[1] = (__int64)v16;
      goto LABEL_43;
    }
LABEL_35:
    ++v20;
  }
  if ( v32 )
  {
    v28 = (__int64 *)v20;
    goto LABEL_35;
  }
  if ( v28 )
LABEL_79:
    --*(_DWORD *)(a1 + 104);
  else
    v28 = (__int64 *)v20;
LABEL_80:
  *v28 = a2;
  v28[1] = (__int64)v16;
  ++*(_DWORD *)(a1 + 100);
LABEL_43:
  v35 = *(_QWORD *)(a1 + 8);
  v36 = (_QWORD *)sub_180C100(v35 + 2144, 16);
  v37 = *(_QWORD **)(v35 + 2128);
  v38 = v36;
  *v36 = off_1C553A8;
  v36[1] = v16;
  if ( v37 )
  {
    v39 = *((_DWORD *)v37 - 1);
    if ( v39 == *((_DWORD *)v37 - 2) )
    {
      v51 = (3 * v39 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v39 + 8 >= v52 || v39 >= v51 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v37 - 1, v52);
      v54 = v53[1];
      v37 = v53 + 2;
      *(_QWORD *)(v35 + 2128) = v53 + 2;
      *v53 = v51;
      LODWORD(v53) = v54;
      v42 = &v37[v54];
      v41 = (_DWORD)v53 + 1;
    }
    else
    {
      v40 = v39;
      v41 = v39 + 1;
      v42 = &v37[v40];
    }
  }
  else
  {
    v68 = (_QWORD *)sub_186B270(0x18u);
    *v68 = 2;
    v41 = 1;
    v37 = v68 + 1;
    *(_QWORD *)(v35 + 2128) = v37;
    v42 = v37;
  }
  v43 = *(_QWORD *)(a1 + 8);
  *v42 = v38;
  *((_DWORD *)v37 - 1) = v41;
  v44 = (_QWORD *)sub_180C100(v43 + 2144, 24);
  v45 = *(_QWORD **)(v43 + 2128);
  v46 = v44;
  *v44 = off_1C553D0;
  v44[1] = a1 + 88;
  v44[2] = a2;
  if ( v45 )
  {
    v47 = *((_DWORD *)v45 - 1);
    if ( v47 == *((_DWORD *)v45 - 2) )
    {
      v55 = (3 * v47 + 1) >> 1;
      v56 = 8 * v55 + 8;
      if ( 8 * v47 + 8 >= v56 || v47 >= v55 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v57 = (unsigned int *)sub_186B300(v45 - 1, v56);
      v58 = v57[1];
      v45 = v57 + 2;
      *(_QWORD *)(v43 + 2128) = v57 + 2;
      *v57 = v55;
      LODWORD(v57) = v58;
      v50 = &v45[v58];
      v49 = (_DWORD)v57 + 1;
    }
    else
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v45[v48];
    }
  }
  else
  {
    v67 = (_QWORD *)sub_186B270(0x18u);
    *v67 = 2;
    v49 = 1;
    v45 = v67 + 1;
    *(_QWORD *)(v43 + 2128) = v45;
    v50 = v45;
  }
  *v50 = v46;
  *((_DWORD *)v45 - 1) = v49;
  return v16;
}

