void __fastcall sub_651E30(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  void **v6; // rdi
  void **v7; // rdi
  void **v8; // rdi
  __int64 v9; // rbp
  int v10; // edx
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rbp
  void **v14; // r12

  if ( a2 )
  {
    v6 = *(void ***)(a2 + 56);
    if ( v6 )
      sub_6484D0(v6);
    v7 = *(void ***)(a2 + 64);
    if ( v7 )
      sub_6484D0(v7);
    v8 = *(void ***)(a2 + 72);
    if ( v8 )
      sub_6484D0(v8);
    v9 = 0;
    qfree(*(void **)a2);
    qfree(*(void **)(a2 + 8));
    v10 = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 72) = 0;
    *(_OWORD *)(a2 + 56) = 0;
    *(_OWORD *)a2 = 0;
    if ( v10 > 0 )
    {
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v9++);
        sub_651D90(*a1, v11, a3);
      }
      while ( *(_DWORD *)(a2 + 16) > (int)v9 );
    }
    qfree(*(void **)(a2 + 24));
    v12 = *(_QWORD **)(a2 + 88);
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v12 )
    {
      if ( *(int *)(a2 + 84) > 0 )
      {
        v13 = 0;
        do
        {
          v14 = (void **)v12[v13];
          if ( v14 )
          {
            qfree(v14[3]);
            operator delete(v14, 0x20u);
            v12 = *(_QWORD **)(a2 + 88);
          }
          ++v13;
        }
        while ( *(_DWORD *)(a2 + 84) > (int)v13 );
      }
      qfree(v12);
    }
    operator delete((void *)a2, 0x60u);
  }
}
