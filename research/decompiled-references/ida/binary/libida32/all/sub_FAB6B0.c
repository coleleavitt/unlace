void __fastcall sub_FAB6B0(__int64 a1, int a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // rbx
  __int64 v11; // r12
  char *v12; // r15
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 j; // rax
  char *v18; // r8
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  char *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  signed __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  _BYTE *v36; // rax
  _BYTE *v37; // rsi
  signed __int64 v38; // rbx
  void *v39; // rax
  __int64 v40; // rax
  __int64 i; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // rsi
  signed __int64 v45; // r14
  __int64 v46; // r12
  _BYTE *v47; // rax
  _QWORD *v48; // r14
  _QWORD *v49; // rbx
  _QWORD *v50; // rdi
  __int64 v51; // r15
  __int64 v52; // rbx
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rbx
  void *v59; // rdi
  __int64 v60; // [rsp+8h] [rbp-B0h]
  __int64 v61; // [rsp+8h] [rbp-B0h]
  __int64 v62; // [rsp+8h] [rbp-B0h]
  __int64 v63; // [rsp+8h] [rbp-B0h]
  char *srca; // [rsp+10h] [rbp-A8h]
  void *src; // [rsp+10h] [rbp-A8h]
  __int64 v66; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __m128i si128; // [rsp+28h] [rbp-90h]
  _BYTE v69[128]; // [rsp+38h] [rbp-80h] BYREF

  v5 = *(_DWORD *)(a3 + 12);
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v5;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  v6 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
    *(_DWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v7;
  }
  ptr = v69;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  sub_FA65E0(a3, &ptr);
  sub_978080((_QWORD *)(a1 + 24), 0, *(_QWORD *)(a1 + 32), ptr, si128.m128i_u64[0]);
  v8 = *(_QWORD *)(a3 + 48);
  v9 = *(char **)(a1 + 56);
  v10 = *(char **)(v8 + 416);
  v11 = 12LL * *(unsigned int *)(v8 + 424);
  v12 = &v10[v11];
  v13 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 2);
  if ( v13 > 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 72) - (_QWORD)v9) >> 2) )
  {
    v40 = 0;
    if ( v13 )
    {
      v40 = operator new(12LL * *(unsigned int *)(v8 + 424));
      v9 = *(char **)(a1 + 56);
    }
    for ( i = v40; v12 != v10; *(_DWORD *)(i - 4) = *((_DWORD *)v10 - 1) )
    {
      v42 = *(_QWORD *)v10;
      v10 += 12;
      i += 12;
      *(_QWORD *)(i - 12) = v42;
    }
    if ( v9 )
    {
      v61 = v40;
      operator delete(v9);
      v40 = v61;
    }
    *(_QWORD *)(a1 + 56) = v40;
    v43 = v11 + v40;
    v8 = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(a1 + 64) = v43;
    *(_QWORD *)(a1 + 72) = v43;
  }
  else
  {
    v14 = *(_BYTE **)(a1 + 64);
    v15 = v14 - v9;
    v16 = 0xAAAAAAAAAAAAAAABLL * ((v14 - v9) >> 2);
    if ( v13 > v16 )
    {
      v18 = &v10[v15];
      v19 = 0;
      if ( v15 > 0 )
      {
        do
        {
          *(_QWORD *)&v9[v19] = *(_QWORD *)&v10[v19];
          v9[v19 + 8] = v10[v19 + 8];
          v19 += 12;
          --v16;
        }
        while ( v16 );
      }
      if ( v12 != v18 )
      {
        v20 = v14;
        v21 = &v10[v15];
        do
        {
          v22 = *(_QWORD *)v21;
          v21 += 12;
          v20 += 12;
          *(_QWORD *)(v20 - 12) = v22;
          *((_DWORD *)v20 - 1) = *((_DWORD *)v21 - 1);
        }
        while ( v12 != v21 );
        v14 += 4 * ((unsigned __int64)(v12 - 12 - v18) >> 2) + 12;
      }
      *(_QWORD *)(a1 + 64) = v14;
    }
    else
    {
      if ( v11 )
      {
        for ( j = 0; j != v11; j += 12 )
        {
          *(_QWORD *)&v9[j] = *(_QWORD *)&v10[j];
          v9[j + 8] = v10[j + 8];
        }
        v9 += v11;
      }
      if ( v14 != v9 )
        *(_QWORD *)(a1 + 64) = v9;
    }
  }
  v23 = *(_QWORD *)(v8 + 528);
  v24 = (unsigned __int64)*(unsigned int *)(v8 + 536) << 6;
  v60 = v23 + v24;
  v25 = *(_QWORD *)(a1 + 80);
  v26 = v24 >> 6;
  if ( v24 >> 6 > (unsigned __int64)((*(_QWORD *)(a1 + 96) - v25) >> 6) )
  {
    v66 = 0;
    if ( v26 )
      v66 = operator new(v24);
    if ( v60 == v23 )
    {
LABEL_64:
      v48 = *(_QWORD **)(a1 + 88);
      v49 = *(_QWORD **)(a1 + 80);
      if ( v48 != v49 )
      {
        do
        {
          while ( 1 )
          {
            v50 = (_QWORD *)v49[3];
            if ( v50 == v49 + 5 )
              break;
            operator delete(v50);
            v49 += 8;
            if ( v48 == v49 )
              goto LABEL_67;
          }
          v49 += 8;
        }
        while ( v48 != v49 );
LABEL_67:
        v49 = *(_QWORD **)(a1 + 80);
      }
      if ( v49 )
        operator delete(v49);
      v51 = v66 + v24;
      *(_QWORD *)(a1 + 80) = v66;
      *(_QWORD *)(a1 + 88) = v51;
      *(_QWORD *)(a1 + 96) = v51;
      goto LABEL_25;
    }
    *(_QWORD *)v66 = *(_QWORD *)v23;
    *(_DWORD *)(v66 + 8) = *(_DWORD *)(v23 + 8);
    *(_QWORD *)(v66 + 12) = *(_QWORD *)(v23 + 12);
    *(_DWORD *)(v66 + 20) = *(_DWORD *)(v23 + 20);
    *(_QWORD *)(v66 + 24) = v66 + 40;
    v44 = *(_BYTE **)(v23 + 24);
    v45 = *(_QWORD *)(v23 + 32);
    if ( &v44[v45] && !v44 )
      goto LABEL_58;
    v46 = v66;
    while ( (unsigned __int64)v45 <= 0xF )
    {
      v47 = *(_BYTE **)(v46 + 24);
      if ( v45 == 1 )
      {
        *v47 = *v44;
        v47 = *(_BYTE **)(v46 + 24);
      }
      else if ( v45 )
      {
        goto LABEL_63;
      }
LABEL_55:
      *(_QWORD *)(v46 + 32) = v45;
      v23 += 64;
      v46 += 64;
      v47[v45] = 0;
      *(_BYTE *)(v46 - 8) = *(_BYTE *)(v23 - 8);
      if ( v60 == v23 )
        goto LABEL_64;
      *(_QWORD *)v46 = *(_QWORD *)v23;
      *(_DWORD *)(v46 + 8) = *(_DWORD *)(v23 + 8);
      *(_QWORD *)(v46 + 12) = *(_QWORD *)(v23 + 12);
      *(_DWORD *)(v46 + 20) = *(_DWORD *)(v23 + 20);
      *(_QWORD *)(v46 + 24) = v46 + 40;
      v44 = *(_BYTE **)(v23 + 24);
      v45 = *(_QWORD *)(v23 + 32);
      if ( &v44[v45] && !v44 )
        goto LABEL_58;
    }
    if ( v45 < 0 )
LABEL_84:
      std::__throw_length_error("basic_string::_M_create");
    v47 = (_BYTE *)operator new(v45 + 1);
    *(_QWORD *)(v46 + 40) = v45;
    *(_QWORD *)(v46 + 24) = v47;
LABEL_63:
    memcpy(v47, v44, v45);
    v47 = *(_BYTE **)(v46 + 24);
    goto LABEL_55;
  }
  v27 = *(_QWORD *)(a1 + 88);
  v28 = v27 - v25;
  v29 = (v27 - v25) >> 6;
  if ( v26 > v29 )
  {
    v30 = v23 + v28;
    if ( v28 <= 0 )
      goto LABEL_30;
    v31 = v25 + 24;
    v32 = v23 + 24;
    do
    {
      v33 = *(_QWORD *)(v32 - 24);
      v34 = v32;
      v35 = v31;
      srca = (char *)v29;
      v31 += 64;
      v32 += 64;
      *(_QWORD *)(v31 - 88) = v33;
      *(_BYTE *)(v31 - 80) = *(_BYTE *)(v32 - 80);
      *(_QWORD *)(v31 - 76) = *(_QWORD *)(v32 - 76);
      *(_BYTE *)(v31 - 68) = *(_BYTE *)(v32 - 68);
      sub_9CAB60(v35, v34);
      *(_BYTE *)(v31 - 32) = *(_BYTE *)(v32 - 32);
      v29 = (unsigned __int64)(srca - 1);
    }
    while ( srca != (_BYTE *)&dword_0 + 1 );
    v27 = *(_QWORD *)(a1 + 88);
    if ( v60 == v30 )
    {
LABEL_24:
      *(_QWORD *)(a1 + 88) = v27;
      goto LABEL_25;
    }
    while ( 1 )
    {
      *(_QWORD *)v27 = *(_QWORD *)v30;
      *(_DWORD *)(v27 + 8) = *(_DWORD *)(v30 + 8);
      *(_QWORD *)(v27 + 12) = *(_QWORD *)(v30 + 12);
      *(_DWORD *)(v27 + 20) = *(_DWORD *)(v30 + 20);
      *(_QWORD *)(v27 + 24) = v27 + 40;
      v37 = *(_BYTE **)(v30 + 24);
      v38 = *(_QWORD *)(v30 + 32);
      if ( &v37[v38] )
      {
        if ( !v37 )
          break;
      }
      if ( (unsigned __int64)v38 > 0xF )
      {
        src = *(void **)(v30 + 24);
        if ( v38 < 0 )
          goto LABEL_84;
        v39 = (void *)operator new(v38 + 1);
        *(_QWORD *)(v27 + 40) = v38;
        *(_QWORD *)(v27 + 24) = v39;
        memcpy(v39, src, v38);
        v36 = *(_BYTE **)(v27 + 24);
      }
      else
      {
        v36 = *(_BYTE **)(v27 + 24);
        if ( v38 == 1 )
        {
          *v36 = *v37;
          v36 = *(_BYTE **)(v27 + 24);
        }
        else if ( v38 )
        {
          memcpy(*(void **)(v27 + 24), v37, *(_QWORD *)(v30 + 32));
          v36 = *(_BYTE **)(v27 + 24);
        }
      }
      *(_QWORD *)(v27 + 32) = v38;
      v30 += 64;
      v27 += 64;
      v36[v38] = 0;
      *(_BYTE *)(v27 - 8) = *(_BYTE *)(v30 - 8);
LABEL_30:
      if ( v60 == v30 )
        goto LABEL_24;
    }
LABEL_58:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  if ( v24 )
  {
    v52 = v23 + 24;
    v53 = v25 + 24;
    v54 = v52 + v24;
    do
    {
      v55 = *(_QWORD *)(v52 - 24);
      v56 = v52;
      v57 = v53;
      v62 = v25;
      v52 += 64;
      v53 += 64;
      *(_QWORD *)(v53 - 88) = v55;
      *(_BYTE *)(v53 - 80) = *(_BYTE *)(v52 - 80);
      *(_QWORD *)(v53 - 76) = *(_QWORD *)(v52 - 76);
      *(_BYTE *)(v53 - 68) = *(_BYTE *)(v52 - 68);
      sub_9CAB60(v57, v56);
      v25 = v62;
      *(_BYTE *)(v53 - 32) = *(_BYTE *)(v52 - 32);
    }
    while ( v54 != v52 );
    v27 = *(_QWORD *)(a1 + 88);
    v25 = v24 + v62;
  }
  if ( v25 != v27 )
  {
    v58 = v25;
    do
    {
      while ( 1 )
      {
        v59 = *(void **)(v58 + 24);
        if ( v59 == (void *)(v58 + 40) )
          break;
        v58 += 64;
        v63 = v25;
        operator delete(v59);
        v25 = v63;
        if ( v58 == v27 )
          goto LABEL_81;
      }
      v58 += 64;
    }
    while ( v58 != v27 );
LABEL_81:
    *(_QWORD *)(a1 + 88) = v25;
  }
LABEL_25:
  if ( ptr != v69 )
    free(ptr);
}

