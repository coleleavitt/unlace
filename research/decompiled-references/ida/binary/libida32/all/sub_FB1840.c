void __fastcall sub_FB1840(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // r12
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    operator delete[](v2);
  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 )
  {
    v4 = v3[11];
    if ( v4 )
    {
      while ( 1 )
      {
        sub_FB17E0((__int64)(v3 + 9), *(_QWORD **)(v4 + 24));
        v5 = *(void **)(v4 + 40);
        v6 = *(_QWORD *)(v4 + 16);
        if ( v5 )
        {
          operator delete(v5);
          operator delete((void *)v4);
          if ( !v6 )
            break;
        }
        else
        {
          operator delete((void *)v4);
          if ( !v6 )
            break;
        }
        v4 = v6;
      }
    }
    v7 = v3[5];
    if ( v7 )
    {
      while ( 1 )
      {
        sub_FB1770((__int64)(v3 + 3), *(_QWORD **)(v7 + 24));
        v8 = *(void **)(v7 + 40);
        v9 = *(_QWORD *)(v7 + 16);
        if ( v8 == (void *)(v7 + 56) )
        {
          operator delete((void *)v7);
          if ( !v9 )
            break;
        }
        else
        {
          operator delete(v8);
          operator delete((void *)v7);
          if ( !v9 )
            break;
        }
        v7 = v9;
      }
    }
    v10 = (_QWORD *)v3[1];
    v11 = (_QWORD *)*v3;
    if ( v10 != (_QWORD *)*v3 )
    {
      do
      {
        while ( 1 )
        {
          v12 = (_QWORD *)v11[1];
          if ( v12 == v11 + 3 )
            break;
          operator delete(v12);
          v11 += 5;
          if ( v10 == v11 )
          {
            v11 = (_QWORD *)*v3;
            goto LABEL_18;
          }
        }
        v11 += 5;
      }
      while ( v10 != v11 );
      v11 = (_QWORD *)*v3;
    }
LABEL_18:
    if ( v11 )
      operator delete(v11);
    operator delete(v3, 0x78u);
  }
}

