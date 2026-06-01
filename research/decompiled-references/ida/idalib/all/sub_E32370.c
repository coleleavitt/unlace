void __fastcall sub_E32370(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  _DWORD *v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  void *v14; // rdi
  void **v15; // rbp
  void **v16; // rdx
  void *v17; // rdi
  int v18; // ebp
  __int64 v19; // rcx
  _QWORD *v20; // [rsp+0h] [rbp-58h]
  _QWORD *v21; // [rsp+8h] [rbp-50h]
  void **v22; // [rsp+8h] [rbp-50h]
  _QWORD v23[8]; // [rsp+18h] [rbp-40h] BYREF

  v20 = (_QWORD *)(a1 + 16);
  v3 = sub_2237400(a1, a1 + 16, a2, 32, v23);
  v4 = *(_DWORD **)a1;
  v5 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v5 )
  {
    v6 = v3;
    do
    {
      v7 = *v4;
      *(_QWORD *)(v6 + 16) = 0;
      v4 += 8;
      v6 += 32;
      *(_QWORD *)(v6 - 24) = 0;
      *(_DWORD *)(v6 - 32) = v7;
      *(_DWORD *)(v6 - 8) = *(v4 - 2);
      *(_QWORD *)(v6 - 16) = *((_QWORD *)v4 - 2);
      *(_QWORD *)(v6 - 24) = *((_QWORD *)v4 - 3);
      *((_QWORD *)v4 - 3) = 0;
    }
    while ( v5 != (_QWORD *)v4 );
    v8 = *(_DWORD **)a1;
    v5 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v5 )
    {
      do
      {
        v5 -= 4;
        v9 = v5[1];
        if ( v9 )
        {
          v10 = v5[2];
          if ( v10 )
          {
            if ( v9 < v10 || v9 > v10 + 14848 )
            {
              v11 = *(_QWORD **)(v9 + 528);
              v12 = &v11[8 * (unsigned __int64)*(unsigned int *)(v9 + 536)];
              if ( v11 != v12 )
              {
                do
                {
                  while ( 1 )
                  {
                    v12 -= 8;
                    v13 = (_QWORD *)v12[3];
                    if ( v13 == v12 + 5 )
                      break;
                    v21 = v11;
                    operator delete(v13);
                    v11 = v21;
                    if ( v21 == v12 )
                      goto LABEL_11;
                  }
                }
                while ( v11 != v12 );
LABEL_11:
                v12 = *(_QWORD **)(v9 + 528);
              }
              if ( v12 != (_QWORD *)(v9 + 544) )
                free(v12);
              v14 = *(void **)(v9 + 416);
              if ( v14 != (void *)(v9 + 432) )
                free(v14);
              v15 = (void **)(v9 + 384);
              v16 = (void **)(v9 + 64);
              do
              {
                while ( 1 )
                {
                  v17 = *v15;
                  if ( *v15 == v15 + 2 )
                    break;
                  v22 = v16;
                  v15 -= 4;
                  operator delete(v17);
                  v16 = v22;
                  if ( v22 == v15 )
                    goto LABEL_19;
                }
                v15 -= 4;
              }
              while ( v16 != v15 );
LABEL_19:
              operator delete((void *)v9, 0x3A0u);
            }
            else
            {
              v19 = *(unsigned int *)(v10 + 14976);
              *(_DWORD *)(v10 + 14976) = v19 + 1;
              *(_QWORD *)(v10 + 8 * v19 + 14848) = v9;
            }
          }
        }
      }
      while ( v8 != (_DWORD *)v5 );
      v5 = *(_QWORD **)a1;
    }
  }
  v18 = v23[0];
  if ( v20 != v5 )
    free(v5);
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = v18;
}
