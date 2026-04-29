void __fastcall sub_25CA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbx
  void (**v5)(void); // rax
  void (****v6)(void); // rcx
  void (***v7)(void); // rdx

  *a1 = &off_A9FC8;
  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v6 = (void (****)(void))(v2 + 8 * v4);
        v7 = *v6;
        if ( !*v6 )
          goto LABEL_7;
        if ( (*((_DWORD *)v7 + 2))-- != 1 )
          goto LABEL_10;
        v5 = **v6;
        if ( (char *)*v5 != (char *)sub_241E0 )
        {
          (*v5)();
          v2 = a1[3];
          goto LABEL_11;
        }
        if ( *v6 )
        {
          v5[20]();
          v2 = a1[3];
LABEL_7:
          if ( v3 == ++v4 )
            break;
        }
        else
        {
LABEL_10:
          v2 = a1[3];
LABEL_11:
          if ( v3 == ++v4 )
            break;
        }
      }
    }
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x38u);
}
