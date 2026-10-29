void __fastcall sub_2270460(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 *v5; // rbx
  __int64 *v6; // r13
  __int64 i; // rax
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v16; // rbp
  void *v17; // rdi
  void *v18; // rdi
  __int64 *v19; // rax
  __int64 *v20; // r12
  __int64 *v21; // rbx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 *v25; // rbx
  __int64 *v26; // r12
  __int64 j; // rax
  __int64 v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  void *v35; // rdi

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 128);
    if ( v3 )
    {
      do
      {
        sub_21E88F0(v2 + 112, *(_QWORD **)(v3 + 24));
        v4 = *(_QWORD *)(v3 + 16);
        operator delete((void *)v3);
        v3 = v4;
      }
      while ( v4 );
    }
    v5 = *(__int64 **)(v2 + 24);
    v6 = &v5[*(unsigned int *)(v2 + 32)];
    if ( v5 != v6 )
    {
      for ( i = *(_QWORD *)(v2 + 24); ; i = *(_QWORD *)(v2 + 24) )
      {
        v8 = 0x40000000000LL;
        v9 = (unsigned int)(((__int64)v5 - i) >> 3) >> 7;
        if ( v9 <= 0x1D )
          v8 = 4096LL << v9;
        v10 = *v5++;
        operator delete(v10, v8, 16);
        if ( v6 == v5 )
          break;
      }
    }
    v11 = *(__int64 **)(v2 + 72);
    v12 = &v11[2 * *(unsigned int *)(v2 + 80)];
    if ( v11 != v12 )
    {
      do
      {
        v13 = v11[1];
        v14 = *v11;
        v11 += 2;
        operator delete(v14, v13, 16);
      }
      while ( v12 != v11 );
      v12 = *(__int64 **)(v2 + 72);
    }
    if ( v12 != (__int64 *)(v2 + 88) )
      free(v12);
    v15 = *(void **)(v2 + 24);
    if ( v15 != (void *)(v2 + 40) )
      free(v15);
    operator delete((void *)v2, 0xA0u);
  }
  v16 = *a1;
  if ( *a1 )
  {
    v17 = *(void **)(v16 + 224);
    if ( v17 != (void *)(v16 + 240) )
      free(v17);
    v18 = *(void **)(v16 + 192);
    if ( v18 != (void *)(v16 + 208) )
      free(v18);
    v19 = *(__int64 **)(v16 + 184);
    v20 = (__int64 *)(v16 + 176);
    if ( (__int64 *)(v16 + 176) != v19 )
    {
      while ( 1 )
      {
        v21 = (__int64 *)v19[1];
        v22 = *v19;
        v23 = v19 + 7;
        *v21 = v22;
        *(_QWORD *)(v22 + 8) = v21;
        v24 = (_QWORD *)*(v23 - 2);
        *(_OWORD *)(v23 - 7) = 0;
        if ( v24 == v23 )
        {
          if ( v20 == v21 )
            break;
        }
        else
        {
          operator delete(v24);
          if ( v20 == v21 )
            break;
        }
        v19 = v21;
      }
    }
    v25 = *(__int64 **)(v16 + 96);
    v26 = &v25[*(unsigned int *)(v16 + 104)];
    if ( v25 != v26 )
    {
      for ( j = *(_QWORD *)(v16 + 96); ; j = *(_QWORD *)(v16 + 96) )
      {
        v28 = 0x40000000000LL;
        v29 = (unsigned int)(((__int64)v25 - j) >> 3) >> 7;
        if ( v29 <= 0x1D )
          v28 = 4096LL << v29;
        v30 = *v25++;
        operator delete(v30, v28, 16);
        if ( v26 == v25 )
          break;
      }
    }
    v31 = *(__int64 **)(v16 + 144);
    v32 = &v31[2 * *(unsigned int *)(v16 + 152)];
    if ( v31 != v32 )
    {
      do
      {
        v33 = v31[1];
        v34 = *v31;
        v31 += 2;
        operator delete(v34, v33, 16);
      }
      while ( v32 != v31 );
      v32 = *(__int64 **)(v16 + 144);
    }
    if ( v32 != (__int64 *)(v16 + 160) )
      free(v32);
    v35 = *(void **)(v16 + 96);
    if ( v35 != (void *)(v16 + 112) )
      free(v35);
    operator delete((void *)v16, 0x158u);
  }
}
