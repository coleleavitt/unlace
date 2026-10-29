void __fastcall sub_850530(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rbp
  _QWORD *v7; // r15
  void *v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // rdi

  v2 = a1 + 1;
  v4 = a1[3];
  if ( a1 + 1 != (_QWORD *)v4 )
  {
    do
    {
      v5 = *(_QWORD **)(v4 + 56);
      if ( *(_QWORD *)(v4 + 40) && **(_BYTE **)(v4 + 32) == 1 )
      {
        sub_850530(v5);
        if ( v5 )
        {
          v6 = v5[2];
          while ( v6 )
          {
            v7 = (_QWORD *)v6;
            sub_850270(*(_QWORD **)(v6 + 24));
            v8 = *(void **)(v6 + 32);
            v6 = *(_QWORD *)(v6 + 16);
            if ( v8 )
            {
              v7[5] = 0;
              qfree(v8);
            }
            operator delete(v7, 0x40u);
          }
          a2 = (const char *)&dword_30;
          operator delete(v5, 0x30u);
        }
      }
      else
      {
        qfree(v5);
      }
      v4 = std::_Rb_tree_increment(v4, a2);
    }
    while ( v2 != (_QWORD *)v4 );
  }
  v9 = a1[2];
  while ( v9 )
  {
    v10 = (_QWORD *)v9;
    sub_850270(*(_QWORD **)(v9 + 24));
    v11 = *(void **)(v9 + 32);
    v9 = *(_QWORD *)(v9 + 16);
    if ( v11 )
    {
      v10[5] = 0;
      qfree(v11);
    }
    operator delete(v10, 0x40u);
  }
  a1[2] = 0;
  a1[3] = v2;
  a1[4] = v2;
  a1[5] = 0;
}
