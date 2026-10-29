void __fastcall sub_1D3B500(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v4; // rbp
  __int64 v5; // rbx
  void **v6; // r13
  __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 i; // rcx
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  unsigned int v21; // r9d
  __int64 *v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-48h]

  v4 = (unsigned __int64 *)a3;
  v5 = a2;
  v6 = *(void ***)a3;
  v7 = *(_QWORD *)(a2 + 56);
  if ( (*(_QWORD *)a3 & 1) == 0 && v6 )
  {
    if ( *v6 != v6 + 2 )
      free(*v6);
    a2 = 72;
    operator delete(v6, 0x48u);
  }
  v8 = *(_DWORD *)(v7 + 20);
  *v4 = 1;
  v9 = v8 & 0x1FFFFFFF;
  if ( (unsigned int)v9 > 0x39 )
  {
    v20 = operator new(0x48u);
    v21 = (unsigned int)(v9 + 63) >> 6;
    v22 = (__int64 *)(v20 + 16);
    *(_QWORD *)(v20 + 8) = 0x600000000LL;
    *(_QWORD *)v20 = v20 + 16;
    if ( v21 > 6 )
    {
      v32 = v21;
      sub_2237220(v20, v22, v21, 8);
      a2 = 0;
      v22 = (__int64 *)memset(*(void **)v20, 0, 8 * v32);
      *(_DWORD *)(v20 + 8) = (unsigned int)(v9 + 63) >> 6;
    }
    else
    {
      v23 = v21;
      v24 = (v20 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(v20 + 16) = 0;
      v22[v23 - 1] = 0;
      v25 = ((_DWORD)v22 - v24 + v23 * 8) & 0xFFFFFFF8;
      if ( v25 >= 8 )
      {
        v26 = v25 & 0xFFFFFFF8;
        v27 = 0;
        do
        {
          a2 = v27;
          v27 += 8;
          *(_QWORD *)(v24 + a2) = 0;
        }
        while ( v27 < v26 );
      }
      *(_DWORD *)(v20 + 8) = v21;
    }
    v28 = *v4;
    *(_DWORD *)(v20 + 64) = v9;
    v29 = v28;
    a3 = v28 >> 1;
    v30 = v29 >> 58;
    i = (unsigned int)v30;
    v31 = a3 & ~(-1LL << v30);
    if ( v30 )
    {
      a3 = *v22;
      for ( i = 0; i != v30; ++i )
      {
        a2 = (1LL << i) | a3;
        if ( ((v31 >> i) & 1) == 0 )
          a2 = a3 & ~(1LL << i);
        a3 = a2;
      }
      *v22 = a2;
    }
    *v4 = v20;
  }
  else
  {
    v10 = (v9 << 58) | 1;
    v11 = v10 >> 1;
    v10 >>= 58;
    v12 = -1LL << v10;
    i = v10 << 57;
    *v4 = 2 * (i | v11 & ~v12) + 1;
  }
  v14 = *(_QWORD *)(v5 + 48);
  v15 = sub_B76070(v14, a2, a3, i);
  if ( v15 )
  {
    v16 = 0;
    v17 = 8LL * (unsigned int)(v15 - 1) + 8;
    do
    {
      v18 = sub_BBD7B0(v7);
      v19 = *(_QWORD *)(*(_QWORD *)(v14 + 120) + v16);
      v16 += 8;
      sub_1D39F20(a1, *(_QWORD *)(v19 + 48), 1, v18, v4);
    }
    while ( v16 != v17 );
  }
}
