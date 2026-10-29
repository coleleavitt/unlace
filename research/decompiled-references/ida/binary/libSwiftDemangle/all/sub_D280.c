__int64 __fastcall sub_D280(__int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // r12d
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // edx
  char *v7; // r13
  char *v8; // rcx
  size_t v9; // r8
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  char *v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // rax
  unsigned __int64 v15; // r15
  size_t v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rcx
  char *v19; // rcx
  int v20; // eax
  unsigned __int64 v22; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+8h] [rbp-40h]

  if ( *(unsigned int *)(a1 + 112) <= a3 || a2 > 2048 )
    return 0;
  v3 = a2 - 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * a3);
  if ( a2 > 1 )
  {
    do
    {
      v5 = *(unsigned int *)(a1 + 96);
      v6 = *(_DWORD *)(a1 + 100);
      v7 = *(char **)(a1 + 88);
      if ( (unsigned int)v5 >= v6 )
      {
        v8 = *(char **)(a1 + 8);
        v9 = 8LL * v6;
        if ( v8 == &v7[v9] && (unsigned __int64)(v8 + 8) <= *(_QWORD *)(a1 + 16) )
        {
          *(_QWORD *)(a1 + 8) = v8 + 8;
          *(_DWORD *)(a1 + 100) = v6 + 1;
        }
        else
        {
          v10 = 2 * v6;
          v11 = 2 * v6;
          if ( v10 < 4 )
            v10 = 4;
          v12 = (char *)((unsigned __int64)(v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          *(_QWORD *)(a1 + 8) = v12;
          v13 = 8 * (v6 + v10);
          if ( !v12 || (v14 = &v12[v13], (unsigned __int64)&v12[v13] > *(_QWORD *)(a1 + 16)) )
          {
            v23 = v9;
            v22 = v13;
            v15 = 2LL * *(_QWORD *)(a1 + 32);
            if ( v15 < v13 + 8 )
              v15 = v13 + 8;
            *(_QWORD *)(a1 + 32) = v15;
            v16 = v15 + 8;
            v17 = malloc(v16);
            v18 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 24) = v17;
            v9 = v23;
            *v17 = v18;
            v12 = (char *)(((unsigned __int64)v17 + 15) & 0xFFFFFFFFFFFFFFF8LL);
            *(_QWORD *)(a1 + 16) = (char *)v17 + v16;
            v14 = &v12[v22];
          }
          *(_QWORD *)(a1 + 8) = v14;
          v19 = (char *)memcpy(v12, v7, v9);
          *(_QWORD *)(a1 + 88) = v19;
          v20 = 4;
          v7 = v19;
          if ( v11 >= 4 )
            v20 = v11;
          *(_DWORD *)(a1 + 100) += v20;
          v5 = *(unsigned int *)(a1 + 96);
        }
      }
      *(_DWORD *)(a1 + 96) = v5 + 1;
      *(_QWORD *)&v7[8 * v5] = v4;
      --v3;
    }
    while ( v3 );
  }
  return v4;
}

