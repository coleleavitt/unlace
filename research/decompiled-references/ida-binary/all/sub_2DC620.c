int __fastcall sub_2DC620(__int64 a1, __int64 a2, __int64 a3)
{
  void (*v4)(); // rax
  const char **v5; // rbp
  const char *v6; // r14
  size_t v7; // rdx

  if ( a3 )
  {
    LODWORD(v4) = *(_DWORD *)(a3 + 124);
    if ( (_DWORD)v4 )
    {
      v5 = (const char **)off_8622B0;
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        v4 = (void (*)())strlen(*v5);
        v7 = (size_t)v4;
        if ( !v4 )
          break;
        v4 = *(void (**)())(a3 + 40);
        if ( v4 )
        {
          v4 = (void (*)())((char *)v4 - 1);
          if ( (unsigned __int64)v4 >= v7 )
          {
            LODWORD(v4) = strncmp(*(const char **)(a3 + 32), v6, v7);
            if ( !(_DWORD)v4 )
              break;
          }
        }
        if ( &`vtable for'refcnted_regex_t == (__int64 *)++v5 )
          goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v4 = *(void (**)())(*(_QWORD *)a1 + 1152LL);
    if ( v4 != nullsub_96 )
      LODWORD(v4) = ((__int64 (__fastcall *)(__int64, __int64, __int64))v4)(a1, a2, a3);
  }
  return (int)v4;
}
