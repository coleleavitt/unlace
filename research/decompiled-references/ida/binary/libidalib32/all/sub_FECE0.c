void __fastcall sub_FECE0(TView *this)
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

  *(_QWORD *)this = &off_2366C0;
  *((_QWORD *)this + 9) = &off_2369A8;
  *((_QWORD *)this + 13) = off_2369C0;
  *((_QWORD *)this + 20) = off_2369F0;
  v2 = sub_15DA20(this, 0);
  if ( v2 )
  {
    v3 = (void *)v2;
    v4 = *(void (__fastcall **)(void *))(*(_QWORD *)v2 + 168LL);
    if ( v4 == sub_FE2A0 )
      operator delete(v3, 0x48u);
    else
      v4(v3);
  }
  if ( (TView *)qword_251730 == this )
    qword_251730 = 0;
  v5 = (TView **)qword_251780;
  v6 = (TView **)(qword_251780 + 8 * xmmword_251788);
  if ( (TView **)qword_251780 != v6 )
  {
    while ( this != *v5 )
    {
      if ( v6 == ++v5 )
        goto LABEL_12;
    }
    if ( v5 != v6 )
    {
      memmove(v5, v5 + 1, (char *)v6 - (char *)v5 - 8);
      *(_QWORD *)&xmmword_251788 = xmmword_251788 - 1;
    }
  }
LABEL_12:
  v7 = *((_QWORD *)this + 163);
  while ( v7 )
  {
    sub_FEB10(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x30u);
  }
  v9 = *((_QWORD *)this + 157);
  while ( v9 )
  {
    sub_FEB10(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  if ( *((_QWORD *)this + 150) )
  {
    *((_QWORD *)this + 151) = 0;
    qfree();
  }
  sub_F9290(this);
}

