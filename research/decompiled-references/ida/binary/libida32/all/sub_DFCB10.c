__int64 __fastcall sub_DFCB10(__int64 a1)
{
  int v2; // edx
  int *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  int *v6; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned int **v10; // r13
  unsigned int **i; // r14
  unsigned int *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // rdi
  void *v19; // rdi
  __m128 v21[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(int **)(a1 + 176);
  *(_QWORD *)a1 = &off_2B217D8;
  if ( v2 )
    sub_DFCAB0(v21, v3, &v3[4 * *(unsigned int *)(a1 + 192)], a1 + 176, 0);
  else
    sub_DFCAB0(v21, &v3[4 * *(unsigned int *)(a1 + 192)], &v3[4 * *(unsigned int *)(a1 + 192)], a1 + 176, 1);
  v5 = v21[0].m128_u64[1];
  v4 = v21[0].m128_u64[0];
  v6 = (int *)(*(_QWORD *)(a1 + 176) + 16LL * *(unsigned int *)(a1 + 192));
  sub_DFCAB0(v21, v6, v6, a1 + 176, 1);
  v7 = v21[0].m128_u64[0];
  while ( v7 != v4 )
  {
    sub_DFDFB0(*(_QWORD *)(a1 + 16), *(_QWORD *)(v4 + 8));
    if ( v4 + 16 != v5 )
    {
      if ( *(_DWORD *)(v4 + 16) < 0xFFFFFFFE )
      {
        v4 += 16LL;
        continue;
      }
      v8 = v4 + 32;
      while ( 1 )
      {
        v4 = v8;
        if ( v8 == v5 )
          break;
        v8 += 16LL;
        if ( *(_DWORD *)v4 < 0xFFFFFFFE )
          goto LABEL_10;
      }
    }
    v4 = v5;
LABEL_10:
    ;
  }
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    v10 = *(unsigned int ***)(v9 + 80);
    for ( i = &v10[18 * *(unsigned int *)(v9 + 88)]; i != v10; v10 += 18 )
    {
      v12 = *v10;
      v13 = (__int64)&(*v10)[4 * *((unsigned int *)v10 + 2)];
      if ( *v10 != (unsigned int *)v13 )
      {
        do
        {
          v14 = *v12;
          v12 += 4;
          sub_DFDFB0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 160) + v14 - 40);
        }
        while ( (unsigned int *)v13 != v12 );
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 176);
  v16 = *(unsigned int *)(a1 + 192);
  v17 = v15 + 16 * v16;
  if ( (_DWORD)v16 )
  {
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v15 + 2) > 1 )
        {
          v18 = *(void **)(v15 + 8);
          if ( v18 )
            break;
        }
        v15 += 16;
        if ( v17 == v15 )
          goto LABEL_22;
      }
      operator delete[](v18);
      v15 += 16;
    }
    while ( v17 != v15 );
  }
LABEL_22:
  operator delete();
  v19 = *(void **)(a1 + 160);
  if ( v19 )
    operator delete[](v19);
  sub_DFF560(a1 + 88);
  return sub_DFF560(a1 + 40);
}

