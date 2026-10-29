void __fastcall sub_18D300(void **a1)
{
  void *v1; // rdi
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v2 == (char *)sub_18D2E0 )
      operator delete(v1, 8u);
    else
      v2();
  }
}

