void __fastcall sub_41DB20(void (*****a1)(void))
{
  void (****v1)(void); // rbx
  void (****v2)(void); // rbp
  void (***v4)(void); // rdi
  void (*v5)(void); // rax
  void (***v6)(void); // [rsp+8h] [rbp-30h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 == v2 )
      goto LABEL_9;
    do
    {
      v4 = *v1;
      if ( *v1 )
      {
        v5 = **v4;
        if ( v5 != nullsub_212 )
        {
          v6 = *v1;
          v5();
          v4 = v6;
        }
        sub_186B220(v4);
      }
      ++v1;
    }
    while ( v2 != v1 );
    v2 = *a1;
    if ( *a1 )
    {
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
      sub_186B220(v2 - 1);
    }
  }
}

