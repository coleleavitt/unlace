void __fastcall sub_FDBBD0(void **a1)
{
  void ***v2; // rbx
  void ***v3; // rdi
  void **v4; // rdi
  void **v5; // r12
  void (*v6)(void); // rax
  void ***v7; // rdi

  if ( a1 )
  {
    v2 = (void ***)*a1;
    if ( a1 != *a1 )
    {
      while ( 1 )
      {
        v4 = v2[2];
        v5 = *v2;
        if ( !v4 )
          goto LABEL_5;
        v6 = *((void (**)(void))*v4 + 1);
        if ( (char *)v6 == (char *)sub_FDBBC0 )
        {
          operator delete(v4, 0x30u);
LABEL_5:
          v3 = v2;
          v2 = (void ***)v5;
          operator delete(v3);
          if ( a1 == v5 )
            break;
        }
        else
        {
          v6();
          v7 = v2;
          v2 = (void ***)v5;
          operator delete(v7);
          if ( a1 == v5 )
            break;
        }
      }
    }
    operator delete(a1, 0x18u);
  }
}

