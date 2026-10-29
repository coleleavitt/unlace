void __fastcall sub_39C760(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rbx
  void *v10; // rdi

  if ( a1 )
  {
    v2 = a1[215];
    a1[212] = &off_2AFCB78;
    while ( v2 )
    {
      sub_39B900(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x28u);
    }
    v4 = a1[202];
    a1[199] = &off_2AFCB78;
    while ( v4 )
    {
      sub_39B900(*(_QWORD **)(v4 + 24));
      v5 = (void *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      operator delete(v5, 0x28u);
    }
    v6 = a1 + 185;
    do
    {
      v7 = v6[4];
      v6[1] = &off_2AFCB78;
      while ( v7 )
      {
        sub_39B900(*(_QWORD **)(v7 + 24));
        v8 = (void *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        operator delete(v8, 0x28u);
      }
      v6 -= 13;
    }
    while ( a1 + 3 != v6 );
    v9 = a1[5];
    while ( v9 )
    {
      sub_39B6A0(*(_QWORD **)(v9 + 24));
      v10 = (void *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      operator delete(v10, 0x28u);
    }
    operator delete(a1, 0x700u);
  }
}

