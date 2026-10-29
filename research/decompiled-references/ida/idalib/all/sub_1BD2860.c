void __fastcall sub_1BD2860(__int64 *a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 i; // r15
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  _QWORD *v17; // rdi
  _QWORD *v18; // r15
  _QWORD *v19; // rbx
  char *v20; // rdi
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdi
  double v30[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *a1;
  v5 = *a1 + 168LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 48);
      for ( i = v6 + 152LL * *(_QWORD *)(v4 + 56); i != v6; v6 += 152 )
      {
        while ( 1 )
        {
          if ( (*(_DWORD *)v6 & 0x7FFFFFFF) == 3 )
          {
            v8 = *(void **)(v6 + 32);
            if ( v8 != (void *)(v6 + 48) )
              break;
          }
          v6 += 152;
          if ( i == v6 )
            goto LABEL_8;
        }
        free(v8);
      }
LABEL_8:
      if ( (*(_DWORD *)(v4 + 104) & 0x3FC01) == 0xC00 )
        sub_1BD2300((char *)(v4 + 112));
      v4 += 168;
    }
    while ( v5 != v4 );
  }
  v9 = (__int64 *)a1[367];
  v10 = &v9[2 * *((unsigned int *)a1 + 736)];
  while ( v10 != v9 )
  {
    v11 = v9[1];
    v12 = *v9;
    v9 += 2;
    operator delete(v12, v11, 16);
  }
  v13 = *((unsigned int *)a1 + 724);
  *((_DWORD *)a1 + 736) = 0;
  if ( (_DWORD)v13 )
  {
    v24 = (_QWORD *)a1[361];
    a1[369] = 0;
    v25 = &v24[v13];
    v26 = v24 + 1;
    *(_QWORD *)&v30[0] = *v24 + 4096LL;
    *(__m128 *)(a1 + 359) = _mm_loadh_ps(v30);
    if ( v25 != v24 + 1 )
    {
      while ( 1 )
      {
        v27 = 0x40000000000LL;
        v28 = (unsigned int)(v26 - v24) >> 7;
        if ( v28 <= 0x1D )
          v27 = 4096LL << v28;
        v29 = *v26++;
        operator delete(v29, v27, 16);
        if ( v25 == v26 )
          break;
        v24 = (_QWORD *)a1[361];
      }
    }
    *((_DWORD *)a1 + 724) = 1;
  }
  v14 = *((unsigned int *)a1 + 2);
  v15 = *a1;
  *((_DWORD *)a1 + 747) = 0;
  v16 = v15 + 168 * v14;
  while ( v15 != v16 )
  {
    while ( 1 )
    {
      v16 -= 168;
      v17 = *(_QWORD **)(v16 + 64);
      v18 = *(_QWORD **)(v16 + 72);
      v19 = v17;
      if ( v18 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v20 = (char *)v19[3];
            if ( v20 == (char *)(v19 + 5) )
              break;
            operator delete(v20);
            v19 += 8;
            if ( v19 == v18 )
              goto LABEL_19;
          }
          v19 += 8;
        }
        while ( v18 != v19 );
LABEL_19:
        v17 = *(_QWORD **)(v16 + 64);
      }
      if ( !v17 )
        break;
      operator delete(v17);
      if ( v15 == v16 )
        goto LABEL_22;
    }
  }
LABEL_22:
  v21 = *((_BYTE *)a1 + 2724) == 0;
  *((_DWORD *)a1 + 2) = 0;
  if ( v21 )
  {
    v22 = 4 * (*((_DWORD *)a1 + 679) - *((_DWORD *)a1 + 680));
    v23 = *((unsigned int *)a1 + 678);
    if ( v22 < 0x20 )
      v22 = 32;
    if ( v22 < (unsigned int)v23 )
    {
      sub_22364B0(a1 + 338);
      goto LABEL_28;
    }
    memset((void *)a1[338], -1, 8 * v23);
  }
  *(__int64 *)((char *)a1 + 2716) = 0;
LABEL_28:
  *((_DWORD *)a1 + 743) = a2;
  a1[357] = 0;
  *((_DWORD *)a1 + 716) = 0;
}
