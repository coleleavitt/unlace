void __fastcall sub_202F280(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // r14
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rbx
  void (__fastcall *v14)(void *); // rax

  operator delete(*(_QWORD *)(a1 + 592), 16LL * *(unsigned int *)(a1 + 608), 8);
  v2 = *(void **)(a1 + 448);
  if ( v2 != (void *)(a1 + 464) )
    free(v2);
  v3 = *(void **)(a1 + 304);
  if ( v3 != (void *)(a1 + 320) )
    free(v3);
  v4 = *(unsigned int *)(a1 + 296);
  v5 = *(_QWORD *)(a1 + 280);
  v6 = 48 * v4;
  if ( (_DWORD)v4 )
  {
    v7 = v5 + 48 * v4;
    do
    {
      v8 = v5 + 48;
      if ( *(_QWORD *)v5 != -8192 && *(_QWORD *)v5 != -4096 )
      {
        v9 = *(_QWORD **)(v5 + 32);
        v10 = &v9[4 * *(unsigned int *)(v5 + 40)];
        if ( v9 != v10 )
        {
          do
          {
            while ( 1 )
            {
              v10 -= 4;
              v11 = (void *)v10[1];
              if ( !v11 )
                break;
              operator delete(v11);
              if ( v9 == v10 )
                goto LABEL_12;
            }
          }
          while ( v9 != v10 );
LABEL_12:
          v10 = *(_QWORD **)(v5 + 32);
        }
        v8 = v5 + 48;
        if ( v10 != (_QWORD *)(v5 + 48) )
          free(v10);
        operator delete(*(_QWORD *)(v5 + 8), 16LL * *(unsigned int *)(v5 + 24), 8);
      }
      v5 = v8;
    }
    while ( v7 != v8 );
    v5 = *(_QWORD *)(a1 + 280);
    v6 = 48LL * *(unsigned int *)(a1 + 296);
  }
  operator delete(v5, v6, 8);
  v12 = *(void **)(a1 + 256);
  if ( v12 != (void *)(a1 + 272) )
    free(v12);
  operator delete(*(_QWORD *)(a1 + 232), 8LL * *(unsigned int *)(a1 + 248), 8);
  sub_202ECB0(a1 + 40);
  v13 = *(void **)(a1 + 24);
  if ( v13 )
  {
    v14 = *(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL);
    if ( v14 == sub_202F1B0 )
    {
      sub_202EF80((__int64)v13);
      operator delete(v13, 0x168u);
    }
    else
    {
      v14(v13);
    }
  }
}
