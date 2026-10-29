void __fastcall sub_20B4AB0(unsigned int **a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned int *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r15
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  int *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rbp
  _QWORD *v17; // rax
  void *v18; // rax
  int v19; // esi
  __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rdx
  void *v25; // [rsp+8h] [rbp-40h]
  void *v26; // [rsp+8h] [rbp-40h]

  v3 = *a1;
  v4 = *(unsigned int *)(a2 + 8);
  v5 = (__int64)&(*a1)[4 * *((unsigned int *)a1 + 2)];
  if ( *a1 != (unsigned int *)v5 )
  {
    do
    {
      v6 = *(unsigned int *)(a2 + 12);
      v7 = *((_QWORD *)v3 + 1);
      if ( v4 >= v6 )
      {
        v10 = *v3 | v2 & 0xFFFFFFFF00000000LL;
        v2 = v10;
        if ( v6 < v4 + 1 )
        {
          v26 = (void *)v10;
          sub_2237220(a2, a2 + 16, v4 + 1, 16);
          v4 = *(unsigned int *)(a2 + 8);
          v10 = (unsigned __int64)v26;
        }
        v11 = (unsigned __int64 *)(*(_QWORD *)a2 + 16 * v4);
        *v11 = v10;
        v11[1] = v7;
        v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v4;
      }
      else
      {
        v8 = *v3;
        v9 = *(_QWORD *)a2 + 16 * v4;
        *(_QWORD *)(v9 + 8) = v7;
        *(_DWORD *)v9 = v8;
        v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v4;
      }
      v3 += 4;
    }
    while ( (unsigned int *)v5 != v3 );
  }
  if ( v4 > 1 )
  {
    v12 = *(_QWORD *)a2;
    v13 = 16 * v4;
    v14 = (int *)(*(_QWORD *)a2 + v13);
    v15 = v13 >> 4;
    while ( 1 )
    {
      v16 = 2 * v15;
      v17 = (_QWORD *)operator new(16 * v15, (const std::nothrow_t *)&std::nothrow);
      if ( v17 )
        break;
      v15 >>= 1;
      if ( !v15 )
      {
        sub_20B1F00((char *)v12, v14);
        v18 = nullptr;
        goto LABEL_14;
      }
    }
    v19 = *(_DWORD *)v12;
    v20 = *(_QWORD *)(v12 + 8);
    v21 = (char *)(v17 + 2);
    *(_DWORD *)v17 = *(_DWORD *)v12;
    v17[1] = v20;
    if ( &v17[v16] != v17 + 2 )
    {
      do
      {
        v22 = *((_QWORD *)v21 - 1);
        v23 = *((_DWORD *)v21 - 4);
        v21 += 16;
        *((_DWORD *)v21 - 4) = v23;
        *((_QWORD *)v21 - 1) = v22;
      }
      while ( &v17[v16] != (_QWORD *)v21 );
      v24 = (__int64)&v17[v16 - 4];
      v19 = *(_DWORD *)(v24 + 16);
      v20 = *(_QWORD *)(v24 + 24);
    }
    *(_DWORD *)v12 = v19;
    *(_QWORD *)(v12 + 8) = v20;
    v25 = v17;
    sub_20B49F0(v12, v14, (int *)v17, v15);
    v18 = v25;
LABEL_14:
    operator delete(v18, (const std::nothrow_t *)&std::nothrow);
  }
}
