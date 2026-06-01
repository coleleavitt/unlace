void __fastcall sub_451790(void **a1)
{
  void **v2; // rbx
  void *v3; // rdi
  void **v4; // rax

  if ( a1 )
  {
    v2 = a1 + 6;
    v3 = a1[6];
    if ( !v3 )
      goto LABEL_4;
    while ( 1 )
    {
      v2[1] = nullptr;
      qfree(v3);
LABEL_4:
      v4 = v2 - 3;
      if ( v2 == a1 )
        break;
      while ( 1 )
      {
        v2 = v4;
        v3 = *v4;
        if ( *v4 )
          break;
        v4 -= 3;
        if ( v2 == a1 )
          return;
      }
    }
  }
}

