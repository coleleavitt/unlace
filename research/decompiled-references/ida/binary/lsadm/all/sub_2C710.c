void __fastcall sub_2C710(_QWORD *a1)
{
  _QWORD *v1; // r13
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rbp
  _QWORD *v6; // r15
  void *v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rbp
  void *v10; // rdi

  v1 = a1 + 1;
  v3 = a1[3];
  if ( a1 + 1 != (_QWORD *)v3 )
  {
    do
    {
      v4 = *(_QWORD **)(v3 + 56);
      if ( *(_QWORD *)(v3 + 40) && **(_BYTE **)(v3 + 32) == 1 )
      {
        sub_2C710(v4);
        if ( v4 )
        {
          v5 = v4[2];
          while ( v5 )
          {
            v6 = (_QWORD *)v5;
            sub_2C450(*(_QWORD **)(v5 + 24));
            v7 = *(void **)(v5 + 32);
            v5 = *(_QWORD *)(v5 + 16);
            if ( v7 )
            {
              v6[5] = 0;
              j__free(v7);
            }
            operator delete(v6, 0x40u);
          }
          operator delete(v4, 0x30u);
        }
      }
      else
      {
        j__free(v4);
      }
      v3 = std::_Rb_tree_increment();
    }
    while ( v1 != (_QWORD *)v3 );
  }
  v8 = a1[2];
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_2C450(*(_QWORD **)(v8 + 24));
    v10 = *(void **)(v8 + 32);
    v8 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      v9[5] = 0;
      j__free(v10);
    }
    operator delete(v9, 0x40u);
  }
  a1[2] = 0;
  a1[3] = v1;
  a1[4] = v1;
  a1[5] = 0;
}

