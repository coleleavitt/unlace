void __fastcall sub_67790(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void (*v4)(void); // rax
  void *v5; // rdi
  void (*v6)(void); // rax

  *a1 = qword_164928;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)a1[3];
  a1[1] = 0;
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 32LL);
    if ( (char *)v4 == (char *)sub_295E0 )
      operator delete(v3, 0x20u);
    else
      v4();
  }
  v5 = (void *)a1[2];
  a1[3] = 0;
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)sub_16420 )
      operator delete(v5, 8u);
    else
      v6();
  }
}

