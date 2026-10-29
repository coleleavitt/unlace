void __fastcall sub_83BB20(__int64 a1)
{
  void *v2; // rdi
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  _QWORD *v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx

  if ( *(_BYTE *)(a1 + 64) )
  {
    sub_C69E80(*(_QWORD *)(a1 + 16), a1, *(unsigned __int8 *)(a1 + 65));
    *(_QWORD *)(a1 + 16) = 0;
    *(_WORD *)(a1 + 64) = 0;
  }
  v2 = *(void **)(a1 + 32);
  if ( v2 != (void *)(a1 + 48) )
    operator delete(v2, *(_QWORD *)(a1 + 48) + 1LL);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      if ( v3 < v4 || v4 + 14848 < v3 )
      {
        v5 = *(_QWORD **)(v3 + 528);
        v6 = &v5[8 * (unsigned __int64)*(unsigned int *)(v3 + 536)];
        if ( v5 != v6 )
        {
          do
          {
            v6 -= 8;
            v7 = (_QWORD *)v6[3];
            if ( v7 != v6 + 5 )
              operator delete(v7, v6[5] + 1LL);
          }
          while ( v5 != v6 );
          v6 = *(_QWORD **)(v3 + 528);
        }
        if ( v6 != (_QWORD *)(v3 + 544) )
          free(v6);
        v8 = *(void **)(v3 + 416);
        if ( v8 != (void *)(v3 + 432) )
          free(v8);
        v9 = (_QWORD *)(v3 + 400);
        do
        {
          v10 = (_QWORD *)*(v9 - 2);
          if ( v9 != v10 )
            operator delete(v10, *v9 + 1LL);
          v9 -= 4;
        }
        while ( v9 != (_QWORD *)(v3 + 80) );
        operator delete((void *)v3, 0x3A0u);
      }
      else
      {
        v11 = *(unsigned int *)(v4 + 14976);
        *(_DWORD *)(v4 + 14976) = v11 + 1;
        *(_QWORD *)(v4 + 8 * v11 + 14848) = v3;
      }
      *(_QWORD *)a1 = 0;
    }
  }
}

