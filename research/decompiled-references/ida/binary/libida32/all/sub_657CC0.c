void __fastcall sub_657CC0(char *a1)
{
  void (*v2)(void); // rax
  char *v3; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v2 == (char *)sub_657B40 )
    {
      v3 = a1 + 16;
      *((_QWORD *)v3 - 2) = &off_2B0D3B0;
      qregfree(v3);
      operator delete(a1, 0x30u);
    }
    else
    {
      v2();
    }
  }
}

