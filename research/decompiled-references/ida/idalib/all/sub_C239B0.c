void __fastcall sub_C239B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void *v9; // rdi
  void **v10; // rbx
  void **v11; // r14
  __int64 v12; // rdx

  if ( a2 != a1 )
  {
    v2 = a2;
    v3 = a2 + (~(a2 - a1 - 32) & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      v2 -= 32;
      v4 = *(_QWORD *)(v2 + 8);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v2 + 16);
        if ( v5 )
        {
          if ( v4 < v5 || v4 > v5 + 14848 )
          {
            v6 = *(_QWORD **)(v4 + 528);
            v7 = &v6[8 * (unsigned __int64)*(unsigned int *)(v4 + 536)];
            if ( v6 != v7 )
            {
              do
              {
                while ( 1 )
                {
                  v7 -= 8;
                  v8 = (_QWORD *)v7[3];
                  if ( v8 == v7 + 5 )
                    break;
                  operator delete(v8);
                  if ( v6 == v7 )
                    goto LABEL_9;
                }
              }
              while ( v6 != v7 );
LABEL_9:
              v7 = *(_QWORD **)(v4 + 528);
            }
            if ( v7 != (_QWORD *)(v4 + 544) )
              free(v7);
            v9 = *(void **)(v4 + 416);
            if ( v9 != (void *)(v4 + 432) )
              free(v9);
            v10 = (void **)(v4 + 384);
            v11 = (void **)(v4 + 64);
            do
            {
              while ( *v10 != v10 + 2 )
              {
                operator delete(*v10);
                v10 -= 4;
                if ( v10 == v11 )
                  goto LABEL_17;
              }
              v10 -= 4;
            }
            while ( v10 != v11 );
LABEL_17:
            operator delete((void *)v4, 0x3A0u);
          }
          else
          {
            v12 = *(unsigned int *)(v5 + 14976);
            *(_DWORD *)(v5 + 14976) = v12 + 1;
            *(_QWORD *)(v5 + 8 * v12 + 14848) = v4;
          }
        }
      }
    }
    while ( v2 != v3 );
  }
}
