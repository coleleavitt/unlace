void __fastcall sub_468C30(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  void *v4; // rdi
  void *v5; // rdi

  v2 = a1[11];
  *a1 = &off_2AFFC58;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_468890(*(_QWORD **)(v2 + 24));
    v4 = *(void **)(v2 + 32);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[5] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x38u);
  }
  v5 = (void *)a1[6];
  if ( v5 )
  {
    a1[7] = 0;
    qfree(v5);
  }
  operator delete(a1, 0x88u);
}

