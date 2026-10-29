void __fastcall sub_441CB0(_BYTE *a1)
{
  bool v1; // zf
  void *v3; // rdi
  void (*v4)(void); // rax
  void *v5; // rdi

  v1 = a1[93] == 0;
  *(_QWORD *)a1 = &off_2AFEAB0;
  if ( !v1 )
  {
    v3 = *((void **)a1 + 10);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v4 == (char *)sub_440570 )
        operator delete(v3, 8u);
      else
        v4();
    }
  }
  v5 = *((void **)a1 + 5);
  *((_QWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 8) = 0;
  if ( v5 )
  {
    *((_QWORD *)a1 + 6) = 0;
    qfree(v5);
  }
  operator delete(a1, 0x68u);
}

