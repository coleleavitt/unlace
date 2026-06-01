void __fastcall sub_AEA040(__int64 a1)
{
  void *v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  void *v8; // rdi
  void **v9; // rbx
  void **v10; // r12
  __int64 v11; // rdx

  if ( *(_BYTE *)(a1 + 64) )
  {
    sub_FC7790(*(_QWORD *)(a1 + 16), a1, *(unsigned __int8 *)(a1 + 65));
    *(_QWORD *)(a1 + 16) = 0;
    *(_WORD *)(a1 + 64) = 0;
  }
  v2 = *(void **)(a1 + 32);
  if ( v2 != (void *)(a1 + 48) )
    operator delete(v2);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      if ( v3 < v4 || v3 > v4 + 14848 )
      {
        v5 = *(_QWORD **)(v3 + 528);
        v6 = &v5[8 * (unsigned __int64)*(unsigned int *)(v3 + 536)];
        if ( v5 != v6 )
        {
          do
          {
            while ( 1 )
            {
              v6 -= 8;
              v7 = (_QWORD *)v6[3];
              if ( v7 == v6 + 5 )
                break;
              operator delete(v7);
              if ( v5 == v6 )
                goto LABEL_11;
            }
          }
          while ( v5 != v6 );
LABEL_11:
          v6 = *(_QWORD **)(v3 + 528);
        }
        if ( v6 != (_QWORD *)(v3 + 544) )
          free(v6);
        v8 = *(void **)(v3 + 416);
        if ( v8 != (void *)(v3 + 432) )
          free(v8);
        v9 = (void **)(v3 + 384);
        v10 = (void **)(v3 + 64);
        do
        {
          while ( *v9 != v9 + 2 )
          {
            operator delete(*v9);
            v9 -= 4;
            if ( v10 == v9 )
              goto LABEL_19;
          }
          v9 -= 4;
        }
        while ( v9 != v10 );
LABEL_19:
        operator delete((void *)v3, 0x3A0u);
      }
      else
      {
        v11 = *(unsigned int *)(v4 + 14976);
        *(_DWORD *)(v4 + 14976) = v11 + 1;
        *(_QWORD *)(v4 + 8 * v11 + 14848) = v3;
      }
    }
  }
}
