void __fastcall sub_67C870(char **a1)
{
  char *v1; // rdx
  char *v3; // rbx
  void (__fastcall **v4)(char *); // rax
  void (__fastcall *v5)(char *); // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *a1;
      v4 = *(void (__fastcall ***)(char *))*a1;
      if ( *v4 == sub_675BB0 )
      {
        if ( v3 )
        {
          v5 = v4[2];
          if ( v5 == sub_675A30 )
          {
            *(_QWORD *)v3 = &off_2B37370;
            qregfree(v3 + 16);
            operator delete(v3, 0x30u);
          }
          else
          {
            v5(*a1);
          }
        }
      }
      else
      {
        (*v4)(*a1);
      }
    }
  }
}
