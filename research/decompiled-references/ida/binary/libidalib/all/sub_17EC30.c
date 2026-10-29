void __fastcall sub_17EC30(void *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)sub_17E990 )
    {
      *(_QWORD *)a1 = &off_235C58;
      qregfree();
      operator delete(a1, 0x30u);
    }
    else
    {
      v1();
    }
  }
}

