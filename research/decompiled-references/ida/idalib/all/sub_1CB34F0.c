void __fastcall sub_1CB34F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  void *v17; // rdi
  void **v18; // rbx
  void **v19; // r15
  __int64 v20; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a2 = *(_DWORD *)v3;
  v4 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(v3 + 24);
  v5 = *(_QWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 24) = v4;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v5;
  v7 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 8) = v6;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(unsigned int *)(a1 + 40);
  *(_QWORD *)(a2 + 16) = v7;
  *(_QWORD *)(v3 + 16) = v8;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = v10 + 32 * v9;
LABEL_2:
  while ( v10 != v11 )
  {
    while ( 1 )
    {
      v11 -= 32;
      v12 = *(_QWORD *)(v11 + 8);
      if ( !v12 )
        break;
      v13 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        break;
      if ( v12 >= v13 && v12 <= v13 + 14848 )
      {
        v20 = *(unsigned int *)(v13 + 14976);
        *(_DWORD *)(v13 + 14976) = v20 + 1;
        *(_QWORD *)(v13 + 8 * v20 + 14848) = v12;
        goto LABEL_2;
      }
      v14 = *(_QWORD **)(v12 + 528);
      v15 = &v14[8 * (unsigned __int64)*(unsigned int *)(v12 + 536)];
      if ( v14 != v15 )
      {
        do
        {
          while ( 1 )
          {
            v15 -= 8;
            v16 = (_QWORD *)v15[3];
            if ( v16 == v15 + 5 )
              break;
            operator delete(v16);
            if ( v14 == v15 )
              goto LABEL_9;
          }
        }
        while ( v14 != v15 );
LABEL_9:
        v15 = *(_QWORD **)(v12 + 528);
      }
      if ( v15 != (_QWORD *)(v12 + 544) )
        free(v15);
      v17 = *(void **)(v12 + 416);
      if ( v17 != (void *)(v12 + 432) )
        free(v17);
      v18 = (void **)(v12 + 384);
      v19 = (void **)(v12 + 64);
      do
      {
        while ( *v18 != v18 + 2 )
        {
          operator delete(*v18);
          v18 -= 4;
          if ( v19 == v18 )
            goto LABEL_17;
        }
        v18 -= 4;
      }
      while ( v18 != v19 );
LABEL_17:
      operator delete((void *)v12, 0x3A0u);
      if ( v10 == v11 )
        goto LABEL_18;
    }
  }
LABEL_18:
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 20) = 0;
}
