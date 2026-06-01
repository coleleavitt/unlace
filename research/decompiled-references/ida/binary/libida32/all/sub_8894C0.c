void __fastcall sub_8894C0(__int64 a1)
{
  _QWORD *v2; // rbx
  void (__fastcall *v3)(_QWORD *); // rax
  void *v4; // rdi
  void *v5; // rdi

  v2 = *(_QWORD **)(a1 + 432);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(_QWORD *))(*v2 + 8LL);
    if ( v3 == sub_7EEDB0 )
    {
      v4 = (void *)v2[18];
      *v2 = &off_2BD2068;
      if ( v4 )
      {
        v2[19] = 0;
        qfree(v4);
      }
      v5 = (void *)v2[15];
      if ( v5 )
      {
        v2[16] = 0;
        qfree(v5);
      }
      *v2 = &off_2BD2000;
      sub_79E280((__int64)v2);
      operator delete(v2, 0xA8u);
    }
    else
    {
      v3(*(_QWORD **)(a1 + 432));
    }
  }
  *(_QWORD *)(a1 + 432) = 0;
}

