__int64 (__fastcall **__fastcall sub_25B40(_QWORD *a1))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  void (**v6)(void); // rax
  void (****v7)(void); // rcx
  void (***v8)(void); // rdx

  result = &off_A9FC8;
  *a1 = &off_A9FC8;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    if ( v4 )
    {
      v5 = 0;
      while ( 1 )
      {
        v7 = (void (****)(void))(v3 + 8 * v5);
        v8 = *v7;
        if ( !*v7 )
          goto LABEL_7;
        if ( (*((_DWORD *)v8 + 2))-- != 1 )
          goto LABEL_10;
        v6 = **v7;
        if ( (char *)*v6 != (char *)sub_241E0 )
        {
          (*v6)();
          v3 = a1[3];
          goto LABEL_11;
        }
        if ( *v7 )
        {
          v6[20]();
          v3 = a1[3];
LABEL_7:
          if ( v4 == ++v5 )
            break;
        }
        else
        {
LABEL_10:
          v3 = a1[3];
LABEL_11:
          if ( v4 == ++v5 )
            break;
        }
      }
    }
    a1[4] = 0;
    return (__int64 (__fastcall **)(void *))qfree(v3);
  }
  return result;
}
