void __fastcall sub_FEEA0(TView *this)
{
  __int64 v2; // rax
  void *v3; // rdi
  void (__fastcall *v4)(void *); // rax
  TView **v5; // rdi
  TView **v6; // rdx
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi

  *(_QWORD *)this = &off_2376C0;
  *((_QWORD *)this + 9) = &off_2379A8;
  *((_QWORD *)this + 13) = off_2379C0;
  *((_QWORD *)this + 20) = off_2379F0;
  v2 = sub_15E300(this, 0);
  if ( v2 )
  {
    v3 = (void *)v2;
    v4 = *(void (__fastcall **)(void *))(*(_QWORD *)v2 + 168LL);
    if ( v4 == sub_FE480 )
      operator delete(v3, 0x48u);
    else
      v4(v3);
  }
  if ( (TView *)qword_2528D0 == this )
    qword_2528D0 = 0;
  v5 = (TView **)qword_252920;
  v6 = (TView **)(qword_252920 + 8 * xmmword_252928);
  if ( (TView **)qword_252920 != v6 )
  {
    while ( this != *v5 )
    {
      if ( v6 == ++v5 )
        goto LABEL_12;
    }
    if ( v5 != v6 )
    {
      memmove(v5, v5 + 1, (char *)v6 - (char *)v5 - 8);
      *(_QWORD *)&xmmword_252928 = xmmword_252928 - 1;
    }
  }
LABEL_12:
  v7 = *((_QWORD *)this + 165);
  while ( v7 )
  {
    sub_FECD0(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x30u);
  }
  v9 = *((_QWORD *)this + 159);
  while ( v9 )
  {
    sub_FECD0(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  if ( *((_QWORD *)this + 151) )
  {
    *((_QWORD *)this + 152) = 0;
    qfree();
  }
  sub_F9490(this);
}

