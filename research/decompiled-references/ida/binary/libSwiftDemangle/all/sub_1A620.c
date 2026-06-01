__int64 __fastcall sub_1A620(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  _QWORD *v5; // r14
  char *v6; // rcx
  size_t v7; // r8
  unsigned __int64 v8; // rax
  unsigned int v9; // r13d
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax
  unsigned __int64 v13; // r15
  size_t v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 <= *(_QWORD *)(a1 + 72) )
    return 1;
  while ( 1 )
  {
    v2 = sub_1A1A0(a1);
    if ( !v2 )
      return 0;
    v3 = *(unsigned int *)(a1 + 96);
    v4 = *(_DWORD *)(a1 + 100);
    v5 = *(_QWORD **)(a1 + 88);
    if ( (unsigned int)v3 < v4 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 96) = v3 + 1;
      v5[v3] = v2;
      if ( *(_QWORD *)(a1 + 72) >= v1 )
        return 1;
    }
    else
    {
      v6 = *(char **)(a1 + 8);
      v7 = 8LL * v4;
      if ( v6 == (char *)v5 + v7 && (unsigned __int64)(v6 + 8) <= *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)(a1 + 8) = v6 + 8;
        *(_DWORD *)(a1 + 100) = v4 + 1;
        goto LABEL_3;
      }
      v8 = 2 * v4;
      v9 = 2 * v4;
      if ( v8 < 4 )
        v8 = 4;
      v10 = (char *)((unsigned __int64)(v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      *(_QWORD *)(a1 + 8) = v10;
      v11 = 8 * (v4 + v8);
      if ( !v10 || (v12 = &v10[v11], (unsigned __int64)&v10[v11] > *(_QWORD *)(a1 + 16)) )
      {
        v23 = v7;
        v22 = v11;
        v13 = 2LL * *(_QWORD *)(a1 + 32);
        if ( v13 < v11 + 8 )
          v13 = v11 + 8;
        *(_QWORD *)(a1 + 32) = v13;
        v14 = v13 + 8;
        v15 = malloc(v14);
        v16 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v15;
        v7 = v23;
        *v15 = v16;
        v10 = (char *)(((unsigned __int64)v15 + 15) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)(a1 + 16) = (char *)v15 + v14;
        v12 = &v10[v22];
      }
      *(_QWORD *)(a1 + 8) = v12;
      v17 = memcpy(v10, v5, v7);
      *(_QWORD *)(a1 + 88) = v17;
      v18 = v17;
      v19 = 4;
      if ( v9 >= 4 )
        v19 = v9;
      *(_DWORD *)(a1 + 100) += v19;
      v20 = *(unsigned int *)(a1 + 96);
      *(_DWORD *)(a1 + 96) = v20 + 1;
      v18[v20] = v2;
      if ( *(_QWORD *)(a1 + 72) >= v1 )
        return 1;
    }
  }
}

