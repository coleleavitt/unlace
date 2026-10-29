void __fastcall sub_848050(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rdx

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      v4 = *(v3 - 3);
      v3 -= 4;
      if ( v4 )
      {
        v5 = v3[2];
        if ( v5 )
        {
          if ( v4 >= v5 && v5 + 14848 >= v4 )
          {
            v12 = *(unsigned int *)(v5 + 14976);
            *(_DWORD *)(v5 + 14976) = v12 + 1;
            *(_QWORD *)(v5 + 8 * v12 + 14848) = v4;
          }
          else
          {
            v6 = *(_QWORD **)(v4 + 528);
            v7 = &v6[8 * (unsigned __int64)*(unsigned int *)(v4 + 536)];
            if ( v6 != v7 )
            {
              do
              {
                v7 -= 8;
                v8 = (_QWORD *)v7[3];
                if ( v8 != v7 + 5 )
                  operator delete(v8, v7[5] + 1LL);
              }
              while ( v6 != v7 );
              v7 = *(_QWORD **)(v4 + 528);
            }
            if ( v7 != (_QWORD *)(v4 + 544) )
              free(v7);
            v9 = *(void **)(v4 + 416);
            if ( v9 != (void *)(v4 + 432) )
              free(v9);
            v10 = (_QWORD *)(v4 + 400);
            do
            {
              v11 = (_QWORD *)*(v10 - 2);
              if ( v10 != v11 )
                operator delete(v11, *v10 + 1LL);
              v10 -= 4;
            }
            while ( (_QWORD *)(v4 + 80) != v10 );
            operator delete((void *)v4, 0x3A0u);
          }
          v3[1] = 0;
        }
      }
    }
    while ( v2 != v3 );
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}

