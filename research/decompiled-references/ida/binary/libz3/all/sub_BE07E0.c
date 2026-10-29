__int64 __fastcall sub_BE07E0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // r8d
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int v17; // edx
  __m128i *v18; // r12
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __m128i *v21; // r14
  int v22; // esi
  __int64 v23; // r9
  __m128i *v24; // r8
  __m128i *v25; // rax
  __m128i *v26; // rdi
  __int64 v27; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  unsigned __int64 *v35; // rcx
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 *v40; // rcx
  unsigned int v41; // r12d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // ebx
  unsigned int v46; // ecx
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __m128i *v49; // rax
  int v50; // r10d
  __m128i *v51; // r8
  const __m128i *v52; // r15
  __m128i *v53; // r11
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i *v56; // rax
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  __m128i v59; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+18h] [rbp-90h]
  __int64 v61; // [rsp+20h] [rbp-88h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  int v63; // [rsp+34h] [rbp-74h]
  __m128i *v64; // [rsp+38h] [rbp-70h]
  __int64 v65[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a1 + 216);
  v7 = *(__int64 **)(a1 + 208);
  v8 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__int64 *)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    v13 = &v7[(unsigned __int64)v11 / 8];
    do
    {
      v14 = *v13;
      if ( (unsigned __int64)*v13 > 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v14 + 12LL) == v8 && v5 == v14 )
          goto LABEL_19;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
      v13 += 2;
    }
    while ( v10 != v13 );
  }
  for ( ; v12 != v7; v7 += 2 )
  {
    v29 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v29 + 12LL) == v8 && v5 == v29 )
      {
        v13 = v7;
LABEL_19:
        v15 = v13[1];
        if ( v15 )
          return v15;
        break;
      }
    }
    else if ( !v29 )
    {
      break;
    }
  }
LABEL_8:
  v15 = sub_186B270(0x18u);
  v59 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)v15);
  v16 = sub_186B270(0x80u);
  v17 = *(_DWORD *)(a1 + 216);
  *(_QWORD *)(v15 + 8) = 8;
  *(_QWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 104) = 0;
  *(_QWORD *)(v16 + 120) = 0;
  *(_QWORD *)v15 = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 220) + *(_DWORD *)(a1 + 224);
  *(_DWORD *)(v15 + 16) = 0;
  if ( 3 * v17 < 4 * (int)v16 )
  {
    LODWORD(v61) = 2 * v17;
    v60 = 32LL * v17;
    v49 = (__m128i *)sub_186B270(v60);
    v20 = v60;
    v50 = v61;
    v18 = v49;
    v51 = (__m128i *)((char *)v49 + v60);
    if ( (_DWORD)v61 )
    {
      if ( (v60 & 0x10) == 0 || (*v49 = 0, ++v49, v51 != v49) )
      {
        do
        {
          *v49 = 0;
          v49 += 2;
          v49[-1] = 0;
        }
        while ( v51 != v49 );
      }
    }
    v52 = *(const __m128i **)(a1 + 208);
    v19 = v50 - 1;
    v21 = v51;
    v53 = (__m128i *)&v52[*(unsigned int *)(a1 + 216)];
    if ( v52 != v53 )
    {
      do
      {
        if ( v52->m128i_i64[0] > 1uLL )
        {
          v54 = 16LL * (*(_DWORD *)(*(_QWORD *)v52->m128i_i64[0] + 12LL) & v19);
          v55 = &v18[(unsigned __int64)v54 / 0x10];
          if ( v20 == v54 )
          {
LABEL_63:
            if ( v18 == v55 )
            {
LABEL_76:
              v64 = v51;
              v63 = v50;
              v62 = v20;
              LODWORD(v61) = v50 - 1;
              v60 = (__int64)v53;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v56 = v18;
            while ( v56->m128i_i64[0] )
            {
              if ( v55 == ++v56 )
                goto LABEL_76;
            }
          }
          else
          {
            v56 = &v18[(unsigned __int64)v54 / 0x10];
            while ( v56->m128i_i64[0] )
            {
              if ( v51 == ++v56 )
                goto LABEL_63;
            }
          }
          *v56 = _mm_loadu_si128(v52);
        }
        ++v52;
      }
      while ( v53 != v52 );
      v53 = *(__m128i **)(a1 + 208);
    }
    if ( v53 )
    {
      LODWORD(v62) = v50;
      v61 = v20;
      LODWORD(v60) = v50 - 1;
      sub_186B220(v53);
      v50 = v62;
      v20 = v61;
      v19 = v60;
    }
    *(_QWORD *)(a1 + 208) = v18;
    *(_DWORD *)(a1 + 216) = v50;
    *(_DWORD *)(a1 + 224) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 208);
    v19 = v17 - 1;
    v20 = 16LL * v17;
    v21 = (__m128i *)((char *)v18 + v20);
  }
  v22 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
  v23 = 16LL * (v22 & v19);
  v24 = &v18[(unsigned __int64)v23 / 0x10];
  if ( v23 == v20 )
  {
    v26 = nullptr;
    while ( 1 )
    {
LABEL_32:
      if ( v24 == v18 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v30 = v18->m128i_i64[0];
      if ( v18->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(*(_QWORD *)v30 + 12LL) == v22 && v5 == v30 )
        {
          *v18 = _mm_load_si128(&v59);
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v26 )
            --*(_DWORD *)(a1 + 224);
          else
            v26 = v18;
          goto LABEL_74;
        }
        v26 = v18;
      }
      ++v18;
    }
  }
  v25 = &v18[(unsigned __int64)v23 / 0x10];
  v26 = nullptr;
  while ( 1 )
  {
    v27 = v25->m128i_i64[0];
    if ( v25->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(*(_QWORD *)v27 + 12LL) == v22 && v5 == v27 )
    {
      *v25 = _mm_load_si128(&v59);
      goto LABEL_37;
    }
LABEL_14:
    if ( ++v25 == v21 )
      goto LABEL_32;
  }
  if ( v27 )
  {
    v26 = v25;
    goto LABEL_14;
  }
  if ( v26 )
    --*(_DWORD *)(a1 + 224);
  else
    v26 = v25;
LABEL_74:
  *v26 = _mm_load_si128(&v59);
  ++*(_DWORD *)(a1 + 220);
LABEL_37:
  v31 = *(_QWORD **)(a1 + 232);
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v41 = (3 * v32 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v32 + 8 >= v42 || v32 >= v41 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v31 - 1, v42);
      v44 = v43[1];
      v31 = v43 + 2;
      *v43 = v41;
      *(_QWORD *)(a1 + 232) = v43 + 2;
      LODWORD(v43) = v44;
      v35 = &v31[v44];
      v34 = (_DWORD)v43 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v31[v33];
    }
  }
  else
  {
    v58 = (_QWORD *)sub_186B270(0x18u);
    *v58 = 2;
    v34 = 1;
    v31 = v58 + 1;
    *(_QWORD *)(a1 + 232) = v31;
    v35 = v31;
  }
  *v35 = v5;
  *((_DWORD *)v31 - 1) = v34;
  v36 = *(_QWORD **)(a1 + 240);
  if ( v36 )
  {
    v37 = *((_DWORD *)v36 - 1);
    if ( v37 == *((_DWORD *)v36 - 2) )
    {
      v45 = (3 * v37 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v37 + 8 >= v46 || v37 >= v45 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v36 - 1, v46);
      v48 = v47[1];
      v36 = v47 + 2;
      *v47 = v45;
      *(_QWORD *)(a1 + 240) = v47 + 2;
      LODWORD(v47) = v48;
      v40 = &v36[v48];
      v39 = (_DWORD)v47 + 1;
    }
    else
    {
      v38 = v37;
      v39 = v37 + 1;
      v40 = &v36[v38];
    }
  }
  else
  {
    v57 = (_QWORD *)sub_186B270(0x18u);
    *v57 = 2;
    v39 = 1;
    v36 = v57 + 1;
    *(_QWORD *)(a1 + 240) = v36;
    v40 = v36;
  }
  *v40 = v15;
  *((_DWORD *)v36 - 1) = v39;
  return v15;
}

