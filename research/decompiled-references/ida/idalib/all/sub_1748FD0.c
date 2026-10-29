void __fastcall sub_1748FD0(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rbp
  _OWORD *v6; // rdx
  int v7; // ecx
  int v8; // ecx
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // rdi
  void **v11; // rdi
  void **v12; // rbx
  void **v13; // rdi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  void *v19; // rdi
  void **v20; // rbx
  void **v21; // rdx
  void *v22; // rdi
  int v23; // ebx
  __int64 v24; // rcx
  unsigned __int64 *v25; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  void **v27; // [rsp+8h] [rbp-50h]
  __int64 v28[8]; // [rsp+18h] [rbp-40h] BYREF

  v25 = (unsigned __int64 *)(a1 + 16);
  v3 = sub_2237400(a1, a1 + 16, a2, 40, v28);
  v4 = *(unsigned __int64 **)a1;
  v5 = (unsigned __int64 *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(unsigned __int64 **)a1 != v5 )
  {
    v6 = (_OWORD *)v3;
    do
    {
      *v6 = 0;
      v7 = *((_DWORD *)v4 + 4);
      v4 += 5;
      v6 = (_OWORD *)((char *)v6 + 40);
      *((_DWORD *)v6 - 6) = v7;
      *((_QWORD *)v6 - 4) = *(v4 - 4);
      *((_QWORD *)v6 - 5) = *(v4 - 5);
      v8 = *((_DWORD *)v4 - 4);
      *(v4 - 5) = 0;
      *((_DWORD *)v6 - 4) = v8;
      *((_QWORD *)v6 - 1) = *(v4 - 1);
      *(v4 - 1) = 0;
    }
    while ( v5 != v4 );
    v9 = *(unsigned __int64 **)a1;
    v5 = (unsigned __int64 *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    if ( *(unsigned __int64 **)a1 != v5 )
    {
      do
      {
        v5 -= 5;
        v10 = v5[4];
        if ( v10 )
        {
          if ( (v10 & 4) != 0 )
          {
            v11 = (void **)(v10 & 0xFFFFFFFFFFFFFFF8LL);
            v12 = v11;
            if ( v11 )
            {
              v13 = (void **)*v11;
              if ( v13 != v12 + 2 )
                free(v13);
              operator delete(v12, 0x30u);
            }
          }
        }
        v14 = *v5;
        if ( *v5 )
        {
          v15 = v5[1];
          if ( v15 )
          {
            if ( v14 < v15 || v14 > v15 + 14848 )
            {
              v16 = *(_QWORD **)(v14 + 528);
              v17 = &v16[8 * (unsigned __int64)*(unsigned int *)(v14 + 536)];
              if ( v16 != v17 )
              {
                do
                {
                  while ( 1 )
                  {
                    v17 -= 8;
                    v18 = (_QWORD *)v17[3];
                    if ( v18 == v17 + 5 )
                      break;
                    v26 = v16;
                    operator delete(v18);
                    v16 = v26;
                    if ( v26 == v17 )
                      goto LABEL_17;
                  }
                }
                while ( v16 != v17 );
LABEL_17:
                v17 = *(_QWORD **)(v14 + 528);
              }
              if ( v17 != (_QWORD *)(v14 + 544) )
                free(v17);
              v19 = *(void **)(v14 + 416);
              if ( v19 != (void *)(v14 + 432) )
                free(v19);
              v20 = (void **)(v14 + 384);
              v21 = (void **)(v14 + 64);
              do
              {
                while ( 1 )
                {
                  v22 = *v20;
                  if ( *v20 == v20 + 2 )
                    break;
                  v27 = v21;
                  v20 -= 4;
                  operator delete(v22);
                  v21 = v27;
                  if ( v20 == v27 )
                    goto LABEL_25;
                }
                v20 -= 4;
              }
              while ( v21 != v20 );
LABEL_25:
              operator delete((void *)v14, 0x3A0u);
            }
            else
            {
              v24 = *(unsigned int *)(v15 + 14976);
              *(_DWORD *)(v15 + 14976) = v24 + 1;
              *(_QWORD *)(v15 + 8 * v24 + 14848) = v14;
            }
          }
        }
      }
      while ( v9 != v5 );
      v5 = *(unsigned __int64 **)a1;
    }
  }
  v23 = v28[0];
  if ( v25 != v5 )
    free(v5);
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = v23;
}
