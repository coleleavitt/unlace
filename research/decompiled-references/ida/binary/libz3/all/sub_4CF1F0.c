void __fastcall sub_4CF1F0(void (***a1)(void))
{
  void (*v1)(void); // rax
  void (**v2)(void); // rbx
  void (**v3)(void); // rbp

  if ( a1 )
  {
    v1 = **a1;
    if ( (char *)v1 == (char *)sub_4CF3C0 )
    {
      v2 = a1[1];
      *a1 = (void (**)(void))&off_1C4ED90;
      if ( v2 )
      {
        v3 = &v2[*((unsigned int *)v2 - 1)];
        if ( v2 == v3 )
          goto LABEL_9;
        do
        {
          if ( *v2 )
            sub_4CF1F0(*v2);
          ++v2;
        }
        while ( v3 != v2 );
        v3 = a1[1];
        if ( v3 )
LABEL_9:
          sub_186B220(v3 - 1);
      }
      sub_186B220(a1);
    }
    else
    {
      v1();
      sub_186B220(a1);
    }
  }
}

