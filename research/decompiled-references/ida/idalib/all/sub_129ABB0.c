void __fastcall sub_129ABB0(__int64 a1)
{
  bool v1; // zf
  void *v3; // rdi
  void *v4; // rdi
  void **v5; // r12
  void **v6; // rbp
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v1 = *(_BYTE *)(a1 + 5168) == 0;
  *(_QWORD *)a1 = off_2C3EC90;
  if ( !v1 )
  {
    v3 = *(void **)(a1 + 5136);
    if ( v3 != (void *)(a1 + 5152) )
      operator delete(v3);
  }
  v4 = *(void **)(a1 + 5104);
  if ( v4 != (void *)(a1 + 5120) )
    operator delete(v4);
  v5 = *(void ***)(a1 + 5088);
  v6 = *(void ***)(a1 + 5080);
  if ( v5 != v6 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_9;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_9:
    v6 = *(void ***)(a1 + 5080);
  }
  if ( v6 )
    operator delete(v6);
  v7 = *(void **)(a1 + 5048);
  if ( v7 != (void *)(a1 + 5064) )
    operator delete(v7);
  v8 = *(void **)(a1 + 5016);
  if ( v8 != (void *)(a1 + 5032) )
    operator delete(v8);
  v9 = *(void **)(a1 + 4984);
  if ( v9 != (void *)(a1 + 5000) )
    operator delete(v9);
  *(_QWORD *)a1 = off_2C3B350;
  sub_12203A0(a1);
}
