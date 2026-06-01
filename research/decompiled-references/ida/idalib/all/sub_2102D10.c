void __fastcall sub_2102D10(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // r13
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rax
  void *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi

  v2 = *(void **)(a1 + 56);
  if ( v2 )
    operator delete(v2);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    do
    {
      v4 = v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
      {
        v6 = *(void **)(v4 + 56);
        if ( v6 )
          operator delete(v6);
        sub_2102C60(v4);
        if ( *(_QWORD *)v4 != v4 + 48 )
          operator delete(*(void **)v4);
        operator delete((void *)v4, 0x60u);
      }
      v7 = v3;
      v3 = v5;
      operator delete(v7);
    }
    while ( v5 );
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(void **)a1;
  v10 = (_QWORD *)(a1 + 48);
  memset(v9, 0, 8 * v8);
  v11 = (_QWORD *)*(v10 - 6);
  *(v10 - 3) = 0;
  *(v10 - 4) = 0;
  if ( v11 != v10 )
    operator delete(v11);
}
