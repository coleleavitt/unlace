void __fastcall sub_107400(_BYTE *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi

  if ( a1[132] )
    sub_19ACC0();
  v2 = *((_QWORD *)a1 + 11);
  while ( v2 )
  {
    sub_106F70(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = *((_QWORD *)a1 + 5);
  while ( v4 )
  {
    v5 = (_QWORD *)v4;
    sub_107140(*(_QWORD **)(v4 + 24));
    v6 = *(_QWORD *)(v4 + 32);
    v4 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v5[5] = 0;
      qfree();
    }
    operator delete(v5, 0x40u);
  }
  if ( *(_QWORD *)a1 )
  {
    *((_QWORD *)a1 + 1) = 0;
    qfree();
  }
}

