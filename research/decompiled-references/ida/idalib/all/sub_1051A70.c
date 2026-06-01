void __fastcall sub_1051A70(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi

  v1 = (_QWORD *)a1[72];
  *a1 = &off_2C308F0;
  if ( v1 )
  {
    v3 = v1[5];
    if ( v3 )
    {
      while ( 1 )
      {
        sub_1050CC0((__int64)(v1 + 3), *(_QWORD **)(v3 + 24));
        v4 = *(void **)(v3 + 32);
        v5 = *(_QWORD *)(v3 + 16);
        if ( v4 == (void *)(v3 + 48) )
        {
          operator delete((void *)v3);
          if ( !v5 )
            break;
        }
        else
        {
          operator delete(v4);
          operator delete((void *)v3);
          if ( !v5 )
            break;
        }
        v3 = v5;
      }
    }
    operator delete(v1, 0x48u);
  }
  v6 = (_QWORD *)a1[68];
  if ( v6 != a1 + 70 )
    operator delete(v6);
  v7 = (_QWORD *)a1[64];
  if ( v7 != a1 + 66 )
    operator delete(v7);
  sub_102D6A0((__int64)a1);
  operator delete(a1, 0x250u);
}
