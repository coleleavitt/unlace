void __fastcall sub_101EB00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  void **v7; // r12
  void **v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  _QWORD *v13; // r14
  __int64 v14; // r12
  __int64 v15; // r15
  void *v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbx
  void *v21; // rdi
  __int64 v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r13
  unsigned __int64 *v36; // rbx
  _QWORD *v37; // rbx
  _QWORD *v38; // r12
  __int64 v39; // r13
  _QWORD *v40; // rax
  __int64 v41; // rdi
  void *v42; // rdi
  _QWORD *v43; // [rsp+8h] [rbp-50h] BYREF
  __m128 v44; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 160);
  v3 = (*(_QWORD *)(a1 + 168) - v2) >> 3;
  if ( (_DWORD)v3 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v3 - 1);
    while ( 1 )
    {
      v6 = *(_QWORD **)(v2 + v4);
      if ( v6 && *v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
      if ( v5 == v4 )
        break;
      v2 = *(_QWORD *)(a1 + 160);
      v4 += 8;
    }
  }
  if ( *(_DWORD *)(a1 + 128) )
  {
    v43 = (_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL * *(unsigned int *)(a1 + 136));
    v44 = _mm_loadh_ps((const double *)&v43);
    sub_101C770(&v44, v43);
    v38 = (_QWORD *)v44.m128_u64[1];
    v37 = (_QWORD *)v44.m128_u64[0];
    v39 = *(_QWORD *)(a1 + 120) + 16LL * *(unsigned int *)(a1 + 136);
    while ( (_QWORD *)v39 != v37 )
    {
      v40 = (_QWORD *)v37[1];
      if ( v40 && *v40 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
      for ( v37 += 2; v38 != v37; v37 += 2 )
      {
        if ( *v37 != -4096 && *v37 != -8192 )
          break;
      }
    }
  }
  v7 = *(void ***)(a1 + 656);
  v8 = &v7[6 * *(unsigned int *)(a1 + 664)];
  if ( v7 != v8 )
  {
    do
    {
      while ( 1 )
      {
        v8 -= 6;
        if ( *v8 == v8 + 2 )
          break;
        operator delete(*v8);
        if ( v7 == v8 )
          goto LABEL_12;
      }
    }
    while ( v7 != v8 );
LABEL_12:
    v8 = *(void ***)(a1 + 656);
  }
  if ( v8 != (void **)(a1 + 672) )
    free(v8);
  v9 = *(_QWORD *)(a1 + 632);
  v10 = *(unsigned int *)(a1 + 648);
  v11 = 16 * v10;
  if ( (_DWORD)v10 )
  {
    v12 = v9 + v11;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v9 + 1) > 1 )
        {
          v13 = *(_QWORD **)(v9 + 8);
          if ( v13 )
            break;
        }
        v9 += 16;
        if ( v12 == v9 )
          goto LABEL_23;
      }
      v14 = v13[2];
      if ( v14 )
      {
        do
        {
          sub_101EAC0((__int64)v13, *(_QWORD **)(v14 + 24));
          v15 = *(_QWORD *)(v14 + 16);
          operator delete((void *)v14);
          v14 = v15;
        }
        while ( v15 );
      }
      v9 += 16;
      operator delete(v13, 0x30u);
    }
    while ( v12 != v9 );
LABEL_23:
    v9 = *(_QWORD *)(a1 + 632);
    v11 = 16LL * *(unsigned int *)(a1 + 648);
  }
  operator delete(v9, v11, 8);
  v16 = *(void **)(a1 + 624);
  if ( v16 )
    operator delete(v16, 0x18u);
  v17 = *(_QWORD **)(a1 + 616);
  if ( v17 )
  {
    if ( *v17 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    operator delete(v17, 0x38u);
  }
  v18 = *(_QWORD *)(a1 + 608);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  operator delete(*(_QWORD *)(a1 + 560), 32LL * *(unsigned int *)(a1 + 576), 4);
  operator delete(*(_QWORD *)(a1 + 536), 12LL * *(unsigned int *)(a1 + 552), 4);
  v19 = *(_QWORD *)(a1 + 488);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 160);
    if ( v20 )
    {
      while ( 1 )
      {
        sub_101DD30(v19 + 144, *(_QWORD **)(v20 + 24));
        v21 = *(void **)(v20 + 40);
        v22 = *(_QWORD *)(v20 + 16);
        if ( v21 )
        {
          operator delete(v21);
          operator delete((void *)v20);
          if ( !v22 )
            break;
        }
        else
        {
          operator delete((void *)v20);
          if ( !v22 )
            break;
        }
        v20 = v22;
      }
    }
    v23 = *(void **)(v19 + 120);
    if ( v23 )
      operator delete(v23);
    sub_9B7090(v19 + 24);
    free(*(void **)v19);
    operator delete((void *)v19, 0xC0u);
  }
  v24 = *(void **)(a1 + 392);
  if ( v24 != (void *)(a1 + 408) )
    free(v24);
  v25 = *(void **)(a1 + 320);
  if ( v25 != (void *)(a1 + 336) )
    free(v25);
  v26 = *(void **)(a1 + 296);
  if ( v26 != (void *)(a1 + 312) )
    free(v26);
  v27 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 264) = 0;
  if ( (v27 & 4) != 0 )
  {
    sub_A24B10((__m128 *)(v27 & 0xFFFFFFFFFFFFFFF8LL));
    v41 = *(_QWORD *)(a1 + 288);
    *(_DWORD *)(a1 + 280) = 0;
    if ( (v41 & 4) != 0 )
    {
      v42 = (void *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v42 )
      {
        sub_9B7090((__int64)v42);
        operator delete(v42, 0x60u);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
  }
  v28 = *(void **)(a1 + 272);
  if ( v28 != (void *)(a1 + 288) )
    free(v28);
  v29 = *(void **)(a1 + 200);
  if ( v29 != (void *)(a1 + 216) )
    free(v29);
  v30 = *(void **)(a1 + 184);
  if ( (void *)(a1 + 200) != v30 )
    free(v30);
  v31 = *(void **)(a1 + 160);
  if ( v31 )
    operator delete(v31);
  v32 = *(_QWORD **)(a1 + 152);
  if ( v32 )
  {
    operator delete(v32[3], 8LL * *((unsigned int *)v32 + 10), 8);
    operator delete(*v32, 16LL * *((unsigned int *)v32 + 4), 8);
    operator delete(v32, 0x30u);
  }
  v33 = *(_QWORD *)(a1 + 120);
  v34 = *(unsigned int *)(a1 + 136);
  v35 = 16 * v34;
  if ( (_DWORD)v34 )
  {
    v36 = *(unsigned __int64 **)(a1 + 120);
    do
    {
      if ( *v36 != -4096 )
        sub_FEE490(*v36, 0xFFFFFFFFFFFFE000LL);
      v36 += 2;
    }
    while ( (unsigned __int64 *)(v33 + v35) != v36 );
  }
  operator delete(v33, v35, 8);
  sub_9B7090(a1 + 24);
}
