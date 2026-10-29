__int64 __fastcall sub_211E240(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // r14
  void **v8; // r12
  void *v9; // r13
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _BOOL8 v14; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // rdi
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r13
  _QWORD *v25; // rax
  void **v26; // r13
  void **v27; // rbx
  void **v28; // r12
  void **v29; // rbx
  _QWORD *v30; // [rsp+8h] [rbp-50h]
  void *v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v5 = operator new(0x258u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v7 = v5;
  v8 = (void **)(v5 + 176);
  v9 = (void *)(v5 + 456);
  v10 = (_QWORD *)(v5 + 600);
  *(_DWORD *)(v5 + 32) = **a3;
  memset((void *)(v5 + 40), 0, 0x230u);
  *(_WORD *)(v5 + 552) = 256;
  *(_QWORD *)(v5 + 56) = 0x300000000LL;
  *(_QWORD *)(v5 + 168) = 0x300000000LL;
  *(_QWORD *)(v5 + 48) = v5 + 64;
  *(_QWORD *)(v5 + 160) = v5 + 176;
  *(__m128i *)(v5 + 424) = si128;
  *(_QWORD *)(v5 + 440) = v5 + 456;
  v31 = (void *)(v5 + 488);
  *(_QWORD *)(v5 + 472) = v5 + 488;
  *(_QWORD *)(v5 + 584) = v5 + 600;
  v11 = sub_20FE560(a1, a2, (unsigned int *)(v5 + 32));
  v32 = v11;
  if ( v12 )
  {
    v13 = a1 + 1;
    v14 = 1;
    if ( !v11 && (_QWORD *)v12 != v13 )
      v14 = *(_DWORD *)(v7 + 32) < *(_DWORD *)(v12 + 32);
    std::_Rb_tree_insert_and_rebalance(v14, v7, v12, v13);
    ++a1[5];
    return v7;
  }
  else
  {
    v16 = *(_QWORD **)(v7 + 584);
    v17 = &v16[4 * *(unsigned int *)(v7 + 592)];
    if ( v16 != v17 )
    {
      do
      {
        while ( 1 )
        {
          v17 -= 4;
          v18 = (void *)v17[1];
          if ( !v18 )
            break;
          v30 = v16;
          operator delete(v18);
          v16 = v30;
          if ( v30 == v17 )
            goto LABEL_9;
        }
      }
      while ( v16 != v17 );
LABEL_9:
      v17 = *(_QWORD **)(v7 + 584);
    }
    if ( v10 != v17 )
      free(v17);
    operator delete(*(_QWORD *)(v7 + 560), 16LL * *(unsigned int *)(v7 + 576), 8);
    v19 = *(void **)(v7 + 472);
    if ( v31 != v19 )
      operator delete(v19);
    v20 = *(void **)(v7 + 440);
    if ( v9 != v20 )
      operator delete(v20);
    v21 = *(char **)(v7 + 416);
    if ( *(_DWORD *)(v7 + 428) )
    {
      v22 = *(_DWORD *)(v7 + 424);
      if ( v22 )
      {
        v23 = 0;
        v24 = 8LL * (unsigned int)(v22 - 1) + 8;
        do
        {
          v25 = *(_QWORD **)&v21[v23];
          if ( v25 != (_QWORD *)-8LL && v25 )
          {
            operator delete(*(_QWORD *)&v21[v23], *v25 + 17LL, 8);
            v21 = *(char **)(v7 + 416);
          }
          v23 += 8;
        }
        while ( v24 != v23 );
      }
    }
    free(v21);
    v26 = *(void ***)(v7 + 160);
    v27 = &v26[10 * *(unsigned int *)(v7 + 168)];
    if ( v26 != v27 )
    {
      do
      {
        while ( 1 )
        {
          v27 -= 10;
          if ( *v27 == v27 + 2 )
            break;
          operator delete(*v27);
          if ( v26 == v27 )
            goto LABEL_26;
        }
      }
      while ( v26 != v27 );
LABEL_26:
      v27 = *(void ***)(v7 + 160);
    }
    if ( v27 != v8 )
      free(v27);
    v28 = *(void ***)(v7 + 48);
    v29 = &v28[4 * *(unsigned int *)(v7 + 56)];
    if ( v28 != v29 )
    {
      do
      {
        while ( 1 )
        {
          v29 -= 4;
          if ( *v29 == v29 + 2 )
            break;
          operator delete(*v29);
          if ( v28 == v29 )
            goto LABEL_32;
        }
      }
      while ( v28 != v29 );
LABEL_32:
      v29 = *(void ***)(v7 + 48);
    }
    if ( (void **)(v7 + 64) != v29 )
      free(v29);
    operator delete((void *)v7);
    return v32;
  }
}
